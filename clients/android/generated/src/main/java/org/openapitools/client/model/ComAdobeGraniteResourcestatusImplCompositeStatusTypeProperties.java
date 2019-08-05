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
public class ComAdobeGraniteResourcestatusImplCompositeStatusTypeProperties {
  
  @SerializedName("name")
  private ConfigNodePropertyString name = null;
  @SerializedName("types")
  private ConfigNodePropertyArray types = null;

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
  public ConfigNodePropertyArray getTypes() {
    return types;
  }
  public void setTypes(ConfigNodePropertyArray types) {
    this.types = types;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeGraniteResourcestatusImplCompositeStatusTypeProperties comAdobeGraniteResourcestatusImplCompositeStatusTypeProperties = (ComAdobeGraniteResourcestatusImplCompositeStatusTypeProperties) o;
    return (this.name == null ? comAdobeGraniteResourcestatusImplCompositeStatusTypeProperties.name == null : this.name.equals(comAdobeGraniteResourcestatusImplCompositeStatusTypeProperties.name)) &&
        (this.types == null ? comAdobeGraniteResourcestatusImplCompositeStatusTypeProperties.types == null : this.types.equals(comAdobeGraniteResourcestatusImplCompositeStatusTypeProperties.types));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.name == null ? 0: this.name.hashCode());
    result = 31 * result + (this.types == null ? 0: this.types.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeGraniteResourcestatusImplCompositeStatusTypeProperties {\n");
    
    sb.append("  name: ").append(name).append("\n");
    sb.append("  types: ").append(types).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}