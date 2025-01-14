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
import org.openapitools.client.model.ConfigNodePropertyBoolean;
import org.openapitools.client.model.ConfigNodePropertyInteger;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class OrgApacheSlingCaconfigResourceImplDefDefaultContextPathStrategyProperties {
  
  @SerializedName("enabled")
  private ConfigNodePropertyBoolean enabled = null;
  @SerializedName("configRefResourceNames")
  private ConfigNodePropertyArray configRefResourceNames = null;
  @SerializedName("configRefPropertyNames")
  private ConfigNodePropertyArray configRefPropertyNames = null;
  @SerializedName("service.ranking")
  private ConfigNodePropertyInteger serviceRanking = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getEnabled() {
    return enabled;
  }
  public void setEnabled(ConfigNodePropertyBoolean enabled) {
    this.enabled = enabled;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getConfigRefResourceNames() {
    return configRefResourceNames;
  }
  public void setConfigRefResourceNames(ConfigNodePropertyArray configRefResourceNames) {
    this.configRefResourceNames = configRefResourceNames;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getConfigRefPropertyNames() {
    return configRefPropertyNames;
  }
  public void setConfigRefPropertyNames(ConfigNodePropertyArray configRefPropertyNames) {
    this.configRefPropertyNames = configRefPropertyNames;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getServiceRanking() {
    return serviceRanking;
  }
  public void setServiceRanking(ConfigNodePropertyInteger serviceRanking) {
    this.serviceRanking = serviceRanking;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheSlingCaconfigResourceImplDefDefaultContextPathStrategyProperties orgApacheSlingCaconfigResourceImplDefDefaultContextPathStrategyProperties = (OrgApacheSlingCaconfigResourceImplDefDefaultContextPathStrategyProperties) o;
    return (this.enabled == null ? orgApacheSlingCaconfigResourceImplDefDefaultContextPathStrategyProperties.enabled == null : this.enabled.equals(orgApacheSlingCaconfigResourceImplDefDefaultContextPathStrategyProperties.enabled)) &&
        (this.configRefResourceNames == null ? orgApacheSlingCaconfigResourceImplDefDefaultContextPathStrategyProperties.configRefResourceNames == null : this.configRefResourceNames.equals(orgApacheSlingCaconfigResourceImplDefDefaultContextPathStrategyProperties.configRefResourceNames)) &&
        (this.configRefPropertyNames == null ? orgApacheSlingCaconfigResourceImplDefDefaultContextPathStrategyProperties.configRefPropertyNames == null : this.configRefPropertyNames.equals(orgApacheSlingCaconfigResourceImplDefDefaultContextPathStrategyProperties.configRefPropertyNames)) &&
        (this.serviceRanking == null ? orgApacheSlingCaconfigResourceImplDefDefaultContextPathStrategyProperties.serviceRanking == null : this.serviceRanking.equals(orgApacheSlingCaconfigResourceImplDefDefaultContextPathStrategyProperties.serviceRanking));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.enabled == null ? 0: this.enabled.hashCode());
    result = 31 * result + (this.configRefResourceNames == null ? 0: this.configRefResourceNames.hashCode());
    result = 31 * result + (this.configRefPropertyNames == null ? 0: this.configRefPropertyNames.hashCode());
    result = 31 * result + (this.serviceRanking == null ? 0: this.serviceRanking.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheSlingCaconfigResourceImplDefDefaultContextPathStrategyProperties {\n");
    
    sb.append("  enabled: ").append(enabled).append("\n");
    sb.append("  configRefResourceNames: ").append(configRefResourceNames).append("\n");
    sb.append("  configRefPropertyNames: ").append(configRefPropertyNames).append("\n");
    sb.append("  serviceRanking: ").append(serviceRanking).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
