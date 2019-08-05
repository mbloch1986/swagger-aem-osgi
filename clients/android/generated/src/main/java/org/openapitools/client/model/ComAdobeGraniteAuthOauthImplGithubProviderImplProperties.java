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
public class ComAdobeGraniteAuthOauthImplGithubProviderImplProperties {
  
  @SerializedName("oauth.provider.id")
  private ConfigNodePropertyString oauthProviderId = null;
  @SerializedName("oauth.provider.github.authorization.url")
  private ConfigNodePropertyString oauthProviderGithubAuthorizationUrl = null;
  @SerializedName("oauth.provider.github.token.url")
  private ConfigNodePropertyString oauthProviderGithubTokenUrl = null;
  @SerializedName("oauth.provider.github.profile.url")
  private ConfigNodePropertyString oauthProviderGithubProfileUrl = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getOauthProviderId() {
    return oauthProviderId;
  }
  public void setOauthProviderId(ConfigNodePropertyString oauthProviderId) {
    this.oauthProviderId = oauthProviderId;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getOauthProviderGithubAuthorizationUrl() {
    return oauthProviderGithubAuthorizationUrl;
  }
  public void setOauthProviderGithubAuthorizationUrl(ConfigNodePropertyString oauthProviderGithubAuthorizationUrl) {
    this.oauthProviderGithubAuthorizationUrl = oauthProviderGithubAuthorizationUrl;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getOauthProviderGithubTokenUrl() {
    return oauthProviderGithubTokenUrl;
  }
  public void setOauthProviderGithubTokenUrl(ConfigNodePropertyString oauthProviderGithubTokenUrl) {
    this.oauthProviderGithubTokenUrl = oauthProviderGithubTokenUrl;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getOauthProviderGithubProfileUrl() {
    return oauthProviderGithubProfileUrl;
  }
  public void setOauthProviderGithubProfileUrl(ConfigNodePropertyString oauthProviderGithubProfileUrl) {
    this.oauthProviderGithubProfileUrl = oauthProviderGithubProfileUrl;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeGraniteAuthOauthImplGithubProviderImplProperties comAdobeGraniteAuthOauthImplGithubProviderImplProperties = (ComAdobeGraniteAuthOauthImplGithubProviderImplProperties) o;
    return (this.oauthProviderId == null ? comAdobeGraniteAuthOauthImplGithubProviderImplProperties.oauthProviderId == null : this.oauthProviderId.equals(comAdobeGraniteAuthOauthImplGithubProviderImplProperties.oauthProviderId)) &&
        (this.oauthProviderGithubAuthorizationUrl == null ? comAdobeGraniteAuthOauthImplGithubProviderImplProperties.oauthProviderGithubAuthorizationUrl == null : this.oauthProviderGithubAuthorizationUrl.equals(comAdobeGraniteAuthOauthImplGithubProviderImplProperties.oauthProviderGithubAuthorizationUrl)) &&
        (this.oauthProviderGithubTokenUrl == null ? comAdobeGraniteAuthOauthImplGithubProviderImplProperties.oauthProviderGithubTokenUrl == null : this.oauthProviderGithubTokenUrl.equals(comAdobeGraniteAuthOauthImplGithubProviderImplProperties.oauthProviderGithubTokenUrl)) &&
        (this.oauthProviderGithubProfileUrl == null ? comAdobeGraniteAuthOauthImplGithubProviderImplProperties.oauthProviderGithubProfileUrl == null : this.oauthProviderGithubProfileUrl.equals(comAdobeGraniteAuthOauthImplGithubProviderImplProperties.oauthProviderGithubProfileUrl));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.oauthProviderId == null ? 0: this.oauthProviderId.hashCode());
    result = 31 * result + (this.oauthProviderGithubAuthorizationUrl == null ? 0: this.oauthProviderGithubAuthorizationUrl.hashCode());
    result = 31 * result + (this.oauthProviderGithubTokenUrl == null ? 0: this.oauthProviderGithubTokenUrl.hashCode());
    result = 31 * result + (this.oauthProviderGithubProfileUrl == null ? 0: this.oauthProviderGithubProfileUrl.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeGraniteAuthOauthImplGithubProviderImplProperties {\n");
    
    sb.append("  oauthProviderId: ").append(oauthProviderId).append("\n");
    sb.append("  oauthProviderGithubAuthorizationUrl: ").append(oauthProviderGithubAuthorizationUrl).append("\n");
    sb.append("  oauthProviderGithubTokenUrl: ").append(oauthProviderGithubTokenUrl).append("\n");
    sb.append("  oauthProviderGithubProfileUrl: ").append(oauthProviderGithubProfileUrl).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}