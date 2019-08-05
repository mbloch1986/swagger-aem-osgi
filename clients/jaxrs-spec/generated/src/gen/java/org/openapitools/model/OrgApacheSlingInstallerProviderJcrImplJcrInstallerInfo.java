package org.openapitools.model;

import org.openapitools.model.OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties;
import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class OrgApacheSlingInstallerProviderJcrImplJcrInstallerInfo   {
  
  private @Valid String pid = null;
  private @Valid String title = null;
  private @Valid String description = null;
  private @Valid OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties properties = null;
  private @Valid String bundleLocation = null;
  private @Valid String serviceLocation = null;

  /**
   **/
  public OrgApacheSlingInstallerProviderJcrImplJcrInstallerInfo pid(String pid) {
    this.pid = pid;
    return this;
  }

  
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
  public OrgApacheSlingInstallerProviderJcrImplJcrInstallerInfo title(String title) {
    this.title = title;
    return this;
  }

  
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
  public OrgApacheSlingInstallerProviderJcrImplJcrInstallerInfo description(String description) {
    this.description = description;
    return this;
  }

  
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
  public OrgApacheSlingInstallerProviderJcrImplJcrInstallerInfo properties(OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties properties) {
    this.properties = properties;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("properties")
  public OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties getProperties() {
    return properties;
  }
  public void setProperties(OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties properties) {
    this.properties = properties;
  }

  /**
   **/
  public OrgApacheSlingInstallerProviderJcrImplJcrInstallerInfo bundleLocation(String bundleLocation) {
    this.bundleLocation = bundleLocation;
    return this;
  }

  
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
  public OrgApacheSlingInstallerProviderJcrImplJcrInstallerInfo serviceLocation(String serviceLocation) {
    this.serviceLocation = serviceLocation;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("service_location")
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
    OrgApacheSlingInstallerProviderJcrImplJcrInstallerInfo orgApacheSlingInstallerProviderJcrImplJcrInstallerInfo = (OrgApacheSlingInstallerProviderJcrImplJcrInstallerInfo) o;
    return Objects.equals(pid, orgApacheSlingInstallerProviderJcrImplJcrInstallerInfo.pid) &&
        Objects.equals(title, orgApacheSlingInstallerProviderJcrImplJcrInstallerInfo.title) &&
        Objects.equals(description, orgApacheSlingInstallerProviderJcrImplJcrInstallerInfo.description) &&
        Objects.equals(properties, orgApacheSlingInstallerProviderJcrImplJcrInstallerInfo.properties) &&
        Objects.equals(bundleLocation, orgApacheSlingInstallerProviderJcrImplJcrInstallerInfo.bundleLocation) &&
        Objects.equals(serviceLocation, orgApacheSlingInstallerProviderJcrImplJcrInstallerInfo.serviceLocation);
  }

  @Override
  public int hashCode() {
    return Objects.hash(pid, title, description, properties, bundleLocation, serviceLocation);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheSlingInstallerProviderJcrImplJcrInstallerInfo {\n");
    
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
