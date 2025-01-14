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
    define(['ApiClient', 'model/ConfigNodePropertyBoolean', 'model/ConfigNodePropertyDropDown', 'model/ConfigNodePropertyInteger', 'model/ConfigNodePropertyString'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./ConfigNodePropertyBoolean'), require('./ConfigNodePropertyDropDown'), require('./ConfigNodePropertyInteger'), require('./ConfigNodePropertyString'));
  } else {
    // Browser globals (root is window)
    if (!root.NodeSwaggerAemOsgi) {
      root.NodeSwaggerAemOsgi = {};
    }
    root.NodeSwaggerAemOsgi.ComAdobeGraniteThreaddumpThreadDumpCollectorProperties = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.ConfigNodePropertyBoolean, root.NodeSwaggerAemOsgi.ConfigNodePropertyDropDown, root.NodeSwaggerAemOsgi.ConfigNodePropertyInteger, root.NodeSwaggerAemOsgi.ConfigNodePropertyString);
  }
}(this, function(ApiClient, ConfigNodePropertyBoolean, ConfigNodePropertyDropDown, ConfigNodePropertyInteger, ConfigNodePropertyString) {
  'use strict';




  /**
   * The ComAdobeGraniteThreaddumpThreadDumpCollectorProperties model module.
   * @module model/ComAdobeGraniteThreaddumpThreadDumpCollectorProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>ComAdobeGraniteThreaddumpThreadDumpCollectorProperties</code>.
   * @alias module:model/ComAdobeGraniteThreaddumpThreadDumpCollectorProperties
   * @class
   */
  var exports = function() {
    var _this = this;










  };

  /**
   * Constructs a <code>ComAdobeGraniteThreaddumpThreadDumpCollectorProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/ComAdobeGraniteThreaddumpThreadDumpCollectorProperties} obj Optional instance to populate.
   * @return {module:model/ComAdobeGraniteThreaddumpThreadDumpCollectorProperties} The populated <code>ComAdobeGraniteThreaddumpThreadDumpCollectorProperties</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('scheduler.period')) {
        obj['scheduler.period'] = ConfigNodePropertyInteger.constructFromObject(data['scheduler.period']);
      }
      if (data.hasOwnProperty('scheduler.runOn')) {
        obj['scheduler.runOn'] = ConfigNodePropertyDropDown.constructFromObject(data['scheduler.runOn']);
      }
      if (data.hasOwnProperty('granite.threaddump.enabled')) {
        obj['granite.threaddump.enabled'] = ConfigNodePropertyBoolean.constructFromObject(data['granite.threaddump.enabled']);
      }
      if (data.hasOwnProperty('granite.threaddump.dumpsPerFile')) {
        obj['granite.threaddump.dumpsPerFile'] = ConfigNodePropertyInteger.constructFromObject(data['granite.threaddump.dumpsPerFile']);
      }
      if (data.hasOwnProperty('granite.threaddump.enableGzipCompression')) {
        obj['granite.threaddump.enableGzipCompression'] = ConfigNodePropertyBoolean.constructFromObject(data['granite.threaddump.enableGzipCompression']);
      }
      if (data.hasOwnProperty('granite.threaddump.enableDirectoriesCompression')) {
        obj['granite.threaddump.enableDirectoriesCompression'] = ConfigNodePropertyBoolean.constructFromObject(data['granite.threaddump.enableDirectoriesCompression']);
      }
      if (data.hasOwnProperty('granite.threaddump.enableJStack')) {
        obj['granite.threaddump.enableJStack'] = ConfigNodePropertyBoolean.constructFromObject(data['granite.threaddump.enableJStack']);
      }
      if (data.hasOwnProperty('granite.threaddump.maxBackupDays')) {
        obj['granite.threaddump.maxBackupDays'] = ConfigNodePropertyInteger.constructFromObject(data['granite.threaddump.maxBackupDays']);
      }
      if (data.hasOwnProperty('granite.threaddump.backupCleanTrigger')) {
        obj['granite.threaddump.backupCleanTrigger'] = ConfigNodePropertyString.constructFromObject(data['granite.threaddump.backupCleanTrigger']);
      }
    }
    return obj;
  }

  /**
   * @member {module:model/ConfigNodePropertyInteger} scheduler.period
   */
  exports.prototype['scheduler.period'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyDropDown} scheduler.runOn
   */
  exports.prototype['scheduler.runOn'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyBoolean} granite.threaddump.enabled
   */
  exports.prototype['granite.threaddump.enabled'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} granite.threaddump.dumpsPerFile
   */
  exports.prototype['granite.threaddump.dumpsPerFile'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyBoolean} granite.threaddump.enableGzipCompression
   */
  exports.prototype['granite.threaddump.enableGzipCompression'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyBoolean} granite.threaddump.enableDirectoriesCompression
   */
  exports.prototype['granite.threaddump.enableDirectoriesCompression'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyBoolean} granite.threaddump.enableJStack
   */
  exports.prototype['granite.threaddump.enableJStack'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} granite.threaddump.maxBackupDays
   */
  exports.prototype['granite.threaddump.maxBackupDays'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} granite.threaddump.backupCleanTrigger
   */
  exports.prototype['granite.threaddump.backupCleanTrigger'] = undefined;



  return exports;
}));


