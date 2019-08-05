package org.openapitools.model;

import java.util.Objects;
import java.util.ArrayList;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ConfigNodePropertyArray;
import javax.validation.constraints.*;
import io.swagger.annotations.*;


@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaResteasyEapServerCodegen", date = "2019-08-05T01:00:05.540Z[GMT]")
public class ComAdobeGraniteOptoutImplOptOutServiceImplProperties   {
  

  private ConfigNodePropertyArray optoutCookies = null;

  private ConfigNodePropertyArray optoutHeaders = null;

  private ConfigNodePropertyArray optoutWhitelistCookies = null;

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("optout.cookies")
  public ConfigNodePropertyArray getOptoutCookies() {
    return optoutCookies;
  }
  public void setOptoutCookies(ConfigNodePropertyArray optoutCookies) {
    this.optoutCookies = optoutCookies;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("optout.headers")
  public ConfigNodePropertyArray getOptoutHeaders() {
    return optoutHeaders;
  }
  public void setOptoutHeaders(ConfigNodePropertyArray optoutHeaders) {
    this.optoutHeaders = optoutHeaders;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("optout.whitelist.cookies")
  public ConfigNodePropertyArray getOptoutWhitelistCookies() {
    return optoutWhitelistCookies;
  }
  public void setOptoutWhitelistCookies(ConfigNodePropertyArray optoutWhitelistCookies) {
    this.optoutWhitelistCookies = optoutWhitelistCookies;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeGraniteOptoutImplOptOutServiceImplProperties comAdobeGraniteOptoutImplOptOutServiceImplProperties = (ComAdobeGraniteOptoutImplOptOutServiceImplProperties) o;
    return Objects.equals(optoutCookies, comAdobeGraniteOptoutImplOptOutServiceImplProperties.optoutCookies) &&
        Objects.equals(optoutHeaders, comAdobeGraniteOptoutImplOptOutServiceImplProperties.optoutHeaders) &&
        Objects.equals(optoutWhitelistCookies, comAdobeGraniteOptoutImplOptOutServiceImplProperties.optoutWhitelistCookies);
  }

  @Override
  public int hashCode() {
    return Objects.hash(optoutCookies, optoutHeaders, optoutWhitelistCookies);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeGraniteOptoutImplOptOutServiceImplProperties {\n");
    
    sb.append("    optoutCookies: ").append(toIndentedString(optoutCookies)).append("\n");
    sb.append("    optoutHeaders: ").append(toIndentedString(optoutHeaders)).append("\n");
    sb.append("    optoutWhitelistCookies: ").append(toIndentedString(optoutWhitelistCookies)).append("\n");
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
