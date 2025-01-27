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
    root.NodeSwaggerAemOsgi.ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletProperties = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.ConfigNodePropertyString);
  }
}(this, function(ApiClient, ConfigNodePropertyString) {
  'use strict';




  /**
   * The ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletProperties model module.
   * @module model/ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletProperties</code>.
   * @alias module:model/ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletProperties
   * @class
   */
  var exports = function() {
    var _this = this;




  };

  /**
   * Constructs a <code>ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletProperties} obj Optional instance to populate.
   * @return {module:model/ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletProperties} The populated <code>ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletProperties</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('sling.servlet.extensions')) {
        obj['sling.servlet.extensions'] = ConfigNodePropertyString.constructFromObject(data['sling.servlet.extensions']);
      }
      if (data.hasOwnProperty('sling.servlet.paths')) {
        obj['sling.servlet.paths'] = ConfigNodePropertyString.constructFromObject(data['sling.servlet.paths']);
      }
      if (data.hasOwnProperty('sling.servlet.methods')) {
        obj['sling.servlet.methods'] = ConfigNodePropertyString.constructFromObject(data['sling.servlet.methods']);
      }
    }
    return obj;
  }

  /**
   * @member {module:model/ConfigNodePropertyString} sling.servlet.extensions
   */
  exports.prototype['sling.servlet.extensions'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} sling.servlet.paths
   */
  exports.prototype['sling.servlet.paths'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} sling.servlet.methods
   */
  exports.prototype['sling.servlet.methods'] = undefined;



  return exports;
}));


