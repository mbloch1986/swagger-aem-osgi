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
    instance = new NodeSwaggerAemOsgi.OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties();
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

  describe('OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties', function() {
    it('should create an instance of OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties', function() {
      // uncomment below and update the code to test OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties
      //var instane = new NodeSwaggerAemOsgi.OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties();
      //expect(instance).to.be.a(NodeSwaggerAemOsgi.OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties);
    });

    it('should have the property mongouri (base name: "mongouri")', function() {
      // uncomment below and update the code to test the property mongouri
      //var instane = new NodeSwaggerAemOsgi.OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties();
      //expect(instance).to.be();
    });

    it('should have the property db (base name: "db")', function() {
      // uncomment below and update the code to test the property db
      //var instane = new NodeSwaggerAemOsgi.OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties();
      //expect(instance).to.be();
    });

    it('should have the property socketKeepAlive (base name: "socketKeepAlive")', function() {
      // uncomment below and update the code to test the property socketKeepAlive
      //var instane = new NodeSwaggerAemOsgi.OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties();
      //expect(instance).to.be();
    });

    it('should have the property cache (base name: "cache")', function() {
      // uncomment below and update the code to test the property cache
      //var instane = new NodeSwaggerAemOsgi.OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties();
      //expect(instance).to.be();
    });

    it('should have the property nodeCachePercentage (base name: "nodeCachePercentage")', function() {
      // uncomment below and update the code to test the property nodeCachePercentage
      //var instane = new NodeSwaggerAemOsgi.OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties();
      //expect(instance).to.be();
    });

    it('should have the property prevDocCachePercentage (base name: "prevDocCachePercentage")', function() {
      // uncomment below and update the code to test the property prevDocCachePercentage
      //var instane = new NodeSwaggerAemOsgi.OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties();
      //expect(instance).to.be();
    });

    it('should have the property childrenCachePercentage (base name: "childrenCachePercentage")', function() {
      // uncomment below and update the code to test the property childrenCachePercentage
      //var instane = new NodeSwaggerAemOsgi.OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties();
      //expect(instance).to.be();
    });

    it('should have the property diffCachePercentage (base name: "diffCachePercentage")', function() {
      // uncomment below and update the code to test the property diffCachePercentage
      //var instane = new NodeSwaggerAemOsgi.OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties();
      //expect(instance).to.be();
    });

    it('should have the property cacheSegmentCount (base name: "cacheSegmentCount")', function() {
      // uncomment below and update the code to test the property cacheSegmentCount
      //var instane = new NodeSwaggerAemOsgi.OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties();
      //expect(instance).to.be();
    });

    it('should have the property cacheStackMoveDistance (base name: "cacheStackMoveDistance")', function() {
      // uncomment below and update the code to test the property cacheStackMoveDistance
      //var instane = new NodeSwaggerAemOsgi.OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties();
      //expect(instance).to.be();
    });

    it('should have the property blobCacheSize (base name: "blobCacheSize")', function() {
      // uncomment below and update the code to test the property blobCacheSize
      //var instane = new NodeSwaggerAemOsgi.OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties();
      //expect(instance).to.be();
    });

    it('should have the property persistentCache (base name: "persistentCache")', function() {
      // uncomment below and update the code to test the property persistentCache
      //var instane = new NodeSwaggerAemOsgi.OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties();
      //expect(instance).to.be();
    });

    it('should have the property journalCache (base name: "journalCache")', function() {
      // uncomment below and update the code to test the property journalCache
      //var instane = new NodeSwaggerAemOsgi.OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties();
      //expect(instance).to.be();
    });

    it('should have the property customBlobStore (base name: "customBlobStore")', function() {
      // uncomment below and update the code to test the property customBlobStore
      //var instane = new NodeSwaggerAemOsgi.OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties();
      //expect(instance).to.be();
    });

    it('should have the property journalGCInterval (base name: "journalGCInterval")', function() {
      // uncomment below and update the code to test the property journalGCInterval
      //var instane = new NodeSwaggerAemOsgi.OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties();
      //expect(instance).to.be();
    });

    it('should have the property journalGCMaxAge (base name: "journalGCMaxAge")', function() {
      // uncomment below and update the code to test the property journalGCMaxAge
      //var instane = new NodeSwaggerAemOsgi.OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties();
      //expect(instance).to.be();
    });

    it('should have the property prefetchExternalChanges (base name: "prefetchExternalChanges")', function() {
      // uncomment below and update the code to test the property prefetchExternalChanges
      //var instane = new NodeSwaggerAemOsgi.OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties();
      //expect(instance).to.be();
    });

    it('should have the property role (base name: "role")', function() {
      // uncomment below and update the code to test the property role
      //var instane = new NodeSwaggerAemOsgi.OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties();
      //expect(instance).to.be();
    });

    it('should have the property versionGcMaxAgeInSecs (base name: "versionGcMaxAgeInSecs")', function() {
      // uncomment below and update the code to test the property versionGcMaxAgeInSecs
      //var instane = new NodeSwaggerAemOsgi.OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties();
      //expect(instance).to.be();
    });

    it('should have the property versionGCExpression (base name: "versionGCExpression")', function() {
      // uncomment below and update the code to test the property versionGCExpression
      //var instane = new NodeSwaggerAemOsgi.OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties();
      //expect(instance).to.be();
    });

    it('should have the property versionGCTimeLimitInSecs (base name: "versionGCTimeLimitInSecs")', function() {
      // uncomment below and update the code to test the property versionGCTimeLimitInSecs
      //var instane = new NodeSwaggerAemOsgi.OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties();
      //expect(instance).to.be();
    });

    it('should have the property blobGcMaxAgeInSecs (base name: "blobGcMaxAgeInSecs")', function() {
      // uncomment below and update the code to test the property blobGcMaxAgeInSecs
      //var instane = new NodeSwaggerAemOsgi.OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties();
      //expect(instance).to.be();
    });

    it('should have the property blobTrackSnapshotIntervalInSecs (base name: "blobTrackSnapshotIntervalInSecs")', function() {
      // uncomment below and update the code to test the property blobTrackSnapshotIntervalInSecs
      //var instane = new NodeSwaggerAemOsgi.OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties();
      //expect(instance).to.be();
    });

    it('should have the property repositoryHome (base name: "repository.home")', function() {
      // uncomment below and update the code to test the property repositoryHome
      //var instane = new NodeSwaggerAemOsgi.OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties();
      //expect(instance).to.be();
    });

    it('should have the property maxReplicationLagInSecs (base name: "maxReplicationLagInSecs")', function() {
      // uncomment below and update the code to test the property maxReplicationLagInSecs
      //var instane = new NodeSwaggerAemOsgi.OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties();
      //expect(instance).to.be();
    });

    it('should have the property documentStoreType (base name: "documentStoreType")', function() {
      // uncomment below and update the code to test the property documentStoreType
      //var instane = new NodeSwaggerAemOsgi.OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties();
      //expect(instance).to.be();
    });

    it('should have the property bundlingDisabled (base name: "bundlingDisabled")', function() {
      // uncomment below and update the code to test the property bundlingDisabled
      //var instane = new NodeSwaggerAemOsgi.OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties();
      //expect(instance).to.be();
    });

    it('should have the property updateLimit (base name: "updateLimit")', function() {
      // uncomment below and update the code to test the property updateLimit
      //var instane = new NodeSwaggerAemOsgi.OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties();
      //expect(instance).to.be();
    });

    it('should have the property persistentCacheIncludes (base name: "persistentCacheIncludes")', function() {
      // uncomment below and update the code to test the property persistentCacheIncludes
      //var instane = new NodeSwaggerAemOsgi.OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties();
      //expect(instance).to.be();
    });

    it('should have the property leaseCheckMode (base name: "leaseCheckMode")', function() {
      // uncomment below and update the code to test the property leaseCheckMode
      //var instane = new NodeSwaggerAemOsgi.OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties();
      //expect(instance).to.be();
    });

  });

}));
