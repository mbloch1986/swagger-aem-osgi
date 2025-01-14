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
    instance = new NodeSwaggerAemOsgi.ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties();
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

  describe('ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties', function() {
    it('should create an instance of ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties', function() {
      // uncomment below and update the code to test ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties
      //var instane = new NodeSwaggerAemOsgi.ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties();
      //expect(instance).to.be.a(NodeSwaggerAemOsgi.ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties);
    });

    it('should have the property schedulerPeriod (base name: "scheduler.period")', function() {
      // uncomment below and update the code to test the property schedulerPeriod
      //var instane = new NodeSwaggerAemOsgi.ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties();
      //expect(instance).to.be();
    });

    it('should have the property schedulerConcurrent (base name: "scheduler.concurrent")', function() {
      // uncomment below and update the code to test the property schedulerConcurrent
      //var instane = new NodeSwaggerAemOsgi.ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties();
      //expect(instance).to.be();
    });

    it('should have the property goodLinkTestInterval (base name: "good_link_test_interval")', function() {
      // uncomment below and update the code to test the property goodLinkTestInterval
      //var instane = new NodeSwaggerAemOsgi.ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties();
      //expect(instance).to.be();
    });

    it('should have the property badLinkTestInterval (base name: "bad_link_test_interval")', function() {
      // uncomment below and update the code to test the property badLinkTestInterval
      //var instane = new NodeSwaggerAemOsgi.ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties();
      //expect(instance).to.be();
    });

    it('should have the property linkUnusedInterval (base name: "link_unused_interval")', function() {
      // uncomment below and update the code to test the property linkUnusedInterval
      //var instane = new NodeSwaggerAemOsgi.ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties();
      //expect(instance).to.be();
    });

    it('should have the property connectionTimeout (base name: "connection.timeout")', function() {
      // uncomment below and update the code to test the property connectionTimeout
      //var instane = new NodeSwaggerAemOsgi.ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties();
      //expect(instance).to.be();
    });

  });

}));
