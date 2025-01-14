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
    define(['ApiClient', 'model/ConfigNodePropertyArray', 'model/ConfigNodePropertyBoolean'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./ConfigNodePropertyArray'), require('./ConfigNodePropertyBoolean'));
  } else {
    // Browser globals (root is window)
    if (!root.NodeSwaggerAemOsgi) {
      root.NodeSwaggerAemOsgi = {};
    }
    root.NodeSwaggerAemOsgi.ComAdobeGraniteActivitystreamsImplActivityManagerImplProperties = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.ConfigNodePropertyArray, root.NodeSwaggerAemOsgi.ConfigNodePropertyBoolean);
  }
}(this, function(ApiClient, ConfigNodePropertyArray, ConfigNodePropertyBoolean) {
  'use strict';




  /**
   * The ComAdobeGraniteActivitystreamsImplActivityManagerImplProperties model module.
   * @module model/ComAdobeGraniteActivitystreamsImplActivityManagerImplProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>ComAdobeGraniteActivitystreamsImplActivityManagerImplProperties</code>.
   * @alias module:model/ComAdobeGraniteActivitystreamsImplActivityManagerImplProperties
   * @class
   */
  var exports = function() {
    var _this = this;



  };

  /**
   * Constructs a <code>ComAdobeGraniteActivitystreamsImplActivityManagerImplProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/ComAdobeGraniteActivitystreamsImplActivityManagerImplProperties} obj Optional instance to populate.
   * @return {module:model/ComAdobeGraniteActivitystreamsImplActivityManagerImplProperties} The populated <code>ComAdobeGraniteActivitystreamsImplActivityManagerImplProperties</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('aggregate.relationships')) {
        obj['aggregate.relationships'] = ConfigNodePropertyArray.constructFromObject(data['aggregate.relationships']);
      }
      if (data.hasOwnProperty('aggregate.descend.virtual')) {
        obj['aggregate.descend.virtual'] = ConfigNodePropertyBoolean.constructFromObject(data['aggregate.descend.virtual']);
      }
    }
    return obj;
  }

  /**
   * @member {module:model/ConfigNodePropertyArray} aggregate.relationships
   */
  exports.prototype['aggregate.relationships'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyBoolean} aggregate.descend.virtual
   */
  exports.prototype['aggregate.descend.virtual'] = undefined;



  return exports;
}));


