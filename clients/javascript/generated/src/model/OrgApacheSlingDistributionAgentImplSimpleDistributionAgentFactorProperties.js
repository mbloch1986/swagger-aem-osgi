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
    define(['ApiClient', 'model/ConfigNodePropertyBoolean', 'model/ConfigNodePropertyDropDown', 'model/ConfigNodePropertyString'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./ConfigNodePropertyBoolean'), require('./ConfigNodePropertyDropDown'), require('./ConfigNodePropertyString'));
  } else {
    // Browser globals (root is window)
    if (!root.NodeSwaggerAemOsgi) {
      root.NodeSwaggerAemOsgi = {};
    }
    root.NodeSwaggerAemOsgi.OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorProperties = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.ConfigNodePropertyBoolean, root.NodeSwaggerAemOsgi.ConfigNodePropertyDropDown, root.NodeSwaggerAemOsgi.ConfigNodePropertyString);
  }
}(this, function(ApiClient, ConfigNodePropertyBoolean, ConfigNodePropertyDropDown, ConfigNodePropertyString) {
  'use strict';




  /**
   * The OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorProperties model module.
   * @module model/OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorProperties</code>.
   * @alias module:model/OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorProperties
   * @class
   */
  var exports = function() {
    var _this = this;












  };

  /**
   * Constructs a <code>OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorProperties} obj Optional instance to populate.
   * @return {module:model/OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorProperties} The populated <code>OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorProperties</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('name')) {
        obj['name'] = ConfigNodePropertyString.constructFromObject(data['name']);
      }
      if (data.hasOwnProperty('title')) {
        obj['title'] = ConfigNodePropertyString.constructFromObject(data['title']);
      }
      if (data.hasOwnProperty('details')) {
        obj['details'] = ConfigNodePropertyString.constructFromObject(data['details']);
      }
      if (data.hasOwnProperty('enabled')) {
        obj['enabled'] = ConfigNodePropertyBoolean.constructFromObject(data['enabled']);
      }
      if (data.hasOwnProperty('serviceName')) {
        obj['serviceName'] = ConfigNodePropertyString.constructFromObject(data['serviceName']);
      }
      if (data.hasOwnProperty('log.level')) {
        obj['log.level'] = ConfigNodePropertyDropDown.constructFromObject(data['log.level']);
      }
      if (data.hasOwnProperty('queue.processing.enabled')) {
        obj['queue.processing.enabled'] = ConfigNodePropertyBoolean.constructFromObject(data['queue.processing.enabled']);
      }
      if (data.hasOwnProperty('packageExporter.target')) {
        obj['packageExporter.target'] = ConfigNodePropertyString.constructFromObject(data['packageExporter.target']);
      }
      if (data.hasOwnProperty('packageImporter.target')) {
        obj['packageImporter.target'] = ConfigNodePropertyString.constructFromObject(data['packageImporter.target']);
      }
      if (data.hasOwnProperty('requestAuthorizationStrategy.target')) {
        obj['requestAuthorizationStrategy.target'] = ConfigNodePropertyString.constructFromObject(data['requestAuthorizationStrategy.target']);
      }
      if (data.hasOwnProperty('triggers.target')) {
        obj['triggers.target'] = ConfigNodePropertyString.constructFromObject(data['triggers.target']);
      }
    }
    return obj;
  }

  /**
   * @member {module:model/ConfigNodePropertyString} name
   */
  exports.prototype['name'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} title
   */
  exports.prototype['title'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} details
   */
  exports.prototype['details'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyBoolean} enabled
   */
  exports.prototype['enabled'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} serviceName
   */
  exports.prototype['serviceName'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyDropDown} log.level
   */
  exports.prototype['log.level'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyBoolean} queue.processing.enabled
   */
  exports.prototype['queue.processing.enabled'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} packageExporter.target
   */
  exports.prototype['packageExporter.target'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} packageImporter.target
   */
  exports.prototype['packageImporter.target'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} requestAuthorizationStrategy.target
   */
  exports.prototype['requestAuthorizationStrategy.target'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} triggers.target
   */
  exports.prototype['triggers.target'] = undefined;



  return exports;
}));


