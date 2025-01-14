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
    define(['ApiClient', 'model/ConfigNodePropertyArray', 'model/ConfigNodePropertyInteger'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./ConfigNodePropertyArray'), require('./ConfigNodePropertyInteger'));
  } else {
    // Browser globals (root is window)
    if (!root.NodeSwaggerAemOsgi) {
      root.NodeSwaggerAemOsgi = {};
    }
    root.NodeSwaggerAemOsgi.ComAdobeGraniteBundlesHcImplJobsHealthCheckProperties = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.ConfigNodePropertyArray, root.NodeSwaggerAemOsgi.ConfigNodePropertyInteger);
  }
}(this, function(ApiClient, ConfigNodePropertyArray, ConfigNodePropertyInteger) {
  'use strict';




  /**
   * The ComAdobeGraniteBundlesHcImplJobsHealthCheckProperties model module.
   * @module model/ComAdobeGraniteBundlesHcImplJobsHealthCheckProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>ComAdobeGraniteBundlesHcImplJobsHealthCheckProperties</code>.
   * @alias module:model/ComAdobeGraniteBundlesHcImplJobsHealthCheckProperties
   * @class
   */
  var exports = function() {
    var _this = this;



  };

  /**
   * Constructs a <code>ComAdobeGraniteBundlesHcImplJobsHealthCheckProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/ComAdobeGraniteBundlesHcImplJobsHealthCheckProperties} obj Optional instance to populate.
   * @return {module:model/ComAdobeGraniteBundlesHcImplJobsHealthCheckProperties} The populated <code>ComAdobeGraniteBundlesHcImplJobsHealthCheckProperties</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('hc.tags')) {
        obj['hc.tags'] = ConfigNodePropertyArray.constructFromObject(data['hc.tags']);
      }
      if (data.hasOwnProperty('max.queued.jobs')) {
        obj['max.queued.jobs'] = ConfigNodePropertyInteger.constructFromObject(data['max.queued.jobs']);
      }
    }
    return obj;
  }

  /**
   * @member {module:model/ConfigNodePropertyArray} hc.tags
   */
  exports.prototype['hc.tags'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} max.queued.jobs
   */
  exports.prototype['max.queued.jobs'] = undefined;



  return exports;
}));


