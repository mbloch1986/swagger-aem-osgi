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
public class OrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrServerProviderSeProperties {
  
  @SerializedName("server.type")
  private ConfigNodePropertyDropDown serverType = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyDropDown getServerType() {
    return serverType;
  }
  public void setServerType(ConfigNodePropertyDropDown serverType) {
    this.serverType = serverType;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrServerProviderSeProperties orgApacheJackrabbitOakPluginsIndexSolrOsgiSolrServerProviderSeProperties = (OrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrServerProviderSeProperties) o;
    return (this.serverType == null ? orgApacheJackrabbitOakPluginsIndexSolrOsgiSolrServerProviderSeProperties.serverType == null : this.serverType.equals(orgApacheJackrabbitOakPluginsIndexSolrOsgiSolrServerProviderSeProperties.serverType));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.serverType == null ? 0: this.serverType.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrServerProviderSeProperties {\n");
    
    sb.append("  serverType: ").append(serverType).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
