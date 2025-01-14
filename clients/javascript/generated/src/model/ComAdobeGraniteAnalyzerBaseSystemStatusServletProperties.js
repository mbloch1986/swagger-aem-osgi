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
    define(['ApiClient', 'model/ConfigNodePropertyBoolean'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./ConfigNodePropertyBoolean'));
  } else {
    // Browser globals (root is window)
    if (!root.NodeSwaggerAemOsgi) {
      root.NodeSwaggerAemOsgi = {};
    }
    root.NodeSwaggerAemOsgi.ComAdobeGraniteAnalyzerBaseSystemStatusServletProperties = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.ConfigNodePropertyBoolean);
  }
}(this, function(ApiClient, ConfigNodePropertyBoolean) {
  'use strict';




  /**
   * The ComAdobeGraniteAnalyzerBaseSystemStatusServletProperties model module.
   * @module model/ComAdobeGraniteAnalyzerBaseSystemStatusServletProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>ComAdobeGraniteAnalyzerBaseSystemStatusServletProperties</code>.
   * @alias module:model/ComAdobeGraniteAnalyzerBaseSystemStatusServletProperties
   * @class
   */
  var exports = function() {
    var _this = this;


  };

  /**
   * Constructs a <code>ComAdobeGraniteAnalyzerBaseSystemStatusServletProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/ComAdobeGraniteAnalyzerBaseSystemStatusServletProperties} obj Optional instance to populate.
   * @return {module:model/ComAdobeGraniteAnalyzerBaseSystemStatusServletProperties} The populated <code>ComAdobeGraniteAnalyzerBaseSystemStatusServletProperties</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('disabled')) {
        obj['disabled'] = ConfigNodePropertyBoolean.constructFromObject(data['disabled']);
      }
    }
    return obj;
  }

  /**
   * @member {module:model/ConfigNodePropertyBoolean} disabled
   */
  exports.prototype['disabled'] = undefined;



  return exports;
}));


