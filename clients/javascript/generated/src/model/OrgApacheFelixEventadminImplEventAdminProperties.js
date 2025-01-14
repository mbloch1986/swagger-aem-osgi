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
    define(['ApiClient', 'model/ConfigNodePropertyArray', 'model/ConfigNodePropertyBoolean', 'model/ConfigNodePropertyFloat', 'model/ConfigNodePropertyInteger'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./ConfigNodePropertyArray'), require('./ConfigNodePropertyBoolean'), require('./ConfigNodePropertyFloat'), require('./ConfigNodePropertyInteger'));
  } else {
    // Browser globals (root is window)
    if (!root.NodeSwaggerAemOsgi) {
      root.NodeSwaggerAemOsgi = {};
    }
    root.NodeSwaggerAemOsgi.OrgApacheFelixEventadminImplEventAdminProperties = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.ConfigNodePropertyArray, root.NodeSwaggerAemOsgi.ConfigNodePropertyBoolean, root.NodeSwaggerAemOsgi.ConfigNodePropertyFloat, root.NodeSwaggerAemOsgi.ConfigNodePropertyInteger);
  }
}(this, function(ApiClient, ConfigNodePropertyArray, ConfigNodePropertyBoolean, ConfigNodePropertyFloat, ConfigNodePropertyInteger) {
  'use strict';




  /**
   * The OrgApacheFelixEventadminImplEventAdminProperties model module.
   * @module model/OrgApacheFelixEventadminImplEventAdminProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>OrgApacheFelixEventadminImplEventAdminProperties</code>.
   * @alias module:model/OrgApacheFelixEventadminImplEventAdminProperties
   * @class
   */
  var exports = function() {
    var _this = this;







  };

  /**
   * Constructs a <code>OrgApacheFelixEventadminImplEventAdminProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/OrgApacheFelixEventadminImplEventAdminProperties} obj Optional instance to populate.
   * @return {module:model/OrgApacheFelixEventadminImplEventAdminProperties} The populated <code>OrgApacheFelixEventadminImplEventAdminProperties</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('org.apache.felix.eventadmin.ThreadPoolSize')) {
        obj['org.apache.felix.eventadmin.ThreadPoolSize'] = ConfigNodePropertyInteger.constructFromObject(data['org.apache.felix.eventadmin.ThreadPoolSize']);
      }
      if (data.hasOwnProperty('org.apache.felix.eventadmin.AsyncToSyncThreadRatio')) {
        obj['org.apache.felix.eventadmin.AsyncToSyncThreadRatio'] = ConfigNodePropertyFloat.constructFromObject(data['org.apache.felix.eventadmin.AsyncToSyncThreadRatio']);
      }
      if (data.hasOwnProperty('org.apache.felix.eventadmin.Timeout')) {
        obj['org.apache.felix.eventadmin.Timeout'] = ConfigNodePropertyInteger.constructFromObject(data['org.apache.felix.eventadmin.Timeout']);
      }
      if (data.hasOwnProperty('org.apache.felix.eventadmin.RequireTopic')) {
        obj['org.apache.felix.eventadmin.RequireTopic'] = ConfigNodePropertyBoolean.constructFromObject(data['org.apache.felix.eventadmin.RequireTopic']);
      }
      if (data.hasOwnProperty('org.apache.felix.eventadmin.IgnoreTimeout')) {
        obj['org.apache.felix.eventadmin.IgnoreTimeout'] = ConfigNodePropertyArray.constructFromObject(data['org.apache.felix.eventadmin.IgnoreTimeout']);
      }
      if (data.hasOwnProperty('org.apache.felix.eventadmin.IgnoreTopic')) {
        obj['org.apache.felix.eventadmin.IgnoreTopic'] = ConfigNodePropertyArray.constructFromObject(data['org.apache.felix.eventadmin.IgnoreTopic']);
      }
    }
    return obj;
  }

  /**
   * @member {module:model/ConfigNodePropertyInteger} org.apache.felix.eventadmin.ThreadPoolSize
   */
  exports.prototype['org.apache.felix.eventadmin.ThreadPoolSize'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyFloat} org.apache.felix.eventadmin.AsyncToSyncThreadRatio
   */
  exports.prototype['org.apache.felix.eventadmin.AsyncToSyncThreadRatio'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} org.apache.felix.eventadmin.Timeout
   */
  exports.prototype['org.apache.felix.eventadmin.Timeout'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyBoolean} org.apache.felix.eventadmin.RequireTopic
   */
  exports.prototype['org.apache.felix.eventadmin.RequireTopic'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyArray} org.apache.felix.eventadmin.IgnoreTimeout
   */
  exports.prototype['org.apache.felix.eventadmin.IgnoreTimeout'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyArray} org.apache.felix.eventadmin.IgnoreTopic
   */
  exports.prototype['org.apache.felix.eventadmin.IgnoreTopic'] = undefined;



  return exports;
}));


