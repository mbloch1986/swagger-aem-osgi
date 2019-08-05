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

import org.openapitools.client.model.ConfigNodePropertyString;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ComDayCqWcmFoundationImplPageImpressionsTrackerProperties {
  
  @SerializedName("sling.auth.requirements")
  private ConfigNodePropertyString slingAuthRequirements = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getSlingAuthRequirements() {
    return slingAuthRequirements;
  }
  public void setSlingAuthRequirements(ConfigNodePropertyString slingAuthRequirements) {
    this.slingAuthRequirements = slingAuthRequirements;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqWcmFoundationImplPageImpressionsTrackerProperties comDayCqWcmFoundationImplPageImpressionsTrackerProperties = (ComDayCqWcmFoundationImplPageImpressionsTrackerProperties) o;
    return (this.slingAuthRequirements == null ? comDayCqWcmFoundationImplPageImpressionsTrackerProperties.slingAuthRequirements == null : this.slingAuthRequirements.equals(comDayCqWcmFoundationImplPageImpressionsTrackerProperties.slingAuthRequirements));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.slingAuthRequirements == null ? 0: this.slingAuthRequirements.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqWcmFoundationImplPageImpressionsTrackerProperties {\n");
    
    sb.append("  slingAuthRequirements: ").append(slingAuthRequirements).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}