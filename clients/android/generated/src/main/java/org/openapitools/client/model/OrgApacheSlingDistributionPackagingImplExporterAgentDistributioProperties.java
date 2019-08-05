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
import org.openapitools.client.model.ConfigNodePropertyString;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class OrgApacheSlingDistributionPackagingImplExporterAgentDistributioProperties {
  
  @SerializedName("name")
  private ConfigNodePropertyString name = null;
  @SerializedName("queue")
  private ConfigNodePropertyString queue = null;
  @SerializedName("drop.invalid.items")
  private ConfigNodePropertyBoolean dropInvalidItems = null;
  @SerializedName("agent.target")
  private ConfigNodePropertyString agentTarget = null;

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
  public ConfigNodePropertyString getQueue() {
    return queue;
  }
  public void setQueue(ConfigNodePropertyString queue) {
    this.queue = queue;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getDropInvalidItems() {
    return dropInvalidItems;
  }
  public void setDropInvalidItems(ConfigNodePropertyBoolean dropInvalidItems) {
    this.dropInvalidItems = dropInvalidItems;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getAgentTarget() {
    return agentTarget;
  }
  public void setAgentTarget(ConfigNodePropertyString agentTarget) {
    this.agentTarget = agentTarget;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheSlingDistributionPackagingImplExporterAgentDistributioProperties orgApacheSlingDistributionPackagingImplExporterAgentDistributioProperties = (OrgApacheSlingDistributionPackagingImplExporterAgentDistributioProperties) o;
    return (this.name == null ? orgApacheSlingDistributionPackagingImplExporterAgentDistributioProperties.name == null : this.name.equals(orgApacheSlingDistributionPackagingImplExporterAgentDistributioProperties.name)) &&
        (this.queue == null ? orgApacheSlingDistributionPackagingImplExporterAgentDistributioProperties.queue == null : this.queue.equals(orgApacheSlingDistributionPackagingImplExporterAgentDistributioProperties.queue)) &&
        (this.dropInvalidItems == null ? orgApacheSlingDistributionPackagingImplExporterAgentDistributioProperties.dropInvalidItems == null : this.dropInvalidItems.equals(orgApacheSlingDistributionPackagingImplExporterAgentDistributioProperties.dropInvalidItems)) &&
        (this.agentTarget == null ? orgApacheSlingDistributionPackagingImplExporterAgentDistributioProperties.agentTarget == null : this.agentTarget.equals(orgApacheSlingDistributionPackagingImplExporterAgentDistributioProperties.agentTarget));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.name == null ? 0: this.name.hashCode());
    result = 31 * result + (this.queue == null ? 0: this.queue.hashCode());
    result = 31 * result + (this.dropInvalidItems == null ? 0: this.dropInvalidItems.hashCode());
    result = 31 * result + (this.agentTarget == null ? 0: this.agentTarget.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheSlingDistributionPackagingImplExporterAgentDistributioProperties {\n");
    
    sb.append("  name: ").append(name).append("\n");
    sb.append("  queue: ").append(queue).append("\n");
    sb.append("  dropInvalidItems: ").append(dropInvalidItems).append("\n");
    sb.append("  agentTarget: ").append(agentTarget).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}