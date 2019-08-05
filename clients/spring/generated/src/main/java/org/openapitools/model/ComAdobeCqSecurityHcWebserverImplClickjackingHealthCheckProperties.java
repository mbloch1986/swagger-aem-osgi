package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ConfigNodePropertyArray;
import org.openapitools.model.ConfigNodePropertyString;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * ComAdobeCqSecurityHcWebserverImplClickjackingHealthCheckProperties
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.SpringCodegen", date = "2019-08-05T01:13:37.880Z[GMT]")

public class ComAdobeCqSecurityHcWebserverImplClickjackingHealthCheckProperties   {
  @JsonProperty("hc.tags")
  private ConfigNodePropertyArray hcTags = null;

  @JsonProperty("webserver.address")
  private ConfigNodePropertyString webserverAddress = null;

  public ComAdobeCqSecurityHcWebserverImplClickjackingHealthCheckProperties hcTags(ConfigNodePropertyArray hcTags) {
    this.hcTags = hcTags;
    return this;
  }

  /**
   * Get hcTags
   * @return hcTags
  **/
  @ApiModelProperty(value = "")

  @Valid

  public ConfigNodePropertyArray getHcTags() {
    return hcTags;
  }

  public void setHcTags(ConfigNodePropertyArray hcTags) {
    this.hcTags = hcTags;
  }

  public ComAdobeCqSecurityHcWebserverImplClickjackingHealthCheckProperties webserverAddress(ConfigNodePropertyString webserverAddress) {
    this.webserverAddress = webserverAddress;
    return this;
  }

  /**
   * Get webserverAddress
   * @return webserverAddress
  **/
  @ApiModelProperty(value = "")

  @Valid

  public ConfigNodePropertyString getWebserverAddress() {
    return webserverAddress;
  }

  public void setWebserverAddress(ConfigNodePropertyString webserverAddress) {
    this.webserverAddress = webserverAddress;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeCqSecurityHcWebserverImplClickjackingHealthCheckProperties comAdobeCqSecurityHcWebserverImplClickjackingHealthCheckProperties = (ComAdobeCqSecurityHcWebserverImplClickjackingHealthCheckProperties) o;
    return Objects.equals(this.hcTags, comAdobeCqSecurityHcWebserverImplClickjackingHealthCheckProperties.hcTags) &&
        Objects.equals(this.webserverAddress, comAdobeCqSecurityHcWebserverImplClickjackingHealthCheckProperties.webserverAddress);
  }

  @Override
  public int hashCode() {
    return Objects.hash(hcTags, webserverAddress);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeCqSecurityHcWebserverImplClickjackingHealthCheckProperties {\n");
    
    sb.append("    hcTags: ").append(toIndentedString(hcTags)).append("\n");
    sb.append("    webserverAddress: ").append(toIndentedString(webserverAddress)).append("\n");
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
