package org.openapitools.model;

import java.util.Objects;
import java.util.ArrayList;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ComDayCqAnalyticsSitecatalystImplSitecatalystHttpClientImplProperties;
import javax.validation.constraints.*;
import io.swagger.annotations.*;


@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaResteasyEapServerCodegen", date = "2019-08-05T01:00:05.540Z[GMT]")
public class ComDayCqAnalyticsSitecatalystImplSitecatalystHttpClientImplInfo   {
  

  private String pid = null;

  private String title = null;

  private String description = null;

  private ComDayCqAnalyticsSitecatalystImplSitecatalystHttpClientImplProperties properties = null;

  private String additionalProperties = null;

  private String bundleLocation = null;

  private String serviceLocation = null;

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("pid")
  public String getPid() {
    return pid;
  }
  public void setPid(String pid) {
    this.pid = pid;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("title")
  public String getTitle() {
    return title;
  }
  public void setTitle(String title) {
    this.title = title;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("description")
  public String getDescription() {
    return description;
  }
  public void setDescription(String description) {
    this.description = description;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("properties")
  public ComDayCqAnalyticsSitecatalystImplSitecatalystHttpClientImplProperties getProperties() {
    return properties;
  }
  public void setProperties(ComDayCqAnalyticsSitecatalystImplSitecatalystHttpClientImplProperties properties) {
    this.properties = properties;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("additionalProperties")
  public String getAdditionalProperties() {
    return additionalProperties;
  }
  public void setAdditionalProperties(String additionalProperties) {
    this.additionalProperties = additionalProperties;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("bundle_location")
  public String getBundleLocation() {
    return bundleLocation;
  }
  public void setBundleLocation(String bundleLocation) {
    this.bundleLocation = bundleLocation;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("service_location")
  public String getServiceLocation() {
    return serviceLocation;
  }
  public void setServiceLocation(String serviceLocation) {
    this.serviceLocation = serviceLocation;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqAnalyticsSitecatalystImplSitecatalystHttpClientImplInfo comDayCqAnalyticsSitecatalystImplSitecatalystHttpClientImplInfo = (ComDayCqAnalyticsSitecatalystImplSitecatalystHttpClientImplInfo) o;
    return Objects.equals(pid, comDayCqAnalyticsSitecatalystImplSitecatalystHttpClientImplInfo.pid) &&
        Objects.equals(title, comDayCqAnalyticsSitecatalystImplSitecatalystHttpClientImplInfo.title) &&
        Objects.equals(description, comDayCqAnalyticsSitecatalystImplSitecatalystHttpClientImplInfo.description) &&
        Objects.equals(properties, comDayCqAnalyticsSitecatalystImplSitecatalystHttpClientImplInfo.properties) &&
        Objects.equals(additionalProperties, comDayCqAnalyticsSitecatalystImplSitecatalystHttpClientImplInfo.additionalProperties) &&
        Objects.equals(bundleLocation, comDayCqAnalyticsSitecatalystImplSitecatalystHttpClientImplInfo.bundleLocation) &&
        Objects.equals(serviceLocation, comDayCqAnalyticsSitecatalystImplSitecatalystHttpClientImplInfo.serviceLocation);
  }

  @Override
  public int hashCode() {
    return Objects.hash(pid, title, description, properties, additionalProperties, bundleLocation, serviceLocation);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqAnalyticsSitecatalystImplSitecatalystHttpClientImplInfo {\n");
    
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
