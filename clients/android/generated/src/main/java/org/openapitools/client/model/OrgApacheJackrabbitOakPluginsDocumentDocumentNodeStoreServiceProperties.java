/**
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

package org.openapitools.client.model;

import org.openapitools.client.model.ConfigNodePropertyArray;
import org.openapitools.client.model.ConfigNodePropertyBoolean;
import org.openapitools.client.model.ConfigNodePropertyDropDown;
import org.openapitools.client.model.ConfigNodePropertyInteger;
import org.openapitools.client.model.ConfigNodePropertyString;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties {
  
  @SerializedName("mongouri")
  private ConfigNodePropertyString mongouri = null;
  @SerializedName("db")
  private ConfigNodePropertyString db = null;
  @SerializedName("socketKeepAlive")
  private ConfigNodePropertyBoolean socketKeepAlive = null;
  @SerializedName("cache")
  private ConfigNodePropertyInteger cache = null;
  @SerializedName("nodeCachePercentage")
  private ConfigNodePropertyInteger nodeCachePercentage = null;
  @SerializedName("prevDocCachePercentage")
  private ConfigNodePropertyInteger prevDocCachePercentage = null;
  @SerializedName("childrenCachePercentage")
  private ConfigNodePropertyInteger childrenCachePercentage = null;
  @SerializedName("diffCachePercentage")
  private ConfigNodePropertyInteger diffCachePercentage = null;
  @SerializedName("cacheSegmentCount")
  private ConfigNodePropertyInteger cacheSegmentCount = null;
  @SerializedName("cacheStackMoveDistance")
  private ConfigNodePropertyInteger cacheStackMoveDistance = null;
  @SerializedName("blobCacheSize")
  private ConfigNodePropertyInteger blobCacheSize = null;
  @SerializedName("persistentCache")
  private ConfigNodePropertyString persistentCache = null;
  @SerializedName("journalCache")
  private ConfigNodePropertyString journalCache = null;
  @SerializedName("customBlobStore")
  private ConfigNodePropertyBoolean customBlobStore = null;
  @SerializedName("journalGCInterval")
  private ConfigNodePropertyInteger journalGCInterval = null;
  @SerializedName("journalGCMaxAge")
  private ConfigNodePropertyInteger journalGCMaxAge = null;
  @SerializedName("prefetchExternalChanges")
  private ConfigNodePropertyBoolean prefetchExternalChanges = null;
  @SerializedName("role")
  private ConfigNodePropertyString role = null;
  @SerializedName("versionGcMaxAgeInSecs")
  private ConfigNodePropertyInteger versionGcMaxAgeInSecs = null;
  @SerializedName("versionGCExpression")
  private ConfigNodePropertyString versionGCExpression = null;
  @SerializedName("versionGCTimeLimitInSecs")
  private ConfigNodePropertyInteger versionGCTimeLimitInSecs = null;
  @SerializedName("blobGcMaxAgeInSecs")
  private ConfigNodePropertyInteger blobGcMaxAgeInSecs = null;
  @SerializedName("blobTrackSnapshotIntervalInSecs")
  private ConfigNodePropertyInteger blobTrackSnapshotIntervalInSecs = null;
  @SerializedName("repository.home")
  private ConfigNodePropertyString repositoryHome = null;
  @SerializedName("maxReplicationLagInSecs")
  private ConfigNodePropertyInteger maxReplicationLagInSecs = null;
  @SerializedName("documentStoreType")
  private ConfigNodePropertyDropDown documentStoreType = null;
  @SerializedName("bundlingDisabled")
  private ConfigNodePropertyBoolean bundlingDisabled = null;
  @SerializedName("updateLimit")
  private ConfigNodePropertyInteger updateLimit = null;
  @SerializedName("persistentCacheIncludes")
  private ConfigNodePropertyArray persistentCacheIncludes = null;
  @SerializedName("leaseCheckMode")
  private ConfigNodePropertyDropDown leaseCheckMode = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getMongouri() {
    return mongouri;
  }
  public void setMongouri(ConfigNodePropertyString mongouri) {
    this.mongouri = mongouri;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getDb() {
    return db;
  }
  public void setDb(ConfigNodePropertyString db) {
    this.db = db;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getSocketKeepAlive() {
    return socketKeepAlive;
  }
  public void setSocketKeepAlive(ConfigNodePropertyBoolean socketKeepAlive) {
    this.socketKeepAlive = socketKeepAlive;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getCache() {
    return cache;
  }
  public void setCache(ConfigNodePropertyInteger cache) {
    this.cache = cache;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getNodeCachePercentage() {
    return nodeCachePercentage;
  }
  public void setNodeCachePercentage(ConfigNodePropertyInteger nodeCachePercentage) {
    this.nodeCachePercentage = nodeCachePercentage;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getPrevDocCachePercentage() {
    return prevDocCachePercentage;
  }
  public void setPrevDocCachePercentage(ConfigNodePropertyInteger prevDocCachePercentage) {
    this.prevDocCachePercentage = prevDocCachePercentage;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getChildrenCachePercentage() {
    return childrenCachePercentage;
  }
  public void setChildrenCachePercentage(ConfigNodePropertyInteger childrenCachePercentage) {
    this.childrenCachePercentage = childrenCachePercentage;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getDiffCachePercentage() {
    return diffCachePercentage;
  }
  public void setDiffCachePercentage(ConfigNodePropertyInteger diffCachePercentage) {
    this.diffCachePercentage = diffCachePercentage;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getCacheSegmentCount() {
    return cacheSegmentCount;
  }
  public void setCacheSegmentCount(ConfigNodePropertyInteger cacheSegmentCount) {
    this.cacheSegmentCount = cacheSegmentCount;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getCacheStackMoveDistance() {
    return cacheStackMoveDistance;
  }
  public void setCacheStackMoveDistance(ConfigNodePropertyInteger cacheStackMoveDistance) {
    this.cacheStackMoveDistance = cacheStackMoveDistance;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getBlobCacheSize() {
    return blobCacheSize;
  }
  public void setBlobCacheSize(ConfigNodePropertyInteger blobCacheSize) {
    this.blobCacheSize = blobCacheSize;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getPersistentCache() {
    return persistentCache;
  }
  public void setPersistentCache(ConfigNodePropertyString persistentCache) {
    this.persistentCache = persistentCache;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getJournalCache() {
    return journalCache;
  }
  public void setJournalCache(ConfigNodePropertyString journalCache) {
    this.journalCache = journalCache;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getCustomBlobStore() {
    return customBlobStore;
  }
  public void setCustomBlobStore(ConfigNodePropertyBoolean customBlobStore) {
    this.customBlobStore = customBlobStore;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getJournalGCInterval() {
    return journalGCInterval;
  }
  public void setJournalGCInterval(ConfigNodePropertyInteger journalGCInterval) {
    this.journalGCInterval = journalGCInterval;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getJournalGCMaxAge() {
    return journalGCMaxAge;
  }
  public void setJournalGCMaxAge(ConfigNodePropertyInteger journalGCMaxAge) {
    this.journalGCMaxAge = journalGCMaxAge;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getPrefetchExternalChanges() {
    return prefetchExternalChanges;
  }
  public void setPrefetchExternalChanges(ConfigNodePropertyBoolean prefetchExternalChanges) {
    this.prefetchExternalChanges = prefetchExternalChanges;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getRole() {
    return role;
  }
  public void setRole(ConfigNodePropertyString role) {
    this.role = role;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getVersionGcMaxAgeInSecs() {
    return versionGcMaxAgeInSecs;
  }
  public void setVersionGcMaxAgeInSecs(ConfigNodePropertyInteger versionGcMaxAgeInSecs) {
    this.versionGcMaxAgeInSecs = versionGcMaxAgeInSecs;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getVersionGCExpression() {
    return versionGCExpression;
  }
  public void setVersionGCExpression(ConfigNodePropertyString versionGCExpression) {
    this.versionGCExpression = versionGCExpression;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getVersionGCTimeLimitInSecs() {
    return versionGCTimeLimitInSecs;
  }
  public void setVersionGCTimeLimitInSecs(ConfigNodePropertyInteger versionGCTimeLimitInSecs) {
    this.versionGCTimeLimitInSecs = versionGCTimeLimitInSecs;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getBlobGcMaxAgeInSecs() {
    return blobGcMaxAgeInSecs;
  }
  public void setBlobGcMaxAgeInSecs(ConfigNodePropertyInteger blobGcMaxAgeInSecs) {
    this.blobGcMaxAgeInSecs = blobGcMaxAgeInSecs;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getBlobTrackSnapshotIntervalInSecs() {
    return blobTrackSnapshotIntervalInSecs;
  }
  public void setBlobTrackSnapshotIntervalInSecs(ConfigNodePropertyInteger blobTrackSnapshotIntervalInSecs) {
    this.blobTrackSnapshotIntervalInSecs = blobTrackSnapshotIntervalInSecs;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getRepositoryHome() {
    return repositoryHome;
  }
  public void setRepositoryHome(ConfigNodePropertyString repositoryHome) {
    this.repositoryHome = repositoryHome;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getMaxReplicationLagInSecs() {
    return maxReplicationLagInSecs;
  }
  public void setMaxReplicationLagInSecs(ConfigNodePropertyInteger maxReplicationLagInSecs) {
    this.maxReplicationLagInSecs = maxReplicationLagInSecs;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyDropDown getDocumentStoreType() {
    return documentStoreType;
  }
  public void setDocumentStoreType(ConfigNodePropertyDropDown documentStoreType) {
    this.documentStoreType = documentStoreType;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getBundlingDisabled() {
    return bundlingDisabled;
  }
  public void setBundlingDisabled(ConfigNodePropertyBoolean bundlingDisabled) {
    this.bundlingDisabled = bundlingDisabled;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getUpdateLimit() {
    return updateLimit;
  }
  public void setUpdateLimit(ConfigNodePropertyInteger updateLimit) {
    this.updateLimit = updateLimit;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getPersistentCacheIncludes() {
    return persistentCacheIncludes;
  }
  public void setPersistentCacheIncludes(ConfigNodePropertyArray persistentCacheIncludes) {
    this.persistentCacheIncludes = persistentCacheIncludes;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyDropDown getLeaseCheckMode() {
    return leaseCheckMode;
  }
  public void setLeaseCheckMode(ConfigNodePropertyDropDown leaseCheckMode) {
    this.leaseCheckMode = leaseCheckMode;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties = (OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties) o;
    return (this.mongouri == null ? orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.mongouri == null : this.mongouri.equals(orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.mongouri)) &&
        (this.db == null ? orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.db == null : this.db.equals(orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.db)) &&
        (this.socketKeepAlive == null ? orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.socketKeepAlive == null : this.socketKeepAlive.equals(orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.socketKeepAlive)) &&
        (this.cache == null ? orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.cache == null : this.cache.equals(orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.cache)) &&
        (this.nodeCachePercentage == null ? orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.nodeCachePercentage == null : this.nodeCachePercentage.equals(orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.nodeCachePercentage)) &&
        (this.prevDocCachePercentage == null ? orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.prevDocCachePercentage == null : this.prevDocCachePercentage.equals(orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.prevDocCachePercentage)) &&
        (this.childrenCachePercentage == null ? orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.childrenCachePercentage == null : this.childrenCachePercentage.equals(orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.childrenCachePercentage)) &&
        (this.diffCachePercentage == null ? orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.diffCachePercentage == null : this.diffCachePercentage.equals(orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.diffCachePercentage)) &&
        (this.cacheSegmentCount == null ? orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.cacheSegmentCount == null : this.cacheSegmentCount.equals(orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.cacheSegmentCount)) &&
        (this.cacheStackMoveDistance == null ? orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.cacheStackMoveDistance == null : this.cacheStackMoveDistance.equals(orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.cacheStackMoveDistance)) &&
        (this.blobCacheSize == null ? orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.blobCacheSize == null : this.blobCacheSize.equals(orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.blobCacheSize)) &&
        (this.persistentCache == null ? orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.persistentCache == null : this.persistentCache.equals(orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.persistentCache)) &&
        (this.journalCache == null ? orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.journalCache == null : this.journalCache.equals(orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.journalCache)) &&
        (this.customBlobStore == null ? orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.customBlobStore == null : this.customBlobStore.equals(orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.customBlobStore)) &&
        (this.journalGCInterval == null ? orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.journalGCInterval == null : this.journalGCInterval.equals(orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.journalGCInterval)) &&
        (this.journalGCMaxAge == null ? orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.journalGCMaxAge == null : this.journalGCMaxAge.equals(orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.journalGCMaxAge)) &&
        (this.prefetchExternalChanges == null ? orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.prefetchExternalChanges == null : this.prefetchExternalChanges.equals(orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.prefetchExternalChanges)) &&
        (this.role == null ? orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.role == null : this.role.equals(orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.role)) &&
        (this.versionGcMaxAgeInSecs == null ? orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.versionGcMaxAgeInSecs == null : this.versionGcMaxAgeInSecs.equals(orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.versionGcMaxAgeInSecs)) &&
        (this.versionGCExpression == null ? orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.versionGCExpression == null : this.versionGCExpression.equals(orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.versionGCExpression)) &&
        (this.versionGCTimeLimitInSecs == null ? orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.versionGCTimeLimitInSecs == null : this.versionGCTimeLimitInSecs.equals(orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.versionGCTimeLimitInSecs)) &&
        (this.blobGcMaxAgeInSecs == null ? orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.blobGcMaxAgeInSecs == null : this.blobGcMaxAgeInSecs.equals(orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.blobGcMaxAgeInSecs)) &&
        (this.blobTrackSnapshotIntervalInSecs == null ? orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.blobTrackSnapshotIntervalInSecs == null : this.blobTrackSnapshotIntervalInSecs.equals(orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.blobTrackSnapshotIntervalInSecs)) &&
        (this.repositoryHome == null ? orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.repositoryHome == null : this.repositoryHome.equals(orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.repositoryHome)) &&
        (this.maxReplicationLagInSecs == null ? orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.maxReplicationLagInSecs == null : this.maxReplicationLagInSecs.equals(orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.maxReplicationLagInSecs)) &&
        (this.documentStoreType == null ? orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.documentStoreType == null : this.documentStoreType.equals(orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.documentStoreType)) &&
        (this.bundlingDisabled == null ? orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.bundlingDisabled == null : this.bundlingDisabled.equals(orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.bundlingDisabled)) &&
        (this.updateLimit == null ? orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.updateLimit == null : this.updateLimit.equals(orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.updateLimit)) &&
        (this.persistentCacheIncludes == null ? orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.persistentCacheIncludes == null : this.persistentCacheIncludes.equals(orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.persistentCacheIncludes)) &&
        (this.leaseCheckMode == null ? orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.leaseCheckMode == null : this.leaseCheckMode.equals(orgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties.leaseCheckMode));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.mongouri == null ? 0: this.mongouri.hashCode());
    result = 31 * result + (this.db == null ? 0: this.db.hashCode());
    result = 31 * result + (this.socketKeepAlive == null ? 0: this.socketKeepAlive.hashCode());
    result = 31 * result + (this.cache == null ? 0: this.cache.hashCode());
    result = 31 * result + (this.nodeCachePercentage == null ? 0: this.nodeCachePercentage.hashCode());
    result = 31 * result + (this.prevDocCachePercentage == null ? 0: this.prevDocCachePercentage.hashCode());
    result = 31 * result + (this.childrenCachePercentage == null ? 0: this.childrenCachePercentage.hashCode());
    result = 31 * result + (this.diffCachePercentage == null ? 0: this.diffCachePercentage.hashCode());
    result = 31 * result + (this.cacheSegmentCount == null ? 0: this.cacheSegmentCount.hashCode());
    result = 31 * result + (this.cacheStackMoveDistance == null ? 0: this.cacheStackMoveDistance.hashCode());
    result = 31 * result + (this.blobCacheSize == null ? 0: this.blobCacheSize.hashCode());
    result = 31 * result + (this.persistentCache == null ? 0: this.persistentCache.hashCode());
    result = 31 * result + (this.journalCache == null ? 0: this.journalCache.hashCode());
    result = 31 * result + (this.customBlobStore == null ? 0: this.customBlobStore.hashCode());
    result = 31 * result + (this.journalGCInterval == null ? 0: this.journalGCInterval.hashCode());
    result = 31 * result + (this.journalGCMaxAge == null ? 0: this.journalGCMaxAge.hashCode());
    result = 31 * result + (this.prefetchExternalChanges == null ? 0: this.prefetchExternalChanges.hashCode());
    result = 31 * result + (this.role == null ? 0: this.role.hashCode());
    result = 31 * result + (this.versionGcMaxAgeInSecs == null ? 0: this.versionGcMaxAgeInSecs.hashCode());
    result = 31 * result + (this.versionGCExpression == null ? 0: this.versionGCExpression.hashCode());
    result = 31 * result + (this.versionGCTimeLimitInSecs == null ? 0: this.versionGCTimeLimitInSecs.hashCode());
    result = 31 * result + (this.blobGcMaxAgeInSecs == null ? 0: this.blobGcMaxAgeInSecs.hashCode());
    result = 31 * result + (this.blobTrackSnapshotIntervalInSecs == null ? 0: this.blobTrackSnapshotIntervalInSecs.hashCode());
    result = 31 * result + (this.repositoryHome == null ? 0: this.repositoryHome.hashCode());
    result = 31 * result + (this.maxReplicationLagInSecs == null ? 0: this.maxReplicationLagInSecs.hashCode());
    result = 31 * result + (this.documentStoreType == null ? 0: this.documentStoreType.hashCode());
    result = 31 * result + (this.bundlingDisabled == null ? 0: this.bundlingDisabled.hashCode());
    result = 31 * result + (this.updateLimit == null ? 0: this.updateLimit.hashCode());
    result = 31 * result + (this.persistentCacheIncludes == null ? 0: this.persistentCacheIncludes.hashCode());
    result = 31 * result + (this.leaseCheckMode == null ? 0: this.leaseCheckMode.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties {\n");
    
    sb.append("  mongouri: ").append(mongouri).append("\n");
    sb.append("  db: ").append(db).append("\n");
    sb.append("  socketKeepAlive: ").append(socketKeepAlive).append("\n");
    sb.append("  cache: ").append(cache).append("\n");
    sb.append("  nodeCachePercentage: ").append(nodeCachePercentage).append("\n");
    sb.append("  prevDocCachePercentage: ").append(prevDocCachePercentage).append("\n");
    sb.append("  childrenCachePercentage: ").append(childrenCachePercentage).append("\n");
    sb.append("  diffCachePercentage: ").append(diffCachePercentage).append("\n");
    sb.append("  cacheSegmentCount: ").append(cacheSegmentCount).append("\n");
    sb.append("  cacheStackMoveDistance: ").append(cacheStackMoveDistance).append("\n");
    sb.append("  blobCacheSize: ").append(blobCacheSize).append("\n");
    sb.append("  persistentCache: ").append(persistentCache).append("\n");
    sb.append("  journalCache: ").append(journalCache).append("\n");
    sb.append("  customBlobStore: ").append(customBlobStore).append("\n");
    sb.append("  journalGCInterval: ").append(journalGCInterval).append("\n");
    sb.append("  journalGCMaxAge: ").append(journalGCMaxAge).append("\n");
    sb.append("  prefetchExternalChanges: ").append(prefetchExternalChanges).append("\n");
    sb.append("  role: ").append(role).append("\n");
    sb.append("  versionGcMaxAgeInSecs: ").append(versionGcMaxAgeInSecs).append("\n");
    sb.append("  versionGCExpression: ").append(versionGCExpression).append("\n");
    sb.append("  versionGCTimeLimitInSecs: ").append(versionGCTimeLimitInSecs).append("\n");
    sb.append("  blobGcMaxAgeInSecs: ").append(blobGcMaxAgeInSecs).append("\n");
    sb.append("  blobTrackSnapshotIntervalInSecs: ").append(blobTrackSnapshotIntervalInSecs).append("\n");
    sb.append("  repositoryHome: ").append(repositoryHome).append("\n");
    sb.append("  maxReplicationLagInSecs: ").append(maxReplicationLagInSecs).append("\n");
    sb.append("  documentStoreType: ").append(documentStoreType).append("\n");
    sb.append("  bundlingDisabled: ").append(bundlingDisabled).append("\n");
    sb.append("  updateLimit: ").append(updateLimit).append("\n");
    sb.append("  persistentCacheIncludes: ").append(persistentCacheIncludes).append("\n");
    sb.append("  leaseCheckMode: ").append(leaseCheckMode).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
