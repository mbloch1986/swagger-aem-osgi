package org.openapitools.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonInclude;
import com.fasterxml.jackson.annotation.JsonProperty;
import org.openapitools.server.api.model.ConfigNodePropertyString;

@JsonInclude(JsonInclude.Include.NON_NULL) 
public class ComAdobeGraniteAuthImsImplIMSInstanceCredentialsValidatorProperties   {
  
  private ConfigNodePropertyString oauthProviderId = null;

  public ComAdobeGraniteAuthImsImplIMSInstanceCredentialsValidatorProperties () {

  }

  public ComAdobeGraniteAuthImsImplIMSInstanceCredentialsValidatorProperties (ConfigNodePropertyString oauthProviderId) {
    this.oauthProviderId = oauthProviderId;
  }

    
  @JsonProperty("oauth.provider.id")
  public ConfigNodePropertyString getOauthProviderId() {
    return oauthProviderId;
  }
  public void setOauthProviderId(ConfigNodePropertyString oauthProviderId) {
    this.oauthProviderId = oauthProviderId;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeGraniteAuthImsImplIMSInstanceCredentialsValidatorProperties comAdobeGraniteAuthImsImplIMSInstanceCredentialsValidatorProperties = (ComAdobeGraniteAuthImsImplIMSInstanceCredentialsValidatorProperties) o;
    return Objects.equals(oauthProviderId, comAdobeGraniteAuthImsImplIMSInstanceCredentialsValidatorProperties.oauthProviderId);
  }

  @Override
  public int hashCode() {
    return Objects.hash(oauthProviderId);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeGraniteAuthImsImplIMSInstanceCredentialsValidatorProperties {\n");
    
    sb.append("    oauthProviderId: ").append(toIndentedString(oauthProviderId)).append("\n");
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