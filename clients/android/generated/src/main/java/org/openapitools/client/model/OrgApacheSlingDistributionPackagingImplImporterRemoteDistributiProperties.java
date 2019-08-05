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
import org.openapitools.client.model.ConfigNodePropertyString;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties {
  
  @SerializedName("name")
  private ConfigNodePropertyString name = null;
  @SerializedName("endpoints")
  private ConfigNodePropertyArray endpoints = null;
  @SerializedName("transportSecretProvider.target")
  private ConfigNodePropertyString transportSecretProviderTarget = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getName() {
    return name;
  }
  public void setName(ConfigNodePropertyString name) {
    this.name = name;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getEndpoints() {
    return endpoints;
  }
  public void setEndpoints(ConfigNodePropertyArray endpoints) {
    this.endpoints = endpoints;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getTransportSecretProviderTarget() {
    return transportSecretProviderTarget;
  }
  public void setTransportSecretProviderTarget(ConfigNodePropertyString transportSecretProviderTarget) {
    this.transportSecretProviderTarget = transportSecretProviderTarget;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties orgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties = (OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties) o;
    return (this.name == null ? orgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties.name == null : this.name.equals(orgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties.name)) &&
        (this.endpoints == null ? orgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties.endpoints == null : this.endpoints.equals(orgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties.endpoints)) &&
        (this.transportSecretProviderTarget == null ? orgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties.transportSecretProviderTarget == null : this.transportSecretProviderTarget.equals(orgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties.transportSecretProviderTarget));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.name == null ? 0: this.name.hashCode());
    result = 31 * result + (this.endpoints == null ? 0: this.endpoints.hashCode());
    result = 31 * result + (this.transportSecretProviderTarget == null ? 0: this.transportSecretProviderTarget.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties {\n");
    
    sb.append("  name: ").append(name).append("\n");
    sb.append("  endpoints: ").append(endpoints).append("\n");
    sb.append("  transportSecretProviderTarget: ").append(transportSecretProviderTarget).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}