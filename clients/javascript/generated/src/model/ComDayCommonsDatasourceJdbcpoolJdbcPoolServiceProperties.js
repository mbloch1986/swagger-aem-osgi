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
    define(['ApiClient', 'model/ConfigNodePropertyArray', 'model/ConfigNodePropertyBoolean', 'model/ConfigNodePropertyInteger', 'model/ConfigNodePropertyString'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./ConfigNodePropertyArray'), require('./ConfigNodePropertyBoolean'), require('./ConfigNodePropertyInteger'), require('./ConfigNodePropertyString'));
  } else {
    // Browser globals (root is window)
    if (!root.NodeSwaggerAemOsgi) {
      root.NodeSwaggerAemOsgi = {};
    }
    root.NodeSwaggerAemOsgi.ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.ConfigNodePropertyArray, root.NodeSwaggerAemOsgi.ConfigNodePropertyBoolean, root.NodeSwaggerAemOsgi.ConfigNodePropertyInteger, root.NodeSwaggerAemOsgi.ConfigNodePropertyString);
  }
}(this, function(ApiClient, ConfigNodePropertyArray, ConfigNodePropertyBoolean, ConfigNodePropertyInteger, ConfigNodePropertyString) {
  'use strict';




  /**
   * The ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties model module.
   * @module model/ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties</code>.
   * @alias module:model/ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties
   * @class
   */
  var exports = function() {
    var _this = this;












  };

  /**
   * Constructs a <code>ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties} obj Optional instance to populate.
   * @return {module:model/ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties} The populated <code>ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('jdbc.driver.class')) {
        obj['jdbc.driver.class'] = ConfigNodePropertyString.constructFromObject(data['jdbc.driver.class']);
      }
      if (data.hasOwnProperty('jdbc.connection.uri')) {
        obj['jdbc.connection.uri'] = ConfigNodePropertyString.constructFromObject(data['jdbc.connection.uri']);
      }
      if (data.hasOwnProperty('jdbc.username')) {
        obj['jdbc.username'] = ConfigNodePropertyString.constructFromObject(data['jdbc.username']);
      }
      if (data.hasOwnProperty('jdbc.password')) {
        obj['jdbc.password'] = ConfigNodePropertyString.constructFromObject(data['jdbc.password']);
      }
      if (data.hasOwnProperty('jdbc.validation.query')) {
        obj['jdbc.validation.query'] = ConfigNodePropertyString.constructFromObject(data['jdbc.validation.query']);
      }
      if (data.hasOwnProperty('default.readonly')) {
        obj['default.readonly'] = ConfigNodePropertyBoolean.constructFromObject(data['default.readonly']);
      }
      if (data.hasOwnProperty('default.autocommit')) {
        obj['default.autocommit'] = ConfigNodePropertyBoolean.constructFromObject(data['default.autocommit']);
      }
      if (data.hasOwnProperty('pool.size')) {
        obj['pool.size'] = ConfigNodePropertyInteger.constructFromObject(data['pool.size']);
      }
      if (data.hasOwnProperty('pool.max.wait.msec')) {
        obj['pool.max.wait.msec'] = ConfigNodePropertyInteger.constructFromObject(data['pool.max.wait.msec']);
      }
      if (data.hasOwnProperty('datasource.name')) {
        obj['datasource.name'] = ConfigNodePropertyString.constructFromObject(data['datasource.name']);
      }
      if (data.hasOwnProperty('datasource.svc.properties')) {
        obj['datasource.svc.properties'] = ConfigNodePropertyArray.constructFromObject(data['datasource.svc.properties']);
      }
    }
    return obj;
  }

  /**
   * @member {module:model/ConfigNodePropertyString} jdbc.driver.class
   */
  exports.prototype['jdbc.driver.class'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} jdbc.connection.uri
   */
  exports.prototype['jdbc.connection.uri'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} jdbc.username
   */
  exports.prototype['jdbc.username'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} jdbc.password
   */
  exports.prototype['jdbc.password'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} jdbc.validation.query
   */
  exports.prototype['jdbc.validation.query'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyBoolean} default.readonly
   */
  exports.prototype['default.readonly'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyBoolean} default.autocommit
   */
  exports.prototype['default.autocommit'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} pool.size
   */
  exports.prototype['pool.size'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} pool.max.wait.msec
   */
  exports.prototype['pool.max.wait.msec'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} datasource.name
   */
  exports.prototype['datasource.name'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyArray} datasource.svc.properties
   */
  exports.prototype['datasource.svc.properties'] = undefined;



  return exports;
}));


