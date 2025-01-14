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
    instance = new NodeSwaggerAemOsgi.OrgApacheFelixWebconsoleInternalServletOsgiManagerProperties();
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

  describe('OrgApacheFelixWebconsoleInternalServletOsgiManagerProperties', function() {
    it('should create an instance of OrgApacheFelixWebconsoleInternalServletOsgiManagerProperties', function() {
      // uncomment below and update the code to test OrgApacheFelixWebconsoleInternalServletOsgiManagerProperties
      //var instane = new NodeSwaggerAemOsgi.OrgApacheFelixWebconsoleInternalServletOsgiManagerProperties();
      //expect(instance).to.be.a(NodeSwaggerAemOsgi.OrgApacheFelixWebconsoleInternalServletOsgiManagerProperties);
    });

    it('should have the property managerRoot (base name: "manager.root")', function() {
      // uncomment below and update the code to test the property managerRoot
      //var instane = new NodeSwaggerAemOsgi.OrgApacheFelixWebconsoleInternalServletOsgiManagerProperties();
      //expect(instance).to.be();
    });

    it('should have the property httpServiceFilter (base name: "http.service.filter")', function() {
      // uncomment below and update the code to test the property httpServiceFilter
      //var instane = new NodeSwaggerAemOsgi.OrgApacheFelixWebconsoleInternalServletOsgiManagerProperties();
      //expect(instance).to.be();
    });

    it('should have the property defaultRender (base name: "default.render")', function() {
      // uncomment below and update the code to test the property defaultRender
      //var instane = new NodeSwaggerAemOsgi.OrgApacheFelixWebconsoleInternalServletOsgiManagerProperties();
      //expect(instance).to.be();
    });

    it('should have the property realm (base name: "realm")', function() {
      // uncomment below and update the code to test the property realm
      //var instane = new NodeSwaggerAemOsgi.OrgApacheFelixWebconsoleInternalServletOsgiManagerProperties();
      //expect(instance).to.be();
    });

    it('should have the property username (base name: "username")', function() {
      // uncomment below and update the code to test the property username
      //var instane = new NodeSwaggerAemOsgi.OrgApacheFelixWebconsoleInternalServletOsgiManagerProperties();
      //expect(instance).to.be();
    });

    it('should have the property password (base name: "password")', function() {
      // uncomment below and update the code to test the property password
      //var instane = new NodeSwaggerAemOsgi.OrgApacheFelixWebconsoleInternalServletOsgiManagerProperties();
      //expect(instance).to.be();
    });

    it('should have the property category (base name: "category")', function() {
      // uncomment below and update the code to test the property category
      //var instane = new NodeSwaggerAemOsgi.OrgApacheFelixWebconsoleInternalServletOsgiManagerProperties();
      //expect(instance).to.be();
    });

    it('should have the property locale (base name: "locale")', function() {
      // uncomment below and update the code to test the property locale
      //var instane = new NodeSwaggerAemOsgi.OrgApacheFelixWebconsoleInternalServletOsgiManagerProperties();
      //expect(instance).to.be();
    });

    it('should have the property loglevel (base name: "loglevel")', function() {
      // uncomment below and update the code to test the property loglevel
      //var instane = new NodeSwaggerAemOsgi.OrgApacheFelixWebconsoleInternalServletOsgiManagerProperties();
      //expect(instance).to.be();
    });

    it('should have the property plugins (base name: "plugins")', function() {
      // uncomment below and update the code to test the property plugins
      //var instane = new NodeSwaggerAemOsgi.OrgApacheFelixWebconsoleInternalServletOsgiManagerProperties();
      //expect(instance).to.be();
    });

  });

}));
