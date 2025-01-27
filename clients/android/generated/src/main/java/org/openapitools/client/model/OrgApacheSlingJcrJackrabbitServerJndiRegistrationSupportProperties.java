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
public class OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties {
  
  @SerializedName("java.naming.factory.initial")
  private ConfigNodePropertyString javaNamingFactoryInitial = null;
  @SerializedName("java.naming.provider.url")
  private ConfigNodePropertyString javaNamingProviderUrl = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getJavaNamingFactoryInitial() {
    return javaNamingFactoryInitial;
  }
  public void setJavaNamingFactoryInitial(ConfigNodePropertyString javaNamingFactoryInitial) {
    this.javaNamingFactoryInitial = javaNamingFactoryInitial;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getJavaNamingProviderUrl() {
    return javaNamingProviderUrl;
  }
  public void setJavaNamingProviderUrl(ConfigNodePropertyString javaNamingProviderUrl) {
    this.javaNamingProviderUrl = javaNamingProviderUrl;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties orgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties = (OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties) o;
    return (this.javaNamingFactoryInitial == null ? orgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties.javaNamingFactoryInitial == null : this.javaNamingFactoryInitial.equals(orgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties.javaNamingFactoryInitial)) &&
        (this.javaNamingProviderUrl == null ? orgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties.javaNamingProviderUrl == null : this.javaNamingProviderUrl.equals(orgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties.javaNamingProviderUrl));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.javaNamingFactoryInitial == null ? 0: this.javaNamingFactoryInitial.hashCode());
    result = 31 * result + (this.javaNamingProviderUrl == null ? 0: this.javaNamingProviderUrl.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties {\n");
    
    sb.append("  javaNamingFactoryInitial: ").append(javaNamingFactoryInitial).append("\n");
    sb.append("  javaNamingProviderUrl: ").append(javaNamingProviderUrl).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
