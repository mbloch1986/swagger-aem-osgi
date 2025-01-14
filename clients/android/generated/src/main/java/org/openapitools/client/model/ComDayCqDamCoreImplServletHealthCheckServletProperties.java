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
import org.openapitools.client.model.ConfigNodePropertyString;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ComDayCqDamCoreImplServletHealthCheckServletProperties {
  
  @SerializedName("cq.dam.sync.workflow.id")
  private ConfigNodePropertyString cqDamSyncWorkflowId = null;
  @SerializedName("cq.dam.sync.folder.types")
  private ConfigNodePropertyArray cqDamSyncFolderTypes = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getCqDamSyncWorkflowId() {
    return cqDamSyncWorkflowId;
  }
  public void setCqDamSyncWorkflowId(ConfigNodePropertyString cqDamSyncWorkflowId) {
    this.cqDamSyncWorkflowId = cqDamSyncWorkflowId;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getCqDamSyncFolderTypes() {
    return cqDamSyncFolderTypes;
  }
  public void setCqDamSyncFolderTypes(ConfigNodePropertyArray cqDamSyncFolderTypes) {
    this.cqDamSyncFolderTypes = cqDamSyncFolderTypes;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqDamCoreImplServletHealthCheckServletProperties comDayCqDamCoreImplServletHealthCheckServletProperties = (ComDayCqDamCoreImplServletHealthCheckServletProperties) o;
    return (this.cqDamSyncWorkflowId == null ? comDayCqDamCoreImplServletHealthCheckServletProperties.cqDamSyncWorkflowId == null : this.cqDamSyncWorkflowId.equals(comDayCqDamCoreImplServletHealthCheckServletProperties.cqDamSyncWorkflowId)) &&
        (this.cqDamSyncFolderTypes == null ? comDayCqDamCoreImplServletHealthCheckServletProperties.cqDamSyncFolderTypes == null : this.cqDamSyncFolderTypes.equals(comDayCqDamCoreImplServletHealthCheckServletProperties.cqDamSyncFolderTypes));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.cqDamSyncWorkflowId == null ? 0: this.cqDamSyncWorkflowId.hashCode());
    result = 31 * result + (this.cqDamSyncFolderTypes == null ? 0: this.cqDamSyncFolderTypes.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqDamCoreImplServletHealthCheckServletProperties {\n");
    
    sb.append("  cqDamSyncWorkflowId: ").append(cqDamSyncWorkflowId).append("\n");
    sb.append("  cqDamSyncFolderTypes: ").append(cqDamSyncFolderTypes).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
