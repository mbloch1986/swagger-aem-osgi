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
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ComAdobeCqCloudconfigCoreImplConfigurationReplicationEventHandleProperties {
  
  @SerializedName("flush.agents")
  private ConfigNodePropertyArray flushAgents = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getFlushAgents() {
    return flushAgents;
  }
  public void setFlushAgents(ConfigNodePropertyArray flushAgents) {
    this.flushAgents = flushAgents;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeCqCloudconfigCoreImplConfigurationReplicationEventHandleProperties comAdobeCqCloudconfigCoreImplConfigurationReplicationEventHandleProperties = (ComAdobeCqCloudconfigCoreImplConfigurationReplicationEventHandleProperties) o;
    return (this.flushAgents == null ? comAdobeCqCloudconfigCoreImplConfigurationReplicationEventHandleProperties.flushAgents == null : this.flushAgents.equals(comAdobeCqCloudconfigCoreImplConfigurationReplicationEventHandleProperties.flushAgents));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.flushAgents == null ? 0: this.flushAgents.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeCqCloudconfigCoreImplConfigurationReplicationEventHandleProperties {\n");
    
    sb.append("  flushAgents: ").append(flushAgents).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}