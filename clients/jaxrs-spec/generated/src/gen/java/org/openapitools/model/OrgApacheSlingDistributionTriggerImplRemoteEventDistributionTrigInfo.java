package org.openapitools.model;

import org.openapitools.model.OrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties;
import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class OrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigInfo   {
  
  private @Valid String pid = null;
  private @Valid String title = null;
  private @Valid String description = null;
  private @Valid OrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties properties = null;

  /**
   **/
  public OrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigInfo pid(String pid) {
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
  public OrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigInfo title(String title) {
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
  public OrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigInfo description(String description) {
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
  public OrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigInfo properties(OrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties properties) {
    this.properties = properties;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("properties")
  public OrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties getProperties() {
    return properties;
  }
  public void setProperties(OrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties properties) {
    this.properties = properties;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigInfo orgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigInfo = (OrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigInfo) o;
    return Objects.equals(pid, orgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigInfo.pid) &&
        Objects.equals(title, orgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigInfo.title) &&
        Objects.equals(description, orgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigInfo.description) &&
        Objects.equals(properties, orgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigInfo.properties);
  }

  @Override
  public int hashCode() {
    return Objects.hash(pid, title, description, properties);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigInfo {\n");
    
    sb.append("    pid: ").append(toIndentedString(pid)).append("\n");
    sb.append("    title: ").append(toIndentedString(title)).append("\n");
    sb.append("    description: ").append(toIndentedString(description)).append("\n");
    sb.append("    properties: ").append(toIndentedString(properties)).append("\n");
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
