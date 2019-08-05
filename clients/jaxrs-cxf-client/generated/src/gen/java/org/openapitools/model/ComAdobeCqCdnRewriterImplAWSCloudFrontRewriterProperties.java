package org.openapitools.model;

import org.openapitools.model.ConfigNodePropertyArray;
import org.openapitools.model.ConfigNodePropertyInteger;
import org.openapitools.model.ConfigNodePropertyString;

import io.swagger.annotations.ApiModelProperty;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;

public class ComAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties  {
  
  @ApiModelProperty(value = "")
  private ConfigNodePropertyInteger serviceRanking = null;

  @ApiModelProperty(value = "")
  private ConfigNodePropertyString keypairId = null;

  @ApiModelProperty(value = "")
  private ConfigNodePropertyString keypairAlias = null;

  @ApiModelProperty(value = "")
  private ConfigNodePropertyArray cdnrewriterAttributes = null;

  @ApiModelProperty(value = "")
  private ConfigNodePropertyString cdnRewriterDistributionDomain = null;
 /**
   * Get serviceRanking
   * @return serviceRanking
  **/
  @JsonProperty("service.ranking")
  public ConfigNodePropertyInteger getServiceRanking() {
    return serviceRanking;
  }

  public void setServiceRanking(ConfigNodePropertyInteger serviceRanking) {
    this.serviceRanking = serviceRanking;
  }

  public ComAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties serviceRanking(ConfigNodePropertyInteger serviceRanking) {
    this.serviceRanking = serviceRanking;
    return this;
  }

 /**
   * Get keypairId
   * @return keypairId
  **/
  @JsonProperty("keypair.id")
  public ConfigNodePropertyString getKeypairId() {
    return keypairId;
  }

  public void setKeypairId(ConfigNodePropertyString keypairId) {
    this.keypairId = keypairId;
  }

  public ComAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties keypairId(ConfigNodePropertyString keypairId) {
    this.keypairId = keypairId;
    return this;
  }

 /**
   * Get keypairAlias
   * @return keypairAlias
  **/
  @JsonProperty("keypair.alias")
  public ConfigNodePropertyString getKeypairAlias() {
    return keypairAlias;
  }

  public void setKeypairAlias(ConfigNodePropertyString keypairAlias) {
    this.keypairAlias = keypairAlias;
  }

  public ComAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties keypairAlias(ConfigNodePropertyString keypairAlias) {
    this.keypairAlias = keypairAlias;
    return this;
  }

 /**
   * Get cdnrewriterAttributes
   * @return cdnrewriterAttributes
  **/
  @JsonProperty("cdnrewriter.attributes")
  public ConfigNodePropertyArray getCdnrewriterAttributes() {
    return cdnrewriterAttributes;
  }

  public void setCdnrewriterAttributes(ConfigNodePropertyArray cdnrewriterAttributes) {
    this.cdnrewriterAttributes = cdnrewriterAttributes;
  }

  public ComAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties cdnrewriterAttributes(ConfigNodePropertyArray cdnrewriterAttributes) {
    this.cdnrewriterAttributes = cdnrewriterAttributes;
    return this;
  }

 /**
   * Get cdnRewriterDistributionDomain
   * @return cdnRewriterDistributionDomain
  **/
  @JsonProperty("cdn.rewriter.distribution.domain")
  public ConfigNodePropertyString getCdnRewriterDistributionDomain() {
    return cdnRewriterDistributionDomain;
  }

  public void setCdnRewriterDistributionDomain(ConfigNodePropertyString cdnRewriterDistributionDomain) {
    this.cdnRewriterDistributionDomain = cdnRewriterDistributionDomain;
  }

  public ComAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties cdnRewriterDistributionDomain(ConfigNodePropertyString cdnRewriterDistributionDomain) {
    this.cdnRewriterDistributionDomain = cdnRewriterDistributionDomain;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties {\n");
    
    sb.append("    serviceRanking: ").append(toIndentedString(serviceRanking)).append("\n");
    sb.append("    keypairId: ").append(toIndentedString(keypairId)).append("\n");
    sb.append("    keypairAlias: ").append(toIndentedString(keypairAlias)).append("\n");
    sb.append("    cdnrewriterAttributes: ").append(toIndentedString(cdnrewriterAttributes)).append("\n");
    sb.append("    cdnRewriterDistributionDomain: ").append(toIndentedString(cdnRewriterDistributionDomain)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
