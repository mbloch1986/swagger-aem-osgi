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
    define(['ApiClient', 'model/ConfigNodePropertyInteger', 'model/ConfigNodePropertyString'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./ConfigNodePropertyInteger'), require('./ConfigNodePropertyString'));
  } else {
    // Browser globals (root is window)
    if (!root.NodeSwaggerAemOsgi) {
      root.NodeSwaggerAemOsgi = {};
    }
    root.NodeSwaggerAemOsgi.OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoProperties = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.ConfigNodePropertyInteger, root.NodeSwaggerAemOsgi.ConfigNodePropertyString);
  }
}(this, function(ApiClient, ConfigNodePropertyInteger, ConfigNodePropertyString) {
  'use strict';




  /**
   * The OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoProperties model module.
   * @module model/OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoProperties</code>.
   * @alias module:model/OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoProperties
   * @class
   */
  var exports = function() {
    var _this = this;




  };

  /**
   * Constructs a <code>OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoProperties} obj Optional instance to populate.
   * @return {module:model/OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoProperties} The populated <code>OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoProperties</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('felix.memoryusage.dump.threshold')) {
        obj['felix.memoryusage.dump.threshold'] = ConfigNodePropertyInteger.constructFromObject(data['felix.memoryusage.dump.threshold']);
      }
      if (data.hasOwnProperty('felix.memoryusage.dump.interval')) {
        obj['felix.memoryusage.dump.interval'] = ConfigNodePropertyInteger.constructFromObject(data['felix.memoryusage.dump.interval']);
      }
      if (data.hasOwnProperty('felix.memoryusage.dump.location')) {
        obj['felix.memoryusage.dump.location'] = ConfigNodePropertyString.constructFromObject(data['felix.memoryusage.dump.location']);
      }
    }
    return obj;
  }

  /**
   * @member {module:model/ConfigNodePropertyInteger} felix.memoryusage.dump.threshold
   */
  exports.prototype['felix.memoryusage.dump.threshold'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} felix.memoryusage.dump.interval
   */
  exports.prototype['felix.memoryusage.dump.interval'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} felix.memoryusage.dump.location
   */
  exports.prototype['felix.memoryusage.dump.location'] = undefined;



  return exports;
}));


