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
public class ComDayCqDamCoreImplHandlerXmpNCommXMPHandlerProperties {
  
  @SerializedName("xmphandler.cq.formats")
  private ConfigNodePropertyArray xmphandlerCqFormats = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getXmphandlerCqFormats() {
    return xmphandlerCqFormats;
  }
  public void setXmphandlerCqFormats(ConfigNodePropertyArray xmphandlerCqFormats) {
    this.xmphandlerCqFormats = xmphandlerCqFormats;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqDamCoreImplHandlerXmpNCommXMPHandlerProperties comDayCqDamCoreImplHandlerXmpNCommXMPHandlerProperties = (ComDayCqDamCoreImplHandlerXmpNCommXMPHandlerProperties) o;
    return (this.xmphandlerCqFormats == null ? comDayCqDamCoreImplHandlerXmpNCommXMPHandlerProperties.xmphandlerCqFormats == null : this.xmphandlerCqFormats.equals(comDayCqDamCoreImplHandlerXmpNCommXMPHandlerProperties.xmphandlerCqFormats));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.xmphandlerCqFormats == null ? 0: this.xmphandlerCqFormats.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqDamCoreImplHandlerXmpNCommXMPHandlerProperties {\n");
    
    sb.append("  xmphandlerCqFormats: ").append(xmphandlerCqFormats).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
