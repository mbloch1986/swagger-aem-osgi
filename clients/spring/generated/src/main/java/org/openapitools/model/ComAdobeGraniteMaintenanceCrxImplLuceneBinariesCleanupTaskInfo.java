package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ComAdobeGraniteMaintenanceCrxImplLuceneBinariesCleanupTaskProperties;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * ComAdobeGraniteMaintenanceCrxImplLuceneBinariesCleanupTaskInfo
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.SpringCodegen", date = "2019-08-05T01:13:37.880Z[GMT]")

public class ComAdobeGraniteMaintenanceCrxImplLuceneBinariesCleanupTaskInfo   {
  @JsonProperty("pid")
  private String pid = null;

  @JsonProperty("title")
  private String title = null;

  @JsonProperty("description")
  private String description = null;

  @JsonProperty("properties")
  private ComAdobeGraniteMaintenanceCrxImplLuceneBinariesCleanupTaskProperties properties = null;

  @JsonProperty("bundle_location")
  private String bundleLocation = null;

  @JsonProperty("service_location")
  private String serviceLocation = null;

  public ComAdobeGraniteMaintenanceCrxImplLuceneBinariesCleanupTaskInfo pid(String pid) {
    this.pid = pid;
    return this;
  }

  /**
   * Get pid
   * @return pid
  **/
  @ApiModelProperty(value = "")


  public String getPid() {
    return pid;
  }

  public void setPid(String pid) {
    this.pid = pid;
  }

  public ComAdobeGraniteMaintenanceCrxImplLuceneBinariesCleanupTaskInfo title(String title) {
    this.title = title;
    return this;
  }

  /**
   * Get title
   * @return title
  **/
  @ApiModelProperty(value = "")


  public String getTitle() {
    return title;
  }

  public void setTitle(String title) {
    this.title = title;
  }

  public ComAdobeGraniteMaintenanceCrxImplLuceneBinariesCleanupTaskInfo description(String description) {
    this.description = description;
    return this;
  }

  /**
   * Get description
   * @return description
  **/
  @ApiModelProperty(value = "")


  public String getDescription() {
    return description;
  }

  public void setDescription(String description) {
    this.description = description;
  }

  public ComAdobeGraniteMaintenanceCrxImplLuceneBinariesCleanupTaskInfo properties(ComAdobeGraniteMaintenanceCrxImplLuceneBinariesCleanupTaskProperties properties) {
    this.properties = properties;
    return this;
  }

  /**
   * Get properties
   * @return properties
  **/
  @ApiModelProperty(value = "")

  @Valid

  public ComAdobeGraniteMaintenanceCrxImplLuceneBinariesCleanupTaskProperties getProperties() {
    return properties;
  }

  public void setProperties(ComAdobeGraniteMaintenanceCrxImplLuceneBinariesCleanupTaskProperties properties) {
    this.properties = properties;
  }

  public ComAdobeGraniteMaintenanceCrxImplLuceneBinariesCleanupTaskInfo bundleLocation(String bundleLocation) {
    this.bundleLocation = bundleLocation;
    return this;
  }

  /**
   * Get bundleLocation
   * @return bundleLocation
  **/
  @ApiModelProperty(value = "")


  public String getBundleLocation() {
    return bundleLocation;
  }

  public void setBundleLocation(String bundleLocation) {
    this.bundleLocation = bundleLocation;
  }

  public ComAdobeGraniteMaintenanceCrxImplLuceneBinariesCleanupTaskInfo serviceLocation(String serviceLocation) {
    this.serviceLocation = serviceLocation;
    return this;
  }

  /**
   * Get serviceLocation
   * @return serviceLocation
  **/
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
    ComAdobeGraniteMaintenanceCrxImplLuceneBinariesCleanupTaskInfo comAdobeGraniteMaintenanceCrxImplLuceneBinariesCleanupTaskInfo = (ComAdobeGraniteMaintenanceCrxImplLuceneBinariesCleanupTaskInfo) o;
    return Objects.equals(this.pid, comAdobeGraniteMaintenanceCrxImplLuceneBinariesCleanupTaskInfo.pid) &&
        Objects.equals(this.title, comAdobeGraniteMaintenanceCrxImplLuceneBinariesCleanupTaskInfo.title) &&
        Objects.equals(this.description, comAdobeGraniteMaintenanceCrxImplLuceneBinariesCleanupTaskInfo.description) &&
        Objects.equals(this.properties, comAdobeGraniteMaintenanceCrxImplLuceneBinariesCleanupTaskInfo.properties) &&
        Objects.equals(this.bundleLocation, comAdobeGraniteMaintenanceCrxImplLuceneBinariesCleanupTaskInfo.bundleLocation) &&
        Objects.equals(this.serviceLocation, comAdobeGraniteMaintenanceCrxImplLuceneBinariesCleanupTaskInfo.serviceLocation);
  }

  @Override
  public int hashCode() {
    return Objects.hash(pid, title, description, properties, bundleLocation, serviceLocation);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeGraniteMaintenanceCrxImplLuceneBinariesCleanupTaskInfo {\n");
    
    sb.append("    pid: ").append(toIndentedString(pid)).append("\n");
    sb.append("    title: ").append(toIndentedString(title)).append("\n");
    sb.append("    description: ").append(toIndentedString(description)).append("\n");
    sb.append("    properties: ").append(toIndentedString(properties)).append("\n");
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
