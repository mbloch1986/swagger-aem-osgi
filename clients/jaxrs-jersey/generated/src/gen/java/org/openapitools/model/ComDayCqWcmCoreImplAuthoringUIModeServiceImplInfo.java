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
import org.openapitools.model.ComDayCqWcmCoreImplAuthoringUIModeServiceImplProperties;
import javax.validation.constraints.*;

/**
 * ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2019-08-05T00:58:47.028Z[GMT]")
public class ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo   {
  @JsonProperty("pid")
  private String pid = null;

  @JsonProperty("title")
  private String title = null;

  @JsonProperty("description")
  private String description = null;

  @JsonProperty("properties")
  private ComDayCqWcmCoreImplAuthoringUIModeServiceImplProperties properties = null;

  @JsonProperty("additionalProperties")
  private String additionalProperties = null;

  @JsonProperty("bundle_location")
  private String bundleLocation = null;

  @JsonProperty("service_location")
  private String serviceLocation = null;

  public ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo pid(String pid) {
    this.pid = pid;
    return this;
  }

  /**
   * Get pid
   * @return pid
   **/
  @JsonProperty("pid")
  @ApiModelProperty(value = "")
  public String getPid() {
    return pid;
  }

  public void setPid(String pid) {
    this.pid = pid;
  }

  public ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo title(String title) {
    this.title = title;
    return this;
  }

  /**
   * Get title
   * @return title
   **/
  @JsonProperty("title")
  @ApiModelProperty(value = "")
  public String getTitle() {
    return title;
  }

  public void setTitle(String title) {
    this.title = title;
  }

  public ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo description(String description) {
    this.description = description;
    return this;
  }

  /**
   * Get description
   * @return description
   **/
  @JsonProperty("description")
  @ApiModelProperty(value = "")
  public String getDescription() {
    return description;
  }

  public void setDescription(String description) {
    this.description = description;
  }

  public ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo properties(ComDayCqWcmCoreImplAuthoringUIModeServiceImplProperties properties) {
    this.properties = properties;
    return this;
  }

  /**
   * Get properties
   * @return properties
   **/
  @JsonProperty("properties")
  @ApiModelProperty(value = "")
  public ComDayCqWcmCoreImplAuthoringUIModeServiceImplProperties getProperties() {
    return properties;
  }

  public void setProperties(ComDayCqWcmCoreImplAuthoringUIModeServiceImplProperties properties) {
    this.properties = properties;
  }

  public ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo additionalProperties(String additionalProperties) {
    this.additionalProperties = additionalProperties;
    return this;
  }

  /**
   * Get additionalProperties
   * @return additionalProperties
   **/
  @JsonProperty("additionalProperties")
  @ApiModelProperty(value = "")
  public String getAdditionalProperties() {
    return additionalProperties;
  }

  public void setAdditionalProperties(String additionalProperties) {
    this.additionalProperties = additionalProperties;
  }

  public ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo bundleLocation(String bundleLocation) {
    this.bundleLocation = bundleLocation;
    return this;
  }

  /**
   * Get bundleLocation
   * @return bundleLocation
   **/
  @JsonProperty("bundle_location")
  @ApiModelProperty(value = "")
  public String getBundleLocation() {
    return bundleLocation;
  }

  public void setBundleLocation(String bundleLocation) {
    this.bundleLocation = bundleLocation;
  }

  public ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo serviceLocation(String serviceLocation) {
    this.serviceLocation = serviceLocation;
    return this;
  }

  /**
   * Get serviceLocation
   * @return serviceLocation
   **/
  @JsonProperty("service_location")
  @ApiModelProperty(value = "")
  public String getServiceLocation() {
    return serviceLocation;
  }

  public void setServiceLocation(String serviceLocation) {
    this.serviceLocation = serviceLocation;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo comDayCqWcmCoreImplAuthoringUIModeServiceImplInfo = (ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo) o;
    return Objects.equals(this.pid, comDayCqWcmCoreImplAuthoringUIModeServiceImplInfo.pid) &&
        Objects.equals(this.title, comDayCqWcmCoreImplAuthoringUIModeServiceImplInfo.title) &&
        Objects.equals(this.description, comDayCqWcmCoreImplAuthoringUIModeServiceImplInfo.description) &&
        Objects.equals(this.properties, comDayCqWcmCoreImplAuthoringUIModeServiceImplInfo.properties) &&
        Objects.equals(this.additionalProperties, comDayCqWcmCoreImplAuthoringUIModeServiceImplInfo.additionalProperties) &&
        Objects.equals(this.bundleLocation, comDayCqWcmCoreImplAuthoringUIModeServiceImplInfo.bundleLocation) &&
        Objects.equals(this.serviceLocation, comDayCqWcmCoreImplAuthoringUIModeServiceImplInfo.serviceLocation);
  }

  @Override
  public int hashCode() {
    return Objects.hash(pid, title, description, properties, additionalProperties, bundleLocation, serviceLocation);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo {\n");
    
    sb.append("    pid: ").append(toIndentedString(pid)).append("\n");
    sb.append("    title: ").append(toIndentedString(title)).append("\n");
    sb.append("    description: ").append(toIndentedString(description)).append("\n");
    sb.append("    properties: ").append(toIndentedString(properties)).append("\n");
    sb.append("    additionalProperties: ").append(toIndentedString(additionalProperties)).append("\n");
    sb.append("    bundleLocation: ").append(toIndentedString(bundleLocation)).append("\n");
    sb.append("    serviceLocation: ").append(toIndentedString(serviceLocation)).append("\n");
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
