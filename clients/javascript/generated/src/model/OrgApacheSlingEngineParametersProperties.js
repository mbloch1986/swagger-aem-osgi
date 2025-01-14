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
    define(['ApiClient', 'model/ConfigNodePropertyBoolean', 'model/ConfigNodePropertyInteger', 'model/ConfigNodePropertyString'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./ConfigNodePropertyBoolean'), require('./ConfigNodePropertyInteger'), require('./ConfigNodePropertyString'));
  } else {
    // Browser globals (root is window)
    if (!root.NodeSwaggerAemOsgi) {
      root.NodeSwaggerAemOsgi = {};
    }
    root.NodeSwaggerAemOsgi.OrgApacheSlingEngineParametersProperties = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.ConfigNodePropertyBoolean, root.NodeSwaggerAemOsgi.ConfigNodePropertyInteger, root.NodeSwaggerAemOsgi.ConfigNodePropertyString);
  }
}(this, function(ApiClient, ConfigNodePropertyBoolean, ConfigNodePropertyInteger, ConfigNodePropertyString) {
  'use strict';




  /**
   * The OrgApacheSlingEngineParametersProperties model module.
   * @module model/OrgApacheSlingEngineParametersProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>OrgApacheSlingEngineParametersProperties</code>.
   * @alias module:model/OrgApacheSlingEngineParametersProperties
   * @class
   */
  var exports = function() {
    var _this = this;








  };

  /**
   * Constructs a <code>OrgApacheSlingEngineParametersProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/OrgApacheSlingEngineParametersProperties} obj Optional instance to populate.
   * @return {module:model/OrgApacheSlingEngineParametersProperties} The populated <code>OrgApacheSlingEngineParametersProperties</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('sling.default.parameter.encoding')) {
        obj['sling.default.parameter.encoding'] = ConfigNodePropertyString.constructFromObject(data['sling.default.parameter.encoding']);
      }
      if (data.hasOwnProperty('sling.default.max.parameters')) {
        obj['sling.default.max.parameters'] = ConfigNodePropertyInteger.constructFromObject(data['sling.default.max.parameters']);
      }
      if (data.hasOwnProperty('file.location')) {
        obj['file.location'] = ConfigNodePropertyString.constructFromObject(data['file.location']);
      }
      if (data.hasOwnProperty('file.threshold')) {
        obj['file.threshold'] = ConfigNodePropertyInteger.constructFromObject(data['file.threshold']);
      }
      if (data.hasOwnProperty('file.max')) {
        obj['file.max'] = ConfigNodePropertyInteger.constructFromObject(data['file.max']);
      }
      if (data.hasOwnProperty('request.max')) {
        obj['request.max'] = ConfigNodePropertyInteger.constructFromObject(data['request.max']);
      }
      if (data.hasOwnProperty('sling.default.parameter.checkForAdditionalContainerParameters')) {
        obj['sling.default.parameter.checkForAdditionalContainerParameters'] = ConfigNodePropertyBoolean.constructFromObject(data['sling.default.parameter.checkForAdditionalContainerParameters']);
      }
    }
    return obj;
  }

  /**
   * @member {module:model/ConfigNodePropertyString} sling.default.parameter.encoding
   */
  exports.prototype['sling.default.parameter.encoding'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} sling.default.max.parameters
   */
  exports.prototype['sling.default.max.parameters'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} file.location
   */
  exports.prototype['file.location'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} file.threshold
   */
  exports.prototype['file.threshold'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} file.max
   */
  exports.prototype['file.max'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} request.max
   */
  exports.prototype['request.max'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyBoolean} sling.default.parameter.checkForAdditionalContainerParameters
   */
  exports.prototype['sling.default.parameter.checkForAdditionalContainerParameters'] = undefined;



  return exports;
}));


