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
    root.NodeSwaggerAemOsgi.OrgApacheSlingDatasourceJNDIDataSourceFactoryProperties = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.ConfigNodePropertyArray, root.NodeSwaggerAemOsgi.ConfigNodePropertyString);
  }
}(this, function(ApiClient, ConfigNodePropertyArray, ConfigNodePropertyString) {
  'use strict';




  /**
   * The OrgApacheSlingDatasourceJNDIDataSourceFactoryProperties model module.
   * @module model/OrgApacheSlingDatasourceJNDIDataSourceFactoryProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>OrgApacheSlingDatasourceJNDIDataSourceFactoryProperties</code>.
   * @alias module:model/OrgApacheSlingDatasourceJNDIDataSourceFactoryProperties
   * @class
   */
  var exports = function() {
    var _this = this;





  };

  /**
   * Constructs a <code>OrgApacheSlingDatasourceJNDIDataSourceFactoryProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/OrgApacheSlingDatasourceJNDIDataSourceFactoryProperties} obj Optional instance to populate.
   * @return {module:model/OrgApacheSlingDatasourceJNDIDataSourceFactoryProperties} The populated <code>OrgApacheSlingDatasourceJNDIDataSourceFactoryProperties</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('datasource.name')) {
        obj['datasource.name'] = ConfigNodePropertyString.constructFromObject(data['datasource.name']);
      }
      if (data.hasOwnProperty('datasource.svc.prop.name')) {
        obj['datasource.svc.prop.name'] = ConfigNodePropertyString.constructFromObject(data['datasource.svc.prop.name']);
      }
      if (data.hasOwnProperty('datasource.jndi.name')) {
        obj['datasource.jndi.name'] = ConfigNodePropertyString.constructFromObject(data['datasource.jndi.name']);
      }
      if (data.hasOwnProperty('jndi.properties')) {
        obj['jndi.properties'] = ConfigNodePropertyArray.constructFromObject(data['jndi.properties']);
      }
    }
    return obj;
  }

  /**
   * @member {module:model/ConfigNodePropertyString} datasource.name
   */
  exports.prototype['datasource.name'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} datasource.svc.prop.name
   */
  exports.prototype['datasource.svc.prop.name'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} datasource.jndi.name
   */
  exports.prototype['datasource.jndi.name'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyArray} jndi.properties
   */
  exports.prototype['jndi.properties'] = undefined;



  return exports;
}));


