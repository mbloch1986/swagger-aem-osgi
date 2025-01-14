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
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ComAdobeGraniteWorkflowCoreWorkflowConfigProperties {
  
  @SerializedName("cq.workflow.config.workflow.packages.root.path")
  private ConfigNodePropertyArray cqWorkflowConfigWorkflowPackagesRootPath = null;
  @SerializedName("cq.workflow.config.workflow.process.legacy.mode")
  private ConfigNodePropertyBoolean cqWorkflowConfigWorkflowProcessLegacyMode = null;
  @SerializedName("cq.workflow.config.allow.locking")
  private ConfigNodePropertyBoolean cqWorkflowConfigAllowLocking = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getCqWorkflowConfigWorkflowPackagesRootPath() {
    return cqWorkflowConfigWorkflowPackagesRootPath;
  }
  public void setCqWorkflowConfigWorkflowPackagesRootPath(ConfigNodePropertyArray cqWorkflowConfigWorkflowPackagesRootPath) {
    this.cqWorkflowConfigWorkflowPackagesRootPath = cqWorkflowConfigWorkflowPackagesRootPath;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getCqWorkflowConfigWorkflowProcessLegacyMode() {
    return cqWorkflowConfigWorkflowProcessLegacyMode;
  }
  public void setCqWorkflowConfigWorkflowProcessLegacyMode(ConfigNodePropertyBoolean cqWorkflowConfigWorkflowProcessLegacyMode) {
    this.cqWorkflowConfigWorkflowProcessLegacyMode = cqWorkflowConfigWorkflowProcessLegacyMode;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getCqWorkflowConfigAllowLocking() {
    return cqWorkflowConfigAllowLocking;
  }
  public void setCqWorkflowConfigAllowLocking(ConfigNodePropertyBoolean cqWorkflowConfigAllowLocking) {
    this.cqWorkflowConfigAllowLocking = cqWorkflowConfigAllowLocking;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeGraniteWorkflowCoreWorkflowConfigProperties comAdobeGraniteWorkflowCoreWorkflowConfigProperties = (ComAdobeGraniteWorkflowCoreWorkflowConfigProperties) o;
    return (this.cqWorkflowConfigWorkflowPackagesRootPath == null ? comAdobeGraniteWorkflowCoreWorkflowConfigProperties.cqWorkflowConfigWorkflowPackagesRootPath == null : this.cqWorkflowConfigWorkflowPackagesRootPath.equals(comAdobeGraniteWorkflowCoreWorkflowConfigProperties.cqWorkflowConfigWorkflowPackagesRootPath)) &&
        (this.cqWorkflowConfigWorkflowProcessLegacyMode == null ? comAdobeGraniteWorkflowCoreWorkflowConfigProperties.cqWorkflowConfigWorkflowProcessLegacyMode == null : this.cqWorkflowConfigWorkflowProcessLegacyMode.equals(comAdobeGraniteWorkflowCoreWorkflowConfigProperties.cqWorkflowConfigWorkflowProcessLegacyMode)) &&
        (this.cqWorkflowConfigAllowLocking == null ? comAdobeGraniteWorkflowCoreWorkflowConfigProperties.cqWorkflowConfigAllowLocking == null : this.cqWorkflowConfigAllowLocking.equals(comAdobeGraniteWorkflowCoreWorkflowConfigProperties.cqWorkflowConfigAllowLocking));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.cqWorkflowConfigWorkflowPackagesRootPath == null ? 0: this.cqWorkflowConfigWorkflowPackagesRootPath.hashCode());
    result = 31 * result + (this.cqWorkflowConfigWorkflowProcessLegacyMode == null ? 0: this.cqWorkflowConfigWorkflowProcessLegacyMode.hashCode());
    result = 31 * result + (this.cqWorkflowConfigAllowLocking == null ? 0: this.cqWorkflowConfigAllowLocking.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeGraniteWorkflowCoreWorkflowConfigProperties {\n");
    
    sb.append("  cqWorkflowConfigWorkflowPackagesRootPath: ").append(cqWorkflowConfigWorkflowPackagesRootPath).append("\n");
    sb.append("  cqWorkflowConfigWorkflowProcessLegacyMode: ").append(cqWorkflowConfigWorkflowProcessLegacyMode).append("\n");
    sb.append("  cqWorkflowConfigAllowLocking: ").append(cqWorkflowConfigAllowLocking).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
