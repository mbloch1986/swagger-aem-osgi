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
    define(['ApiClient', 'model/ConfigNodePropertyArray', 'model/ConfigNodePropertyBoolean', 'model/ConfigNodePropertyDropDown', 'model/ConfigNodePropertyInteger', 'model/ConfigNodePropertyString'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./ConfigNodePropertyArray'), require('./ConfigNodePropertyBoolean'), require('./ConfigNodePropertyDropDown'), require('./ConfigNodePropertyInteger'), require('./ConfigNodePropertyString'));
  } else {
    // Browser globals (root is window)
    if (!root.NodeSwaggerAemOsgi) {
      root.NodeSwaggerAemOsgi = {};
    }
    root.NodeSwaggerAemOsgi.ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.ConfigNodePropertyArray, root.NodeSwaggerAemOsgi.ConfigNodePropertyBoolean, root.NodeSwaggerAemOsgi.ConfigNodePropertyDropDown, root.NodeSwaggerAemOsgi.ConfigNodePropertyInteger, root.NodeSwaggerAemOsgi.ConfigNodePropertyString);
  }
}(this, function(ApiClient, ConfigNodePropertyArray, ConfigNodePropertyBoolean, ConfigNodePropertyDropDown, ConfigNodePropertyInteger, ConfigNodePropertyString) {
  'use strict';




  /**
   * The ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties model module.
   * @module model/ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties</code>.
   * @alias module:model/ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties
   * @class
   */
  var exports = function() {
    var _this = this;



























  };

  /**
   * Constructs a <code>ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties} obj Optional instance to populate.
   * @return {module:model/ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties} The populated <code>ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('path')) {
        obj['path'] = ConfigNodePropertyArray.constructFromObject(data['path']);
      }
      if (data.hasOwnProperty('service.ranking')) {
        obj['service.ranking'] = ConfigNodePropertyInteger.constructFromObject(data['service.ranking']);
      }
      if (data.hasOwnProperty('idpUrl')) {
        obj['idpUrl'] = ConfigNodePropertyString.constructFromObject(data['idpUrl']);
      }
      if (data.hasOwnProperty('idpCertAlias')) {
        obj['idpCertAlias'] = ConfigNodePropertyString.constructFromObject(data['idpCertAlias']);
      }
      if (data.hasOwnProperty('idpHttpRedirect')) {
        obj['idpHttpRedirect'] = ConfigNodePropertyBoolean.constructFromObject(data['idpHttpRedirect']);
      }
      if (data.hasOwnProperty('serviceProviderEntityId')) {
        obj['serviceProviderEntityId'] = ConfigNodePropertyString.constructFromObject(data['serviceProviderEntityId']);
      }
      if (data.hasOwnProperty('assertionConsumerServiceURL')) {
        obj['assertionConsumerServiceURL'] = ConfigNodePropertyString.constructFromObject(data['assertionConsumerServiceURL']);
      }
      if (data.hasOwnProperty('spPrivateKeyAlias')) {
        obj['spPrivateKeyAlias'] = ConfigNodePropertyString.constructFromObject(data['spPrivateKeyAlias']);
      }
      if (data.hasOwnProperty('keyStorePassword')) {
        obj['keyStorePassword'] = ConfigNodePropertyString.constructFromObject(data['keyStorePassword']);
      }
      if (data.hasOwnProperty('defaultRedirectUrl')) {
        obj['defaultRedirectUrl'] = ConfigNodePropertyString.constructFromObject(data['defaultRedirectUrl']);
      }
      if (data.hasOwnProperty('userIDAttribute')) {
        obj['userIDAttribute'] = ConfigNodePropertyString.constructFromObject(data['userIDAttribute']);
      }
      if (data.hasOwnProperty('useEncryption')) {
        obj['useEncryption'] = ConfigNodePropertyBoolean.constructFromObject(data['useEncryption']);
      }
      if (data.hasOwnProperty('createUser')) {
        obj['createUser'] = ConfigNodePropertyBoolean.constructFromObject(data['createUser']);
      }
      if (data.hasOwnProperty('userIntermediatePath')) {
        obj['userIntermediatePath'] = ConfigNodePropertyString.constructFromObject(data['userIntermediatePath']);
      }
      if (data.hasOwnProperty('addGroupMemberships')) {
        obj['addGroupMemberships'] = ConfigNodePropertyBoolean.constructFromObject(data['addGroupMemberships']);
      }
      if (data.hasOwnProperty('groupMembershipAttribute')) {
        obj['groupMembershipAttribute'] = ConfigNodePropertyString.constructFromObject(data['groupMembershipAttribute']);
      }
      if (data.hasOwnProperty('defaultGroups')) {
        obj['defaultGroups'] = ConfigNodePropertyArray.constructFromObject(data['defaultGroups']);
      }
      if (data.hasOwnProperty('nameIdFormat')) {
        obj['nameIdFormat'] = ConfigNodePropertyString.constructFromObject(data['nameIdFormat']);
      }
      if (data.hasOwnProperty('synchronizeAttributes')) {
        obj['synchronizeAttributes'] = ConfigNodePropertyArray.constructFromObject(data['synchronizeAttributes']);
      }
      if (data.hasOwnProperty('handleLogout')) {
        obj['handleLogout'] = ConfigNodePropertyBoolean.constructFromObject(data['handleLogout']);
      }
      if (data.hasOwnProperty('logoutUrl')) {
        obj['logoutUrl'] = ConfigNodePropertyString.constructFromObject(data['logoutUrl']);
      }
      if (data.hasOwnProperty('clockTolerance')) {
        obj['clockTolerance'] = ConfigNodePropertyInteger.constructFromObject(data['clockTolerance']);
      }
      if (data.hasOwnProperty('digestMethod')) {
        obj['digestMethod'] = ConfigNodePropertyString.constructFromObject(data['digestMethod']);
      }
      if (data.hasOwnProperty('signatureMethod')) {
        obj['signatureMethod'] = ConfigNodePropertyString.constructFromObject(data['signatureMethod']);
      }
      if (data.hasOwnProperty('identitySyncType')) {
        obj['identitySyncType'] = ConfigNodePropertyDropDown.constructFromObject(data['identitySyncType']);
      }
      if (data.hasOwnProperty('idpIdentifier')) {
        obj['idpIdentifier'] = ConfigNodePropertyString.constructFromObject(data['idpIdentifier']);
      }
    }
    return obj;
  }

  /**
   * @member {module:model/ConfigNodePropertyArray} path
   */
  exports.prototype['path'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} service.ranking
   */
  exports.prototype['service.ranking'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} idpUrl
   */
  exports.prototype['idpUrl'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} idpCertAlias
   */
  exports.prototype['idpCertAlias'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyBoolean} idpHttpRedirect
   */
  exports.prototype['idpHttpRedirect'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} serviceProviderEntityId
   */
  exports.prototype['serviceProviderEntityId'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} assertionConsumerServiceURL
   */
  exports.prototype['assertionConsumerServiceURL'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} spPrivateKeyAlias
   */
  exports.prototype['spPrivateKeyAlias'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} keyStorePassword
   */
  exports.prototype['keyStorePassword'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} defaultRedirectUrl
   */
  exports.prototype['defaultRedirectUrl'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} userIDAttribute
   */
  exports.prototype['userIDAttribute'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyBoolean} useEncryption
   */
  exports.prototype['useEncryption'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyBoolean} createUser
   */
  exports.prototype['createUser'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} userIntermediatePath
   */
  exports.prototype['userIntermediatePath'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyBoolean} addGroupMemberships
   */
  exports.prototype['addGroupMemberships'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} groupMembershipAttribute
   */
  exports.prototype['groupMembershipAttribute'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyArray} defaultGroups
   */
  exports.prototype['defaultGroups'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} nameIdFormat
   */
  exports.prototype['nameIdFormat'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyArray} synchronizeAttributes
   */
  exports.prototype['synchronizeAttributes'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyBoolean} handleLogout
   */
  exports.prototype['handleLogout'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} logoutUrl
   */
  exports.prototype['logoutUrl'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} clockTolerance
   */
  exports.prototype['clockTolerance'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} digestMethod
   */
  exports.prototype['digestMethod'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} signatureMethod
   */
  exports.prototype['signatureMethod'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyDropDown} identitySyncType
   */
  exports.prototype['identitySyncType'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} idpIdentifier
   */
  exports.prototype['idpIdentifier'] = undefined;



  return exports;
}));


