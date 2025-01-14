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
    root.NodeSwaggerAemOsgi.OrgApacheSlingEngineImplLogRequestLoggerServiceProperties = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.ConfigNodePropertyBoolean, root.NodeSwaggerAemOsgi.ConfigNodePropertyDropDown, root.NodeSwaggerAemOsgi.ConfigNodePropertyString);
  }
}(this, function(ApiClient, ConfigNodePropertyBoolean, ConfigNodePropertyDropDown, ConfigNodePropertyString) {
  'use strict';




  /**
   * The OrgApacheSlingEngineImplLogRequestLoggerServiceProperties model module.
   * @module model/OrgApacheSlingEngineImplLogRequestLoggerServiceProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>OrgApacheSlingEngineImplLogRequestLoggerServiceProperties</code>.
   * @alias module:model/OrgApacheSlingEngineImplLogRequestLoggerServiceProperties
   * @class
   */
  var exports = function() {
    var _this = this;





  };

  /**
   * Constructs a <code>OrgApacheSlingEngineImplLogRequestLoggerServiceProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/OrgApacheSlingEngineImplLogRequestLoggerServiceProperties} obj Optional instance to populate.
   * @return {module:model/OrgApacheSlingEngineImplLogRequestLoggerServiceProperties} The populated <code>OrgApacheSlingEngineImplLogRequestLoggerServiceProperties</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('request.log.service.format')) {
        obj['request.log.service.format'] = ConfigNodePropertyString.constructFromObject(data['request.log.service.format']);
      }
      if (data.hasOwnProperty('request.log.service.output')) {
        obj['request.log.service.output'] = ConfigNodePropertyString.constructFromObject(data['request.log.service.output']);
      }
      if (data.hasOwnProperty('request.log.service.outputtype')) {
        obj['request.log.service.outputtype'] = ConfigNodePropertyDropDown.constructFromObject(data['request.log.service.outputtype']);
      }
      if (data.hasOwnProperty('request.log.service.onentry')) {
        obj['request.log.service.onentry'] = ConfigNodePropertyBoolean.constructFromObject(data['request.log.service.onentry']);
      }
    }
    return obj;
  }

  /**
   * @member {module:model/ConfigNodePropertyString} request.log.service.format
   */
  exports.prototype['request.log.service.format'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} request.log.service.output
   */
  exports.prototype['request.log.service.output'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyDropDown} request.log.service.outputtype
   */
  exports.prototype['request.log.service.outputtype'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyBoolean} request.log.service.onentry
   */
  exports.prototype['request.log.service.onentry'] = undefined;



  return exports;
}));


