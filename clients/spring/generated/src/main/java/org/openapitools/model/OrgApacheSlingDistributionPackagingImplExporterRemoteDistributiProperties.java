package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ConfigNodePropertyArray;
import org.openapitools.model.ConfigNodePropertyInteger;
import org.openapitools.model.ConfigNodePropertyString;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * OrgApacheSlingDistributionPackagingImplExporterRemoteDistributiProperties
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.SpringCodegen", date = "2019-08-05T01:13:37.880Z[GMT]")

public class OrgApacheSlingDistributionPackagingImplExporterRemoteDistributiProperties   {
  @JsonProperty("name")
  private ConfigNodePropertyString name = null;

  @JsonProperty("endpoints")
  private ConfigNodePropertyArray endpoints = null;

  @JsonProperty("pull.items")
  private ConfigNodePropertyInteger pullItems = null;

  @JsonProperty("packageBuilder.target")
  private ConfigNodePropertyString packageBuilderTarget = null;

  @JsonProperty("transportSecretProvider.target")
  private ConfigNodePropertyString transportSecretProviderTarget = null;

  public OrgApacheSlingDistributionPackagingImplExporterRemoteDistributiProperties name(ConfigNodePropertyString name) {
    this.name = name;
    return this;
  }

  /**
   * Get name
   * @return name
  **/
  @ApiModelProperty(value = "")

  @Valid

  public ConfigNodePropertyString getName() {
    return name;
  }

  public void setName(ConfigNodePropertyString name) {
    this.name = name;
  }

  public OrgApacheSlingDistributionPackagingImplExporterRemoteDistributiProperties endpoints(ConfigNodePropertyArray endpoints) {
    this.endpoints = endpoints;
    return this;
  }

  /**
   * Get endpoints
   * @return endpoints
  **/
  @ApiModelProperty(value = "")

  @Valid

  public ConfigNodePropertyArray getEndpoints() {
    return endpoints;
  }

  public void setEndpoints(ConfigNodePropertyArray endpoints) {
    this.endpoints = endpoints;
  }

  public OrgApacheSlingDistributionPackagingImplExporterRemoteDistributiProperties pullItems(ConfigNodePropertyInteger pullItems) {
    this.pullItems = pullItems;
    return this;
  }

  /**
   * Get pullItems
   * @return pullItems
  **/
  @ApiModelProperty(value = "")

  @Valid

  public ConfigNodePropertyInteger getPullItems() {
    return pullItems;
  }

  public void setPullItems(ConfigNodePropertyInteger pullItems) {
    this.pullItems = pullItems;
  }

  public OrgApacheSlingDistributionPackagingImplExporterRemoteDistributiProperties packageBuilderTarget(ConfigNodePropertyString packageBuilderTarget) {
    this.packageBuilderTarget = packageBuilderTarget;
    return this;
  }

  /**
   * Get packageBuilderTarget
   * @return packageBuilderTarget
  **/
  @ApiModelProperty(value = "")

  @Valid

  public ConfigNodePropertyString getPackageBuilderTarget() {
    return packageBuilderTarget;
  }

  public void setPackageBuilderTarget(ConfigNodePropertyString packageBuilderTarget) {
    this.packageBuilderTarget = packageBuilderTarget;
  }

  public OrgApacheSlingDistributionPackagingImplExporterRemoteDistributiProperties transportSecretProviderTarget(ConfigNodePropertyString transportSecretProviderTarget) {
    this.transportSecretProviderTarget = transportSecretProviderTarget;
    return this;
  }

  /**
   * Get transportSecretProviderTarget
   * @return transportSecretProviderTarget
  **/
  @ApiModelProperty(value = "")

  @Valid

  public ConfigNodePropertyString getTransportSecretProviderTarget() {
    return transportSecretProviderTarget;
  }

  public void setTransportSecretProviderTarget(ConfigNodePropertyString transportSecretProviderTarget) {
    this.transportSecretProviderTarget = transportSecretProviderTarget;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheSlingDistributionPackagingImplExporterRemoteDistributiProperties orgApacheSlingDistributionPackagingImplExporterRemoteDistributiProperties = (OrgApacheSlingDistributionPackagingImplExporterRemoteDistributiProperties) o;
    return Objects.equals(this.name, orgApacheSlingDistributionPackagingImplExporterRemoteDistributiProperties.name) &&
        Objects.equals(this.endpoints, orgApacheSlingDistributionPackagingImplExporterRemoteDistributiProperties.endpoints) &&
        Objects.equals(this.pullItems, orgApacheSlingDistributionPackagingImplExporterRemoteDistributiProperties.pullItems) &&
        Objects.equals(this.packageBuilderTarget, orgApacheSlingDistributionPackagingImplExporterRemoteDistributiProperties.packageBuilderTarget) &&
        Objects.equals(this.transportSecretProviderTarget, orgApacheSlingDistributionPackagingImplExporterRemoteDistributiProperties.transportSecretProviderTarget);
  }

  @Override
  public int hashCode() {
    return Objects.hash(name, endpoints, pullItems, packageBuilderTarget, transportSecretProviderTarget);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheSlingDistributionPackagingImplExporterRemoteDistributiProperties {\n");
    
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    endpoints: ").append(toIndentedString(endpoints)).append("\n");
    sb.append("    pullItems: ").append(toIndentedString(pullItems)).append("\n");
    sb.append("    packageBuilderTarget: ").append(toIndentedString(packageBuilderTarget)).append("\n");
    sb.append("    transportSecretProviderTarget: ").append(toIndentedString(transportSecretProviderTarget)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
