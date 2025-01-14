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
import org.openapitools.client.model.ConfigNodePropertyInteger;
import org.openapitools.client.model.ConfigNodePropertyString;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties {
  
  @SerializedName("event.topics")
  private ConfigNodePropertyString eventTopics = null;
  @SerializedName("event.filter")
  private ConfigNodePropertyString eventFilter = null;
  @SerializedName("translate.listener.type")
  private ConfigNodePropertyArray translateListenerType = null;
  @SerializedName("translate.property.list")
  private ConfigNodePropertyArray translatePropertyList = null;
  @SerializedName("poolSize")
  private ConfigNodePropertyInteger poolSize = null;
  @SerializedName("maxPoolSize")
  private ConfigNodePropertyInteger maxPoolSize = null;
  @SerializedName("queueSize")
  private ConfigNodePropertyInteger queueSize = null;
  @SerializedName("keepAliveTime")
  private ConfigNodePropertyInteger keepAliveTime = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getEventTopics() {
    return eventTopics;
  }
  public void setEventTopics(ConfigNodePropertyString eventTopics) {
    this.eventTopics = eventTopics;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getEventFilter() {
    return eventFilter;
  }
  public void setEventFilter(ConfigNodePropertyString eventFilter) {
    this.eventFilter = eventFilter;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getTranslateListenerType() {
    return translateListenerType;
  }
  public void setTranslateListenerType(ConfigNodePropertyArray translateListenerType) {
    this.translateListenerType = translateListenerType;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getTranslatePropertyList() {
    return translatePropertyList;
  }
  public void setTranslatePropertyList(ConfigNodePropertyArray translatePropertyList) {
    this.translatePropertyList = translatePropertyList;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getPoolSize() {
    return poolSize;
  }
  public void setPoolSize(ConfigNodePropertyInteger poolSize) {
    this.poolSize = poolSize;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getMaxPoolSize() {
    return maxPoolSize;
  }
  public void setMaxPoolSize(ConfigNodePropertyInteger maxPoolSize) {
    this.maxPoolSize = maxPoolSize;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getQueueSize() {
    return queueSize;
  }
  public void setQueueSize(ConfigNodePropertyInteger queueSize) {
    this.queueSize = queueSize;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getKeepAliveTime() {
    return keepAliveTime;
  }
  public void setKeepAliveTime(ConfigNodePropertyInteger keepAliveTime) {
    this.keepAliveTime = keepAliveTime;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties comAdobeCqSocialTranslationImplUGCLanguageDetectorProperties = (ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties) o;
    return (this.eventTopics == null ? comAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.eventTopics == null : this.eventTopics.equals(comAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.eventTopics)) &&
        (this.eventFilter == null ? comAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.eventFilter == null : this.eventFilter.equals(comAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.eventFilter)) &&
        (this.translateListenerType == null ? comAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.translateListenerType == null : this.translateListenerType.equals(comAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.translateListenerType)) &&
        (this.translatePropertyList == null ? comAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.translatePropertyList == null : this.translatePropertyList.equals(comAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.translatePropertyList)) &&
        (this.poolSize == null ? comAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.poolSize == null : this.poolSize.equals(comAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.poolSize)) &&
        (this.maxPoolSize == null ? comAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.maxPoolSize == null : this.maxPoolSize.equals(comAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.maxPoolSize)) &&
        (this.queueSize == null ? comAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.queueSize == null : this.queueSize.equals(comAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.queueSize)) &&
        (this.keepAliveTime == null ? comAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.keepAliveTime == null : this.keepAliveTime.equals(comAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.keepAliveTime));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.eventTopics == null ? 0: this.eventTopics.hashCode());
    result = 31 * result + (this.eventFilter == null ? 0: this.eventFilter.hashCode());
    result = 31 * result + (this.translateListenerType == null ? 0: this.translateListenerType.hashCode());
    result = 31 * result + (this.translatePropertyList == null ? 0: this.translatePropertyList.hashCode());
    result = 31 * result + (this.poolSize == null ? 0: this.poolSize.hashCode());
    result = 31 * result + (this.maxPoolSize == null ? 0: this.maxPoolSize.hashCode());
    result = 31 * result + (this.queueSize == null ? 0: this.queueSize.hashCode());
    result = 31 * result + (this.keepAliveTime == null ? 0: this.keepAliveTime.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties {\n");
    
    sb.append("  eventTopics: ").append(eventTopics).append("\n");
    sb.append("  eventFilter: ").append(eventFilter).append("\n");
    sb.append("  translateListenerType: ").append(translateListenerType).append("\n");
    sb.append("  translatePropertyList: ").append(translatePropertyList).append("\n");
    sb.append("  poolSize: ").append(poolSize).append("\n");
    sb.append("  maxPoolSize: ").append(maxPoolSize).append("\n");
    sb.append("  queueSize: ").append(queueSize).append("\n");
    sb.append("  keepAliveTime: ").append(keepAliveTime).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
