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
    define(['ApiClient', 'model/ConfigNodePropertyBoolean', 'model/ConfigNodePropertyInteger'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./ConfigNodePropertyBoolean'), require('./ConfigNodePropertyInteger'));
  } else {
    // Browser globals (root is window)
    if (!root.NodeSwaggerAemOsgi) {
      root.NodeSwaggerAemOsgi = {};
    }
    root.NodeSwaggerAemOsgi.ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.ConfigNodePropertyBoolean, root.NodeSwaggerAemOsgi.ConfigNodePropertyInteger);
  }
}(this, function(ApiClient, ConfigNodePropertyBoolean, ConfigNodePropertyInteger) {
  'use strict';




  /**
   * The ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties model module.
   * @module model/ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties</code>.
   * @alias module:model/ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties
   * @class
   */
  var exports = function() {
    var _this = this;





  };

  /**
   * Constructs a <code>ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties} obj Optional instance to populate.
   * @return {module:model/ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties} The populated <code>ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('group.listing.pagination.enable')) {
        obj['group.listing.pagination.enable'] = ConfigNodePropertyBoolean.constructFromObject(data['group.listing.pagination.enable']);
      }
      if (data.hasOwnProperty('group.listing.lazyloading.enable')) {
        obj['group.listing.lazyloading.enable'] = ConfigNodePropertyBoolean.constructFromObject(data['group.listing.lazyloading.enable']);
      }
      if (data.hasOwnProperty('page.size')) {
        obj['page.size'] = ConfigNodePropertyInteger.constructFromObject(data['page.size']);
      }
      if (data.hasOwnProperty('priority')) {
        obj['priority'] = ConfigNodePropertyInteger.constructFromObject(data['priority']);
      }
    }
    return obj;
  }

  /**
   * @member {module:model/ConfigNodePropertyBoolean} group.listing.pagination.enable
   */
  exports.prototype['group.listing.pagination.enable'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyBoolean} group.listing.lazyloading.enable
   */
  exports.prototype['group.listing.lazyloading.enable'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} page.size
   */
  exports.prototype['page.size'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} priority
   */
  exports.prototype['priority'] = undefined;



  return exports;
}));


