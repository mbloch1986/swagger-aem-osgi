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
    define(['ApiClient', 'model/ConfigNodePropertyArray', 'model/ConfigNodePropertyString'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./ConfigNodePropertyArray'), require('./ConfigNodePropertyString'));
  } else {
    // Browser globals (root is window)
    if (!root.NodeSwaggerAemOsgi) {
      root.NodeSwaggerAemOsgi = {};
    }
    root.NodeSwaggerAemOsgi.ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplProperties = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.ConfigNodePropertyArray, root.NodeSwaggerAemOsgi.ConfigNodePropertyString);
  }
}(this, function(ApiClient, ConfigNodePropertyArray, ConfigNodePropertyString) {
  'use strict';




  /**
   * The ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplProperties model module.
   * @module model/ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplProperties</code>.
   * @alias module:model/ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplProperties
   * @class
   */
  var exports = function() {
    var _this = this;




  };

  /**
   * Constructs a <code>ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplProperties} obj Optional instance to populate.
   * @return {module:model/ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplProperties} The populated <code>ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplProperties</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('event.topics')) {
        obj['event.topics'] = ConfigNodePropertyString.constructFromObject(data['event.topics']);
      }
      if (data.hasOwnProperty('event.filter')) {
        obj['event.filter'] = ConfigNodePropertyString.constructFromObject(data['event.filter']);
      }
      if (data.hasOwnProperty('verbs')) {
        obj['verbs'] = ConfigNodePropertyArray.constructFromObject(data['verbs']);
      }
    }
    return obj;
  }

  /**
   * @member {module:model/ConfigNodePropertyString} event.topics
   */
  exports.prototype['event.topics'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} event.filter
   */
  exports.prototype['event.filter'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyArray} verbs
   */
  exports.prototype['verbs'] = undefined;



  return exports;
}));


