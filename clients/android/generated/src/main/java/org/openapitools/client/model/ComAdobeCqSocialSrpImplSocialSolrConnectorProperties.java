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
public class ComAdobeCqSocialSrpImplSocialSolrConnectorProperties {
  
  @SerializedName("srp.type")
  private ConfigNodePropertyString srpType = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getSrpType() {
    return srpType;
  }
  public void setSrpType(ConfigNodePropertyString srpType) {
    this.srpType = srpType;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeCqSocialSrpImplSocialSolrConnectorProperties comAdobeCqSocialSrpImplSocialSolrConnectorProperties = (ComAdobeCqSocialSrpImplSocialSolrConnectorProperties) o;
    return (this.srpType == null ? comAdobeCqSocialSrpImplSocialSolrConnectorProperties.srpType == null : this.srpType.equals(comAdobeCqSocialSrpImplSocialSolrConnectorProperties.srpType));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.srpType == null ? 0: this.srpType.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeCqSocialSrpImplSocialSolrConnectorProperties {\n");
    
    sb.append("  srpType: ").append(srpType).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
