package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskProperties;





@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaUndertowServerCodegen", date = "2019-08-05T00:56:20.785Z[GMT]")
public class ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskInfo   {
  
  private String pid = null;
  private String title = null;
  private String description = null;
  private ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskProperties properties = null;
  private String bundleLocation = null;
  private String serviceLocation = null;

  /**
   **/
  public ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskInfo pid(String pid) {
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
  public ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskInfo title(String title) {
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
  public ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskInfo description(String description) {
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
  public ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskInfo properties(ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskProperties properties) {
    this.properties = properties;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("properties")
  public ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskProperties getProperties() {
    return properties;
  }
  public void setProperties(ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskProperties properties) {
    this.properties = properties;
  }

  /**
   **/
  public ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskInfo bundleLocation(String bundleLocation) {
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
  public ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskInfo serviceLocation(String serviceLocation) {
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
    ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskInfo comAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskInfo = (ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskInfo) o;
    return Objects.equals(pid, comAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskInfo.pid) &&
        Objects.equals(title, comAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskInfo.title) &&
        Objects.equals(description, comAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskInfo.description) &&
        Objects.equals(properties, comAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskInfo.properties) &&
        Objects.equals(bundleLocation, comAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskInfo.bundleLocation) &&
        Objects.equals(serviceLocation, comAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskInfo.serviceLocation);
  }

  @Override
  public int hashCode() {
    return Objects.hash(pid, title, description, properties, bundleLocation, serviceLocation);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskInfo {\n");
    
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

