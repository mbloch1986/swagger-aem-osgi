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
    root.NodeSwaggerAemOsgi.OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties = factory(root.NodeSwaggerAemOsgi.ApiClient, root.NodeSwaggerAemOsgi.ConfigNodePropertyArray, root.NodeSwaggerAemOsgi.ConfigNodePropertyBoolean, root.NodeSwaggerAemOsgi.ConfigNodePropertyDropDown, root.NodeSwaggerAemOsgi.ConfigNodePropertyInteger, root.NodeSwaggerAemOsgi.ConfigNodePropertyString);
  }
}(this, function(ApiClient, ConfigNodePropertyArray, ConfigNodePropertyBoolean, ConfigNodePropertyDropDown, ConfigNodePropertyInteger, ConfigNodePropertyString) {
  'use strict';




  /**
   * The OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties model module.
   * @module model/OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties</code>.
   * @alias module:model/OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties
   * @class
   */
  var exports = function() {
    var _this = this;































  };

  /**
   * Constructs a <code>OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties} obj Optional instance to populate.
   * @return {module:model/OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties} The populated <code>OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('mongouri')) {
        obj['mongouri'] = ConfigNodePropertyString.constructFromObject(data['mongouri']);
      }
      if (data.hasOwnProperty('db')) {
        obj['db'] = ConfigNodePropertyString.constructFromObject(data['db']);
      }
      if (data.hasOwnProperty('socketKeepAlive')) {
        obj['socketKeepAlive'] = ConfigNodePropertyBoolean.constructFromObject(data['socketKeepAlive']);
      }
      if (data.hasOwnProperty('cache')) {
        obj['cache'] = ConfigNodePropertyInteger.constructFromObject(data['cache']);
      }
      if (data.hasOwnProperty('nodeCachePercentage')) {
        obj['nodeCachePercentage'] = ConfigNodePropertyInteger.constructFromObject(data['nodeCachePercentage']);
      }
      if (data.hasOwnProperty('prevDocCachePercentage')) {
        obj['prevDocCachePercentage'] = ConfigNodePropertyInteger.constructFromObject(data['prevDocCachePercentage']);
      }
      if (data.hasOwnProperty('childrenCachePercentage')) {
        obj['childrenCachePercentage'] = ConfigNodePropertyInteger.constructFromObject(data['childrenCachePercentage']);
      }
      if (data.hasOwnProperty('diffCachePercentage')) {
        obj['diffCachePercentage'] = ConfigNodePropertyInteger.constructFromObject(data['diffCachePercentage']);
      }
      if (data.hasOwnProperty('cacheSegmentCount')) {
        obj['cacheSegmentCount'] = ConfigNodePropertyInteger.constructFromObject(data['cacheSegmentCount']);
      }
      if (data.hasOwnProperty('cacheStackMoveDistance')) {
        obj['cacheStackMoveDistance'] = ConfigNodePropertyInteger.constructFromObject(data['cacheStackMoveDistance']);
      }
      if (data.hasOwnProperty('blobCacheSize')) {
        obj['blobCacheSize'] = ConfigNodePropertyInteger.constructFromObject(data['blobCacheSize']);
      }
      if (data.hasOwnProperty('persistentCache')) {
        obj['persistentCache'] = ConfigNodePropertyString.constructFromObject(data['persistentCache']);
      }
      if (data.hasOwnProperty('journalCache')) {
        obj['journalCache'] = ConfigNodePropertyString.constructFromObject(data['journalCache']);
      }
      if (data.hasOwnProperty('customBlobStore')) {
        obj['customBlobStore'] = ConfigNodePropertyBoolean.constructFromObject(data['customBlobStore']);
      }
      if (data.hasOwnProperty('journalGCInterval')) {
        obj['journalGCInterval'] = ConfigNodePropertyInteger.constructFromObject(data['journalGCInterval']);
      }
      if (data.hasOwnProperty('journalGCMaxAge')) {
        obj['journalGCMaxAge'] = ConfigNodePropertyInteger.constructFromObject(data['journalGCMaxAge']);
      }
      if (data.hasOwnProperty('prefetchExternalChanges')) {
        obj['prefetchExternalChanges'] = ConfigNodePropertyBoolean.constructFromObject(data['prefetchExternalChanges']);
      }
      if (data.hasOwnProperty('role')) {
        obj['role'] = ConfigNodePropertyString.constructFromObject(data['role']);
      }
      if (data.hasOwnProperty('versionGcMaxAgeInSecs')) {
        obj['versionGcMaxAgeInSecs'] = ConfigNodePropertyInteger.constructFromObject(data['versionGcMaxAgeInSecs']);
      }
      if (data.hasOwnProperty('versionGCExpression')) {
        obj['versionGCExpression'] = ConfigNodePropertyString.constructFromObject(data['versionGCExpression']);
      }
      if (data.hasOwnProperty('versionGCTimeLimitInSecs')) {
        obj['versionGCTimeLimitInSecs'] = ConfigNodePropertyInteger.constructFromObject(data['versionGCTimeLimitInSecs']);
      }
      if (data.hasOwnProperty('blobGcMaxAgeInSecs')) {
        obj['blobGcMaxAgeInSecs'] = ConfigNodePropertyInteger.constructFromObject(data['blobGcMaxAgeInSecs']);
      }
      if (data.hasOwnProperty('blobTrackSnapshotIntervalInSecs')) {
        obj['blobTrackSnapshotIntervalInSecs'] = ConfigNodePropertyInteger.constructFromObject(data['blobTrackSnapshotIntervalInSecs']);
      }
      if (data.hasOwnProperty('repository.home')) {
        obj['repository.home'] = ConfigNodePropertyString.constructFromObject(data['repository.home']);
      }
      if (data.hasOwnProperty('maxReplicationLagInSecs')) {
        obj['maxReplicationLagInSecs'] = ConfigNodePropertyInteger.constructFromObject(data['maxReplicationLagInSecs']);
      }
      if (data.hasOwnProperty('documentStoreType')) {
        obj['documentStoreType'] = ConfigNodePropertyDropDown.constructFromObject(data['documentStoreType']);
      }
      if (data.hasOwnProperty('bundlingDisabled')) {
        obj['bundlingDisabled'] = ConfigNodePropertyBoolean.constructFromObject(data['bundlingDisabled']);
      }
      if (data.hasOwnProperty('updateLimit')) {
        obj['updateLimit'] = ConfigNodePropertyInteger.constructFromObject(data['updateLimit']);
      }
      if (data.hasOwnProperty('persistentCacheIncludes')) {
        obj['persistentCacheIncludes'] = ConfigNodePropertyArray.constructFromObject(data['persistentCacheIncludes']);
      }
      if (data.hasOwnProperty('leaseCheckMode')) {
        obj['leaseCheckMode'] = ConfigNodePropertyDropDown.constructFromObject(data['leaseCheckMode']);
      }
    }
    return obj;
  }

  /**
   * @member {module:model/ConfigNodePropertyString} mongouri
   */
  exports.prototype['mongouri'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} db
   */
  exports.prototype['db'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyBoolean} socketKeepAlive
   */
  exports.prototype['socketKeepAlive'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} cache
   */
  exports.prototype['cache'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} nodeCachePercentage
   */
  exports.prototype['nodeCachePercentage'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} prevDocCachePercentage
   */
  exports.prototype['prevDocCachePercentage'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} childrenCachePercentage
   */
  exports.prototype['childrenCachePercentage'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} diffCachePercentage
   */
  exports.prototype['diffCachePercentage'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} cacheSegmentCount
   */
  exports.prototype['cacheSegmentCount'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} cacheStackMoveDistance
   */
  exports.prototype['cacheStackMoveDistance'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} blobCacheSize
   */
  exports.prototype['blobCacheSize'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} persistentCache
   */
  exports.prototype['persistentCache'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} journalCache
   */
  exports.prototype['journalCache'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyBoolean} customBlobStore
   */
  exports.prototype['customBlobStore'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} journalGCInterval
   */
  exports.prototype['journalGCInterval'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} journalGCMaxAge
   */
  exports.prototype['journalGCMaxAge'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyBoolean} prefetchExternalChanges
   */
  exports.prototype['prefetchExternalChanges'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} role
   */
  exports.prototype['role'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} versionGcMaxAgeInSecs
   */
  exports.prototype['versionGcMaxAgeInSecs'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} versionGCExpression
   */
  exports.prototype['versionGCExpression'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} versionGCTimeLimitInSecs
   */
  exports.prototype['versionGCTimeLimitInSecs'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} blobGcMaxAgeInSecs
   */
  exports.prototype['blobGcMaxAgeInSecs'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} blobTrackSnapshotIntervalInSecs
   */
  exports.prototype['blobTrackSnapshotIntervalInSecs'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyString} repository.home
   */
  exports.prototype['repository.home'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} maxReplicationLagInSecs
   */
  exports.prototype['maxReplicationLagInSecs'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyDropDown} documentStoreType
   */
  exports.prototype['documentStoreType'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyBoolean} bundlingDisabled
   */
  exports.prototype['bundlingDisabled'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyInteger} updateLimit
   */
  exports.prototype['updateLimit'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyArray} persistentCacheIncludes
   */
  exports.prototype['persistentCacheIncludes'] = undefined;
  /**
   * @member {module:model/ConfigNodePropertyDropDown} leaseCheckMode
   */
  exports.prototype['leaseCheckMode'] = undefined;



  return exports;
}));


