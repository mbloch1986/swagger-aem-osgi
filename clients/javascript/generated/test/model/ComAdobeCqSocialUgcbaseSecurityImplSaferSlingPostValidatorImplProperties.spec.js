/**
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 */

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD.
    define(['expect.js', process.cwd()+'/src/index'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    factory(require('expect.js'), require(process.cwd()+'/src/index'));
  } else {
    // Browser globals (root is window)
    factory(root.expect, root.NodeSwaggerAemOsgi);
  }
}(this, function(expect, NodeSwaggerAemOsgi) {
  'use strict';

  var instance;

  beforeEach(function() {
    instance = new NodeSwaggerAemOsgi.ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplProperties();
  });

  var getProperty = function(object, getter, property) {
    // Use getter method if present; otherwise, get the property directly.
    if (typeof object[getter] === 'function')
      return object[getter]();
    else
      return object[property];
  }

  var setProperty = function(object, setter, property, value) {
    // Use setter method if present; otherwise, set the property directly.
    if (typeof object[setter] === 'function')
      object[setter](value);
    else
      object[property] = value;
  }

  describe('ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplProperties', function() {
    it('should create an instance of ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplProperties', function() {
      // uncomment below and update the code to test ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplProperties
      //var instane = new NodeSwaggerAemOsgi.ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplProperties();
      //expect(instance).to.be.a(NodeSwaggerAemOsgi.ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplProperties);
    });

    it('should have the property parameterWhitelist (base name: "parameter.whitelist")', function() {
      // uncomment below and update the code to test the property parameterWhitelist
      //var instane = new NodeSwaggerAemOsgi.ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplProperties();
      //expect(instance).to.be();
    });

    it('should have the property parameterWhitelistPrefixes (base name: "parameter.whitelist.prefixes")', function() {
      // uncomment below and update the code to test the property parameterWhitelistPrefixes
      //var instane = new NodeSwaggerAemOsgi.ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplProperties();
      //expect(instance).to.be();
    });

    it('should have the property binaryParameterWhitelist (base name: "binary.parameter.whitelist")', function() {
      // uncomment below and update the code to test the property binaryParameterWhitelist
      //var instane = new NodeSwaggerAemOsgi.ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplProperties();
      //expect(instance).to.be();
    });

    it('should have the property modifierWhitelist (base name: "modifier.whitelist")', function() {
      // uncomment below and update the code to test the property modifierWhitelist
      //var instane = new NodeSwaggerAemOsgi.ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplProperties();
      //expect(instance).to.be();
    });

    it('should have the property operationWhitelist (base name: "operation.whitelist")', function() {
      // uncomment below and update the code to test the property operationWhitelist
      //var instane = new NodeSwaggerAemOsgi.ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplProperties();
      //expect(instance).to.be();
    });

    it('should have the property operationWhitelistPrefixes (base name: "operation.whitelist.prefixes")', function() {
      // uncomment below and update the code to test the property operationWhitelistPrefixes
      //var instane = new NodeSwaggerAemOsgi.ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplProperties();
      //expect(instance).to.be();
    });

    it('should have the property typehintWhitelist (base name: "typehint.whitelist")', function() {
      // uncomment below and update the code to test the property typehintWhitelist
      //var instane = new NodeSwaggerAemOsgi.ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplProperties();
      //expect(instance).to.be();
    });

    it('should have the property resourcetypeWhitelist (base name: "resourcetype.whitelist")', function() {
      // uncomment below and update the code to test the property resourcetypeWhitelist
      //var instane = new NodeSwaggerAemOsgi.ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplProperties();
      //expect(instance).to.be();
    });

  });

}));
