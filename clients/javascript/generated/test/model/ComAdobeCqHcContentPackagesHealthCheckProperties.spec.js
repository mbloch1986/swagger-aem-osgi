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
    instance = new NodeSwaggerAemOsgi.ComAdobeCqHcContentPackagesHealthCheckProperties();
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

  describe('ComAdobeCqHcContentPackagesHealthCheckProperties', function() {
    it('should create an instance of ComAdobeCqHcContentPackagesHealthCheckProperties', function() {
      // uncomment below and update the code to test ComAdobeCqHcContentPackagesHealthCheckProperties
      //var instane = new NodeSwaggerAemOsgi.ComAdobeCqHcContentPackagesHealthCheckProperties();
      //expect(instance).to.be.a(NodeSwaggerAemOsgi.ComAdobeCqHcContentPackagesHealthCheckProperties);
    });

    it('should have the property hcName (base name: "hc.name")', function() {
      // uncomment below and update the code to test the property hcName
      //var instane = new NodeSwaggerAemOsgi.ComAdobeCqHcContentPackagesHealthCheckProperties();
      //expect(instance).to.be();
    });

    it('should have the property hcTags (base name: "hc.tags")', function() {
      // uncomment below and update the code to test the property hcTags
      //var instane = new NodeSwaggerAemOsgi.ComAdobeCqHcContentPackagesHealthCheckProperties();
      //expect(instance).to.be();
    });

    it('should have the property hcMbeanName (base name: "hc.mbean.name")', function() {
      // uncomment below and update the code to test the property hcMbeanName
      //var instane = new NodeSwaggerAemOsgi.ComAdobeCqHcContentPackagesHealthCheckProperties();
      //expect(instance).to.be();
    });

    it('should have the property packageNames (base name: "package.names")', function() {
      // uncomment below and update the code to test the property packageNames
      //var instane = new NodeSwaggerAemOsgi.ComAdobeCqHcContentPackagesHealthCheckProperties();
      //expect(instance).to.be();
    });

  });

}));
