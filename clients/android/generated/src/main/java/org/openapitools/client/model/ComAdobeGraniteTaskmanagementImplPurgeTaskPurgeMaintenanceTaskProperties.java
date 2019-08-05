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
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ComAdobeGraniteTaskmanagementImplPurgeTaskPurgeMaintenanceTaskProperties {
  
  @SerializedName("purgeCompleted")
  private ConfigNodePropertyBoolean purgeCompleted = null;
  @SerializedName("completedAge")
  private ConfigNodePropertyInteger completedAge = null;
  @SerializedName("purgeActive")
  private ConfigNodePropertyBoolean purgeActive = null;
  @SerializedName("activeAge")
  private ConfigNodePropertyInteger activeAge = null;
  @SerializedName("saveThreshold")
  private ConfigNodePropertyInteger saveThreshold = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getPurgeCompleted() {
    return purgeCompleted;
  }
  public void setPurgeCompleted(ConfigNodePropertyBoolean purgeCompleted) {
    this.purgeCompleted = purgeCompleted;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getCompletedAge() {
    return completedAge;
  }
  public void setCompletedAge(ConfigNodePropertyInteger completedAge) {
    this.completedAge = completedAge;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getPurgeActive() {
    return purgeActive;
  }
  public void setPurgeActive(ConfigNodePropertyBoolean purgeActive) {
    this.purgeActive = purgeActive;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getActiveAge() {
    return activeAge;
  }
  public void setActiveAge(ConfigNodePropertyInteger activeAge) {
    this.activeAge = activeAge;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getSaveThreshold() {
    return saveThreshold;
  }
  public void setSaveThreshold(ConfigNodePropertyInteger saveThreshold) {
    this.saveThreshold = saveThreshold;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeGraniteTaskmanagementImplPurgeTaskPurgeMaintenanceTaskProperties comAdobeGraniteTaskmanagementImplPurgeTaskPurgeMaintenanceTaskProperties = (ComAdobeGraniteTaskmanagementImplPurgeTaskPurgeMaintenanceTaskProperties) o;
    return (this.purgeCompleted == null ? comAdobeGraniteTaskmanagementImplPurgeTaskPurgeMaintenanceTaskProperties.purgeCompleted == null : this.purgeCompleted.equals(comAdobeGraniteTaskmanagementImplPurgeTaskPurgeMaintenanceTaskProperties.purgeCompleted)) &&
        (this.completedAge == null ? comAdobeGraniteTaskmanagementImplPurgeTaskPurgeMaintenanceTaskProperties.completedAge == null : this.completedAge.equals(comAdobeGraniteTaskmanagementImplPurgeTaskPurgeMaintenanceTaskProperties.completedAge)) &&
        (this.purgeActive == null ? comAdobeGraniteTaskmanagementImplPurgeTaskPurgeMaintenanceTaskProperties.purgeActive == null : this.purgeActive.equals(comAdobeGraniteTaskmanagementImplPurgeTaskPurgeMaintenanceTaskProperties.purgeActive)) &&
        (this.activeAge == null ? comAdobeGraniteTaskmanagementImplPurgeTaskPurgeMaintenanceTaskProperties.activeAge == null : this.activeAge.equals(comAdobeGraniteTaskmanagementImplPurgeTaskPurgeMaintenanceTaskProperties.activeAge)) &&
        (this.saveThreshold == null ? comAdobeGraniteTaskmanagementImplPurgeTaskPurgeMaintenanceTaskProperties.saveThreshold == null : this.saveThreshold.equals(comAdobeGraniteTaskmanagementImplPurgeTaskPurgeMaintenanceTaskProperties.saveThreshold));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.purgeCompleted == null ? 0: this.purgeCompleted.hashCode());
    result = 31 * result + (this.completedAge == null ? 0: this.completedAge.hashCode());
    result = 31 * result + (this.purgeActive == null ? 0: this.purgeActive.hashCode());
    result = 31 * result + (this.activeAge == null ? 0: this.activeAge.hashCode());
    result = 31 * result + (this.saveThreshold == null ? 0: this.saveThreshold.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeGraniteTaskmanagementImplPurgeTaskPurgeMaintenanceTaskProperties {\n");
    
    sb.append("  purgeCompleted: ").append(purgeCompleted).append("\n");
    sb.append("  completedAge: ").append(completedAge).append("\n");
    sb.append("  purgeActive: ").append(purgeActive).append("\n");
    sb.append("  activeAge: ").append(activeAge).append("\n");
    sb.append("  saveThreshold: ").append(saveThreshold).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}