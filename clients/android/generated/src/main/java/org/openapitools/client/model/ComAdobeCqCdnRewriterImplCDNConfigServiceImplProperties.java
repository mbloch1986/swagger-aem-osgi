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
import org.openapitools.client.model.ConfigNodePropertyString;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties {
  
  @SerializedName("cdn.config.distribution.domain")
  private ConfigNodePropertyString cdnConfigDistributionDomain = null;
  @SerializedName("cdn.config.enable.rewriting")
  private ConfigNodePropertyBoolean cdnConfigEnableRewriting = null;
  @SerializedName("cdn.config.path.prefixes")
  private ConfigNodePropertyArray cdnConfigPathPrefixes = null;
  @SerializedName("cdn.config.cdnttl")
  private ConfigNodePropertyInteger cdnConfigCdnttl = null;
  @SerializedName("cdn.config.application.protocol")
  private ConfigNodePropertyString cdnConfigApplicationProtocol = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getCdnConfigDistributionDomain() {
    return cdnConfigDistributionDomain;
  }
  public void setCdnConfigDistributionDomain(ConfigNodePropertyString cdnConfigDistributionDomain) {
    this.cdnConfigDistributionDomain = cdnConfigDistributionDomain;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getCdnConfigEnableRewriting() {
    return cdnConfigEnableRewriting;
  }
  public void setCdnConfigEnableRewriting(ConfigNodePropertyBoolean cdnConfigEnableRewriting) {
    this.cdnConfigEnableRewriting = cdnConfigEnableRewriting;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getCdnConfigPathPrefixes() {
    return cdnConfigPathPrefixes;
  }
  public void setCdnConfigPathPrefixes(ConfigNodePropertyArray cdnConfigPathPrefixes) {
    this.cdnConfigPathPrefixes = cdnConfigPathPrefixes;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getCdnConfigCdnttl() {
    return cdnConfigCdnttl;
  }
  public void setCdnConfigCdnttl(ConfigNodePropertyInteger cdnConfigCdnttl) {
    this.cdnConfigCdnttl = cdnConfigCdnttl;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getCdnConfigApplicationProtocol() {
    return cdnConfigApplicationProtocol;
  }
  public void setCdnConfigApplicationProtocol(ConfigNodePropertyString cdnConfigApplicationProtocol) {
    this.cdnConfigApplicationProtocol = cdnConfigApplicationProtocol;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties comAdobeCqCdnRewriterImplCDNConfigServiceImplProperties = (ComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties) o;
    return (this.cdnConfigDistributionDomain == null ? comAdobeCqCdnRewriterImplCDNConfigServiceImplProperties.cdnConfigDistributionDomain == null : this.cdnConfigDistributionDomain.equals(comAdobeCqCdnRewriterImplCDNConfigServiceImplProperties.cdnConfigDistributionDomain)) &&
        (this.cdnConfigEnableRewriting == null ? comAdobeCqCdnRewriterImplCDNConfigServiceImplProperties.cdnConfigEnableRewriting == null : this.cdnConfigEnableRewriting.equals(comAdobeCqCdnRewriterImplCDNConfigServiceImplProperties.cdnConfigEnableRewriting)) &&
        (this.cdnConfigPathPrefixes == null ? comAdobeCqCdnRewriterImplCDNConfigServiceImplProperties.cdnConfigPathPrefixes == null : this.cdnConfigPathPrefixes.equals(comAdobeCqCdnRewriterImplCDNConfigServiceImplProperties.cdnConfigPathPrefixes)) &&
        (this.cdnConfigCdnttl == null ? comAdobeCqCdnRewriterImplCDNConfigServiceImplProperties.cdnConfigCdnttl == null : this.cdnConfigCdnttl.equals(comAdobeCqCdnRewriterImplCDNConfigServiceImplProperties.cdnConfigCdnttl)) &&
        (this.cdnConfigApplicationProtocol == null ? comAdobeCqCdnRewriterImplCDNConfigServiceImplProperties.cdnConfigApplicationProtocol == null : this.cdnConfigApplicationProtocol.equals(comAdobeCqCdnRewriterImplCDNConfigServiceImplProperties.cdnConfigApplicationProtocol));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.cdnConfigDistributionDomain == null ? 0: this.cdnConfigDistributionDomain.hashCode());
    result = 31 * result + (this.cdnConfigEnableRewriting == null ? 0: this.cdnConfigEnableRewriting.hashCode());
    result = 31 * result + (this.cdnConfigPathPrefixes == null ? 0: this.cdnConfigPathPrefixes.hashCode());
    result = 31 * result + (this.cdnConfigCdnttl == null ? 0: this.cdnConfigCdnttl.hashCode());
    result = 31 * result + (this.cdnConfigApplicationProtocol == null ? 0: this.cdnConfigApplicationProtocol.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties {\n");
    
    sb.append("  cdnConfigDistributionDomain: ").append(cdnConfigDistributionDomain).append("\n");
    sb.append("  cdnConfigEnableRewriting: ").append(cdnConfigEnableRewriting).append("\n");
    sb.append("  cdnConfigPathPrefixes: ").append(cdnConfigPathPrefixes).append("\n");
    sb.append("  cdnConfigCdnttl: ").append(cdnConfigCdnttl).append("\n");
    sb.append("  cdnConfigApplicationProtocol: ").append(cdnConfigApplicationProtocol).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}