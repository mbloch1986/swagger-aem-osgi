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
public class OrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties {
  
  @SerializedName("name")
  private ConfigNodePropertyString name = null;
  @SerializedName("title")
  private ConfigNodePropertyString title = null;
  @SerializedName("details")
  private ConfigNodePropertyString details = null;
  @SerializedName("enabled")
  private ConfigNodePropertyBoolean enabled = null;
  @SerializedName("serviceName")
  private ConfigNodePropertyString serviceName = null;
  @SerializedName("log.level")
  private ConfigNodePropertyDropDown logLevel = null;
  @SerializedName("queue.processing.enabled")
  private ConfigNodePropertyBoolean queueProcessingEnabled = null;
  @SerializedName("packageExporter.endpoints")
  private ConfigNodePropertyArray packageExporterEndpoints = null;
  @SerializedName("pull.items")
  private ConfigNodePropertyInteger pullItems = null;
  @SerializedName("http.conn.timeout")
  private ConfigNodePropertyInteger httpConnTimeout = null;
  @SerializedName("requestAuthorizationStrategy.target")
  private ConfigNodePropertyString requestAuthorizationStrategyTarget = null;
  @SerializedName("transportSecretProvider.target")
  private ConfigNodePropertyString transportSecretProviderTarget = null;
  @SerializedName("packageBuilder.target")
  private ConfigNodePropertyString packageBuilderTarget = null;
  @SerializedName("triggers.target")
  private ConfigNodePropertyString triggersTarget = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getName() {
    return name;
  }
  public void setName(ConfigNodePropertyString name) {
    this.name = name;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getTitle() {
    return title;
  }
  public void setTitle(ConfigNodePropertyString title) {
    this.title = title;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getDetails() {
    return details;
  }
  public void setDetails(ConfigNodePropertyString details) {
    this.details = details;
  }

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
  public ConfigNodePropertyString getServiceName() {
    return serviceName;
  }
  public void setServiceName(ConfigNodePropertyString serviceName) {
    this.serviceName = serviceName;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyDropDown getLogLevel() {
    return logLevel;
  }
  public void setLogLevel(ConfigNodePropertyDropDown logLevel) {
    this.logLevel = logLevel;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getQueueProcessingEnabled() {
    return queueProcessingEnabled;
  }
  public void setQueueProcessingEnabled(ConfigNodePropertyBoolean queueProcessingEnabled) {
    this.queueProcessingEnabled = queueProcessingEnabled;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getPackageExporterEndpoints() {
    return packageExporterEndpoints;
  }
  public void setPackageExporterEndpoints(ConfigNodePropertyArray packageExporterEndpoints) {
    this.packageExporterEndpoints = packageExporterEndpoints;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getPullItems() {
    return pullItems;
  }
  public void setPullItems(ConfigNodePropertyInteger pullItems) {
    this.pullItems = pullItems;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getHttpConnTimeout() {
    return httpConnTimeout;
  }
  public void setHttpConnTimeout(ConfigNodePropertyInteger httpConnTimeout) {
    this.httpConnTimeout = httpConnTimeout;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getRequestAuthorizationStrategyTarget() {
    return requestAuthorizationStrategyTarget;
  }
  public void setRequestAuthorizationStrategyTarget(ConfigNodePropertyString requestAuthorizationStrategyTarget) {
    this.requestAuthorizationStrategyTarget = requestAuthorizationStrategyTarget;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getTransportSecretProviderTarget() {
    return transportSecretProviderTarget;
  }
  public void setTransportSecretProviderTarget(ConfigNodePropertyString transportSecretProviderTarget) {
    this.transportSecretProviderTarget = transportSecretProviderTarget;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getPackageBuilderTarget() {
    return packageBuilderTarget;
  }
  public void setPackageBuilderTarget(ConfigNodePropertyString packageBuilderTarget) {
    this.packageBuilderTarget = packageBuilderTarget;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getTriggersTarget() {
    return triggersTarget;
  }
  public void setTriggersTarget(ConfigNodePropertyString triggersTarget) {
    this.triggersTarget = triggersTarget;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties orgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties = (OrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties) o;
    return (this.name == null ? orgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties.name == null : this.name.equals(orgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties.name)) &&
        (this.title == null ? orgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties.title == null : this.title.equals(orgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties.title)) &&
        (this.details == null ? orgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties.details == null : this.details.equals(orgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties.details)) &&
        (this.enabled == null ? orgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties.enabled == null : this.enabled.equals(orgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties.enabled)) &&
        (this.serviceName == null ? orgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties.serviceName == null : this.serviceName.equals(orgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties.serviceName)) &&
        (this.logLevel == null ? orgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties.logLevel == null : this.logLevel.equals(orgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties.logLevel)) &&
        (this.queueProcessingEnabled == null ? orgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties.queueProcessingEnabled == null : this.queueProcessingEnabled.equals(orgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties.queueProcessingEnabled)) &&
        (this.packageExporterEndpoints == null ? orgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties.packageExporterEndpoints == null : this.packageExporterEndpoints.equals(orgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties.packageExporterEndpoints)) &&
        (this.pullItems == null ? orgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties.pullItems == null : this.pullItems.equals(orgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties.pullItems)) &&
        (this.httpConnTimeout == null ? orgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties.httpConnTimeout == null : this.httpConnTimeout.equals(orgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties.httpConnTimeout)) &&
        (this.requestAuthorizationStrategyTarget == null ? orgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties.requestAuthorizationStrategyTarget == null : this.requestAuthorizationStrategyTarget.equals(orgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties.requestAuthorizationStrategyTarget)) &&
        (this.transportSecretProviderTarget == null ? orgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties.transportSecretProviderTarget == null : this.transportSecretProviderTarget.equals(orgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties.transportSecretProviderTarget)) &&
        (this.packageBuilderTarget == null ? orgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties.packageBuilderTarget == null : this.packageBuilderTarget.equals(orgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties.packageBuilderTarget)) &&
        (this.triggersTarget == null ? orgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties.triggersTarget == null : this.triggersTarget.equals(orgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties.triggersTarget));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.name == null ? 0: this.name.hashCode());
    result = 31 * result + (this.title == null ? 0: this.title.hashCode());
    result = 31 * result + (this.details == null ? 0: this.details.hashCode());
    result = 31 * result + (this.enabled == null ? 0: this.enabled.hashCode());
    result = 31 * result + (this.serviceName == null ? 0: this.serviceName.hashCode());
    result = 31 * result + (this.logLevel == null ? 0: this.logLevel.hashCode());
    result = 31 * result + (this.queueProcessingEnabled == null ? 0: this.queueProcessingEnabled.hashCode());
    result = 31 * result + (this.packageExporterEndpoints == null ? 0: this.packageExporterEndpoints.hashCode());
    result = 31 * result + (this.pullItems == null ? 0: this.pullItems.hashCode());
    result = 31 * result + (this.httpConnTimeout == null ? 0: this.httpConnTimeout.hashCode());
    result = 31 * result + (this.requestAuthorizationStrategyTarget == null ? 0: this.requestAuthorizationStrategyTarget.hashCode());
    result = 31 * result + (this.transportSecretProviderTarget == null ? 0: this.transportSecretProviderTarget.hashCode());
    result = 31 * result + (this.packageBuilderTarget == null ? 0: this.packageBuilderTarget.hashCode());
    result = 31 * result + (this.triggersTarget == null ? 0: this.triggersTarget.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties {\n");
    
    sb.append("  name: ").append(name).append("\n");
    sb.append("  title: ").append(title).append("\n");
    sb.append("  details: ").append(details).append("\n");
    sb.append("  enabled: ").append(enabled).append("\n");
    sb.append("  serviceName: ").append(serviceName).append("\n");
    sb.append("  logLevel: ").append(logLevel).append("\n");
    sb.append("  queueProcessingEnabled: ").append(queueProcessingEnabled).append("\n");
    sb.append("  packageExporterEndpoints: ").append(packageExporterEndpoints).append("\n");
    sb.append("  pullItems: ").append(pullItems).append("\n");
    sb.append("  httpConnTimeout: ").append(httpConnTimeout).append("\n");
    sb.append("  requestAuthorizationStrategyTarget: ").append(requestAuthorizationStrategyTarget).append("\n");
    sb.append("  transportSecretProviderTarget: ").append(transportSecretProviderTarget).append("\n");
    sb.append("  packageBuilderTarget: ").append(packageBuilderTarget).append("\n");
    sb.append("  triggersTarget: ").append(triggersTarget).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}