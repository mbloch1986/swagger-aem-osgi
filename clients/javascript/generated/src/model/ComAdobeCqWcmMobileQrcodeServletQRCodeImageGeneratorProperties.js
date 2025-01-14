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
    define(['ApiClient', 'model/ConfigNodePropertyArray'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./ConfigNodePropertyArray'));
  } else {
    // Browser globals (root is window)
    if (!root.NodeSwaggerAemOsgi) {
      root.NodeSwaggerAemOsgi = {};
    }
    root.NodeSwaggerAemOsgi.ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorProperties = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.ConfigNodePropertyArray);
  }
}(this, function(ApiClient, ConfigNodePropertyArray) {
  'use strict';




  /**
   * The ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorProperties model module.
   * @module model/ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorProperties</code>.
   * @alias module:model/ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorProperties
   * @class
   */
  var exports = function() {
    var _this = this;


  };

  /**
   * Constructs a <code>ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorProperties} obj Optional instance to populate.
   * @return {module:model/ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorProperties} The populated <code>ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorProperties</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('cq.wcm.qrcode.servlet.whitelist')) {
        obj['cq.wcm.qrcode.servlet.whitelist'] = ConfigNodePropertyArray.constructFromObject(data['cq.wcm.qrcode.servlet.whitelist']);
      }
    }
    return obj;
  }

  /**
   * @member {module:model/ConfigNodePropertyArray} cq.wcm.qrcode.servlet.whitelist
   */
  exports.prototype['cq.wcm.qrcode.servlet.whitelist'] = undefined;



  return exports;
}));


