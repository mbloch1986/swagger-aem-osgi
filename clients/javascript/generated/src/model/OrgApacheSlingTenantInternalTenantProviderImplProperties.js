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
    root.NodeSwaggerAemOsgi.OrgApacheSlingTenantInternalTenantProviderImplProperties = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.ConfigNodePropertyArray, root.NodeSwaggerAemOsgi.ConfigNodePropertyString);
  }
}(this, function(ApiClient, ConfigNodePropertyArray, ConfigNodePropertyString) {
  'use strict';




  /**
   * The OrgApacheSlingTenantInternalTenantProviderImplProperties model module.
   * @module model/OrgApacheSlingTenantInternalTenantProviderImplProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>OrgApacheSlingTenantInternalTenantProviderImplProperties</code>.
   * @alias module:model/OrgApacheSlingTenantInternalTenantProviderImplProperties
   * @class
   */
  var exports = function() {
    var _this = this;



  };

  /**
   * Constructs a <code>OrgApacheSlingTenantInternalTenantProviderImplProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/OrgApacheSlingTenantInternalTenantProviderImplProperties} obj Optional instance to populate.
   * @return {module:model/OrgApacheSlingTenantInternalTenantProviderImplProperties} The populated <code>OrgApacheSlingTenantInternalTenantProviderImplProperties</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('tenant.root')) {
        obj['tenant.root'] = ConfigNodePropertyString.constructFromObject(data['tenant.root']);
      }
      if (data.hasOwnProperty('tenant.path.matcher')) {
        obj['tenant.path.matcher'] = ConfigNodePropertyArray.constructFromObject(data['tenant.path.matcher']);
      }
    }
    return obj;
  }

  /**
   * @member {module:model/ConfigNodePropertyString} tenant.root
   */
  exports.prototype['tenant.root'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyArray} tenant.path.matcher
   */
  exports.prototype['tenant.path.matcher'] = undefined;



  return exports;
}));


