package org.openapitools.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import org.openapitools.model.ComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerProperties;
import javax.validation.constraints.*;


import io.swagger.annotations.*;
import java.util.Objects;

import javax.xml.bind.annotation.*;



public class ComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerInfo   {
  
  private String pid = null;

  private String title = null;

  private String description = null;

  private ComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerProperties properties = null;

  private String bundleLocation = null;

  private String serviceLocation = null;


  /**
   **/
  public ComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerInfo pid(String pid) {
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
  public ComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerInfo title(String title) {
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
  public ComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerInfo description(String description) {
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
  public ComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerInfo properties(ComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerProperties properties) {
    this.properties = properties;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("properties")
  public ComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerProperties getProperties() {
    return properties;
  }
  public void setProperties(ComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerProperties properties) {
    this.properties = properties;
  }


  /**
   **/
  public ComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerInfo bundleLocation(String bundleLocation) {
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
  public ComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerInfo serviceLocation(String serviceLocation) {
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
    ComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerInfo comDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerInfo = (ComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerInfo) o;
    return Objects.equals(pid, comDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerInfo.pid) &&
        Objects.equals(title, comDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerInfo.title) &&
        Objects.equals(description, comDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerInfo.description) &&
        Objects.equals(properties, comDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerInfo.properties) &&
        Objects.equals(bundleLocation, comDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerInfo.bundleLocation) &&
        Objects.equals(serviceLocation, comDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerInfo.serviceLocation);
  }

  @Override
  public int hashCode() {
    return Objects.hash(pid, title, description, properties, bundleLocation, serviceLocation);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerInfo {\n");
    
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

