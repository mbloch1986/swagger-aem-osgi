package org.openapitools.model;

import org.openapitools.model.OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties;
import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoInfo   {
  
  private @Valid String pid = null;
  private @Valid String title = null;
  private @Valid String description = null;
  private @Valid OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties properties = null;

  /**
   **/
  public OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoInfo pid(String pid) {
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
  public OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoInfo title(String title) {
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
  public OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoInfo description(String description) {
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
  public OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoInfo properties(OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties properties) {
    this.properties = properties;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("properties")
  public OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties getProperties() {
    return properties;
  }
  public void setProperties(OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties properties) {
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
    OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoInfo orgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoInfo = (OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoInfo) o;
    return Objects.equals(pid, orgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoInfo.pid) &&
        Objects.equals(title, orgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoInfo.title) &&
        Objects.equals(description, orgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoInfo.description) &&
        Objects.equals(properties, orgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoInfo.properties);
  }

  @Override
  public int hashCode() {
    return Objects.hash(pid, title, description, properties);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoInfo {\n");
    
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

