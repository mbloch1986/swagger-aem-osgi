package org.openapitools.model;

import java.util.Objects;
import java.util.ArrayList;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import org.openapitools.model.ConfigNodePropertyBoolean;
import org.openapitools.model.ConfigNodePropertyInteger;
import org.openapitools.model.ConfigNodePropertyString;
import javax.validation.constraints.*;
import io.swagger.annotations.*;


@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaResteasyServerCodegen", date = "2019-08-05T00:59:30.156Z[GMT]")
public class OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties   {
  
  private ConfigNodePropertyBoolean disabled = null;
  private ConfigNodePropertyBoolean debug = null;
  private ConfigNodePropertyString localIndexDir = null;
  private ConfigNodePropertyBoolean enableOpenIndexAsync = null;
  private ConfigNodePropertyInteger threadPoolSize = null;
  private ConfigNodePropertyBoolean prefetchIndexFiles = null;
  private ConfigNodePropertyInteger extractedTextCacheSizeInMB = null;
  private ConfigNodePropertyInteger extractedTextCacheExpiryInSecs = null;
  private ConfigNodePropertyBoolean alwaysUsePreExtractedCache = null;
  private ConfigNodePropertyInteger booleanClauseLimit = null;
  private ConfigNodePropertyBoolean enableHybridIndexing = null;
  private ConfigNodePropertyInteger hybridQueueSize = null;
  private ConfigNodePropertyBoolean disableStoredIndexDefinition = null;
  private ConfigNodePropertyBoolean deletedBlobsCollectionEnabled = null;
  private ConfigNodePropertyInteger propIndexCleanerIntervalInSecs = null;
  private ConfigNodePropertyBoolean enableSingleBlobIndexFiles = null;

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("disabled")
  public ConfigNodePropertyBoolean getDisabled() {
    return disabled;
  }
  public void setDisabled(ConfigNodePropertyBoolean disabled) {
    this.disabled = disabled;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("debug")
  public ConfigNodePropertyBoolean getDebug() {
    return debug;
  }
  public void setDebug(ConfigNodePropertyBoolean debug) {
    this.debug = debug;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("localIndexDir")
  public ConfigNodePropertyString getLocalIndexDir() {
    return localIndexDir;
  }
  public void setLocalIndexDir(ConfigNodePropertyString localIndexDir) {
    this.localIndexDir = localIndexDir;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("enableOpenIndexAsync")
  public ConfigNodePropertyBoolean getEnableOpenIndexAsync() {
    return enableOpenIndexAsync;
  }
  public void setEnableOpenIndexAsync(ConfigNodePropertyBoolean enableOpenIndexAsync) {
    this.enableOpenIndexAsync = enableOpenIndexAsync;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("threadPoolSize")
  public ConfigNodePropertyInteger getThreadPoolSize() {
    return threadPoolSize;
  }
  public void setThreadPoolSize(ConfigNodePropertyInteger threadPoolSize) {
    this.threadPoolSize = threadPoolSize;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("prefetchIndexFiles")
  public ConfigNodePropertyBoolean getPrefetchIndexFiles() {
    return prefetchIndexFiles;
  }
  public void setPrefetchIndexFiles(ConfigNodePropertyBoolean prefetchIndexFiles) {
    this.prefetchIndexFiles = prefetchIndexFiles;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("extractedTextCacheSizeInMB")
  public ConfigNodePropertyInteger getExtractedTextCacheSizeInMB() {
    return extractedTextCacheSizeInMB;
  }
  public void setExtractedTextCacheSizeInMB(ConfigNodePropertyInteger extractedTextCacheSizeInMB) {
    this.extractedTextCacheSizeInMB = extractedTextCacheSizeInMB;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("extractedTextCacheExpiryInSecs")
  public ConfigNodePropertyInteger getExtractedTextCacheExpiryInSecs() {
    return extractedTextCacheExpiryInSecs;
  }
  public void setExtractedTextCacheExpiryInSecs(ConfigNodePropertyInteger extractedTextCacheExpiryInSecs) {
    this.extractedTextCacheExpiryInSecs = extractedTextCacheExpiryInSecs;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("alwaysUsePreExtractedCache")
  public ConfigNodePropertyBoolean getAlwaysUsePreExtractedCache() {
    return alwaysUsePreExtractedCache;
  }
  public void setAlwaysUsePreExtractedCache(ConfigNodePropertyBoolean alwaysUsePreExtractedCache) {
    this.alwaysUsePreExtractedCache = alwaysUsePreExtractedCache;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("booleanClauseLimit")
  public ConfigNodePropertyInteger getBooleanClauseLimit() {
    return booleanClauseLimit;
  }
  public void setBooleanClauseLimit(ConfigNodePropertyInteger booleanClauseLimit) {
    this.booleanClauseLimit = booleanClauseLimit;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("enableHybridIndexing")
  public ConfigNodePropertyBoolean getEnableHybridIndexing() {
    return enableHybridIndexing;
  }
  public void setEnableHybridIndexing(ConfigNodePropertyBoolean enableHybridIndexing) {
    this.enableHybridIndexing = enableHybridIndexing;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("hybridQueueSize")
  public ConfigNodePropertyInteger getHybridQueueSize() {
    return hybridQueueSize;
  }
  public void setHybridQueueSize(ConfigNodePropertyInteger hybridQueueSize) {
    this.hybridQueueSize = hybridQueueSize;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("disableStoredIndexDefinition")
  public ConfigNodePropertyBoolean getDisableStoredIndexDefinition() {
    return disableStoredIndexDefinition;
  }
  public void setDisableStoredIndexDefinition(ConfigNodePropertyBoolean disableStoredIndexDefinition) {
    this.disableStoredIndexDefinition = disableStoredIndexDefinition;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("deletedBlobsCollectionEnabled")
  public ConfigNodePropertyBoolean getDeletedBlobsCollectionEnabled() {
    return deletedBlobsCollectionEnabled;
  }
  public void setDeletedBlobsCollectionEnabled(ConfigNodePropertyBoolean deletedBlobsCollectionEnabled) {
    this.deletedBlobsCollectionEnabled = deletedBlobsCollectionEnabled;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("propIndexCleanerIntervalInSecs")
  public ConfigNodePropertyInteger getPropIndexCleanerIntervalInSecs() {
    return propIndexCleanerIntervalInSecs;
  }
  public void setPropIndexCleanerIntervalInSecs(ConfigNodePropertyInteger propIndexCleanerIntervalInSecs) {
    this.propIndexCleanerIntervalInSecs = propIndexCleanerIntervalInSecs;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("enableSingleBlobIndexFiles")
  public ConfigNodePropertyBoolean getEnableSingleBlobIndexFiles() {
    return enableSingleBlobIndexFiles;
  }
  public void setEnableSingleBlobIndexFiles(ConfigNodePropertyBoolean enableSingleBlobIndexFiles) {
    this.enableSingleBlobIndexFiles = enableSingleBlobIndexFiles;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties = (OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties) o;
    return Objects.equals(disabled, orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.disabled) &&
        Objects.equals(debug, orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.debug) &&
        Objects.equals(localIndexDir, orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.localIndexDir) &&
        Objects.equals(enableOpenIndexAsync, orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.enableOpenIndexAsync) &&
        Objects.equals(threadPoolSize, orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.threadPoolSize) &&
        Objects.equals(prefetchIndexFiles, orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.prefetchIndexFiles) &&
        Objects.equals(extractedTextCacheSizeInMB, orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.extractedTextCacheSizeInMB) &&
        Objects.equals(extractedTextCacheExpiryInSecs, orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.extractedTextCacheExpiryInSecs) &&
        Objects.equals(alwaysUsePreExtractedCache, orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.alwaysUsePreExtractedCache) &&
        Objects.equals(booleanClauseLimit, orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.booleanClauseLimit) &&
        Objects.equals(enableHybridIndexing, orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.enableHybridIndexing) &&
        Objects.equals(hybridQueueSize, orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.hybridQueueSize) &&
        Objects.equals(disableStoredIndexDefinition, orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.disableStoredIndexDefinition) &&
        Objects.equals(deletedBlobsCollectionEnabled, orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.deletedBlobsCollectionEnabled) &&
        Objects.equals(propIndexCleanerIntervalInSecs, orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.propIndexCleanerIntervalInSecs) &&
        Objects.equals(enableSingleBlobIndexFiles, orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.enableSingleBlobIndexFiles);
  }

  @Override
  public int hashCode() {
    return Objects.hash(disabled, debug, localIndexDir, enableOpenIndexAsync, threadPoolSize, prefetchIndexFiles, extractedTextCacheSizeInMB, extractedTextCacheExpiryInSecs, alwaysUsePreExtractedCache, booleanClauseLimit, enableHybridIndexing, hybridQueueSize, disableStoredIndexDefinition, deletedBlobsCollectionEnabled, propIndexCleanerIntervalInSecs, enableSingleBlobIndexFiles);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties {\n");
    
    sb.append("    disabled: ").append(toIndentedString(disabled)).append("\n");
    sb.append("    debug: ").append(toIndentedString(debug)).append("\n");
    sb.append("    localIndexDir: ").append(toIndentedString(localIndexDir)).append("\n");
    sb.append("    enableOpenIndexAsync: ").append(toIndentedString(enableOpenIndexAsync)).append("\n");
    sb.append("    threadPoolSize: ").append(toIndentedString(threadPoolSize)).append("\n");
    sb.append("    prefetchIndexFiles: ").append(toIndentedString(prefetchIndexFiles)).append("\n");
    sb.append("    extractedTextCacheSizeInMB: ").append(toIndentedString(extractedTextCacheSizeInMB)).append("\n");
    sb.append("    extractedTextCacheExpiryInSecs: ").append(toIndentedString(extractedTextCacheExpiryInSecs)).append("\n");
    sb.append("    alwaysUsePreExtractedCache: ").append(toIndentedString(alwaysUsePreExtractedCache)).append("\n");
    sb.append("    booleanClauseLimit: ").append(toIndentedString(booleanClauseLimit)).append("\n");
    sb.append("    enableHybridIndexing: ").append(toIndentedString(enableHybridIndexing)).append("\n");
    sb.append("    hybridQueueSize: ").append(toIndentedString(hybridQueueSize)).append("\n");
    sb.append("    disableStoredIndexDefinition: ").append(toIndentedString(disableStoredIndexDefinition)).append("\n");
    sb.append("    deletedBlobsCollectionEnabled: ").append(toIndentedString(deletedBlobsCollectionEnabled)).append("\n");
    sb.append("    propIndexCleanerIntervalInSecs: ").append(toIndentedString(propIndexCleanerIntervalInSecs)).append("\n");
    sb.append("    enableSingleBlobIndexFiles: ").append(toIndentedString(enableSingleBlobIndexFiles)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
