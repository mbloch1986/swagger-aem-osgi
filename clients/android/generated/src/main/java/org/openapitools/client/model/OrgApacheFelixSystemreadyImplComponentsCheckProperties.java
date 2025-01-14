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
import org.openapitools.client.model.ConfigNodePropertyDropDown;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class OrgApacheFelixSystemreadyImplComponentsCheckProperties {
  
  @SerializedName("components.list")
  private ConfigNodePropertyArray componentsList = null;
  @SerializedName("type")
  private ConfigNodePropertyDropDown type = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getComponentsList() {
    return componentsList;
  }
  public void setComponentsList(ConfigNodePropertyArray componentsList) {
    this.componentsList = componentsList;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyDropDown getType() {
    return type;
  }
  public void setType(ConfigNodePropertyDropDown type) {
    this.type = type;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheFelixSystemreadyImplComponentsCheckProperties orgApacheFelixSystemreadyImplComponentsCheckProperties = (OrgApacheFelixSystemreadyImplComponentsCheckProperties) o;
    return (this.componentsList == null ? orgApacheFelixSystemreadyImplComponentsCheckProperties.componentsList == null : this.componentsList.equals(orgApacheFelixSystemreadyImplComponentsCheckProperties.componentsList)) &&
        (this.type == null ? orgApacheFelixSystemreadyImplComponentsCheckProperties.type == null : this.type.equals(orgApacheFelixSystemreadyImplComponentsCheckProperties.type));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.componentsList == null ? 0: this.componentsList.hashCode());
    result = 31 * result + (this.type == null ? 0: this.type.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheFelixSystemreadyImplComponentsCheckProperties {\n");
    
    sb.append("  componentsList: ").append(componentsList).append("\n");
    sb.append("  type: ").append(type).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
