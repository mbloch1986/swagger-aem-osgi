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
    root.NodeSwaggerAemOsgi.OrgApacheSlingDistributionPackagingImplImporterLocalDistributioProperties = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.ConfigNodePropertyString);
  }
}(this, function(ApiClient, ConfigNodePropertyString) {
  'use strict';




  /**
   * The OrgApacheSlingDistributionPackagingImplImporterLocalDistributioProperties model module.
   * @module model/OrgApacheSlingDistributionPackagingImplImporterLocalDistributioProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>OrgApacheSlingDistributionPackagingImplImporterLocalDistributioProperties</code>.
   * @alias module:model/OrgApacheSlingDistributionPackagingImplImporterLocalDistributioProperties
   * @class
   */
  var exports = function() {
    var _this = this;



  };

  /**
   * Constructs a <code>OrgApacheSlingDistributionPackagingImplImporterLocalDistributioProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/OrgApacheSlingDistributionPackagingImplImporterLocalDistributioProperties} obj Optional instance to populate.
   * @return {module:model/OrgApacheSlingDistributionPackagingImplImporterLocalDistributioProperties} The populated <code>OrgApacheSlingDistributionPackagingImplImporterLocalDistributioProperties</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('name')) {
        obj['name'] = ConfigNodePropertyString.constructFromObject(data['name']);
      }
      if (data.hasOwnProperty('packageBuilder.target')) {
        obj['packageBuilder.target'] = ConfigNodePropertyString.constructFromObject(data['packageBuilder.target']);
      }
    }
    return obj;
  }

  /**
   * @member {module:model/ConfigNodePropertyString} name
   */
  exports.prototype['name'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} packageBuilder.target
   */
  exports.prototype['packageBuilder.target'] = undefined;



  return exports;
}));


