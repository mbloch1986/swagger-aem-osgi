/**
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 *
 * OpenAPI Generator version: 3.2.1-SNAPSHOT
 *
 * Do not edit the class manually.
 *
 */

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD. Register as an anonymous module.
    define(['ApiClient', 'model/ConfigNodePropertyArray', 'model/ConfigNodePropertyBoolean', 'model/ConfigNodePropertyDropDown', 'model/ConfigNodePropertyInteger', 'model/ConfigNodePropertyString'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./ConfigNodePropertyArray'), require('./ConfigNodePropertyBoolean'), require('./ConfigNodePropertyDropDown'), require('./ConfigNodePropertyInteger'), require('./ConfigNodePropertyString'));
  } else {
    // Browser globals (root is window)
    if (!root.NodeSwaggerAemOsgi) {
      root.NodeSwaggerAemOsgi = {};
    }
    root.NodeSwaggerAemOsgi.ComDayCqWcmMsmImplRolloutManagerImplProperties = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.ConfigNodePropertyArray, root.NodeSwaggerAemOsgi.ConfigNodePropertyBoolean, root.NodeSwaggerAemOsgi.ConfigNodePropertyDropDown, root.NodeSwaggerAemOsgi.ConfigNodePropertyInteger, root.NodeSwaggerAemOsgi.ConfigNodePropertyString);
  }
}(this, function(ApiClient, ConfigNodePropertyArray, ConfigNodePropertyBoolean, ConfigNodePropertyDropDown, ConfigNodePropertyInteger, ConfigNodePropertyString) {
  'use strict';




  /**
   * The ComDayCqWcmMsmImplRolloutManagerImplProperties model module.
   * @module model/ComDayCqWcmMsmImplRolloutManagerImplProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>ComDayCqWcmMsmImplRolloutManagerImplProperties</code>.
   * @alias module:model/ComDayCqWcmMsmImplRolloutManagerImplProperties
   * @class
   */
  var exports = function() {
    var _this = this;










  };

  /**
   * Constructs a <code>ComDayCqWcmMsmImplRolloutManagerImplProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/ComDayCqWcmMsmImplRolloutManagerImplProperties} obj Optional instance to populate.
   * @return {module:model/ComDayCqWcmMsmImplRolloutManagerImplProperties} The populated <code>ComDayCqWcmMsmImplRolloutManagerImplProperties</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('event.filter')) {
        obj['event.filter'] = ConfigNodePropertyString.constructFromObject(data['event.filter']);
      }
      if (data.hasOwnProperty('rolloutmgr.excludedprops.default')) {
        obj['rolloutmgr.excludedprops.default'] = ConfigNodePropertyArray.constructFromObject(data['rolloutmgr.excludedprops.default']);
      }
      if (data.hasOwnProperty('rolloutmgr.excludedparagraphprops.default')) {
        obj['rolloutmgr.excludedparagraphprops.default'] = ConfigNodePropertyArray.constructFromObject(data['rolloutmgr.excludedparagraphprops.default']);
      }
      if (data.hasOwnProperty('rolloutmgr.excludednodetypes.default')) {
        obj['rolloutmgr.excludednodetypes.default'] = ConfigNodePropertyArray.constructFromObject(data['rolloutmgr.excludednodetypes.default']);
      }
      if (data.hasOwnProperty('rolloutmgr.threadpool.maxsize')) {
        obj['rolloutmgr.threadpool.maxsize'] = ConfigNodePropertyInteger.constructFromObject(data['rolloutmgr.threadpool.maxsize']);
      }
      if (data.hasOwnProperty('rolloutmgr.threadpool.maxshutdowntime')) {
        obj['rolloutmgr.threadpool.maxshutdowntime'] = ConfigNodePropertyInteger.constructFromObject(data['rolloutmgr.threadpool.maxshutdowntime']);
      }
      if (data.hasOwnProperty('rolloutmgr.threadpool.priority')) {
        obj['rolloutmgr.threadpool.priority'] = ConfigNodePropertyDropDown.constructFromObject(data['rolloutmgr.threadpool.priority']);
      }
      if (data.hasOwnProperty('rolloutmgr.commit.size')) {
        obj['rolloutmgr.commit.size'] = ConfigNodePropertyInteger.constructFromObject(data['rolloutmgr.commit.size']);
      }
      if (data.hasOwnProperty('rolloutmgr.conflicthandling.enabled')) {
        obj['rolloutmgr.conflicthandling.enabled'] = ConfigNodePropertyBoolean.constructFromObject(data['rolloutmgr.conflicthandling.enabled']);
      }
    }
    return obj;
  }

  /**
   * @member {module:model/ConfigNodePropertyString} event.filter
   */
  exports.prototype['event.filter'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyArray} rolloutmgr.excludedprops.default
   */
  exports.prototype['rolloutmgr.excludedprops.default'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyArray} rolloutmgr.excludedparagraphprops.default
   */
  exports.prototype['rolloutmgr.excludedparagraphprops.default'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyArray} rolloutmgr.excludednodetypes.default
   */
  exports.prototype['rolloutmgr.excludednodetypes.default'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} rolloutmgr.threadpool.maxsize
   */
  exports.prototype['rolloutmgr.threadpool.maxsize'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} rolloutmgr.threadpool.maxshutdowntime
   */
  exports.prototype['rolloutmgr.threadpool.maxshutdowntime'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyDropDown} rolloutmgr.threadpool.priority
   */
  exports.prototype['rolloutmgr.threadpool.priority'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} rolloutmgr.commit.size
   */
  exports.prototype['rolloutmgr.commit.size'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyBoolean} rolloutmgr.conflicthandling.enabled
   */
  exports.prototype['rolloutmgr.conflicthandling.enabled'] = undefined;



  return exports;
}));


