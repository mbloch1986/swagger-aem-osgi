package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties;

/**
 * ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSInfo
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaMSF4JServerCodegen", date = "2019-08-05T00:54:29.762Z[GMT]")
public class ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSInfo   {
  @JsonProperty("pid")
  private String pid = null;

  @JsonProperty("title")
  private String title = null;

  @JsonProperty("description")
  private String description = null;

  @JsonProperty("properties")
  private ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties properties = null;

  public ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSInfo pid(String pid) {
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

  public ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSInfo title(String title) {
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

  public ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSInfo description(String description) {
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

  public ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSInfo properties(ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties properties) {
    this.properties = properties;
    return this;
  }

   /**
   * Get properties
   * @return properties
  **/
  @ApiModelProperty(value = "")
  public ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties getProperties() {
    return properties;
  }

  public void setProperties(ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties properties) {
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
    ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSInfo comAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSInfo = (ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSInfo) o;
    return Objects.equals(this.pid, comAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSInfo.pid) &&
        Objects.equals(this.title, comAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSInfo.title) &&
        Objects.equals(this.description, comAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSInfo.description) &&
        Objects.equals(this.properties, comAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSInfo.properties);
  }

  @Override
  public int hashCode() {
    return Objects.hash(pid, title, description, properties);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSInfo {\n");
    
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
