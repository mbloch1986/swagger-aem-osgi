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
    root.NodeSwaggerAemOsgi.ComAdobeGraniteCompatrouterImplRoutingConfigProperties = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.ConfigNodePropertyString);
  }
}(this, function(ApiClient, ConfigNodePropertyString) {
  'use strict';




  /**
   * The ComAdobeGraniteCompatrouterImplRoutingConfigProperties model module.
   * @module model/ComAdobeGraniteCompatrouterImplRoutingConfigProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>ComAdobeGraniteCompatrouterImplRoutingConfigProperties</code>.
   * @alias module:model/ComAdobeGraniteCompatrouterImplRoutingConfigProperties
   * @class
   */
  var exports = function() {
    var _this = this;




  };

  /**
   * Constructs a <code>ComAdobeGraniteCompatrouterImplRoutingConfigProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/ComAdobeGraniteCompatrouterImplRoutingConfigProperties} obj Optional instance to populate.
   * @return {module:model/ComAdobeGraniteCompatrouterImplRoutingConfigProperties} The populated <code>ComAdobeGraniteCompatrouterImplRoutingConfigProperties</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('id')) {
        obj['id'] = ConfigNodePropertyString.constructFromObject(data['id']);
      }
      if (data.hasOwnProperty('compatPath')) {
        obj['compatPath'] = ConfigNodePropertyString.constructFromObject(data['compatPath']);
      }
      if (data.hasOwnProperty('newPath')) {
        obj['newPath'] = ConfigNodePropertyString.constructFromObject(data['newPath']);
      }
    }
    return obj;
  }

  /**
   * @member {module:model/ConfigNodePropertyString} id
   */
  exports.prototype['id'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} compatPath
   */
  exports.prototype['compatPath'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} newPath
   */
  exports.prototype['newPath'] = undefined;



  return exports;
}));


