package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceProperties;





@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaInflectorServerCodegen", date = "2019-08-05T00:53:46.291Z[GMT]")
public class ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceInfo   {
  @JsonProperty("pid")
  private String pid = null;

  @JsonProperty("title")
  private String title = null;

  @JsonProperty("description")
  private String description = null;

  @JsonProperty("properties")
  private ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceProperties properties = null;

  /**
   **/
  public ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceInfo pid(String pid) {
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
  public ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceInfo title(String title) {
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
  public ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceInfo description(String description) {
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
  public ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceInfo properties(ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceProperties properties) {
    this.properties = properties;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("properties")
  public ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceProperties getProperties() {
    return properties;
  }
  public void setProperties(ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceProperties properties) {
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
    ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceInfo comAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceInfo = (ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceInfo) o;
    return Objects.equals(pid, comAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceInfo.pid) &&
        Objects.equals(title, comAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceInfo.title) &&
        Objects.equals(description, comAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceInfo.description) &&
        Objects.equals(properties, comAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceInfo.properties);
  }

  @Override
  public int hashCode() {
    return Objects.hash(pid, title, description, properties);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceInfo {\n");
    
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
