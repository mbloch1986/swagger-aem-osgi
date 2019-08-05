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
import org.openapitools.client.model.ConfigNodePropertyFloat;
import org.openapitools.client.model.ConfigNodePropertyInteger;
import org.openapitools.client.model.ConfigNodePropertyString;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class OrgApacheSlingEventJobsQueueConfigurationProperties {
  
  @SerializedName("queue.name")
  private ConfigNodePropertyString queueName = null;
  @SerializedName("queue.topics")
  private ConfigNodePropertyArray queueTopics = null;
  @SerializedName("queue.type")
  private ConfigNodePropertyDropDown queueType = null;
  @SerializedName("queue.priority")
  private ConfigNodePropertyDropDown queuePriority = null;
  @SerializedName("queue.retries")
  private ConfigNodePropertyInteger queueRetries = null;
  @SerializedName("queue.retrydelay")
  private ConfigNodePropertyInteger queueRetrydelay = null;
  @SerializedName("queue.maxparallel")
  private ConfigNodePropertyFloat queueMaxparallel = null;
  @SerializedName("queue.keepJobs")
  private ConfigNodePropertyBoolean queueKeepJobs = null;
  @SerializedName("queue.preferRunOnCreationInstance")
  private ConfigNodePropertyBoolean queuePreferRunOnCreationInstance = null;
  @SerializedName("queue.threadPoolSize")
  private ConfigNodePropertyInteger queueThreadPoolSize = null;
  @SerializedName("service.ranking")
  private ConfigNodePropertyInteger serviceRanking = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getQueueName() {
    return queueName;
  }
  public void setQueueName(ConfigNodePropertyString queueName) {
    this.queueName = queueName;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getQueueTopics() {
    return queueTopics;
  }
  public void setQueueTopics(ConfigNodePropertyArray queueTopics) {
    this.queueTopics = queueTopics;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyDropDown getQueueType() {
    return queueType;
  }
  public void setQueueType(ConfigNodePropertyDropDown queueType) {
    this.queueType = queueType;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyDropDown getQueuePriority() {
    return queuePriority;
  }
  public void setQueuePriority(ConfigNodePropertyDropDown queuePriority) {
    this.queuePriority = queuePriority;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getQueueRetries() {
    return queueRetries;
  }
  public void setQueueRetries(ConfigNodePropertyInteger queueRetries) {
    this.queueRetries = queueRetries;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getQueueRetrydelay() {
    return queueRetrydelay;
  }
  public void setQueueRetrydelay(ConfigNodePropertyInteger queueRetrydelay) {
    this.queueRetrydelay = queueRetrydelay;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyFloat getQueueMaxparallel() {
    return queueMaxparallel;
  }
  public void setQueueMaxparallel(ConfigNodePropertyFloat queueMaxparallel) {
    this.queueMaxparallel = queueMaxparallel;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getQueueKeepJobs() {
    return queueKeepJobs;
  }
  public void setQueueKeepJobs(ConfigNodePropertyBoolean queueKeepJobs) {
    this.queueKeepJobs = queueKeepJobs;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getQueuePreferRunOnCreationInstance() {
    return queuePreferRunOnCreationInstance;
  }
  public void setQueuePreferRunOnCreationInstance(ConfigNodePropertyBoolean queuePreferRunOnCreationInstance) {
    this.queuePreferRunOnCreationInstance = queuePreferRunOnCreationInstance;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getQueueThreadPoolSize() {
    return queueThreadPoolSize;
  }
  public void setQueueThreadPoolSize(ConfigNodePropertyInteger queueThreadPoolSize) {
    this.queueThreadPoolSize = queueThreadPoolSize;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getServiceRanking() {
    return serviceRanking;
  }
  public void setServiceRanking(ConfigNodePropertyInteger serviceRanking) {
    this.serviceRanking = serviceRanking;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheSlingEventJobsQueueConfigurationProperties orgApacheSlingEventJobsQueueConfigurationProperties = (OrgApacheSlingEventJobsQueueConfigurationProperties) o;
    return (this.queueName == null ? orgApacheSlingEventJobsQueueConfigurationProperties.queueName == null : this.queueName.equals(orgApacheSlingEventJobsQueueConfigurationProperties.queueName)) &&
        (this.queueTopics == null ? orgApacheSlingEventJobsQueueConfigurationProperties.queueTopics == null : this.queueTopics.equals(orgApacheSlingEventJobsQueueConfigurationProperties.queueTopics)) &&
        (this.queueType == null ? orgApacheSlingEventJobsQueueConfigurationProperties.queueType == null : this.queueType.equals(orgApacheSlingEventJobsQueueConfigurationProperties.queueType)) &&
        (this.queuePriority == null ? orgApacheSlingEventJobsQueueConfigurationProperties.queuePriority == null : this.queuePriority.equals(orgApacheSlingEventJobsQueueConfigurationProperties.queuePriority)) &&
        (this.queueRetries == null ? orgApacheSlingEventJobsQueueConfigurationProperties.queueRetries == null : this.queueRetries.equals(orgApacheSlingEventJobsQueueConfigurationProperties.queueRetries)) &&
        (this.queueRetrydelay == null ? orgApacheSlingEventJobsQueueConfigurationProperties.queueRetrydelay == null : this.queueRetrydelay.equals(orgApacheSlingEventJobsQueueConfigurationProperties.queueRetrydelay)) &&
        (this.queueMaxparallel == null ? orgApacheSlingEventJobsQueueConfigurationProperties.queueMaxparallel == null : this.queueMaxparallel.equals(orgApacheSlingEventJobsQueueConfigurationProperties.queueMaxparallel)) &&
        (this.queueKeepJobs == null ? orgApacheSlingEventJobsQueueConfigurationProperties.queueKeepJobs == null : this.queueKeepJobs.equals(orgApacheSlingEventJobsQueueConfigurationProperties.queueKeepJobs)) &&
        (this.queuePreferRunOnCreationInstance == null ? orgApacheSlingEventJobsQueueConfigurationProperties.queuePreferRunOnCreationInstance == null : this.queuePreferRunOnCreationInstance.equals(orgApacheSlingEventJobsQueueConfigurationProperties.queuePreferRunOnCreationInstance)) &&
        (this.queueThreadPoolSize == null ? orgApacheSlingEventJobsQueueConfigurationProperties.queueThreadPoolSize == null : this.queueThreadPoolSize.equals(orgApacheSlingEventJobsQueueConfigurationProperties.queueThreadPoolSize)) &&
        (this.serviceRanking == null ? orgApacheSlingEventJobsQueueConfigurationProperties.serviceRanking == null : this.serviceRanking.equals(orgApacheSlingEventJobsQueueConfigurationProperties.serviceRanking));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.queueName == null ? 0: this.queueName.hashCode());
    result = 31 * result + (this.queueTopics == null ? 0: this.queueTopics.hashCode());
    result = 31 * result + (this.queueType == null ? 0: this.queueType.hashCode());
    result = 31 * result + (this.queuePriority == null ? 0: this.queuePriority.hashCode());
    result = 31 * result + (this.queueRetries == null ? 0: this.queueRetries.hashCode());
    result = 31 * result + (this.queueRetrydelay == null ? 0: this.queueRetrydelay.hashCode());
    result = 31 * result + (this.queueMaxparallel == null ? 0: this.queueMaxparallel.hashCode());
    result = 31 * result + (this.queueKeepJobs == null ? 0: this.queueKeepJobs.hashCode());
    result = 31 * result + (this.queuePreferRunOnCreationInstance == null ? 0: this.queuePreferRunOnCreationInstance.hashCode());
    result = 31 * result + (this.queueThreadPoolSize == null ? 0: this.queueThreadPoolSize.hashCode());
    result = 31 * result + (this.serviceRanking == null ? 0: this.serviceRanking.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheSlingEventJobsQueueConfigurationProperties {\n");
    
    sb.append("  queueName: ").append(queueName).append("\n");
    sb.append("  queueTopics: ").append(queueTopics).append("\n");
    sb.append("  queueType: ").append(queueType).append("\n");
    sb.append("  queuePriority: ").append(queuePriority).append("\n");
    sb.append("  queueRetries: ").append(queueRetries).append("\n");
    sb.append("  queueRetrydelay: ").append(queueRetrydelay).append("\n");
    sb.append("  queueMaxparallel: ").append(queueMaxparallel).append("\n");
    sb.append("  queueKeepJobs: ").append(queueKeepJobs).append("\n");
    sb.append("  queuePreferRunOnCreationInstance: ").append(queuePreferRunOnCreationInstance).append("\n");
    sb.append("  queueThreadPoolSize: ").append(queueThreadPoolSize).append("\n");
    sb.append("  serviceRanking: ").append(serviceRanking).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}