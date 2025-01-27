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
    root.NodeSwaggerAemOsgi.ComAdobeCqAccountApiAccountManagementServiceProperties = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.ConfigNodePropertyInteger, root.NodeSwaggerAemOsgi.ConfigNodePropertyString);
  }
}(this, function(ApiClient, ConfigNodePropertyInteger, ConfigNodePropertyString) {
  'use strict';




  /**
   * The ComAdobeCqAccountApiAccountManagementServiceProperties model module.
   * @module model/ComAdobeCqAccountApiAccountManagementServiceProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>ComAdobeCqAccountApiAccountManagementServiceProperties</code>.
   * @alias module:model/ComAdobeCqAccountApiAccountManagementServiceProperties
   * @class
   */
  var exports = function() {
    var _this = this;




  };

  /**
   * Constructs a <code>ComAdobeCqAccountApiAccountManagementServiceProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/ComAdobeCqAccountApiAccountManagementServiceProperties} obj Optional instance to populate.
   * @return {module:model/ComAdobeCqAccountApiAccountManagementServiceProperties} The populated <code>ComAdobeCqAccountApiAccountManagementServiceProperties</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('cq.accountmanager.token.validity.period')) {
        obj['cq.accountmanager.token.validity.period'] = ConfigNodePropertyInteger.constructFromObject(data['cq.accountmanager.token.validity.period']);
      }
      if (data.hasOwnProperty('cq.accountmanager.config.requestnewaccount.mail')) {
        obj['cq.accountmanager.config.requestnewaccount.mail'] = ConfigNodePropertyString.constructFromObject(data['cq.accountmanager.config.requestnewaccount.mail']);
      }
      if (data.hasOwnProperty('cq.accountmanager.config.requestnewpwd.mail')) {
        obj['cq.accountmanager.config.requestnewpwd.mail'] = ConfigNodePropertyString.constructFromObject(data['cq.accountmanager.config.requestnewpwd.mail']);
      }
    }
    return obj;
  }

  /**
   * @member {module:model/ConfigNodePropertyInteger} cq.accountmanager.token.validity.period
   */
  exports.prototype['cq.accountmanager.token.validity.period'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} cq.accountmanager.config.requestnewaccount.mail
   */
  exports.prototype['cq.accountmanager.config.requestnewaccount.mail'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} cq.accountmanager.config.requestnewpwd.mail
   */
  exports.prototype['cq.accountmanager.config.requestnewpwd.mail'] = undefined;



  return exports;
}));


