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
public class ComAdobeCqSocialCommonsCorsCORSAuthenticationFilterProperties {
  
  @SerializedName("cors.enabling")
  private ConfigNodePropertyBoolean corsEnabling = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getCorsEnabling() {
    return corsEnabling;
  }
  public void setCorsEnabling(ConfigNodePropertyBoolean corsEnabling) {
    this.corsEnabling = corsEnabling;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeCqSocialCommonsCorsCORSAuthenticationFilterProperties comAdobeCqSocialCommonsCorsCORSAuthenticationFilterProperties = (ComAdobeCqSocialCommonsCorsCORSAuthenticationFilterProperties) o;
    return (this.corsEnabling == null ? comAdobeCqSocialCommonsCorsCORSAuthenticationFilterProperties.corsEnabling == null : this.corsEnabling.equals(comAdobeCqSocialCommonsCorsCORSAuthenticationFilterProperties.corsEnabling));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.corsEnabling == null ? 0: this.corsEnabling.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeCqSocialCommonsCorsCORSAuthenticationFilterProperties {\n");
    
    sb.append("  corsEnabling: ").append(corsEnabling).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}