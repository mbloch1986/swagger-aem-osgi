package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ConfigNodePropertyArray;
import org.openapitools.model.ConfigNodePropertyInteger;
import org.openapitools.model.ConfigNodePropertyString;

/**
 * ComAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaMSF4JServerCodegen", date = "2019-08-05T00:54:29.762Z[GMT]")
public class ComAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties   {
  @JsonProperty("service.ranking")
  private ConfigNodePropertyInteger serviceRanking = null;

  @JsonProperty("keypair.id")
  private ConfigNodePropertyString keypairId = null;

  @JsonProperty("keypair.alias")
  private ConfigNodePropertyString keypairAlias = null;

  @JsonProperty("cdnrewriter.attributes")
  private ConfigNodePropertyArray cdnrewriterAttributes = null;

  @JsonProperty("cdn.rewriter.distribution.domain")
  private ConfigNodePropertyString cdnRewriterDistributionDomain = null;

  public ComAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties serviceRanking(ConfigNodePropertyInteger serviceRanking) {
    this.serviceRanking = serviceRanking;
    return this;
  }

   /**
   * Get serviceRanking
   * @return serviceRanking
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getServiceRanking() {
    return serviceRanking;
  }

  public void setServiceRanking(ConfigNodePropertyInteger serviceRanking) {
    this.serviceRanking = serviceRanking;
  }

  public ComAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties keypairId(ConfigNodePropertyString keypairId) {
    this.keypairId = keypairId;
    return this;
  }

   /**
   * Get keypairId
   * @return keypairId
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getKeypairId() {
    return keypairId;
  }

  public void setKeypairId(ConfigNodePropertyString keypairId) {
    this.keypairId = keypairId;
  }

  public ComAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties keypairAlias(ConfigNodePropertyString keypairAlias) {
    this.keypairAlias = keypairAlias;
    return this;
  }

   /**
   * Get keypairAlias
   * @return keypairAlias
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getKeypairAlias() {
    return keypairAlias;
  }

  public void setKeypairAlias(ConfigNodePropertyString keypairAlias) {
    this.keypairAlias = keypairAlias;
  }

  public ComAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties cdnrewriterAttributes(ConfigNodePropertyArray cdnrewriterAttributes) {
    this.cdnrewriterAttributes = cdnrewriterAttributes;
    return this;
  }

   /**
   * Get cdnrewriterAttributes
   * @return cdnrewriterAttributes
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getCdnrewriterAttributes() {
    return cdnrewriterAttributes;
  }

  public void setCdnrewriterAttributes(ConfigNodePropertyArray cdnrewriterAttributes) {
    this.cdnrewriterAttributes = cdnrewriterAttributes;
  }

  public ComAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties cdnRewriterDistributionDomain(ConfigNodePropertyString cdnRewriterDistributionDomain) {
    this.cdnRewriterDistributionDomain = cdnRewriterDistributionDomain;
    return this;
  }

   /**
   * Get cdnRewriterDistributionDomain
   * @return cdnRewriterDistributionDomain
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getCdnRewriterDistributionDomain() {
    return cdnRewriterDistributionDomain;
  }

  public void setCdnRewriterDistributionDomain(ConfigNodePropertyString cdnRewriterDistributionDomain) {
    this.cdnRewriterDistributionDomain = cdnRewriterDistributionDomain;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties comAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties = (ComAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties) o;
    return Objects.equals(this.serviceRanking, comAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties.serviceRanking) &&
        Objects.equals(this.keypairId, comAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties.keypairId) &&
        Objects.equals(this.keypairAlias, comAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties.keypairAlias) &&
        Objects.equals(this.cdnrewriterAttributes, comAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties.cdnrewriterAttributes) &&
        Objects.equals(this.cdnRewriterDistributionDomain, comAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties.cdnRewriterDistributionDomain);
  }

  @Override
  public int hashCode() {
    return Objects.hash(serviceRanking, keypairId, keypairAlias, cdnrewriterAttributes, cdnRewriterDistributionDomain);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

