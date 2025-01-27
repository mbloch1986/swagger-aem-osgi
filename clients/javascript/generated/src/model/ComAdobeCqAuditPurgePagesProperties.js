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
    define(['ApiClient', 'model/ConfigNodePropertyDropDown', 'model/ConfigNodePropertyInteger', 'model/ConfigNodePropertyString'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./ConfigNodePropertyDropDown'), require('./ConfigNodePropertyInteger'), require('./ConfigNodePropertyString'));
  } else {
    // Browser globals (root is window)
    if (!root.NodeSwaggerAemOsgi) {
      root.NodeSwaggerAemOsgi = {};
    }
    root.NodeSwaggerAemOsgi.ComAdobeCqAuditPurgePagesProperties = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.ConfigNodePropertyDropDown, root.NodeSwaggerAemOsgi.ConfigNodePropertyInteger, root.NodeSwaggerAemOsgi.ConfigNodePropertyString);
  }
}(this, function(ApiClient, ConfigNodePropertyDropDown, ConfigNodePropertyInteger, ConfigNodePropertyString) {
  'use strict';




  /**
   * The ComAdobeCqAuditPurgePagesProperties model module.
   * @module model/ComAdobeCqAuditPurgePagesProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>ComAdobeCqAuditPurgePagesProperties</code>.
   * @alias module:model/ComAdobeCqAuditPurgePagesProperties
   * @class
   */
  var exports = function() {
    var _this = this;





  };

  /**
   * Constructs a <code>ComAdobeCqAuditPurgePagesProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/ComAdobeCqAuditPurgePagesProperties} obj Optional instance to populate.
   * @return {module:model/ComAdobeCqAuditPurgePagesProperties} The populated <code>ComAdobeCqAuditPurgePagesProperties</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('auditlog.rule.name')) {
        obj['auditlog.rule.name'] = ConfigNodePropertyString.constructFromObject(data['auditlog.rule.name']);
      }
      if (data.hasOwnProperty('auditlog.rule.contentpath')) {
        obj['auditlog.rule.contentpath'] = ConfigNodePropertyString.constructFromObject(data['auditlog.rule.contentpath']);
      }
      if (data.hasOwnProperty('auditlog.rule.minimumage')) {
        obj['auditlog.rule.minimumage'] = ConfigNodePropertyInteger.constructFromObject(data['auditlog.rule.minimumage']);
      }
      if (data.hasOwnProperty('auditlog.rule.types')) {
        obj['auditlog.rule.types'] = ConfigNodePropertyDropDown.constructFromObject(data['auditlog.rule.types']);
      }
    }
    return obj;
  }

  /**
   * @member {module:model/ConfigNodePropertyString} auditlog.rule.name
   */
  exports.prototype['auditlog.rule.name'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} auditlog.rule.contentpath
   */
  exports.prototype['auditlog.rule.contentpath'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} auditlog.rule.minimumage
   */
  exports.prototype['auditlog.rule.minimumage'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyDropDown} auditlog.rule.types
   */
  exports.prototype['auditlog.rule.types'] = undefined;



  return exports;
}));


