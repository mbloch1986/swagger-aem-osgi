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
    instance = new NodeSwaggerAemOsgi.OrgApacheSlingServletsPostImplSlingPostServletProperties();
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

  describe('OrgApacheSlingServletsPostImplSlingPostServletProperties', function() {
    it('should create an instance of OrgApacheSlingServletsPostImplSlingPostServletProperties', function() {
      // uncomment below and update the code to test OrgApacheSlingServletsPostImplSlingPostServletProperties
      //var instane = new NodeSwaggerAemOsgi.OrgApacheSlingServletsPostImplSlingPostServletProperties();
      //expect(instance).to.be.a(NodeSwaggerAemOsgi.OrgApacheSlingServletsPostImplSlingPostServletProperties);
    });

    it('should have the property servletPostDateFormats (base name: "servlet.post.dateFormats")', function() {
      // uncomment below and update the code to test the property servletPostDateFormats
      //var instane = new NodeSwaggerAemOsgi.OrgApacheSlingServletsPostImplSlingPostServletProperties();
      //expect(instance).to.be();
    });

    it('should have the property servletPostNodeNameHints (base name: "servlet.post.nodeNameHints")', function() {
      // uncomment below and update the code to test the property servletPostNodeNameHints
      //var instane = new NodeSwaggerAemOsgi.OrgApacheSlingServletsPostImplSlingPostServletProperties();
      //expect(instance).to.be();
    });

    it('should have the property servletPostNodeNameMaxLength (base name: "servlet.post.nodeNameMaxLength")', function() {
      // uncomment below and update the code to test the property servletPostNodeNameMaxLength
      //var instane = new NodeSwaggerAemOsgi.OrgApacheSlingServletsPostImplSlingPostServletProperties();
      //expect(instance).to.be();
    });

    it('should have the property servletPostCheckinNewVersionableNodes (base name: "servlet.post.checkinNewVersionableNodes")', function() {
      // uncomment below and update the code to test the property servletPostCheckinNewVersionableNodes
      //var instane = new NodeSwaggerAemOsgi.OrgApacheSlingServletsPostImplSlingPostServletProperties();
      //expect(instance).to.be();
    });

    it('should have the property servletPostAutoCheckout (base name: "servlet.post.autoCheckout")', function() {
      // uncomment below and update the code to test the property servletPostAutoCheckout
      //var instane = new NodeSwaggerAemOsgi.OrgApacheSlingServletsPostImplSlingPostServletProperties();
      //expect(instance).to.be();
    });

    it('should have the property servletPostAutoCheckin (base name: "servlet.post.autoCheckin")', function() {
      // uncomment below and update the code to test the property servletPostAutoCheckin
      //var instane = new NodeSwaggerAemOsgi.OrgApacheSlingServletsPostImplSlingPostServletProperties();
      //expect(instance).to.be();
    });

    it('should have the property servletPostIgnorePattern (base name: "servlet.post.ignorePattern")', function() {
      // uncomment below and update the code to test the property servletPostIgnorePattern
      //var instane = new NodeSwaggerAemOsgi.OrgApacheSlingServletsPostImplSlingPostServletProperties();
      //expect(instance).to.be();
    });

  });

}));
