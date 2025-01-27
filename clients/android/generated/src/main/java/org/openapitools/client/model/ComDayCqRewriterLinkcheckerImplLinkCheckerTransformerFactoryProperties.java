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
import org.openapitools.client.model.ConfigNodePropertyInteger;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties {
  
  @SerializedName("linkcheckertransformer.disableRewriting")
  private ConfigNodePropertyBoolean linkcheckertransformerDisableRewriting = null;
  @SerializedName("linkcheckertransformer.disableChecking")
  private ConfigNodePropertyBoolean linkcheckertransformerDisableChecking = null;
  @SerializedName("linkcheckertransformer.mapCacheSize")
  private ConfigNodePropertyInteger linkcheckertransformerMapCacheSize = null;
  @SerializedName("linkcheckertransformer.strictExtensionCheck")
  private ConfigNodePropertyBoolean linkcheckertransformerStrictExtensionCheck = null;
  @SerializedName("linkcheckertransformer.stripHtmltExtension")
  private ConfigNodePropertyBoolean linkcheckertransformerStripHtmltExtension = null;
  @SerializedName("linkcheckertransformer.rewriteElements")
  private ConfigNodePropertyArray linkcheckertransformerRewriteElements = null;
  @SerializedName("linkcheckertransformer.stripExtensionPathBlacklist")
  private ConfigNodePropertyArray linkcheckertransformerStripExtensionPathBlacklist = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getLinkcheckertransformerDisableRewriting() {
    return linkcheckertransformerDisableRewriting;
  }
  public void setLinkcheckertransformerDisableRewriting(ConfigNodePropertyBoolean linkcheckertransformerDisableRewriting) {
    this.linkcheckertransformerDisableRewriting = linkcheckertransformerDisableRewriting;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getLinkcheckertransformerDisableChecking() {
    return linkcheckertransformerDisableChecking;
  }
  public void setLinkcheckertransformerDisableChecking(ConfigNodePropertyBoolean linkcheckertransformerDisableChecking) {
    this.linkcheckertransformerDisableChecking = linkcheckertransformerDisableChecking;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getLinkcheckertransformerMapCacheSize() {
    return linkcheckertransformerMapCacheSize;
  }
  public void setLinkcheckertransformerMapCacheSize(ConfigNodePropertyInteger linkcheckertransformerMapCacheSize) {
    this.linkcheckertransformerMapCacheSize = linkcheckertransformerMapCacheSize;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getLinkcheckertransformerStrictExtensionCheck() {
    return linkcheckertransformerStrictExtensionCheck;
  }
  public void setLinkcheckertransformerStrictExtensionCheck(ConfigNodePropertyBoolean linkcheckertransformerStrictExtensionCheck) {
    this.linkcheckertransformerStrictExtensionCheck = linkcheckertransformerStrictExtensionCheck;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getLinkcheckertransformerStripHtmltExtension() {
    return linkcheckertransformerStripHtmltExtension;
  }
  public void setLinkcheckertransformerStripHtmltExtension(ConfigNodePropertyBoolean linkcheckertransformerStripHtmltExtension) {
    this.linkcheckertransformerStripHtmltExtension = linkcheckertransformerStripHtmltExtension;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getLinkcheckertransformerRewriteElements() {
    return linkcheckertransformerRewriteElements;
  }
  public void setLinkcheckertransformerRewriteElements(ConfigNodePropertyArray linkcheckertransformerRewriteElements) {
    this.linkcheckertransformerRewriteElements = linkcheckertransformerRewriteElements;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getLinkcheckertransformerStripExtensionPathBlacklist() {
    return linkcheckertransformerStripExtensionPathBlacklist;
  }
  public void setLinkcheckertransformerStripExtensionPathBlacklist(ConfigNodePropertyArray linkcheckertransformerStripExtensionPathBlacklist) {
    this.linkcheckertransformerStripExtensionPathBlacklist = linkcheckertransformerStripExtensionPathBlacklist;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties comDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties = (ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties) o;
    return (this.linkcheckertransformerDisableRewriting == null ? comDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties.linkcheckertransformerDisableRewriting == null : this.linkcheckertransformerDisableRewriting.equals(comDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties.linkcheckertransformerDisableRewriting)) &&
        (this.linkcheckertransformerDisableChecking == null ? comDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties.linkcheckertransformerDisableChecking == null : this.linkcheckertransformerDisableChecking.equals(comDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties.linkcheckertransformerDisableChecking)) &&
        (this.linkcheckertransformerMapCacheSize == null ? comDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties.linkcheckertransformerMapCacheSize == null : this.linkcheckertransformerMapCacheSize.equals(comDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties.linkcheckertransformerMapCacheSize)) &&
        (this.linkcheckertransformerStrictExtensionCheck == null ? comDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties.linkcheckertransformerStrictExtensionCheck == null : this.linkcheckertransformerStrictExtensionCheck.equals(comDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties.linkcheckertransformerStrictExtensionCheck)) &&
        (this.linkcheckertransformerStripHtmltExtension == null ? comDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties.linkcheckertransformerStripHtmltExtension == null : this.linkcheckertransformerStripHtmltExtension.equals(comDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties.linkcheckertransformerStripHtmltExtension)) &&
        (this.linkcheckertransformerRewriteElements == null ? comDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties.linkcheckertransformerRewriteElements == null : this.linkcheckertransformerRewriteElements.equals(comDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties.linkcheckertransformerRewriteElements)) &&
        (this.linkcheckertransformerStripExtensionPathBlacklist == null ? comDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties.linkcheckertransformerStripExtensionPathBlacklist == null : this.linkcheckertransformerStripExtensionPathBlacklist.equals(comDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties.linkcheckertransformerStripExtensionPathBlacklist));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.linkcheckertransformerDisableRewriting == null ? 0: this.linkcheckertransformerDisableRewriting.hashCode());
    result = 31 * result + (this.linkcheckertransformerDisableChecking == null ? 0: this.linkcheckertransformerDisableChecking.hashCode());
    result = 31 * result + (this.linkcheckertransformerMapCacheSize == null ? 0: this.linkcheckertransformerMapCacheSize.hashCode());
    result = 31 * result + (this.linkcheckertransformerStrictExtensionCheck == null ? 0: this.linkcheckertransformerStrictExtensionCheck.hashCode());
    result = 31 * result + (this.linkcheckertransformerStripHtmltExtension == null ? 0: this.linkcheckertransformerStripHtmltExtension.hashCode());
    result = 31 * result + (this.linkcheckertransformerRewriteElements == null ? 0: this.linkcheckertransformerRewriteElements.hashCode());
    result = 31 * result + (this.linkcheckertransformerStripExtensionPathBlacklist == null ? 0: this.linkcheckertransformerStripExtensionPathBlacklist.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties {\n");
    
    sb.append("  linkcheckertransformerDisableRewriting: ").append(linkcheckertransformerDisableRewriting).append("\n");
    sb.append("  linkcheckertransformerDisableChecking: ").append(linkcheckertransformerDisableChecking).append("\n");
    sb.append("  linkcheckertransformerMapCacheSize: ").append(linkcheckertransformerMapCacheSize).append("\n");
    sb.append("  linkcheckertransformerStrictExtensionCheck: ").append(linkcheckertransformerStrictExtensionCheck).append("\n");
    sb.append("  linkcheckertransformerStripHtmltExtension: ").append(linkcheckertransformerStripHtmltExtension).append("\n");
    sb.append("  linkcheckertransformerRewriteElements: ").append(linkcheckertransformerRewriteElements).append("\n");
    sb.append("  linkcheckertransformerStripExtensionPathBlacklist: ").append(linkcheckertransformerStripExtensionPathBlacklist).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
