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
    instance = new NodeSwaggerAemOsgi.ComDayCqSearchImplBuilderQueryBuilderImplProperties();
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

  describe('ComDayCqSearchImplBuilderQueryBuilderImplProperties', function() {
    it('should create an instance of ComDayCqSearchImplBuilderQueryBuilderImplProperties', function() {
      // uncomment below and update the code to test ComDayCqSearchImplBuilderQueryBuilderImplProperties
      //var instane = new NodeSwaggerAemOsgi.ComDayCqSearchImplBuilderQueryBuilderImplProperties();
      //expect(instance).to.be.a(NodeSwaggerAemOsgi.ComDayCqSearchImplBuilderQueryBuilderImplProperties);
    });

    it('should have the property excerptProperties (base name: "excerpt.properties")', function() {
      // uncomment below and update the code to test the property excerptProperties
      //var instane = new NodeSwaggerAemOsgi.ComDayCqSearchImplBuilderQueryBuilderImplProperties();
      //expect(instance).to.be();
    });

    it('should have the property cacheMaxEntries (base name: "cache.max.entries")', function() {
      // uncomment below and update the code to test the property cacheMaxEntries
      //var instane = new NodeSwaggerAemOsgi.ComDayCqSearchImplBuilderQueryBuilderImplProperties();
      //expect(instance).to.be();
    });

    it('should have the property cacheEntryLifetime (base name: "cache.entry.lifetime")', function() {
      // uncomment below and update the code to test the property cacheEntryLifetime
      //var instane = new NodeSwaggerAemOsgi.ComDayCqSearchImplBuilderQueryBuilderImplProperties();
      //expect(instance).to.be();
    });

    it('should have the property xpathUnion (base name: "xpath.union")', function() {
      // uncomment below and update the code to test the property xpathUnion
      //var instane = new NodeSwaggerAemOsgi.ComDayCqSearchImplBuilderQueryBuilderImplProperties();
      //expect(instance).to.be();
    });

  });

}));
