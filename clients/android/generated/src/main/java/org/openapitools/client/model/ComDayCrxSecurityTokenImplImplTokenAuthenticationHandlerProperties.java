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

import org.openapitools.client.model.ConfigNodePropertyArray;
import org.openapitools.client.model.ConfigNodePropertyBoolean;
import org.openapitools.client.model.ConfigNodePropertyDropDown;
import org.openapitools.client.model.ConfigNodePropertyString;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ComDayCrxSecurityTokenImplImplTokenAuthenticationHandlerProperties {
  
  @SerializedName("path")
  private ConfigNodePropertyString path = null;
  @SerializedName("token.required.attr")
  private ConfigNodePropertyDropDown tokenRequiredAttr = null;
  @SerializedName("token.alternate.url")
  private ConfigNodePropertyString tokenAlternateUrl = null;
  @SerializedName("token.encapsulated")
  private ConfigNodePropertyBoolean tokenEncapsulated = null;
  @SerializedName("skip.token.refresh")
  private ConfigNodePropertyArray skipTokenRefresh = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getPath() {
    return path;
  }
  public void setPath(ConfigNodePropertyString path) {
    this.path = path;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyDropDown getTokenRequiredAttr() {
    return tokenRequiredAttr;
  }
  public void setTokenRequiredAttr(ConfigNodePropertyDropDown tokenRequiredAttr) {
    this.tokenRequiredAttr = tokenRequiredAttr;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getTokenAlternateUrl() {
    return tokenAlternateUrl;
  }
  public void setTokenAlternateUrl(ConfigNodePropertyString tokenAlternateUrl) {
    this.tokenAlternateUrl = tokenAlternateUrl;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getTokenEncapsulated() {
    return tokenEncapsulated;
  }
  public void setTokenEncapsulated(ConfigNodePropertyBoolean tokenEncapsulated) {
    this.tokenEncapsulated = tokenEncapsulated;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getSkipTokenRefresh() {
    return skipTokenRefresh;
  }
  public void setSkipTokenRefresh(ConfigNodePropertyArray skipTokenRefresh) {
    this.skipTokenRefresh = skipTokenRefresh;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCrxSecurityTokenImplImplTokenAuthenticationHandlerProperties comDayCrxSecurityTokenImplImplTokenAuthenticationHandlerProperties = (ComDayCrxSecurityTokenImplImplTokenAuthenticationHandlerProperties) o;
    return (this.path == null ? comDayCrxSecurityTokenImplImplTokenAuthenticationHandlerProperties.path == null : this.path.equals(comDayCrxSecurityTokenImplImplTokenAuthenticationHandlerProperties.path)) &&
        (this.tokenRequiredAttr == null ? comDayCrxSecurityTokenImplImplTokenAuthenticationHandlerProperties.tokenRequiredAttr == null : this.tokenRequiredAttr.equals(comDayCrxSecurityTokenImplImplTokenAuthenticationHandlerProperties.tokenRequiredAttr)) &&
        (this.tokenAlternateUrl == null ? comDayCrxSecurityTokenImplImplTokenAuthenticationHandlerProperties.tokenAlternateUrl == null : this.tokenAlternateUrl.equals(comDayCrxSecurityTokenImplImplTokenAuthenticationHandlerProperties.tokenAlternateUrl)) &&
        (this.tokenEncapsulated == null ? comDayCrxSecurityTokenImplImplTokenAuthenticationHandlerProperties.tokenEncapsulated == null : this.tokenEncapsulated.equals(comDayCrxSecurityTokenImplImplTokenAuthenticationHandlerProperties.tokenEncapsulated)) &&
        (this.skipTokenRefresh == null ? comDayCrxSecurityTokenImplImplTokenAuthenticationHandlerProperties.skipTokenRefresh == null : this.skipTokenRefresh.equals(comDayCrxSecurityTokenImplImplTokenAuthenticationHandlerProperties.skipTokenRefresh));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.path == null ? 0: this.path.hashCode());
    result = 31 * result + (this.tokenRequiredAttr == null ? 0: this.tokenRequiredAttr.hashCode());
    result = 31 * result + (this.tokenAlternateUrl == null ? 0: this.tokenAlternateUrl.hashCode());
    result = 31 * result + (this.tokenEncapsulated == null ? 0: this.tokenEncapsulated.hashCode());
    result = 31 * result + (this.skipTokenRefresh == null ? 0: this.skipTokenRefresh.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCrxSecurityTokenImplImplTokenAuthenticationHandlerProperties {\n");
    
    sb.append("  path: ").append(path).append("\n");
    sb.append("  tokenRequiredAttr: ").append(tokenRequiredAttr).append("\n");
    sb.append("  tokenAlternateUrl: ").append(tokenAlternateUrl).append("\n");
    sb.append("  tokenEncapsulated: ").append(tokenEncapsulated).append("\n");
    sb.append("  skipTokenRefresh: ").append(skipTokenRefresh).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
