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
    define(['ApiClient', 'model/ConfigNodePropertyInteger'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./ConfigNodePropertyInteger'));
  } else {
    // Browser globals (root is window)
    if (!root.NodeSwaggerAemOsgi) {
      root.NodeSwaggerAemOsgi = {};
    }
    root.NodeSwaggerAemOsgi.ComAdobeCqSocialGroupImplGroupServiceImplProperties = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.ConfigNodePropertyInteger);
  }
}(this, function(ApiClient, ConfigNodePropertyInteger) {
  'use strict';




  /**
   * The ComAdobeCqSocialGroupImplGroupServiceImplProperties model module.
   * @module model/ComAdobeCqSocialGroupImplGroupServiceImplProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>ComAdobeCqSocialGroupImplGroupServiceImplProperties</code>.
   * @alias module:model/ComAdobeCqSocialGroupImplGroupServiceImplProperties
   * @class
   */
  var exports = function() {
    var _this = this;



  };

  /**
   * Constructs a <code>ComAdobeCqSocialGroupImplGroupServiceImplProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/ComAdobeCqSocialGroupImplGroupServiceImplProperties} obj Optional instance to populate.
   * @return {module:model/ComAdobeCqSocialGroupImplGroupServiceImplProperties} The populated <code>ComAdobeCqSocialGroupImplGroupServiceImplProperties</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('maxWaitTime')) {
        obj['maxWaitTime'] = ConfigNodePropertyInteger.constructFromObject(data['maxWaitTime']);
      }
      if (data.hasOwnProperty('minWaitBetweenRetries')) {
        obj['minWaitBetweenRetries'] = ConfigNodePropertyInteger.constructFromObject(data['minWaitBetweenRetries']);
      }
    }
    return obj;
  }

  /**
   * @member {module:model/ConfigNodePropertyInteger} maxWaitTime
   */
  exports.prototype['maxWaitTime'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} minWaitBetweenRetries
   */
  exports.prototype['minWaitBetweenRetries'] = undefined;



  return exports;
}));


