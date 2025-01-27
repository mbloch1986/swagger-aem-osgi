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
    root.NodeSwaggerAemOsgi.ComDayCqWcmCoreImplServletsThumbnailServletProperties = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.ConfigNodePropertyArray, root.NodeSwaggerAemOsgi.ConfigNodePropertyString);
  }
}(this, function(ApiClient, ConfigNodePropertyArray, ConfigNodePropertyString) {
  'use strict';




  /**
   * The ComDayCqWcmCoreImplServletsThumbnailServletProperties model module.
   * @module model/ComDayCqWcmCoreImplServletsThumbnailServletProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>ComDayCqWcmCoreImplServletsThumbnailServletProperties</code>.
   * @alias module:model/ComDayCqWcmCoreImplServletsThumbnailServletProperties
   * @class
   */
  var exports = function() {
    var _this = this;



  };

  /**
   * Constructs a <code>ComDayCqWcmCoreImplServletsThumbnailServletProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/ComDayCqWcmCoreImplServletsThumbnailServletProperties} obj Optional instance to populate.
   * @return {module:model/ComDayCqWcmCoreImplServletsThumbnailServletProperties} The populated <code>ComDayCqWcmCoreImplServletsThumbnailServletProperties</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('workspace')) {
        obj['workspace'] = ConfigNodePropertyString.constructFromObject(data['workspace']);
      }
      if (data.hasOwnProperty('dimensions')) {
        obj['dimensions'] = ConfigNodePropertyArray.constructFromObject(data['dimensions']);
      }
    }
    return obj;
  }

  /**
   * @member {module:model/ConfigNodePropertyString} workspace
   */
  exports.prototype['workspace'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyArray} dimensions
   */
  exports.prototype['dimensions'] = undefined;



  return exports;
}));


