/**
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

package org.openapitools.client.model;

import org.openapitools.client.model.ConfigNodePropertyString;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ComAdobeGraniteAuthOauthImplFacebookProviderImplProperties {
  
  @SerializedName("oauth.provider.id")
  private ConfigNodePropertyString oauthProviderId = null;

  /**
   **/
  @ApiModelProperty(value = "")
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
    ComAdobeGraniteAuthOauthImplFacebookProviderImplProperties comAdobeGraniteAuthOauthImplFacebookProviderImplProperties = (ComAdobeGraniteAuthOauthImplFacebookProviderImplProperties) o;
    return (this.oauthProviderId == null ? comAdobeGraniteAuthOauthImplFacebookProviderImplProperties.oauthProviderId == null : this.oauthProviderId.equals(comAdobeGraniteAuthOauthImplFacebookProviderImplProperties.oauthProviderId));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.oauthProviderId == null ? 0: this.oauthProviderId.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeGraniteAuthOauthImplFacebookProviderImplProperties {\n");
    
    sb.append("  oauthProviderId: ").append(oauthProviderId).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}