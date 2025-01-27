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
    root.NodeSwaggerAemOsgi.ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceProperties = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.ConfigNodePropertyBoolean);
  }
}(this, function(ApiClient, ConfigNodePropertyBoolean) {
  'use strict';




  /**
   * The ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceProperties model module.
   * @module model/ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceProperties</code>.
   * @alias module:model/ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceProperties
   * @class
   */
  var exports = function() {
    var _this = this;


  };

  /**
   * Constructs a <code>ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceProperties} obj Optional instance to populate.
   * @return {module:model/ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceProperties} The populated <code>ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceProperties</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('granite.workflow.WorkflowPublishEventService.enabled')) {
        obj['granite.workflow.WorkflowPublishEventService.enabled'] = ConfigNodePropertyBoolean.constructFromObject(data['granite.workflow.WorkflowPublishEventService.enabled']);
      }
    }
    return obj;
  }

  /**
   * @member {module:model/ConfigNodePropertyBoolean} granite.workflow.WorkflowPublishEventService.enabled
   */
  exports.prototype['granite.workflow.WorkflowPublishEventService.enabled'] = undefined;



  return exports;
}));


