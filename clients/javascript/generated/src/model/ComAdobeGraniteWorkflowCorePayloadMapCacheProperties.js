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
    define(['ApiClient', 'model/ConfigNodePropertyArray', 'model/ConfigNodePropertyString'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./ConfigNodePropertyArray'), require('./ConfigNodePropertyString'));
  } else {
    // Browser globals (root is window)
    if (!root.NodeSwaggerAemOsgi) {
      root.NodeSwaggerAemOsgi = {};
    }
    root.NodeSwaggerAemOsgi.ComAdobeGraniteWorkflowCorePayloadMapCacheProperties = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.ConfigNodePropertyArray, root.NodeSwaggerAemOsgi.ConfigNodePropertyString);
  }
}(this, function(ApiClient, ConfigNodePropertyArray, ConfigNodePropertyString) {
  'use strict';




  /**
   * The ComAdobeGraniteWorkflowCorePayloadMapCacheProperties model module.
   * @module model/ComAdobeGraniteWorkflowCorePayloadMapCacheProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>ComAdobeGraniteWorkflowCorePayloadMapCacheProperties</code>.
   * @alias module:model/ComAdobeGraniteWorkflowCorePayloadMapCacheProperties
   * @class
   */
  var exports = function() {
    var _this = this;



  };

  /**
   * Constructs a <code>ComAdobeGraniteWorkflowCorePayloadMapCacheProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/ComAdobeGraniteWorkflowCorePayloadMapCacheProperties} obj Optional instance to populate.
   * @return {module:model/ComAdobeGraniteWorkflowCorePayloadMapCacheProperties} The populated <code>ComAdobeGraniteWorkflowCorePayloadMapCacheProperties</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('getSystemWorkflowModels')) {
        obj['getSystemWorkflowModels'] = ConfigNodePropertyArray.constructFromObject(data['getSystemWorkflowModels']);
      }
      if (data.hasOwnProperty('getPackageRootPath')) {
        obj['getPackageRootPath'] = ConfigNodePropertyString.constructFromObject(data['getPackageRootPath']);
      }
    }
    return obj;
  }

  /**
   * @member {module:model/ConfigNodePropertyArray} getSystemWorkflowModels
   */
  exports.prototype['getSystemWorkflowModels'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} getPackageRootPath
   */
  exports.prototype['getPackageRootPath'] = undefined;



  return exports;
}));


