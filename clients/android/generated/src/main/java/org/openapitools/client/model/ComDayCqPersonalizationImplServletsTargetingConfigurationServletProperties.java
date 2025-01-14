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
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ComDayCqPersonalizationImplServletsTargetingConfigurationServletProperties {
  
  @SerializedName("forcelocation")
  private ConfigNodePropertyBoolean forcelocation = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getForcelocation() {
    return forcelocation;
  }
  public void setForcelocation(ConfigNodePropertyBoolean forcelocation) {
    this.forcelocation = forcelocation;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqPersonalizationImplServletsTargetingConfigurationServletProperties comDayCqPersonalizationImplServletsTargetingConfigurationServletProperties = (ComDayCqPersonalizationImplServletsTargetingConfigurationServletProperties) o;
    return (this.forcelocation == null ? comDayCqPersonalizationImplServletsTargetingConfigurationServletProperties.forcelocation == null : this.forcelocation.equals(comDayCqPersonalizationImplServletsTargetingConfigurationServletProperties.forcelocation));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.forcelocation == null ? 0: this.forcelocation.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqPersonalizationImplServletsTargetingConfigurationServletProperties {\n");
    
    sb.append("  forcelocation: ").append(forcelocation).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
