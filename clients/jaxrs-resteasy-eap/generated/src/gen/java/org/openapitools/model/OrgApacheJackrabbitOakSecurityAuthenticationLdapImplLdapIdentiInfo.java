package org.openapitools.model;

import java.util.Objects;
import java.util.ArrayList;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties;
import javax.validation.constraints.*;
import io.swagger.annotations.*;


@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaResteasyEapServerCodegen", date = "2019-08-05T01:00:05.540Z[GMT]")
public class OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiInfo   {
  

  private String pid = null;

  private String title = null;

  private String description = null;

  private OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties properties = null;

  /**
   **/
  
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
  
  @ApiModelProperty(value = "")
  @JsonProperty("properties")
  public OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties getProperties() {
    return properties;
  }
  public void setProperties(OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties properties) {
    this.properties = properties;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiInfo orgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiInfo = (OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiInfo) o;
    return Objects.equals(pid, orgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiInfo.pid) &&
        Objects.equals(title, orgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiInfo.title) &&
        Objects.equals(description, orgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiInfo.description) &&
        Objects.equals(properties, orgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiInfo.properties);
  }

  @Override
  public int hashCode() {
    return Objects.hash(pid, title, description, properties);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiInfo {\n");
    
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

