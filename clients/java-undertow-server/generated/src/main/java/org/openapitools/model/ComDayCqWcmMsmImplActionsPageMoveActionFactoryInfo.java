package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties;





@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaUndertowServerCodegen", date = "2019-08-05T00:56:20.785Z[GMT]")
public class ComDayCqWcmMsmImplActionsPageMoveActionFactoryInfo   {
  
  private String pid = null;
  private String title = null;
  private String description = null;
  private ComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties properties = null;

  /**
   **/
  public ComDayCqWcmMsmImplActionsPageMoveActionFactoryInfo pid(String pid) {
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
  public ComDayCqWcmMsmImplActionsPageMoveActionFactoryInfo title(String title) {
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
  public ComDayCqWcmMsmImplActionsPageMoveActionFactoryInfo description(String description) {
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
  public ComDayCqWcmMsmImplActionsPageMoveActionFactoryInfo properties(ComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties properties) {
    this.properties = properties;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("properties")
  public ComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties getProperties() {
    return properties;
  }
  public void setProperties(ComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties properties) {
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
    ComDayCqWcmMsmImplActionsPageMoveActionFactoryInfo comDayCqWcmMsmImplActionsPageMoveActionFactoryInfo = (ComDayCqWcmMsmImplActionsPageMoveActionFactoryInfo) o;
    return Objects.equals(pid, comDayCqWcmMsmImplActionsPageMoveActionFactoryInfo.pid) &&
        Objects.equals(title, comDayCqWcmMsmImplActionsPageMoveActionFactoryInfo.title) &&
        Objects.equals(description, comDayCqWcmMsmImplActionsPageMoveActionFactoryInfo.description) &&
        Objects.equals(properties, comDayCqWcmMsmImplActionsPageMoveActionFactoryInfo.properties);
  }

  @Override
  public int hashCode() {
    return Objects.hash(pid, title, description, properties);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqWcmMsmImplActionsPageMoveActionFactoryInfo {\n");
    
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

