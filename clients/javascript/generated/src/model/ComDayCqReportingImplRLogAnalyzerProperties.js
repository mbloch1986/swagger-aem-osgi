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
    define(['ApiClient', 'model/ConfigNodePropertyString'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./ConfigNodePropertyString'));
  } else {
    // Browser globals (root is window)
    if (!root.NodeSwaggerAemOsgi) {
      root.NodeSwaggerAemOsgi = {};
    }
    root.NodeSwaggerAemOsgi.ComDayCqReportingImplRLogAnalyzerProperties = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.ConfigNodePropertyString);
  }
}(this, function(ApiClient, ConfigNodePropertyString) {
  'use strict';




  /**
   * The ComDayCqReportingImplRLogAnalyzerProperties model module.
   * @module model/ComDayCqReportingImplRLogAnalyzerProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>ComDayCqReportingImplRLogAnalyzerProperties</code>.
   * @alias module:model/ComDayCqReportingImplRLogAnalyzerProperties
   * @class
   */
  var exports = function() {
    var _this = this;


  };

  /**
   * Constructs a <code>ComDayCqReportingImplRLogAnalyzerProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/ComDayCqReportingImplRLogAnalyzerProperties} obj Optional instance to populate.
   * @return {module:model/ComDayCqReportingImplRLogAnalyzerProperties} The populated <code>ComDayCqReportingImplRLogAnalyzerProperties</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('request.log.output')) {
        obj['request.log.output'] = ConfigNodePropertyString.constructFromObject(data['request.log.output']);
      }
    }
    return obj;
  }

  /**
   * @member {module:model/ConfigNodePropertyString} request.log.output
   */
  exports.prototype['request.log.output'] = undefined;



  return exports;
}));


