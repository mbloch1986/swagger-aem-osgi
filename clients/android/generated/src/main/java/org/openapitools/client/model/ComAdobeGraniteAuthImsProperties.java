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
public class ComAdobeGraniteAuthImsProperties {
  
  @SerializedName("configid")
  private ConfigNodePropertyString configid = null;
  @SerializedName("scope")
  private ConfigNodePropertyString scope = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getConfigid() {
    return configid;
  }
  public void setConfigid(ConfigNodePropertyString configid) {
    this.configid = configid;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getScope() {
    return scope;
  }
  public void setScope(ConfigNodePropertyString scope) {
    this.scope = scope;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeGraniteAuthImsProperties comAdobeGraniteAuthImsProperties = (ComAdobeGraniteAuthImsProperties) o;
    return (this.configid == null ? comAdobeGraniteAuthImsProperties.configid == null : this.configid.equals(comAdobeGraniteAuthImsProperties.configid)) &&
        (this.scope == null ? comAdobeGraniteAuthImsProperties.scope == null : this.scope.equals(comAdobeGraniteAuthImsProperties.scope));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.configid == null ? 0: this.configid.hashCode());
    result = 31 * result + (this.scope == null ? 0: this.scope.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeGraniteAuthImsProperties {\n");
    
    sb.append("  configid: ").append(configid).append("\n");
    sb.append("  scope: ").append(scope).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
