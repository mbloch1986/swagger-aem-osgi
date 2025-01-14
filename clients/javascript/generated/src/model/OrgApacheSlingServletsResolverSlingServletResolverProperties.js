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
    define(['ApiClient', 'model/ConfigNodePropertyArray', 'model/ConfigNodePropertyInteger', 'model/ConfigNodePropertyString'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./ConfigNodePropertyArray'), require('./ConfigNodePropertyInteger'), require('./ConfigNodePropertyString'));
  } else {
    // Browser globals (root is window)
    if (!root.NodeSwaggerAemOsgi) {
      root.NodeSwaggerAemOsgi = {};
    }
    root.NodeSwaggerAemOsgi.OrgApacheSlingServletsResolverSlingServletResolverProperties = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.ConfigNodePropertyArray, root.NodeSwaggerAemOsgi.ConfigNodePropertyInteger, root.NodeSwaggerAemOsgi.ConfigNodePropertyString);
  }
}(this, function(ApiClient, ConfigNodePropertyArray, ConfigNodePropertyInteger, ConfigNodePropertyString) {
  'use strict';




  /**
   * The OrgApacheSlingServletsResolverSlingServletResolverProperties model module.
   * @module model/OrgApacheSlingServletsResolverSlingServletResolverProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>OrgApacheSlingServletsResolverSlingServletResolverProperties</code>.
   * @alias module:model/OrgApacheSlingServletsResolverSlingServletResolverProperties
   * @class
   */
  var exports = function() {
    var _this = this;





  };

  /**
   * Constructs a <code>OrgApacheSlingServletsResolverSlingServletResolverProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/OrgApacheSlingServletsResolverSlingServletResolverProperties} obj Optional instance to populate.
   * @return {module:model/OrgApacheSlingServletsResolverSlingServletResolverProperties} The populated <code>OrgApacheSlingServletsResolverSlingServletResolverProperties</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('servletresolver.servletRoot')) {
        obj['servletresolver.servletRoot'] = ConfigNodePropertyString.constructFromObject(data['servletresolver.servletRoot']);
      }
      if (data.hasOwnProperty('servletresolver.cacheSize')) {
        obj['servletresolver.cacheSize'] = ConfigNodePropertyInteger.constructFromObject(data['servletresolver.cacheSize']);
      }
      if (data.hasOwnProperty('servletresolver.paths')) {
        obj['servletresolver.paths'] = ConfigNodePropertyArray.constructFromObject(data['servletresolver.paths']);
      }
      if (data.hasOwnProperty('servletresolver.defaultExtensions')) {
        obj['servletresolver.defaultExtensions'] = ConfigNodePropertyArray.constructFromObject(data['servletresolver.defaultExtensions']);
      }
    }
    return obj;
  }

  /**
   * @member {module:model/ConfigNodePropertyString} servletresolver.servletRoot
   */
  exports.prototype['servletresolver.servletRoot'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} servletresolver.cacheSize
   */
  exports.prototype['servletresolver.cacheSize'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyArray} servletresolver.paths
   */
  exports.prototype['servletresolver.paths'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyArray} servletresolver.defaultExtensions
   */
  exports.prototype['servletresolver.defaultExtensions'] = undefined;



  return exports;
}));


