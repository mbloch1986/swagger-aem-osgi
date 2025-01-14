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
    define(['ApiClient', 'model/ConfigNodePropertyString'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./ConfigNodePropertyString'));
  } else {
    // Browser globals (root is window)
    if (!root.NodeSwaggerAemOsgi) {
      root.NodeSwaggerAemOsgi = {};
    }
    root.NodeSwaggerAemOsgi.ComDayCqAnalyticsTestandtargetImplServletsAdminServerServletProperties = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.ConfigNodePropertyString);
  }
}(this, function(ApiClient, ConfigNodePropertyString) {
  'use strict';




  /**
   * The ComDayCqAnalyticsTestandtargetImplServletsAdminServerServletProperties model module.
   * @module model/ComDayCqAnalyticsTestandtargetImplServletsAdminServerServletProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>ComDayCqAnalyticsTestandtargetImplServletsAdminServerServletProperties</code>.
   * @alias module:model/ComDayCqAnalyticsTestandtargetImplServletsAdminServerServletProperties
   * @class
   */
  var exports = function() {
    var _this = this;


  };

  /**
   * Constructs a <code>ComDayCqAnalyticsTestandtargetImplServletsAdminServerServletProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/ComDayCqAnalyticsTestandtargetImplServletsAdminServerServletProperties} obj Optional instance to populate.
   * @return {module:model/ComDayCqAnalyticsTestandtargetImplServletsAdminServerServletProperties} The populated <code>ComDayCqAnalyticsTestandtargetImplServletsAdminServerServletProperties</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('testandtarget.endpoint.url')) {
        obj['testandtarget.endpoint.url'] = ConfigNodePropertyString.constructFromObject(data['testandtarget.endpoint.url']);
      }
    }
    return obj;
  }

  /**
   * @member {module:model/ConfigNodePropertyString} testandtarget.endpoint.url
   */
  exports.prototype['testandtarget.endpoint.url'] = undefined;



  return exports;
}));


