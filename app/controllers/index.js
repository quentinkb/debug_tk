/**
 * @file index.js
 * @desc Point d'entrée de l'application
 * @version 1.0
 * @author quentin bernet
 */
var theKeys = require('thekeys.js');

/**
 * @function doAction
 * @desc lance la commande d'ouverture de la librairie the keys
 */
var doAction = function()
{
	theKeys.do.open();
}

$.index.open();
