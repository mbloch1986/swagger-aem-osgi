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
    define(['ApiClient', 'model/ConfigNodePropertyArray', 'model/ConfigNodePropertyBoolean', 'model/ConfigNodePropertyDropDown', 'model/ConfigNodePropertyInteger', 'model/ConfigNodePropertyString'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./ConfigNodePropertyArray'), require('./ConfigNodePropertyBoolean'), require('./ConfigNodePropertyDropDown'), require('./ConfigNodePropertyInteger'), require('./ConfigNodePropertyString'));
  } else {
    // Browser globals (root is window)
    if (!root.NodeSwaggerAemOsgi) {
      root.NodeSwaggerAemOsgi = {};
    }
    root.NodeSwaggerAemOsgi.OrgApacheSlingDatasourceDataSourceFactoryProperties = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.ConfigNodePropertyArray, root.NodeSwaggerAemOsgi.ConfigNodePropertyBoolean, root.NodeSwaggerAemOsgi.ConfigNodePropertyDropDown, root.NodeSwaggerAemOsgi.ConfigNodePropertyInteger, root.NodeSwaggerAemOsgi.ConfigNodePropertyString);
  }
}(this, function(ApiClient, ConfigNodePropertyArray, ConfigNodePropertyBoolean, ConfigNodePropertyDropDown, ConfigNodePropertyInteger, ConfigNodePropertyString) {
  'use strict';




  /**
   * The OrgApacheSlingDatasourceDataSourceFactoryProperties model module.
   * @module model/OrgApacheSlingDatasourceDataSourceFactoryProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>OrgApacheSlingDatasourceDataSourceFactoryProperties</code>.
   * @alias module:model/OrgApacheSlingDatasourceDataSourceFactoryProperties
   * @class
   */
  var exports = function() {
    var _this = this;






























  };

  /**
   * Constructs a <code>OrgApacheSlingDatasourceDataSourceFactoryProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/OrgApacheSlingDatasourceDataSourceFactoryProperties} obj Optional instance to populate.
   * @return {module:model/OrgApacheSlingDatasourceDataSourceFactoryProperties} The populated <code>OrgApacheSlingDatasourceDataSourceFactoryProperties</code> instance.
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
      if (data.hasOwnProperty('driverClassName')) {
        obj['driverClassName'] = ConfigNodePropertyString.constructFromObject(data['driverClassName']);
      }
      if (data.hasOwnProperty('url')) {
        obj['url'] = ConfigNodePropertyString.constructFromObject(data['url']);
      }
      if (data.hasOwnProperty('username')) {
        obj['username'] = ConfigNodePropertyString.constructFromObject(data['username']);
      }
      if (data.hasOwnProperty('password')) {
        obj['password'] = ConfigNodePropertyString.constructFromObject(data['password']);
      }
      if (data.hasOwnProperty('defaultAutoCommit')) {
        obj['defaultAutoCommit'] = ConfigNodePropertyDropDown.constructFromObject(data['defaultAutoCommit']);
      }
      if (data.hasOwnProperty('defaultReadOnly')) {
        obj['defaultReadOnly'] = ConfigNodePropertyDropDown.constructFromObject(data['defaultReadOnly']);
      }
      if (data.hasOwnProperty('defaultTransactionIsolation')) {
        obj['defaultTransactionIsolation'] = ConfigNodePropertyDropDown.constructFromObject(data['defaultTransactionIsolation']);
      }
      if (data.hasOwnProperty('defaultCatalog')) {
        obj['defaultCatalog'] = ConfigNodePropertyString.constructFromObject(data['defaultCatalog']);
      }
      if (data.hasOwnProperty('maxActive')) {
        obj['maxActive'] = ConfigNodePropertyInteger.constructFromObject(data['maxActive']);
      }
      if (data.hasOwnProperty('maxIdle')) {
        obj['maxIdle'] = ConfigNodePropertyInteger.constructFromObject(data['maxIdle']);
      }
      if (data.hasOwnProperty('minIdle')) {
        obj['minIdle'] = ConfigNodePropertyInteger.constructFromObject(data['minIdle']);
      }
      if (data.hasOwnProperty('initialSize')) {
        obj['initialSize'] = ConfigNodePropertyInteger.constructFromObject(data['initialSize']);
      }
      if (data.hasOwnProperty('maxWait')) {
        obj['maxWait'] = ConfigNodePropertyInteger.constructFromObject(data['maxWait']);
      }
      if (data.hasOwnProperty('maxAge')) {
        obj['maxAge'] = ConfigNodePropertyInteger.constructFromObject(data['maxAge']);
      }
      if (data.hasOwnProperty('testOnBorrow')) {
        obj['testOnBorrow'] = ConfigNodePropertyBoolean.constructFromObject(data['testOnBorrow']);
      }
      if (data.hasOwnProperty('testOnReturn')) {
        obj['testOnReturn'] = ConfigNodePropertyBoolean.constructFromObject(data['testOnReturn']);
      }
      if (data.hasOwnProperty('testWhileIdle')) {
        obj['testWhileIdle'] = ConfigNodePropertyBoolean.constructFromObject(data['testWhileIdle']);
      }
      if (data.hasOwnProperty('validationQuery')) {
        obj['validationQuery'] = ConfigNodePropertyString.constructFromObject(data['validationQuery']);
      }
      if (data.hasOwnProperty('validationQueryTimeout')) {
        obj['validationQueryTimeout'] = ConfigNodePropertyInteger.constructFromObject(data['validationQueryTimeout']);
      }
      if (data.hasOwnProperty('timeBetweenEvictionRunsMillis')) {
        obj['timeBetweenEvictionRunsMillis'] = ConfigNodePropertyInteger.constructFromObject(data['timeBetweenEvictionRunsMillis']);
      }
      if (data.hasOwnProperty('minEvictableIdleTimeMillis')) {
        obj['minEvictableIdleTimeMillis'] = ConfigNodePropertyInteger.constructFromObject(data['minEvictableIdleTimeMillis']);
      }
      if (data.hasOwnProperty('connectionProperties')) {
        obj['connectionProperties'] = ConfigNodePropertyString.constructFromObject(data['connectionProperties']);
      }
      if (data.hasOwnProperty('initSQL')) {
        obj['initSQL'] = ConfigNodePropertyString.constructFromObject(data['initSQL']);
      }
      if (data.hasOwnProperty('jdbcInterceptors')) {
        obj['jdbcInterceptors'] = ConfigNodePropertyString.constructFromObject(data['jdbcInterceptors']);
      }
      if (data.hasOwnProperty('validationInterval')) {
        obj['validationInterval'] = ConfigNodePropertyInteger.constructFromObject(data['validationInterval']);
      }
      if (data.hasOwnProperty('logValidationErrors')) {
        obj['logValidationErrors'] = ConfigNodePropertyBoolean.constructFromObject(data['logValidationErrors']);
      }
      if (data.hasOwnProperty('datasource.svc.properties')) {
        obj['datasource.svc.properties'] = ConfigNodePropertyArray.constructFromObject(data['datasource.svc.properties']);
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
   * @member {module:model/ConfigNodePropertyString} driverClassName
   */
  exports.prototype['driverClassName'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} url
   */
  exports.prototype['url'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} username
   */
  exports.prototype['username'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} password
   */
  exports.prototype['password'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyDropDown} defaultAutoCommit
   */
  exports.prototype['defaultAutoCommit'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyDropDown} defaultReadOnly
   */
  exports.prototype['defaultReadOnly'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyDropDown} defaultTransactionIsolation
   */
  exports.prototype['defaultTransactionIsolation'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} defaultCatalog
   */
  exports.prototype['defaultCatalog'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} maxActive
   */
  exports.prototype['maxActive'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} maxIdle
   */
  exports.prototype['maxIdle'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} minIdle
   */
  exports.prototype['minIdle'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} initialSize
   */
  exports.prototype['initialSize'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} maxWait
   */
  exports.prototype['maxWait'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} maxAge
   */
  exports.prototype['maxAge'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyBoolean} testOnBorrow
   */
  exports.prototype['testOnBorrow'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyBoolean} testOnReturn
   */
  exports.prototype['testOnReturn'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyBoolean} testWhileIdle
   */
  exports.prototype['testWhileIdle'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} validationQuery
   */
  exports.prototype['validationQuery'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} validationQueryTimeout
   */
  exports.prototype['validationQueryTimeout'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} timeBetweenEvictionRunsMillis
   */
  exports.prototype['timeBetweenEvictionRunsMillis'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} minEvictableIdleTimeMillis
   */
  exports.prototype['minEvictableIdleTimeMillis'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} connectionProperties
   */
  exports.prototype['connectionProperties'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} initSQL
   */
  exports.prototype['initSQL'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} jdbcInterceptors
   */
  exports.prototype['jdbcInterceptors'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} validationInterval
   */
  exports.prototype['validationInterval'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyBoolean} logValidationErrors
   */
  exports.prototype['logValidationErrors'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyArray} datasource.svc.properties
   */
  exports.prototype['datasource.svc.properties'] = undefined;



  return exports;
}));


