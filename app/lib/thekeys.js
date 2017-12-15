/**
 * thekey.js
 * @author Quentin BERNET
 * @version 1.0
 */

/**
 * @var tkapi
 * @desc module the keys Android/iOS
 * @todo : tests fonctionnels
 */
var tkapi = require('fr.thekeys.api');

/**
 * @var userManager
 * @desc instance of userManager
 */
var userManager = null ;
/**
 * @var keyManager
 * @desc instance of keyManager
 */
var keyManager = null ;
/**
 * @var _username
 * @desc nom d'utilisateur client the keys
 */
var _username = Alloy.CFG.TK_ID ;
/**
 * @var _password
 * @desc mot de passe de l'utilisateur the keys
 */
var _password = Alloy.CFG.TK_PASSWORD ;
/**
 * @var _fences
 * @desc liste de barrières du parking
 * @deprecated
 */
var _fences = null ;

var doAction = (function() {

  /**
   * @function open
   * @param fences map _fences
   * @desc lance une commande d'ouverture sur le module the keys à proximité
   */
  var open = function()
  {
    Ti.API.info("Open action has been called from thekeys lib") ;
    userManager = tkapi.createUserManager();
    keyManager = tkapi.createKeyManager();
    Ti.API.info("userManager and keyManager has been well created") ;
    //_fences = fences ;
    userManager.login(_username,_password, function(result) {
    	Ti.API.info("Login result is : " + result["status"]);
    });
    Ti.API.info("calling function callback");
    userManager.synchronizeUser(onUserSynchronized);
  } ;
  /**
   * @function onUserSynchronized
   * @desc récupère les clés autorisées de l'utilisateur
   * lance le scan et map entre toutes les valeurs
   * lance finalement une commande d'ouverture si une combinaison valide est trouvée
   * @todo ajout d'une promesse pour renforcer l'async
   */
  function onUserSynchronized() {
    Ti.API.info("User has been well synchronized. Fetching keys");
  	allkeys = keyManager.getKeys();
  	var keys = [] ;
  	for(k in allkeys) {
  		var key = {
  				 identifier: allkeys[k]["identifier"],
  				 title: allkeys[k]["name"]
  			};
  		keys.push(key);
  	}
    Ti.API.info("list of granted keys found : ") ;
    Ti.API.info(JSON.stringify(keys));
    /**
     * @function openLocker
     * lance une commande d'ouverture sur la clé e
     * @param e clé à ouvrir
     */
  	function openLocker(e) {
      Ti.API.info("Opening locker " + JSON.stringify(e));
  		keyManager.open(e["identifier"], function(event) {
  			Ti.API.info("event " + event["status"]) ;
  		});
  	}
    Ti.API.info("start scaning bluetooth devices...");
    // start scan et match les valeurs avec le BO
  	keyManager.startScan(function(result) {
        Ti.API.info("onKeyFound: " + JSON.stringify(result));
        for(var j = 0 ; j < keys.length ; j++) {
          var key = keys[j];
          if(key["identifier"] == result["identifier"]) {
            openLocker(result);
          }
        }
    });

  }

	return {
		open:open
	};

} ());

exports.do = doAction ;
