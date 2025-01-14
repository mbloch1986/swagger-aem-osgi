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
    define(['ApiClient', 'model/ConfigNodePropertyArray', 'model/ConfigNodePropertyBoolean', 'model/ConfigNodePropertyString'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./ConfigNodePropertyArray'), require('./ConfigNodePropertyBoolean'), require('./ConfigNodePropertyString'));
  } else {
    // Browser globals (root is window)
    if (!root.NodeSwaggerAemOsgi) {
      root.NodeSwaggerAemOsgi = {};
    }
    root.NodeSwaggerAemOsgi.OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.ConfigNodePropertyArray, root.NodeSwaggerAemOsgi.ConfigNodePropertyBoolean, root.NodeSwaggerAemOsgi.ConfigNodePropertyString);
  }
}(this, function(ApiClient, ConfigNodePropertyArray, ConfigNodePropertyBoolean, ConfigNodePropertyString) {
  'use strict';




  /**
   * The OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties model module.
   * @module model/OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties</code>.
   * @alias module:model/OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties
   * @class
   */
  var exports = function() {
    var _this = this;











  };

  /**
   * Constructs a <code>OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties} obj Optional instance to populate.
   * @return {module:model/OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties} The populated <code>OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('dav.root')) {
        obj['dav.root'] = ConfigNodePropertyString.constructFromObject(data['dav.root']);
      }
      if (data.hasOwnProperty('dav.create-absolute-uri')) {
        obj['dav.create-absolute-uri'] = ConfigNodePropertyBoolean.constructFromObject(data['dav.create-absolute-uri']);
      }
      if (data.hasOwnProperty('dav.realm')) {
        obj['dav.realm'] = ConfigNodePropertyString.constructFromObject(data['dav.realm']);
      }
      if (data.hasOwnProperty('collection.types')) {
        obj['collection.types'] = ConfigNodePropertyArray.constructFromObject(data['collection.types']);
      }
      if (data.hasOwnProperty('filter.prefixes')) {
        obj['filter.prefixes'] = ConfigNodePropertyArray.constructFromObject(data['filter.prefixes']);
      }
      if (data.hasOwnProperty('filter.types')) {
        obj['filter.types'] = ConfigNodePropertyString.constructFromObject(data['filter.types']);
      }
      if (data.hasOwnProperty('filter.uris')) {
        obj['filter.uris'] = ConfigNodePropertyString.constructFromObject(data['filter.uris']);
      }
      if (data.hasOwnProperty('type.collections')) {
        obj['type.collections'] = ConfigNodePropertyString.constructFromObject(data['type.collections']);
      }
      if (data.hasOwnProperty('type.noncollections')) {
        obj['type.noncollections'] = ConfigNodePropertyString.constructFromObject(data['type.noncollections']);
      }
      if (data.hasOwnProperty('type.content')) {
        obj['type.content'] = ConfigNodePropertyString.constructFromObject(data['type.content']);
      }
    }
    return obj;
  }

  /**
   * @member {module:model/ConfigNodePropertyString} dav.root
   */
  exports.prototype['dav.root'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyBoolean} dav.create-absolute-uri
   */
  exports.prototype['dav.create-absolute-uri'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} dav.realm
   */
  exports.prototype['dav.realm'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyArray} collection.types
   */
  exports.prototype['collection.types'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyArray} filter.prefixes
   */
  exports.prototype['filter.prefixes'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} filter.types
   */
  exports.prototype['filter.types'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} filter.uris
   */
  exports.prototype['filter.uris'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} type.collections
   */
  exports.prototype['type.collections'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} type.noncollections
   */
  exports.prototype['type.noncollections'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} type.content
   */
  exports.prototype['type.content'] = undefined;



  return exports;
}));


