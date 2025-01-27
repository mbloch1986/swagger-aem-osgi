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
    define(['ApiClient', 'model/ConfigNodePropertyInteger'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./ConfigNodePropertyInteger'));
  } else {
    // Browser globals (root is window)
    if (!root.NodeSwaggerAemOsgi) {
      root.NodeSwaggerAemOsgi = {};
    }
    root.NodeSwaggerAemOsgi.OrgApacheSlingScriptingJavascriptInternalRhinoJavaScriptEngineFaProperties = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.ConfigNodePropertyInteger);
  }
}(this, function(ApiClient, ConfigNodePropertyInteger) {
  'use strict';




  /**
   * The OrgApacheSlingScriptingJavascriptInternalRhinoJavaScriptEngineFaProperties model module.
   * @module model/OrgApacheSlingScriptingJavascriptInternalRhinoJavaScriptEngineFaProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>OrgApacheSlingScriptingJavascriptInternalRhinoJavaScriptEngineFaProperties</code>.
   * @alias module:model/OrgApacheSlingScriptingJavascriptInternalRhinoJavaScriptEngineFaProperties
   * @class
   */
  var exports = function() {
    var _this = this;


  };

  /**
   * Constructs a <code>OrgApacheSlingScriptingJavascriptInternalRhinoJavaScriptEngineFaProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/OrgApacheSlingScriptingJavascriptInternalRhinoJavaScriptEngineFaProperties} obj Optional instance to populate.
   * @return {module:model/OrgApacheSlingScriptingJavascriptInternalRhinoJavaScriptEngineFaProperties} The populated <code>OrgApacheSlingScriptingJavascriptInternalRhinoJavaScriptEngineFaProperties</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('org.apache.sling.scripting.javascript.rhino.optLevel')) {
        obj['org.apache.sling.scripting.javascript.rhino.optLevel'] = ConfigNodePropertyInteger.constructFromObject(data['org.apache.sling.scripting.javascript.rhino.optLevel']);
      }
    }
    return obj;
  }

  /**
   * @member {module:model/ConfigNodePropertyInteger} org.apache.sling.scripting.javascript.rhino.optLevel
   */
  exports.prototype['org.apache.sling.scripting.javascript.rhino.optLevel'] = undefined;



  return exports;
}));


