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
    define(['ApiClient', 'model/ConfigNodePropertyArray', 'model/ConfigNodePropertyBoolean', 'model/ConfigNodePropertyInteger', 'model/ConfigNodePropertyString'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./ConfigNodePropertyArray'), require('./ConfigNodePropertyBoolean'), require('./ConfigNodePropertyInteger'), require('./ConfigNodePropertyString'));
  } else {
    // Browser globals (root is window)
    if (!root.NodeSwaggerAemOsgi) {
      root.NodeSwaggerAemOsgi = {};
    }
    root.NodeSwaggerAemOsgi.ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.ConfigNodePropertyArray, root.NodeSwaggerAemOsgi.ConfigNodePropertyBoolean, root.NodeSwaggerAemOsgi.ConfigNodePropertyInteger, root.NodeSwaggerAemOsgi.ConfigNodePropertyString);
  }
}(this, function(ApiClient, ConfigNodePropertyArray, ConfigNodePropertyBoolean, ConfigNodePropertyInteger, ConfigNodePropertyString) {
  'use strict';




  /**
   * The ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties model module.
   * @module model/ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties</code>.
   * @alias module:model/ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties
   * @class
   */
  var exports = function() {
    var _this = this;






  };

  /**
   * Constructs a <code>ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties} obj Optional instance to populate.
   * @return {module:model/ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties} The populated <code>ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('event.filter')) {
        obj['event.filter'] = ConfigNodePropertyString.constructFromObject(data['event.filter']);
      }
      if (data.hasOwnProperty('minThreadPoolSize')) {
        obj['minThreadPoolSize'] = ConfigNodePropertyInteger.constructFromObject(data['minThreadPoolSize']);
      }
      if (data.hasOwnProperty('maxThreadPoolSize')) {
        obj['maxThreadPoolSize'] = ConfigNodePropertyInteger.constructFromObject(data['maxThreadPoolSize']);
      }
      if (data.hasOwnProperty('cq.wcm.workflow.terminate.on.activate')) {
        obj['cq.wcm.workflow.terminate.on.activate'] = ConfigNodePropertyBoolean.constructFromObject(data['cq.wcm.workflow.terminate.on.activate']);
      }
      if (data.hasOwnProperty('cq.wcm.worklfow.terminate.exclusion.list')) {
        obj['cq.wcm.worklfow.terminate.exclusion.list'] = ConfigNodePropertyArray.constructFromObject(data['cq.wcm.worklfow.terminate.exclusion.list']);
      }
    }
    return obj;
  }

  /**
   * @member {module:model/ConfigNodePropertyString} event.filter
   */
  exports.prototype['event.filter'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} minThreadPoolSize
   */
  exports.prototype['minThreadPoolSize'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} maxThreadPoolSize
   */
  exports.prototype['maxThreadPoolSize'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyBoolean} cq.wcm.workflow.terminate.on.activate
   */
  exports.prototype['cq.wcm.workflow.terminate.on.activate'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyArray} cq.wcm.worklfow.terminate.exclusion.list
   */
  exports.prototype['cq.wcm.worklfow.terminate.exclusion.list'] = undefined;



  return exports;
}));


