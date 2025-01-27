package org.openapitools.model;

import java.util.Objects;
import java.util.ArrayList;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import org.openapitools.model.ConfigNodePropertyBoolean;
import org.openapitools.model.ConfigNodePropertyString;
import javax.validation.constraints.*;
import io.swagger.annotations.*;


@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaResteasyServerCodegen", date = "2019-08-05T00:59:30.156Z[GMT]")
public class ComAdobeGraniteOauthServerImplOAuth2RevocationEndpointServletProperties   {
  
  private ConfigNodePropertyString slingServletPaths = null;
  private ConfigNodePropertyBoolean oauthRevocationActive = null;

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("sling.servlet.paths")
  public ConfigNodePropertyString getSlingServletPaths() {
    return slingServletPaths;
  }
  public void setSlingServletPaths(ConfigNodePropertyString slingServletPaths) {
    this.slingServletPaths = slingServletPaths;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("oauth.revocation.active")
  public ConfigNodePropertyBoolean getOauthRevocationActive() {
    return oauthRevocationActive;
  }
  public void setOauthRevocationActive(ConfigNodePropertyBoolean oauthRevocationActive) {
    this.oauthRevocationActive = oauthRevocationActive;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeGraniteOauthServerImplOAuth2RevocationEndpointServletProperties comAdobeGraniteOauthServerImplOAuth2RevocationEndpointServletProperties = (ComAdobeGraniteOauthServerImplOAuth2RevocationEndpointServletProperties) o;
    return Objects.equals(slingServletPaths, comAdobeGraniteOauthServerImplOAuth2RevocationEndpointServletProperties.slingServletPaths) &&
        Objects.equals(oauthRevocationActive, comAdobeGraniteOauthServerImplOAuth2RevocationEndpointServletProperties.oauthRevocationActive);
  }

  @Override
  public int hashCode() {
    return Objects.hash(slingServletPaths, oauthRevocationActive);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeGraniteOauthServerImplOAuth2RevocationEndpointServletProperties {\n");
    
    sb.append("    slingServletPaths: ").append(toIndentedString(slingServletPaths)).append("\n");
    sb.append("    oauthRevocationActive: ").append(toIndentedString(oauthRevocationActive)).append("\n");
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

