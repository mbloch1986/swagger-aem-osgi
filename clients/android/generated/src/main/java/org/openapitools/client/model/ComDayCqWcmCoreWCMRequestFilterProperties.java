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

import org.openapitools.client.model.ConfigNodePropertyDropDown;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ComDayCqWcmCoreWCMRequestFilterProperties {
  
  @SerializedName("wcmfilter.mode")
  private ConfigNodePropertyDropDown wcmfilterMode = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyDropDown getWcmfilterMode() {
    return wcmfilterMode;
  }
  public void setWcmfilterMode(ConfigNodePropertyDropDown wcmfilterMode) {
    this.wcmfilterMode = wcmfilterMode;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqWcmCoreWCMRequestFilterProperties comDayCqWcmCoreWCMRequestFilterProperties = (ComDayCqWcmCoreWCMRequestFilterProperties) o;
    return (this.wcmfilterMode == null ? comDayCqWcmCoreWCMRequestFilterProperties.wcmfilterMode == null : this.wcmfilterMode.equals(comDayCqWcmCoreWCMRequestFilterProperties.wcmfilterMode));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.wcmfilterMode == null ? 0: this.wcmfilterMode.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqWcmCoreWCMRequestFilterProperties {\n");
    
    sb.append("  wcmfilterMode: ").append(wcmfilterMode).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
