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
    define(['ApiClient', 'model/ConfigNodePropertyBoolean', 'model/ConfigNodePropertyInteger', 'model/ConfigNodePropertyString'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./ConfigNodePropertyBoolean'), require('./ConfigNodePropertyInteger'), require('./ConfigNodePropertyString'));
  } else {
    // Browser globals (root is window)
    if (!root.NodeSwaggerAemOsgi) {
      root.NodeSwaggerAemOsgi = {};
    }
    root.NodeSwaggerAemOsgi.OrgApacheSlingI18nImplJcrResourceBundleProviderProperties = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.ConfigNodePropertyBoolean, root.NodeSwaggerAemOsgi.ConfigNodePropertyInteger, root.NodeSwaggerAemOsgi.ConfigNodePropertyString);
  }
}(this, function(ApiClient, ConfigNodePropertyBoolean, ConfigNodePropertyInteger, ConfigNodePropertyString) {
  'use strict';




  /**
   * The OrgApacheSlingI18nImplJcrResourceBundleProviderProperties model module.
   * @module model/OrgApacheSlingI18nImplJcrResourceBundleProviderProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>OrgApacheSlingI18nImplJcrResourceBundleProviderProperties</code>.
   * @alias module:model/OrgApacheSlingI18nImplJcrResourceBundleProviderProperties
   * @class
   */
  var exports = function() {
    var _this = this;




  };

  /**
   * Constructs a <code>OrgApacheSlingI18nImplJcrResourceBundleProviderProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/OrgApacheSlingI18nImplJcrResourceBundleProviderProperties} obj Optional instance to populate.
   * @return {module:model/OrgApacheSlingI18nImplJcrResourceBundleProviderProperties} The populated <code>OrgApacheSlingI18nImplJcrResourceBundleProviderProperties</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('locale.default')) {
        obj['locale.default'] = ConfigNodePropertyString.constructFromObject(data['locale.default']);
      }
      if (data.hasOwnProperty('preload.bundles')) {
        obj['preload.bundles'] = ConfigNodePropertyBoolean.constructFromObject(data['preload.bundles']);
      }
      if (data.hasOwnProperty('invalidation.delay')) {
        obj['invalidation.delay'] = ConfigNodePropertyInteger.constructFromObject(data['invalidation.delay']);
      }
    }
    return obj;
  }

  /**
   * @member {module:model/ConfigNodePropertyString} locale.default
   */
  exports.prototype['locale.default'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyBoolean} preload.bundles
   */
  exports.prototype['preload.bundles'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} invalidation.delay
   */
  exports.prototype['invalidation.delay'] = undefined;



  return exports;
}));


