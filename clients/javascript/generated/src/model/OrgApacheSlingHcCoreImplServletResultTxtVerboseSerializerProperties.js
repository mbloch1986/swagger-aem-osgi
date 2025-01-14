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
    define(['ApiClient', 'model/ConfigNodePropertyInteger'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./ConfigNodePropertyInteger'));
  } else {
    // Browser globals (root is window)
    if (!root.NodeSwaggerAemOsgi) {
      root.NodeSwaggerAemOsgi = {};
    }
    root.NodeSwaggerAemOsgi.OrgApacheSlingHcCoreImplServletResultTxtVerboseSerializerProperties = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.ConfigNodePropertyInteger);
  }
}(this, function(ApiClient, ConfigNodePropertyInteger) {
  'use strict';




  /**
   * The OrgApacheSlingHcCoreImplServletResultTxtVerboseSerializerProperties model module.
   * @module model/OrgApacheSlingHcCoreImplServletResultTxtVerboseSerializerProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>OrgApacheSlingHcCoreImplServletResultTxtVerboseSerializerProperties</code>.
   * @alias module:model/OrgApacheSlingHcCoreImplServletResultTxtVerboseSerializerProperties
   * @class
   */
  var exports = function() {
    var _this = this;





  };

  /**
   * Constructs a <code>OrgApacheSlingHcCoreImplServletResultTxtVerboseSerializerProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/OrgApacheSlingHcCoreImplServletResultTxtVerboseSerializerProperties} obj Optional instance to populate.
   * @return {module:model/OrgApacheSlingHcCoreImplServletResultTxtVerboseSerializerProperties} The populated <code>OrgApacheSlingHcCoreImplServletResultTxtVerboseSerializerProperties</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('totalWidth')) {
        obj['totalWidth'] = ConfigNodePropertyInteger.constructFromObject(data['totalWidth']);
      }
      if (data.hasOwnProperty('colWidthName')) {
        obj['colWidthName'] = ConfigNodePropertyInteger.constructFromObject(data['colWidthName']);
      }
      if (data.hasOwnProperty('colWidthResult')) {
        obj['colWidthResult'] = ConfigNodePropertyInteger.constructFromObject(data['colWidthResult']);
      }
      if (data.hasOwnProperty('colWidthTiming')) {
        obj['colWidthTiming'] = ConfigNodePropertyInteger.constructFromObject(data['colWidthTiming']);
      }
    }
    return obj;
  }

  /**
   * @member {module:model/ConfigNodePropertyInteger} totalWidth
   */
  exports.prototype['totalWidth'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} colWidthName
   */
  exports.prototype['colWidthName'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} colWidthResult
   */
  exports.prototype['colWidthResult'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} colWidthTiming
   */
  exports.prototype['colWidthTiming'] = undefined;



  return exports;
}));


