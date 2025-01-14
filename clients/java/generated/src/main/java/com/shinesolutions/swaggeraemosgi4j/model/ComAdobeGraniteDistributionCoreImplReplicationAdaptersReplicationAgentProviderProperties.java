/*
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


package com.shinesolutions.swaggeraemosgi4j.model;

import java.util.Objects;
import java.util.Arrays;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import com.shinesolutions.swaggeraemosgi4j.model.ConfigNodePropertyBoolean;
import com.shinesolutions.swaggeraemosgi4j.model.ConfigNodePropertyString;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;

/**
 * ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicationAgentProviderProperties
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2019-06-26T12:10:03.209Z[GMT]")
public class ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicationAgentProviderProperties {
  public static final String SERIALIZED_NAME_PROVIDER_NAME = "providerName";
  @SerializedName(SERIALIZED_NAME_PROVIDER_NAME)
  private ConfigNodePropertyString providerName = null;

  public static final String SERIALIZED_NAME_FORWARD_REQUESTS = "forward.requests";
  @SerializedName(SERIALIZED_NAME_FORWARD_REQUESTS)
  private ConfigNodePropertyBoolean forwardRequests = null;

  public ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicationAgentProviderProperties providerName(ConfigNodePropertyString providerName) {
    this.providerName = providerName;
    return this;
  }

   /**
   * Get providerName
   * @return providerName
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getProviderName() {
    return providerName;
  }

  public void setProviderName(ConfigNodePropertyString providerName) {
    this.providerName = providerName;
  }

  public ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicationAgentProviderProperties forwardRequests(ConfigNodePropertyBoolean forwardRequests) {
    this.forwardRequests = forwardRequests;
    return this;
  }

   /**
   * Get forwardRequests
   * @return forwardRequests
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getForwardRequests() {
    return forwardRequests;
  }

  public void setForwardRequests(ConfigNodePropertyBoolean forwardRequests) {
    this.forwardRequests = forwardRequests;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicationAgentProviderProperties comAdobeGraniteDistributionCoreImplReplicationAdaptersReplicationAgentProviderProperties = (ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicationAgentProviderProperties) o;
    return Objects.equals(this.providerName, comAdobeGraniteDistributionCoreImplReplicationAdaptersReplicationAgentProviderProperties.providerName) &&
        Objects.equals(this.forwardRequests, comAdobeGraniteDistributionCoreImplReplicationAdaptersReplicationAgentProviderProperties.forwardRequests);
  }

  @Override
  public int hashCode() {
    return Objects.hash(providerName, forwardRequests);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicationAgentProviderProperties {\n");
    sb.append("    providerName: ").append(toIndentedString(providerName)).append("\n");
    sb.append("    forwardRequests: ").append(toIndentedString(forwardRequests)).append("\n");
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

