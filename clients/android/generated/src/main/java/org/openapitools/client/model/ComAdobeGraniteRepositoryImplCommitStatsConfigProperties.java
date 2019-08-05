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
import org.openapitools.client.model.ConfigNodePropertyInteger;
import org.openapitools.client.model.ConfigNodePropertyString;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ComAdobeGraniteRepositoryImplCommitStatsConfigProperties {
  
  @SerializedName("enabled")
  private ConfigNodePropertyBoolean enabled = null;
  @SerializedName("intervalSeconds")
  private ConfigNodePropertyInteger intervalSeconds = null;
  @SerializedName("commitsPerIntervalThreshold")
  private ConfigNodePropertyInteger commitsPerIntervalThreshold = null;
  @SerializedName("maxLocationLength")
  private ConfigNodePropertyInteger maxLocationLength = null;
  @SerializedName("maxDetailsShown")
  private ConfigNodePropertyInteger maxDetailsShown = null;
  @SerializedName("minDetailsPercentage")
  private ConfigNodePropertyInteger minDetailsPercentage = null;
  @SerializedName("threadMatchers")
  private ConfigNodePropertyArray threadMatchers = null;
  @SerializedName("maxGreedyDepth")
  private ConfigNodePropertyInteger maxGreedyDepth = null;
  @SerializedName("greedyStackMatchers")
  private ConfigNodePropertyString greedyStackMatchers = null;
  @SerializedName("stackFilters")
  private ConfigNodePropertyArray stackFilters = null;
  @SerializedName("stackMatchers")
  private ConfigNodePropertyArray stackMatchers = null;
  @SerializedName("stackCategorizers")
  private ConfigNodePropertyArray stackCategorizers = null;
  @SerializedName("stackShorteners")
  private ConfigNodePropertyArray stackShorteners = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getEnabled() {
    return enabled;
  }
  public void setEnabled(ConfigNodePropertyBoolean enabled) {
    this.enabled = enabled;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getIntervalSeconds() {
    return intervalSeconds;
  }
  public void setIntervalSeconds(ConfigNodePropertyInteger intervalSeconds) {
    this.intervalSeconds = intervalSeconds;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getCommitsPerIntervalThreshold() {
    return commitsPerIntervalThreshold;
  }
  public void setCommitsPerIntervalThreshold(ConfigNodePropertyInteger commitsPerIntervalThreshold) {
    this.commitsPerIntervalThreshold = commitsPerIntervalThreshold;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getMaxLocationLength() {
    return maxLocationLength;
  }
  public void setMaxLocationLength(ConfigNodePropertyInteger maxLocationLength) {
    this.maxLocationLength = maxLocationLength;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getMaxDetailsShown() {
    return maxDetailsShown;
  }
  public void setMaxDetailsShown(ConfigNodePropertyInteger maxDetailsShown) {
    this.maxDetailsShown = maxDetailsShown;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getMinDetailsPercentage() {
    return minDetailsPercentage;
  }
  public void setMinDetailsPercentage(ConfigNodePropertyInteger minDetailsPercentage) {
    this.minDetailsPercentage = minDetailsPercentage;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getThreadMatchers() {
    return threadMatchers;
  }
  public void setThreadMatchers(ConfigNodePropertyArray threadMatchers) {
    this.threadMatchers = threadMatchers;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getMaxGreedyDepth() {
    return maxGreedyDepth;
  }
  public void setMaxGreedyDepth(ConfigNodePropertyInteger maxGreedyDepth) {
    this.maxGreedyDepth = maxGreedyDepth;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getGreedyStackMatchers() {
    return greedyStackMatchers;
  }
  public void setGreedyStackMatchers(ConfigNodePropertyString greedyStackMatchers) {
    this.greedyStackMatchers = greedyStackMatchers;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getStackFilters() {
    return stackFilters;
  }
  public void setStackFilters(ConfigNodePropertyArray stackFilters) {
    this.stackFilters = stackFilters;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getStackMatchers() {
    return stackMatchers;
  }
  public void setStackMatchers(ConfigNodePropertyArray stackMatchers) {
    this.stackMatchers = stackMatchers;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getStackCategorizers() {
    return stackCategorizers;
  }
  public void setStackCategorizers(ConfigNodePropertyArray stackCategorizers) {
    this.stackCategorizers = stackCategorizers;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getStackShorteners() {
    return stackShorteners;
  }
  public void setStackShorteners(ConfigNodePropertyArray stackShorteners) {
    this.stackShorteners = stackShorteners;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeGraniteRepositoryImplCommitStatsConfigProperties comAdobeGraniteRepositoryImplCommitStatsConfigProperties = (ComAdobeGraniteRepositoryImplCommitStatsConfigProperties) o;
    return (this.enabled == null ? comAdobeGraniteRepositoryImplCommitStatsConfigProperties.enabled == null : this.enabled.equals(comAdobeGraniteRepositoryImplCommitStatsConfigProperties.enabled)) &&
        (this.intervalSeconds == null ? comAdobeGraniteRepositoryImplCommitStatsConfigProperties.intervalSeconds == null : this.intervalSeconds.equals(comAdobeGraniteRepositoryImplCommitStatsConfigProperties.intervalSeconds)) &&
        (this.commitsPerIntervalThreshold == null ? comAdobeGraniteRepositoryImplCommitStatsConfigProperties.commitsPerIntervalThreshold == null : this.commitsPerIntervalThreshold.equals(comAdobeGraniteRepositoryImplCommitStatsConfigProperties.commitsPerIntervalThreshold)) &&
        (this.maxLocationLength == null ? comAdobeGraniteRepositoryImplCommitStatsConfigProperties.maxLocationLength == null : this.maxLocationLength.equals(comAdobeGraniteRepositoryImplCommitStatsConfigProperties.maxLocationLength)) &&
        (this.maxDetailsShown == null ? comAdobeGraniteRepositoryImplCommitStatsConfigProperties.maxDetailsShown == null : this.maxDetailsShown.equals(comAdobeGraniteRepositoryImplCommitStatsConfigProperties.maxDetailsShown)) &&
        (this.minDetailsPercentage == null ? comAdobeGraniteRepositoryImplCommitStatsConfigProperties.minDetailsPercentage == null : this.minDetailsPercentage.equals(comAdobeGraniteRepositoryImplCommitStatsConfigProperties.minDetailsPercentage)) &&
        (this.threadMatchers == null ? comAdobeGraniteRepositoryImplCommitStatsConfigProperties.threadMatchers == null : this.threadMatchers.equals(comAdobeGraniteRepositoryImplCommitStatsConfigProperties.threadMatchers)) &&
        (this.maxGreedyDepth == null ? comAdobeGraniteRepositoryImplCommitStatsConfigProperties.maxGreedyDepth == null : this.maxGreedyDepth.equals(comAdobeGraniteRepositoryImplCommitStatsConfigProperties.maxGreedyDepth)) &&
        (this.greedyStackMatchers == null ? comAdobeGraniteRepositoryImplCommitStatsConfigProperties.greedyStackMatchers == null : this.greedyStackMatchers.equals(comAdobeGraniteRepositoryImplCommitStatsConfigProperties.greedyStackMatchers)) &&
        (this.stackFilters == null ? comAdobeGraniteRepositoryImplCommitStatsConfigProperties.stackFilters == null : this.stackFilters.equals(comAdobeGraniteRepositoryImplCommitStatsConfigProperties.stackFilters)) &&
        (this.stackMatchers == null ? comAdobeGraniteRepositoryImplCommitStatsConfigProperties.stackMatchers == null : this.stackMatchers.equals(comAdobeGraniteRepositoryImplCommitStatsConfigProperties.stackMatchers)) &&
        (this.stackCategorizers == null ? comAdobeGraniteRepositoryImplCommitStatsConfigProperties.stackCategorizers == null : this.stackCategorizers.equals(comAdobeGraniteRepositoryImplCommitStatsConfigProperties.stackCategorizers)) &&
        (this.stackShorteners == null ? comAdobeGraniteRepositoryImplCommitStatsConfigProperties.stackShorteners == null : this.stackShorteners.equals(comAdobeGraniteRepositoryImplCommitStatsConfigProperties.stackShorteners));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.enabled == null ? 0: this.enabled.hashCode());
    result = 31 * result + (this.intervalSeconds == null ? 0: this.intervalSeconds.hashCode());
    result = 31 * result + (this.commitsPerIntervalThreshold == null ? 0: this.commitsPerIntervalThreshold.hashCode());
    result = 31 * result + (this.maxLocationLength == null ? 0: this.maxLocationLength.hashCode());
    result = 31 * result + (this.maxDetailsShown == null ? 0: this.maxDetailsShown.hashCode());
    result = 31 * result + (this.minDetailsPercentage == null ? 0: this.minDetailsPercentage.hashCode());
    result = 31 * result + (this.threadMatchers == null ? 0: this.threadMatchers.hashCode());
    result = 31 * result + (this.maxGreedyDepth == null ? 0: this.maxGreedyDepth.hashCode());
    result = 31 * result + (this.greedyStackMatchers == null ? 0: this.greedyStackMatchers.hashCode());
    result = 31 * result + (this.stackFilters == null ? 0: this.stackFilters.hashCode());
    result = 31 * result + (this.stackMatchers == null ? 0: this.stackMatchers.hashCode());
    result = 31 * result + (this.stackCategorizers == null ? 0: this.stackCategorizers.hashCode());
    result = 31 * result + (this.stackShorteners == null ? 0: this.stackShorteners.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeGraniteRepositoryImplCommitStatsConfigProperties {\n");
    
    sb.append("  enabled: ").append(enabled).append("\n");
    sb.append("  intervalSeconds: ").append(intervalSeconds).append("\n");
    sb.append("  commitsPerIntervalThreshold: ").append(commitsPerIntervalThreshold).append("\n");
    sb.append("  maxLocationLength: ").append(maxLocationLength).append("\n");
    sb.append("  maxDetailsShown: ").append(maxDetailsShown).append("\n");
    sb.append("  minDetailsPercentage: ").append(minDetailsPercentage).append("\n");
    sb.append("  threadMatchers: ").append(threadMatchers).append("\n");
    sb.append("  maxGreedyDepth: ").append(maxGreedyDepth).append("\n");
    sb.append("  greedyStackMatchers: ").append(greedyStackMatchers).append("\n");
    sb.append("  stackFilters: ").append(stackFilters).append("\n");
    sb.append("  stackMatchers: ").append(stackMatchers).append("\n");
    sb.append("  stackCategorizers: ").append(stackCategorizers).append("\n");
    sb.append("  stackShorteners: ").append(stackShorteners).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}