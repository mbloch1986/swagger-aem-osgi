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
    define(['ApiClient', 'model/ConfigNodePropertyArray', 'model/ConfigNodePropertyBoolean', 'model/ConfigNodePropertyString'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./ConfigNodePropertyArray'), require('./ConfigNodePropertyBoolean'), require('./ConfigNodePropertyString'));
  } else {
    // Browser globals (root is window)
    if (!root.NodeSwaggerAemOsgi) {
      root.NodeSwaggerAemOsgi = {};
    }
    root.NodeSwaggerAemOsgi.ComDayCqCommonsImplExternalizerImplProperties = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.ConfigNodePropertyArray, root.NodeSwaggerAemOsgi.ConfigNodePropertyBoolean, root.NodeSwaggerAemOsgi.ConfigNodePropertyString);
  }
}(this, function(ApiClient, ConfigNodePropertyArray, ConfigNodePropertyBoolean, ConfigNodePropertyString) {
  'use strict';




  /**
   * The ComDayCqCommonsImplExternalizerImplProperties model module.
   * @module model/ComDayCqCommonsImplExternalizerImplProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>ComDayCqCommonsImplExternalizerImplProperties</code>.
   * @alias module:model/ComDayCqCommonsImplExternalizerImplProperties
   * @class
   */
  var exports = function() {
    var _this = this;





  };

  /**
   * Constructs a <code>ComDayCqCommonsImplExternalizerImplProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/ComDayCqCommonsImplExternalizerImplProperties} obj Optional instance to populate.
   * @return {module:model/ComDayCqCommonsImplExternalizerImplProperties} The populated <code>ComDayCqCommonsImplExternalizerImplProperties</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('externalizer.domains')) {
        obj['externalizer.domains'] = ConfigNodePropertyArray.constructFromObject(data['externalizer.domains']);
      }
      if (data.hasOwnProperty('externalizer.host')) {
        obj['externalizer.host'] = ConfigNodePropertyString.constructFromObject(data['externalizer.host']);
      }
      if (data.hasOwnProperty('externalizer.contextpath')) {
        obj['externalizer.contextpath'] = ConfigNodePropertyString.constructFromObject(data['externalizer.contextpath']);
      }
      if (data.hasOwnProperty('externalizer.encodedpath')) {
        obj['externalizer.encodedpath'] = ConfigNodePropertyBoolean.constructFromObject(data['externalizer.encodedpath']);
      }
    }
    return obj;
  }

  /**
   * @member {module:model/ConfigNodePropertyArray} externalizer.domains
   */
  exports.prototype['externalizer.domains'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} externalizer.host
   */
  exports.prototype['externalizer.host'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} externalizer.contextpath
   */
  exports.prototype['externalizer.contextpath'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyBoolean} externalizer.encodedpath
   */
  exports.prototype['externalizer.encodedpath'] = undefined;



  return exports;
}));


