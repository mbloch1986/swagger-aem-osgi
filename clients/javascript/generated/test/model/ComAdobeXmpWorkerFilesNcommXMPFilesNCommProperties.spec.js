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
    instance = new NodeSwaggerAemOsgi.ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties();
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

  describe('ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties', function() {
    it('should create an instance of ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties', function() {
      // uncomment below and update the code to test ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties
      //var instane = new NodeSwaggerAemOsgi.ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties();
      //expect(instance).to.be.a(NodeSwaggerAemOsgi.ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties);
    });

    it('should have the property maxConnections (base name: "maxConnections")', function() {
      // uncomment below and update the code to test the property maxConnections
      //var instane = new NodeSwaggerAemOsgi.ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties();
      //expect(instance).to.be();
    });

    it('should have the property maxRequests (base name: "maxRequests")', function() {
      // uncomment below and update the code to test the property maxRequests
      //var instane = new NodeSwaggerAemOsgi.ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties();
      //expect(instance).to.be();
    });

    it('should have the property requestTimeout (base name: "requestTimeout")', function() {
      // uncomment below and update the code to test the property requestTimeout
      //var instane = new NodeSwaggerAemOsgi.ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties();
      //expect(instance).to.be();
    });

    it('should have the property logDir (base name: "logDir")', function() {
      // uncomment below and update the code to test the property logDir
      //var instane = new NodeSwaggerAemOsgi.ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties();
      //expect(instance).to.be();
    });

  });

}));
