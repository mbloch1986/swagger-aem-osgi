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
    define(['ApiClient', 'model/OrgApacheSlingEventJobsQueueConfigurationProperties'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./OrgApacheSlingEventJobsQueueConfigurationProperties'));
  } else {
    // Browser globals (root is window)
    if (!root.NodeSwaggerAemOsgi) {
      root.NodeSwaggerAemOsgi = {};
    }
    root.NodeSwaggerAemOsgi.OrgApacheSlingEventJobsQueueConfigurationInfo = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.OrgApacheSlingEventJobsQueueConfigurationProperties);
  }
}(this, function(ApiClient, OrgApacheSlingEventJobsQueueConfigurationProperties) {
  'use strict';




  /**
   * The OrgApacheSlingEventJobsQueueConfigurationInfo model module.
   * @module model/OrgApacheSlingEventJobsQueueConfigurationInfo
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>OrgApacheSlingEventJobsQueueConfigurationInfo</code>.
   * @alias module:model/OrgApacheSlingEventJobsQueueConfigurationInfo
   * @class
   */
  var exports = function() {
    var _this = this;





  };

  /**
   * Constructs a <code>OrgApacheSlingEventJobsQueueConfigurationInfo</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/OrgApacheSlingEventJobsQueueConfigurationInfo} obj Optional instance to populate.
   * @return {module:model/OrgApacheSlingEventJobsQueueConfigurationInfo} The populated <code>OrgApacheSlingEventJobsQueueConfigurationInfo</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('pid')) {
        obj['pid'] = ApiClient.convertToType(data['pid'], 'String');
      }
      if (data.hasOwnProperty('title')) {
        obj['title'] = ApiClient.convertToType(data['title'], 'String');
      }
      if (data.hasOwnProperty('description')) {
        obj['description'] = ApiClient.convertToType(data['description'], 'String');
      }
      if (data.hasOwnProperty('properties')) {
        obj['properties'] = OrgApacheSlingEventJobsQueueConfigurationProperties.constructFromObject(data['properties']);
      }
    }
    return obj;
  }

  /**
   * @member {String} pid
   */
  exports.prototype['pid'] = undefined;
  /**
   * @member {String} title
   */
  exports.prototype['title'] = undefined;
  /**
   * @member {String} description
   */
  exports.prototype['description'] = undefined;
  /**
   * @member {module:model/OrgApacheSlingEventJobsQueueConfigurationProperties} properties
   */
  exports.prototype['properties'] = undefined;



  return exports;
}));


