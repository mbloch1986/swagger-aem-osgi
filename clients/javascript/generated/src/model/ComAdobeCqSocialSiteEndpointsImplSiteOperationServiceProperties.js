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
    root.NodeSwaggerAemOsgi.ComAdobeCqSocialSiteEndpointsImplSiteOperationServiceProperties = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.ConfigNodePropertyArray, root.NodeSwaggerAemOsgi.ConfigNodePropertyString);
  }
}(this, function(ApiClient, ConfigNodePropertyArray, ConfigNodePropertyString) {
  'use strict';




  /**
   * The ComAdobeCqSocialSiteEndpointsImplSiteOperationServiceProperties model module.
   * @module model/ComAdobeCqSocialSiteEndpointsImplSiteOperationServiceProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>ComAdobeCqSocialSiteEndpointsImplSiteOperationServiceProperties</code>.
   * @alias module:model/ComAdobeCqSocialSiteEndpointsImplSiteOperationServiceProperties
   * @class
   */
  var exports = function() {
    var _this = this;




  };

  /**
   * Constructs a <code>ComAdobeCqSocialSiteEndpointsImplSiteOperationServiceProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/ComAdobeCqSocialSiteEndpointsImplSiteOperationServiceProperties} obj Optional instance to populate.
   * @return {module:model/ComAdobeCqSocialSiteEndpointsImplSiteOperationServiceProperties} The populated <code>ComAdobeCqSocialSiteEndpointsImplSiteOperationServiceProperties</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('fieldWhitelist')) {
        obj['fieldWhitelist'] = ConfigNodePropertyArray.constructFromObject(data['fieldWhitelist']);
      }
      if (data.hasOwnProperty('sitePathFilters')) {
        obj['sitePathFilters'] = ConfigNodePropertyArray.constructFromObject(data['sitePathFilters']);
      }
      if (data.hasOwnProperty('sitePackageGroup')) {
        obj['sitePackageGroup'] = ConfigNodePropertyString.constructFromObject(data['sitePackageGroup']);
      }
    }
    return obj;
  }

  /**
   * @member {module:model/ConfigNodePropertyArray} fieldWhitelist
   */
  exports.prototype['fieldWhitelist'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyArray} sitePathFilters
   */
  exports.prototype['sitePathFilters'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} sitePackageGroup
   */
  exports.prototype['sitePackageGroup'] = undefined;



  return exports;
}));


