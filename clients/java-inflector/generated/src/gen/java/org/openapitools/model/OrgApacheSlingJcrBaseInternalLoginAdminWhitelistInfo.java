package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.OrgApacheSlingJcrBaseInternalLoginAdminWhitelistProperties;





@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaInflectorServerCodegen", date = "2019-08-05T00:53:46.291Z[GMT]")
public class OrgApacheSlingJcrBaseInternalLoginAdminWhitelistInfo   {
  @JsonProperty("pid")
  private String pid = null;

  @JsonProperty("title")
  private String title = null;

  @JsonProperty("description")
  private String description = null;

  @JsonProperty("properties")
  private OrgApacheSlingJcrBaseInternalLoginAdminWhitelistProperties properties = null;

  /**
   **/
  public OrgApacheSlingJcrBaseInternalLoginAdminWhitelistInfo pid(String pid) {
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
  public OrgApacheSlingJcrBaseInternalLoginAdminWhitelistInfo title(String title) {
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
  public OrgApacheSlingJcrBaseInternalLoginAdminWhitelistInfo description(String description) {
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
  public OrgApacheSlingJcrBaseInternalLoginAdminWhitelistInfo properties(OrgApacheSlingJcrBaseInternalLoginAdminWhitelistProperties properties) {
    this.properties = properties;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("properties")
  public OrgApacheSlingJcrBaseInternalLoginAdminWhitelistProperties getProperties() {
    return properties;
  }
  public void setProperties(OrgApacheSlingJcrBaseInternalLoginAdminWhitelistProperties properties) {
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
    OrgApacheSlingJcrBaseInternalLoginAdminWhitelistInfo orgApacheSlingJcrBaseInternalLoginAdminWhitelistInfo = (OrgApacheSlingJcrBaseInternalLoginAdminWhitelistInfo) o;
    return Objects.equals(pid, orgApacheSlingJcrBaseInternalLoginAdminWhitelistInfo.pid) &&
        Objects.equals(title, orgApacheSlingJcrBaseInternalLoginAdminWhitelistInfo.title) &&
        Objects.equals(description, orgApacheSlingJcrBaseInternalLoginAdminWhitelistInfo.description) &&
        Objects.equals(properties, orgApacheSlingJcrBaseInternalLoginAdminWhitelistInfo.properties);
  }

  @Override
  public int hashCode() {
    return Objects.hash(pid, title, description, properties);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheSlingJcrBaseInternalLoginAdminWhitelistInfo {\n");
    
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

