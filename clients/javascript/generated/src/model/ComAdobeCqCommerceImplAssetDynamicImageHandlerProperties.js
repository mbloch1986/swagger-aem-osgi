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
    define(['ApiClient', 'model/ConfigNodePropertyBoolean', 'model/ConfigNodePropertyString'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./ConfigNodePropertyBoolean'), require('./ConfigNodePropertyString'));
  } else {
    // Browser globals (root is window)
    if (!root.NodeSwaggerAemOsgi) {
      root.NodeSwaggerAemOsgi = {};
    }
    root.NodeSwaggerAemOsgi.ComAdobeCqCommerceImplAssetDynamicImageHandlerProperties = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.ConfigNodePropertyBoolean, root.NodeSwaggerAemOsgi.ConfigNodePropertyString);
  }
}(this, function(ApiClient, ConfigNodePropertyBoolean, ConfigNodePropertyString) {
  'use strict';




  /**
   * The ComAdobeCqCommerceImplAssetDynamicImageHandlerProperties model module.
   * @module model/ComAdobeCqCommerceImplAssetDynamicImageHandlerProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>ComAdobeCqCommerceImplAssetDynamicImageHandlerProperties</code>.
   * @alias module:model/ComAdobeCqCommerceImplAssetDynamicImageHandlerProperties
   * @class
   */
  var exports = function() {
    var _this = this;



  };

  /**
   * Constructs a <code>ComAdobeCqCommerceImplAssetDynamicImageHandlerProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/ComAdobeCqCommerceImplAssetDynamicImageHandlerProperties} obj Optional instance to populate.
   * @return {module:model/ComAdobeCqCommerceImplAssetDynamicImageHandlerProperties} The populated <code>ComAdobeCqCommerceImplAssetDynamicImageHandlerProperties</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('cq.commerce.asset.handler.active')) {
        obj['cq.commerce.asset.handler.active'] = ConfigNodePropertyBoolean.constructFromObject(data['cq.commerce.asset.handler.active']);
      }
      if (data.hasOwnProperty('cq.commerce.asset.handler.name')) {
        obj['cq.commerce.asset.handler.name'] = ConfigNodePropertyString.constructFromObject(data['cq.commerce.asset.handler.name']);
      }
    }
    return obj;
  }

  /**
   * @member {module:model/ConfigNodePropertyBoolean} cq.commerce.asset.handler.active
   */
  exports.prototype['cq.commerce.asset.handler.active'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} cq.commerce.asset.handler.name
   */
  exports.prototype['cq.commerce.asset.handler.name'] = undefined;



  return exports;
}));


