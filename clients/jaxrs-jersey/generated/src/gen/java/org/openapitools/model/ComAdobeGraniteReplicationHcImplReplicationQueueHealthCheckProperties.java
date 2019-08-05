/*
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


package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ConfigNodePropertyArray;
import org.openapitools.model.ConfigNodePropertyInteger;
import javax.validation.constraints.*;

/**
 * ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckProperties
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2019-08-05T00:58:47.028Z[GMT]")
public class ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckProperties   {
  @JsonProperty("number.of.retries.allowed")
  private ConfigNodePropertyInteger numberOfRetriesAllowed = null;

  @JsonProperty("hc.tags")
  private ConfigNodePropertyArray hcTags = null;

  public ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckProperties numberOfRetriesAllowed(ConfigNodePropertyInteger numberOfRetriesAllowed) {
    this.numberOfRetriesAllowed = numberOfRetriesAllowed;
    return this;
  }

  /**
   * Get numberOfRetriesAllowed
   * @return numberOfRetriesAllowed
   **/
  @JsonProperty("number.of.retries.allowed")
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getNumberOfRetriesAllowed() {
    return numberOfRetriesAllowed;
  }

  public void setNumberOfRetriesAllowed(ConfigNodePropertyInteger numberOfRetriesAllowed) {
    this.numberOfRetriesAllowed = numberOfRetriesAllowed;
  }

  public ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckProperties hcTags(ConfigNodePropertyArray hcTags) {
    this.hcTags = hcTags;
    return this;
  }

  /**
   * Get hcTags
   * @return hcTags
   **/
  @JsonProperty("hc.tags")
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getHcTags() {
    return hcTags;
  }

  public void setHcTags(ConfigNodePropertyArray hcTags) {
    this.hcTags = hcTags;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckProperties comAdobeGraniteReplicationHcImplReplicationQueueHealthCheckProperties = (ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckProperties) o;
    return Objects.equals(this.numberOfRetriesAllowed, comAdobeGraniteReplicationHcImplReplicationQueueHealthCheckProperties.numberOfRetriesAllowed) &&
        Objects.equals(this.hcTags, comAdobeGraniteReplicationHcImplReplicationQueueHealthCheckProperties.hcTags);
  }

  @Override
  public int hashCode() {
    return Objects.hash(numberOfRetriesAllowed, hcTags);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckProperties {\n");
    
    sb.append("    numberOfRetriesAllowed: ").append(toIndentedString(numberOfRetriesAllowed)).append("\n");
    sb.append("    hcTags: ").append(toIndentedString(hcTags)).append("\n");
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
