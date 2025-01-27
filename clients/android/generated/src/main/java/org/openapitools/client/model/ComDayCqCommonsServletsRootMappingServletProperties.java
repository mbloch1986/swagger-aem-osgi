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
public class ComDayCqCommonsServletsRootMappingServletProperties {
  
  @SerializedName("rootmapping.target")
  private ConfigNodePropertyString rootmappingTarget = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getRootmappingTarget() {
    return rootmappingTarget;
  }
  public void setRootmappingTarget(ConfigNodePropertyString rootmappingTarget) {
    this.rootmappingTarget = rootmappingTarget;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqCommonsServletsRootMappingServletProperties comDayCqCommonsServletsRootMappingServletProperties = (ComDayCqCommonsServletsRootMappingServletProperties) o;
    return (this.rootmappingTarget == null ? comDayCqCommonsServletsRootMappingServletProperties.rootmappingTarget == null : this.rootmappingTarget.equals(comDayCqCommonsServletsRootMappingServletProperties.rootmappingTarget));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.rootmappingTarget == null ? 0: this.rootmappingTarget.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqCommonsServletsRootMappingServletProperties {\n");
    
    sb.append("  rootmappingTarget: ").append(rootmappingTarget).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
