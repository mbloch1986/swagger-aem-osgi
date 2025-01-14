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
    root.NodeSwaggerAemOsgi.ComAdobeGraniteAuthOauthImplGraniteProviderProperties = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.ConfigNodePropertyString);
  }
}(this, function(ApiClient, ConfigNodePropertyString) {
  'use strict';




  /**
   * The ComAdobeGraniteAuthOauthImplGraniteProviderProperties model module.
   * @module model/ComAdobeGraniteAuthOauthImplGraniteProviderProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>ComAdobeGraniteAuthOauthImplGraniteProviderProperties</code>.
   * @alias module:model/ComAdobeGraniteAuthOauthImplGraniteProviderProperties
   * @class
   */
  var exports = function() {
    var _this = this;






  };

  /**
   * Constructs a <code>ComAdobeGraniteAuthOauthImplGraniteProviderProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/ComAdobeGraniteAuthOauthImplGraniteProviderProperties} obj Optional instance to populate.
   * @return {module:model/ComAdobeGraniteAuthOauthImplGraniteProviderProperties} The populated <code>ComAdobeGraniteAuthOauthImplGraniteProviderProperties</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('oauth.provider.id')) {
        obj['oauth.provider.id'] = ConfigNodePropertyString.constructFromObject(data['oauth.provider.id']);
      }
      if (data.hasOwnProperty('oauth.provider.granite.authorization.url')) {
        obj['oauth.provider.granite.authorization.url'] = ConfigNodePropertyString.constructFromObject(data['oauth.provider.granite.authorization.url']);
      }
      if (data.hasOwnProperty('oauth.provider.granite.token.url')) {
        obj['oauth.provider.granite.token.url'] = ConfigNodePropertyString.constructFromObject(data['oauth.provider.granite.token.url']);
      }
      if (data.hasOwnProperty('oauth.provider.granite.profile.url')) {
        obj['oauth.provider.granite.profile.url'] = ConfigNodePropertyString.constructFromObject(data['oauth.provider.granite.profile.url']);
      }
      if (data.hasOwnProperty('oauth.provider.granite.extended.details.urls')) {
        obj['oauth.provider.granite.extended.details.urls'] = ConfigNodePropertyString.constructFromObject(data['oauth.provider.granite.extended.details.urls']);
      }
    }
    return obj;
  }

  /**
   * @member {module:model/ConfigNodePropertyString} oauth.provider.id
   */
  exports.prototype['oauth.provider.id'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} oauth.provider.granite.authorization.url
   */
  exports.prototype['oauth.provider.granite.authorization.url'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} oauth.provider.granite.token.url
   */
  exports.prototype['oauth.provider.granite.token.url'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} oauth.provider.granite.profile.url
   */
  exports.prototype['oauth.provider.granite.profile.url'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} oauth.provider.granite.extended.details.urls
   */
  exports.prototype['oauth.provider.granite.extended.details.urls'] = undefined;



  return exports;
}));


