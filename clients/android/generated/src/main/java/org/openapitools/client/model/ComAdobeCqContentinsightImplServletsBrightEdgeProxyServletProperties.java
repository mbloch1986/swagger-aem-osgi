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
public class ComAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties {
  
  @SerializedName("brightedge.url")
  private ConfigNodePropertyString brightedgeUrl = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getBrightedgeUrl() {
    return brightedgeUrl;
  }
  public void setBrightedgeUrl(ConfigNodePropertyString brightedgeUrl) {
    this.brightedgeUrl = brightedgeUrl;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties comAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties = (ComAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties) o;
    return (this.brightedgeUrl == null ? comAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties.brightedgeUrl == null : this.brightedgeUrl.equals(comAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties.brightedgeUrl));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.brightedgeUrl == null ? 0: this.brightedgeUrl.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties {\n");
    
    sb.append("  brightedgeUrl: ").append(brightedgeUrl).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}