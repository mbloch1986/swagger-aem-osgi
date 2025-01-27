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
public class OrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties {
  
  @SerializedName("provider.roots")
  private ConfigNodePropertyString providerRoots = null;
  @SerializedName("kind")
  private ConfigNodePropertyString kind = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getProviderRoots() {
    return providerRoots;
  }
  public void setProviderRoots(ConfigNodePropertyString providerRoots) {
    this.providerRoots = providerRoots;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getKind() {
    return kind;
  }
  public void setKind(ConfigNodePropertyString kind) {
    this.kind = kind;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties orgApacheSlingDistributionResourcesImplDistributionConfigurationProperties = (OrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties) o;
    return (this.providerRoots == null ? orgApacheSlingDistributionResourcesImplDistributionConfigurationProperties.providerRoots == null : this.providerRoots.equals(orgApacheSlingDistributionResourcesImplDistributionConfigurationProperties.providerRoots)) &&
        (this.kind == null ? orgApacheSlingDistributionResourcesImplDistributionConfigurationProperties.kind == null : this.kind.equals(orgApacheSlingDistributionResourcesImplDistributionConfigurationProperties.kind));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.providerRoots == null ? 0: this.providerRoots.hashCode());
    result = 31 * result + (this.kind == null ? 0: this.kind.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties {\n");
    
    sb.append("  providerRoots: ").append(providerRoots).append("\n");
    sb.append("  kind: ").append(kind).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
