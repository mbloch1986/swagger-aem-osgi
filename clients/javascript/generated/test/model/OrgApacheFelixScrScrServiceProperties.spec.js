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
    instance = new NodeSwaggerAemOsgi.OrgApacheFelixScrScrServiceProperties();
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

  describe('OrgApacheFelixScrScrServiceProperties', function() {
    it('should create an instance of OrgApacheFelixScrScrServiceProperties', function() {
      // uncomment below and update the code to test OrgApacheFelixScrScrServiceProperties
      //var instane = new NodeSwaggerAemOsgi.OrgApacheFelixScrScrServiceProperties();
      //expect(instance).to.be.a(NodeSwaggerAemOsgi.OrgApacheFelixScrScrServiceProperties);
    });

    it('should have the property dsLoglevel (base name: "ds.loglevel")', function() {
      // uncomment below and update the code to test the property dsLoglevel
      //var instane = new NodeSwaggerAemOsgi.OrgApacheFelixScrScrServiceProperties();
      //expect(instance).to.be();
    });

    it('should have the property dsFactoryEnabled (base name: "ds.factory.enabled")', function() {
      // uncomment below and update the code to test the property dsFactoryEnabled
      //var instane = new NodeSwaggerAemOsgi.OrgApacheFelixScrScrServiceProperties();
      //expect(instance).to.be();
    });

    it('should have the property dsDelayedKeepInstances (base name: "ds.delayed.keepInstances")', function() {
      // uncomment below and update the code to test the property dsDelayedKeepInstances
      //var instane = new NodeSwaggerAemOsgi.OrgApacheFelixScrScrServiceProperties();
      //expect(instance).to.be();
    });

    it('should have the property dsLockTimeoutMilliseconds (base name: "ds.lock.timeout.milliseconds")', function() {
      // uncomment below and update the code to test the property dsLockTimeoutMilliseconds
      //var instane = new NodeSwaggerAemOsgi.OrgApacheFelixScrScrServiceProperties();
      //expect(instance).to.be();
    });

    it('should have the property dsStopTimeoutMilliseconds (base name: "ds.stop.timeout.milliseconds")', function() {
      // uncomment below and update the code to test the property dsStopTimeoutMilliseconds
      //var instane = new NodeSwaggerAemOsgi.OrgApacheFelixScrScrServiceProperties();
      //expect(instance).to.be();
    });

    it('should have the property dsGlobalExtender (base name: "ds.global.extender")', function() {
      // uncomment below and update the code to test the property dsGlobalExtender
      //var instane = new NodeSwaggerAemOsgi.OrgApacheFelixScrScrServiceProperties();
      //expect(instance).to.be();
    });

  });

}));
