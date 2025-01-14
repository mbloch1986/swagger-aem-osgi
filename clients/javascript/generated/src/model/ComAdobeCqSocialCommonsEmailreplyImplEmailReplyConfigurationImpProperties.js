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
    define(['ApiClient', 'model/ConfigNodePropertyBoolean', 'model/ConfigNodePropertyDropDown', 'model/ConfigNodePropertyInteger', 'model/ConfigNodePropertyString'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./ConfigNodePropertyBoolean'), require('./ConfigNodePropertyDropDown'), require('./ConfigNodePropertyInteger'), require('./ConfigNodePropertyString'));
  } else {
    // Browser globals (root is window)
    if (!root.NodeSwaggerAemOsgi) {
      root.NodeSwaggerAemOsgi = {};
    }
    root.NodeSwaggerAemOsgi.ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpProperties = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.ConfigNodePropertyBoolean, root.NodeSwaggerAemOsgi.ConfigNodePropertyDropDown, root.NodeSwaggerAemOsgi.ConfigNodePropertyInteger, root.NodeSwaggerAemOsgi.ConfigNodePropertyString);
  }
}(this, function(ApiClient, ConfigNodePropertyBoolean, ConfigNodePropertyDropDown, ConfigNodePropertyInteger, ConfigNodePropertyString) {
  'use strict';




  /**
   * The ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpProperties model module.
   * @module model/ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpProperties</code>.
   * @alias module:model/ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpProperties
   * @class
   */
  var exports = function() {
    var _this = this;












  };

  /**
   * Constructs a <code>ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpProperties} obj Optional instance to populate.
   * @return {module:model/ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpProperties} The populated <code>ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpProperties</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('email.name')) {
        obj['email.name'] = ConfigNodePropertyString.constructFromObject(data['email.name']);
      }
      if (data.hasOwnProperty('email.createPostFromReply')) {
        obj['email.createPostFromReply'] = ConfigNodePropertyBoolean.constructFromObject(data['email.createPostFromReply']);
      }
      if (data.hasOwnProperty('email.addCommentIdTo')) {
        obj['email.addCommentIdTo'] = ConfigNodePropertyDropDown.constructFromObject(data['email.addCommentIdTo']);
      }
      if (data.hasOwnProperty('email.subjectMaximumLength')) {
        obj['email.subjectMaximumLength'] = ConfigNodePropertyInteger.constructFromObject(data['email.subjectMaximumLength']);
      }
      if (data.hasOwnProperty('email.replyToAddress')) {
        obj['email.replyToAddress'] = ConfigNodePropertyString.constructFromObject(data['email.replyToAddress']);
      }
      if (data.hasOwnProperty('email.replyToDelimiter')) {
        obj['email.replyToDelimiter'] = ConfigNodePropertyString.constructFromObject(data['email.replyToDelimiter']);
      }
      if (data.hasOwnProperty('email.trackerIdPrefixInSubject')) {
        obj['email.trackerIdPrefixInSubject'] = ConfigNodePropertyString.constructFromObject(data['email.trackerIdPrefixInSubject']);
      }
      if (data.hasOwnProperty('email.trackerIdPrefixInBody')) {
        obj['email.trackerIdPrefixInBody'] = ConfigNodePropertyString.constructFromObject(data['email.trackerIdPrefixInBody']);
      }
      if (data.hasOwnProperty('email.asHTML')) {
        obj['email.asHTML'] = ConfigNodePropertyBoolean.constructFromObject(data['email.asHTML']);
      }
      if (data.hasOwnProperty('email.defaultUserName')) {
        obj['email.defaultUserName'] = ConfigNodePropertyString.constructFromObject(data['email.defaultUserName']);
      }
      if (data.hasOwnProperty('email.templates.rootPath')) {
        obj['email.templates.rootPath'] = ConfigNodePropertyString.constructFromObject(data['email.templates.rootPath']);
      }
    }
    return obj;
  }

  /**
   * @member {module:model/ConfigNodePropertyString} email.name
   */
  exports.prototype['email.name'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyBoolean} email.createPostFromReply
   */
  exports.prototype['email.createPostFromReply'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyDropDown} email.addCommentIdTo
   */
  exports.prototype['email.addCommentIdTo'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} email.subjectMaximumLength
   */
  exports.prototype['email.subjectMaximumLength'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} email.replyToAddress
   */
  exports.prototype['email.replyToAddress'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} email.replyToDelimiter
   */
  exports.prototype['email.replyToDelimiter'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} email.trackerIdPrefixInSubject
   */
  exports.prototype['email.trackerIdPrefixInSubject'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} email.trackerIdPrefixInBody
   */
  exports.prototype['email.trackerIdPrefixInBody'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyBoolean} email.asHTML
   */
  exports.prototype['email.asHTML'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} email.defaultUserName
   */
  exports.prototype['email.defaultUserName'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} email.templates.rootPath
   */
  exports.prototype['email.templates.rootPath'] = undefined;



  return exports;
}));


