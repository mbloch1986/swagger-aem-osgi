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
    define(['ApiClient', 'model/ConfigNodePropertyArray', 'model/ConfigNodePropertyBoolean'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./ConfigNodePropertyArray'), require('./ConfigNodePropertyBoolean'));
  } else {
    // Browser globals (root is window)
    if (!root.NodeSwaggerAemOsgi) {
      root.NodeSwaggerAemOsgi = {};
    }
    root.NodeSwaggerAemOsgi.ComDayCqDamScene7ImplScene7DamChangeEventListenerProperties = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.ConfigNodePropertyArray, root.NodeSwaggerAemOsgi.ConfigNodePropertyBoolean);
  }
}(this, function(ApiClient, ConfigNodePropertyArray, ConfigNodePropertyBoolean) {
  'use strict';




  /**
   * The ComDayCqDamScene7ImplScene7DamChangeEventListenerProperties model module.
   * @module model/ComDayCqDamScene7ImplScene7DamChangeEventListenerProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>ComDayCqDamScene7ImplScene7DamChangeEventListenerProperties</code>.
   * @alias module:model/ComDayCqDamScene7ImplScene7DamChangeEventListenerProperties
   * @class
   */
  var exports = function() {
    var _this = this;



  };

  /**
   * Constructs a <code>ComDayCqDamScene7ImplScene7DamChangeEventListenerProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/ComDayCqDamScene7ImplScene7DamChangeEventListenerProperties} obj Optional instance to populate.
   * @return {module:model/ComDayCqDamScene7ImplScene7DamChangeEventListenerProperties} The populated <code>ComDayCqDamScene7ImplScene7DamChangeEventListenerProperties</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('cq.dam.scene7.damchangeeventlistener.enabled')) {
        obj['cq.dam.scene7.damchangeeventlistener.enabled'] = ConfigNodePropertyBoolean.constructFromObject(data['cq.dam.scene7.damchangeeventlistener.enabled']);
      }
      if (data.hasOwnProperty('cq.dam.scene7.damchangeeventlistener.observed.paths')) {
        obj['cq.dam.scene7.damchangeeventlistener.observed.paths'] = ConfigNodePropertyArray.constructFromObject(data['cq.dam.scene7.damchangeeventlistener.observed.paths']);
      }
    }
    return obj;
  }

  /**
   * @member {module:model/ConfigNodePropertyBoolean} cq.dam.scene7.damchangeeventlistener.enabled
   */
  exports.prototype['cq.dam.scene7.damchangeeventlistener.enabled'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyArray} cq.dam.scene7.damchangeeventlistener.observed.paths
   */
  exports.prototype['cq.dam.scene7.damchangeeventlistener.observed.paths'] = undefined;



  return exports;
}));


