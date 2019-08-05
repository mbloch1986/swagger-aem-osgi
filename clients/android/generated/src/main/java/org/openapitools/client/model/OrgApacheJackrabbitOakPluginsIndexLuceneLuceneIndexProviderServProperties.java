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

import org.openapitools.client.model.ConfigNodePropertyBoolean;
import org.openapitools.client.model.ConfigNodePropertyInteger;
import org.openapitools.client.model.ConfigNodePropertyString;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties {
  
  @SerializedName("disabled")
  private ConfigNodePropertyBoolean disabled = null;
  @SerializedName("debug")
  private ConfigNodePropertyBoolean debug = null;
  @SerializedName("localIndexDir")
  private ConfigNodePropertyString localIndexDir = null;
  @SerializedName("enableOpenIndexAsync")
  private ConfigNodePropertyBoolean enableOpenIndexAsync = null;
  @SerializedName("threadPoolSize")
  private ConfigNodePropertyInteger threadPoolSize = null;
  @SerializedName("prefetchIndexFiles")
  private ConfigNodePropertyBoolean prefetchIndexFiles = null;
  @SerializedName("extractedTextCacheSizeInMB")
  private ConfigNodePropertyInteger extractedTextCacheSizeInMB = null;
  @SerializedName("extractedTextCacheExpiryInSecs")
  private ConfigNodePropertyInteger extractedTextCacheExpiryInSecs = null;
  @SerializedName("alwaysUsePreExtractedCache")
  private ConfigNodePropertyBoolean alwaysUsePreExtractedCache = null;
  @SerializedName("booleanClauseLimit")
  private ConfigNodePropertyInteger booleanClauseLimit = null;
  @SerializedName("enableHybridIndexing")
  private ConfigNodePropertyBoolean enableHybridIndexing = null;
  @SerializedName("hybridQueueSize")
  private ConfigNodePropertyInteger hybridQueueSize = null;
  @SerializedName("disableStoredIndexDefinition")
  private ConfigNodePropertyBoolean disableStoredIndexDefinition = null;
  @SerializedName("deletedBlobsCollectionEnabled")
  private ConfigNodePropertyBoolean deletedBlobsCollectionEnabled = null;
  @SerializedName("propIndexCleanerIntervalInSecs")
  private ConfigNodePropertyInteger propIndexCleanerIntervalInSecs = null;
  @SerializedName("enableSingleBlobIndexFiles")
  private ConfigNodePropertyBoolean enableSingleBlobIndexFiles = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getDisabled() {
    return disabled;
  }
  public void setDisabled(ConfigNodePropertyBoolean disabled) {
    this.disabled = disabled;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getDebug() {
    return debug;
  }
  public void setDebug(ConfigNodePropertyBoolean debug) {
    this.debug = debug;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getLocalIndexDir() {
    return localIndexDir;
  }
  public void setLocalIndexDir(ConfigNodePropertyString localIndexDir) {
    this.localIndexDir = localIndexDir;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getEnableOpenIndexAsync() {
    return enableOpenIndexAsync;
  }
  public void setEnableOpenIndexAsync(ConfigNodePropertyBoolean enableOpenIndexAsync) {
    this.enableOpenIndexAsync = enableOpenIndexAsync;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getThreadPoolSize() {
    return threadPoolSize;
  }
  public void setThreadPoolSize(ConfigNodePropertyInteger threadPoolSize) {
    this.threadPoolSize = threadPoolSize;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getPrefetchIndexFiles() {
    return prefetchIndexFiles;
  }
  public void setPrefetchIndexFiles(ConfigNodePropertyBoolean prefetchIndexFiles) {
    this.prefetchIndexFiles = prefetchIndexFiles;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getExtractedTextCacheSizeInMB() {
    return extractedTextCacheSizeInMB;
  }
  public void setExtractedTextCacheSizeInMB(ConfigNodePropertyInteger extractedTextCacheSizeInMB) {
    this.extractedTextCacheSizeInMB = extractedTextCacheSizeInMB;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getExtractedTextCacheExpiryInSecs() {
    return extractedTextCacheExpiryInSecs;
  }
  public void setExtractedTextCacheExpiryInSecs(ConfigNodePropertyInteger extractedTextCacheExpiryInSecs) {
    this.extractedTextCacheExpiryInSecs = extractedTextCacheExpiryInSecs;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getAlwaysUsePreExtractedCache() {
    return alwaysUsePreExtractedCache;
  }
  public void setAlwaysUsePreExtractedCache(ConfigNodePropertyBoolean alwaysUsePreExtractedCache) {
    this.alwaysUsePreExtractedCache = alwaysUsePreExtractedCache;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getBooleanClauseLimit() {
    return booleanClauseLimit;
  }
  public void setBooleanClauseLimit(ConfigNodePropertyInteger booleanClauseLimit) {
    this.booleanClauseLimit = booleanClauseLimit;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getEnableHybridIndexing() {
    return enableHybridIndexing;
  }
  public void setEnableHybridIndexing(ConfigNodePropertyBoolean enableHybridIndexing) {
    this.enableHybridIndexing = enableHybridIndexing;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getHybridQueueSize() {
    return hybridQueueSize;
  }
  public void setHybridQueueSize(ConfigNodePropertyInteger hybridQueueSize) {
    this.hybridQueueSize = hybridQueueSize;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getDisableStoredIndexDefinition() {
    return disableStoredIndexDefinition;
  }
  public void setDisableStoredIndexDefinition(ConfigNodePropertyBoolean disableStoredIndexDefinition) {
    this.disableStoredIndexDefinition = disableStoredIndexDefinition;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getDeletedBlobsCollectionEnabled() {
    return deletedBlobsCollectionEnabled;
  }
  public void setDeletedBlobsCollectionEnabled(ConfigNodePropertyBoolean deletedBlobsCollectionEnabled) {
    this.deletedBlobsCollectionEnabled = deletedBlobsCollectionEnabled;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getPropIndexCleanerIntervalInSecs() {
    return propIndexCleanerIntervalInSecs;
  }
  public void setPropIndexCleanerIntervalInSecs(ConfigNodePropertyInteger propIndexCleanerIntervalInSecs) {
    this.propIndexCleanerIntervalInSecs = propIndexCleanerIntervalInSecs;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getEnableSingleBlobIndexFiles() {
    return enableSingleBlobIndexFiles;
  }
  public void setEnableSingleBlobIndexFiles(ConfigNodePropertyBoolean enableSingleBlobIndexFiles) {
    this.enableSingleBlobIndexFiles = enableSingleBlobIndexFiles;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties = (OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties) o;
    return (this.disabled == null ? orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.disabled == null : this.disabled.equals(orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.disabled)) &&
        (this.debug == null ? orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.debug == null : this.debug.equals(orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.debug)) &&
        (this.localIndexDir == null ? orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.localIndexDir == null : this.localIndexDir.equals(orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.localIndexDir)) &&
        (this.enableOpenIndexAsync == null ? orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.enableOpenIndexAsync == null : this.enableOpenIndexAsync.equals(orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.enableOpenIndexAsync)) &&
        (this.threadPoolSize == null ? orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.threadPoolSize == null : this.threadPoolSize.equals(orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.threadPoolSize)) &&
        (this.prefetchIndexFiles == null ? orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.prefetchIndexFiles == null : this.prefetchIndexFiles.equals(orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.prefetchIndexFiles)) &&
        (this.extractedTextCacheSizeInMB == null ? orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.extractedTextCacheSizeInMB == null : this.extractedTextCacheSizeInMB.equals(orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.extractedTextCacheSizeInMB)) &&
        (this.extractedTextCacheExpiryInSecs == null ? orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.extractedTextCacheExpiryInSecs == null : this.extractedTextCacheExpiryInSecs.equals(orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.extractedTextCacheExpiryInSecs)) &&
        (this.alwaysUsePreExtractedCache == null ? orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.alwaysUsePreExtractedCache == null : this.alwaysUsePreExtractedCache.equals(orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.alwaysUsePreExtractedCache)) &&
        (this.booleanClauseLimit == null ? orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.booleanClauseLimit == null : this.booleanClauseLimit.equals(orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.booleanClauseLimit)) &&
        (this.enableHybridIndexing == null ? orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.enableHybridIndexing == null : this.enableHybridIndexing.equals(orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.enableHybridIndexing)) &&
        (this.hybridQueueSize == null ? orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.hybridQueueSize == null : this.hybridQueueSize.equals(orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.hybridQueueSize)) &&
        (this.disableStoredIndexDefinition == null ? orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.disableStoredIndexDefinition == null : this.disableStoredIndexDefinition.equals(orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.disableStoredIndexDefinition)) &&
        (this.deletedBlobsCollectionEnabled == null ? orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.deletedBlobsCollectionEnabled == null : this.deletedBlobsCollectionEnabled.equals(orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.deletedBlobsCollectionEnabled)) &&
        (this.propIndexCleanerIntervalInSecs == null ? orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.propIndexCleanerIntervalInSecs == null : this.propIndexCleanerIntervalInSecs.equals(orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.propIndexCleanerIntervalInSecs)) &&
        (this.enableSingleBlobIndexFiles == null ? orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.enableSingleBlobIndexFiles == null : this.enableSingleBlobIndexFiles.equals(orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.enableSingleBlobIndexFiles));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.disabled == null ? 0: this.disabled.hashCode());
    result = 31 * result + (this.debug == null ? 0: this.debug.hashCode());
    result = 31 * result + (this.localIndexDir == null ? 0: this.localIndexDir.hashCode());
    result = 31 * result + (this.enableOpenIndexAsync == null ? 0: this.enableOpenIndexAsync.hashCode());
    result = 31 * result + (this.threadPoolSize == null ? 0: this.threadPoolSize.hashCode());
    result = 31 * result + (this.prefetchIndexFiles == null ? 0: this.prefetchIndexFiles.hashCode());
    result = 31 * result + (this.extractedTextCacheSizeInMB == null ? 0: this.extractedTextCacheSizeInMB.hashCode());
    result = 31 * result + (this.extractedTextCacheExpiryInSecs == null ? 0: this.extractedTextCacheExpiryInSecs.hashCode());
    result = 31 * result + (this.alwaysUsePreExtractedCache == null ? 0: this.alwaysUsePreExtractedCache.hashCode());
    result = 31 * result + (this.booleanClauseLimit == null ? 0: this.booleanClauseLimit.hashCode());
    result = 31 * result + (this.enableHybridIndexing == null ? 0: this.enableHybridIndexing.hashCode());
    result = 31 * result + (this.hybridQueueSize == null ? 0: this.hybridQueueSize.hashCode());
    result = 31 * result + (this.disableStoredIndexDefinition == null ? 0: this.disableStoredIndexDefinition.hashCode());
    result = 31 * result + (this.deletedBlobsCollectionEnabled == null ? 0: this.deletedBlobsCollectionEnabled.hashCode());
    result = 31 * result + (this.propIndexCleanerIntervalInSecs == null ? 0: this.propIndexCleanerIntervalInSecs.hashCode());
    result = 31 * result + (this.enableSingleBlobIndexFiles == null ? 0: this.enableSingleBlobIndexFiles.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties {\n");
    
    sb.append("  disabled: ").append(disabled).append("\n");
    sb.append("  debug: ").append(debug).append("\n");
    sb.append("  localIndexDir: ").append(localIndexDir).append("\n");
    sb.append("  enableOpenIndexAsync: ").append(enableOpenIndexAsync).append("\n");
    sb.append("  threadPoolSize: ").append(threadPoolSize).append("\n");
    sb.append("  prefetchIndexFiles: ").append(prefetchIndexFiles).append("\n");
    sb.append("  extractedTextCacheSizeInMB: ").append(extractedTextCacheSizeInMB).append("\n");
    sb.append("  extractedTextCacheExpiryInSecs: ").append(extractedTextCacheExpiryInSecs).append("\n");
    sb.append("  alwaysUsePreExtractedCache: ").append(alwaysUsePreExtractedCache).append("\n");
    sb.append("  booleanClauseLimit: ").append(booleanClauseLimit).append("\n");
    sb.append("  enableHybridIndexing: ").append(enableHybridIndexing).append("\n");
    sb.append("  hybridQueueSize: ").append(hybridQueueSize).append("\n");
    sb.append("  disableStoredIndexDefinition: ").append(disableStoredIndexDefinition).append("\n");
    sb.append("  deletedBlobsCollectionEnabled: ").append(deletedBlobsCollectionEnabled).append("\n");
    sb.append("  propIndexCleanerIntervalInSecs: ").append(propIndexCleanerIntervalInSecs).append("\n");
    sb.append("  enableSingleBlobIndexFiles: ").append(enableSingleBlobIndexFiles).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}