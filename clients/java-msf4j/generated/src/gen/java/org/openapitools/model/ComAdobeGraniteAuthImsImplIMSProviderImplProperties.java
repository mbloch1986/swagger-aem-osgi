package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ConfigNodePropertyArray;
import org.openapitools.model.ConfigNodePropertyBoolean;
import org.openapitools.model.ConfigNodePropertyString;

/**
 * ComAdobeGraniteAuthImsImplIMSProviderImplProperties
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaMSF4JServerCodegen", date = "2019-08-05T00:54:29.762Z[GMT]")
public class ComAdobeGraniteAuthImsImplIMSProviderImplProperties   {
  @JsonProperty("oauth.provider.id")
  private ConfigNodePropertyString oauthProviderId = null;

  @JsonProperty("oauth.provider.ims.authorization.url")
  private ConfigNodePropertyString oauthProviderImsAuthorizationUrl = null;

  @JsonProperty("oauth.provider.ims.token.url")
  private ConfigNodePropertyString oauthProviderImsTokenUrl = null;

  @JsonProperty("oauth.provider.ims.profile.url")
  private ConfigNodePropertyString oauthProviderImsProfileUrl = null;

  @JsonProperty("oauth.provider.ims.extended.details.urls")
  private ConfigNodePropertyArray oauthProviderImsExtendedDetailsUrls = null;

  @JsonProperty("oauth.provider.ims.validate.token.url")
  private ConfigNodePropertyString oauthProviderImsValidateTokenUrl = null;

  @JsonProperty("oauth.provider.ims.session.property")
  private ConfigNodePropertyString oauthProviderImsSessionProperty = null;

  @JsonProperty("oauth.provider.ims.service.token.client.id")
  private ConfigNodePropertyString oauthProviderImsServiceTokenClientId = null;

  @JsonProperty("oauth.provider.ims.service.token.client.secret")
  private ConfigNodePropertyString oauthProviderImsServiceTokenClientSecret = null;

  @JsonProperty("oauth.provider.ims.service.token")
  private ConfigNodePropertyString oauthProviderImsServiceToken = null;

  @JsonProperty("ims.org.ref")
  private ConfigNodePropertyString imsOrgRef = null;

  @JsonProperty("ims.group.mapping")
  private ConfigNodePropertyArray imsGroupMapping = null;

  @JsonProperty("oauth.provider.ims.only.license.group")
  private ConfigNodePropertyBoolean oauthProviderImsOnlyLicenseGroup = null;

  public ComAdobeGraniteAuthImsImplIMSProviderImplProperties oauthProviderId(ConfigNodePropertyString oauthProviderId) {
    this.oauthProviderId = oauthProviderId;
    return this;
  }

   /**
   * Get oauthProviderId
   * @return oauthProviderId
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getOauthProviderId() {
    return oauthProviderId;
  }

  public void setOauthProviderId(ConfigNodePropertyString oauthProviderId) {
    this.oauthProviderId = oauthProviderId;
  }

  public ComAdobeGraniteAuthImsImplIMSProviderImplProperties oauthProviderImsAuthorizationUrl(ConfigNodePropertyString oauthProviderImsAuthorizationUrl) {
    this.oauthProviderImsAuthorizationUrl = oauthProviderImsAuthorizationUrl;
    return this;
  }

   /**
   * Get oauthProviderImsAuthorizationUrl
   * @return oauthProviderImsAuthorizationUrl
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getOauthProviderImsAuthorizationUrl() {
    return oauthProviderImsAuthorizationUrl;
  }

  public void setOauthProviderImsAuthorizationUrl(ConfigNodePropertyString oauthProviderImsAuthorizationUrl) {
    this.oauthProviderImsAuthorizationUrl = oauthProviderImsAuthorizationUrl;
  }

  public ComAdobeGraniteAuthImsImplIMSProviderImplProperties oauthProviderImsTokenUrl(ConfigNodePropertyString oauthProviderImsTokenUrl) {
    this.oauthProviderImsTokenUrl = oauthProviderImsTokenUrl;
    return this;
  }

   /**
   * Get oauthProviderImsTokenUrl
   * @return oauthProviderImsTokenUrl
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getOauthProviderImsTokenUrl() {
    return oauthProviderImsTokenUrl;
  }

  public void setOauthProviderImsTokenUrl(ConfigNodePropertyString oauthProviderImsTokenUrl) {
    this.oauthProviderImsTokenUrl = oauthProviderImsTokenUrl;
  }

  public ComAdobeGraniteAuthImsImplIMSProviderImplProperties oauthProviderImsProfileUrl(ConfigNodePropertyString oauthProviderImsProfileUrl) {
    this.oauthProviderImsProfileUrl = oauthProviderImsProfileUrl;
    return this;
  }

   /**
   * Get oauthProviderImsProfileUrl
   * @return oauthProviderImsProfileUrl
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getOauthProviderImsProfileUrl() {
    return oauthProviderImsProfileUrl;
  }

  public void setOauthProviderImsProfileUrl(ConfigNodePropertyString oauthProviderImsProfileUrl) {
    this.oauthProviderImsProfileUrl = oauthProviderImsProfileUrl;
  }

  public ComAdobeGraniteAuthImsImplIMSProviderImplProperties oauthProviderImsExtendedDetailsUrls(ConfigNodePropertyArray oauthProviderImsExtendedDetailsUrls) {
    this.oauthProviderImsExtendedDetailsUrls = oauthProviderImsExtendedDetailsUrls;
    return this;
  }

   /**
   * Get oauthProviderImsExtendedDetailsUrls
   * @return oauthProviderImsExtendedDetailsUrls
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getOauthProviderImsExtendedDetailsUrls() {
    return oauthProviderImsExtendedDetailsUrls;
  }

  public void setOauthProviderImsExtendedDetailsUrls(ConfigNodePropertyArray oauthProviderImsExtendedDetailsUrls) {
    this.oauthProviderImsExtendedDetailsUrls = oauthProviderImsExtendedDetailsUrls;
  }

  public ComAdobeGraniteAuthImsImplIMSProviderImplProperties oauthProviderImsValidateTokenUrl(ConfigNodePropertyString oauthProviderImsValidateTokenUrl) {
    this.oauthProviderImsValidateTokenUrl = oauthProviderImsValidateTokenUrl;
    return this;
  }

   /**
   * Get oauthProviderImsValidateTokenUrl
   * @return oauthProviderImsValidateTokenUrl
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getOauthProviderImsValidateTokenUrl() {
    return oauthProviderImsValidateTokenUrl;
  }

  public void setOauthProviderImsValidateTokenUrl(ConfigNodePropertyString oauthProviderImsValidateTokenUrl) {
    this.oauthProviderImsValidateTokenUrl = oauthProviderImsValidateTokenUrl;
  }

  public ComAdobeGraniteAuthImsImplIMSProviderImplProperties oauthProviderImsSessionProperty(ConfigNodePropertyString oauthProviderImsSessionProperty) {
    this.oauthProviderImsSessionProperty = oauthProviderImsSessionProperty;
    return this;
  }

   /**
   * Get oauthProviderImsSessionProperty
   * @return oauthProviderImsSessionProperty
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getOauthProviderImsSessionProperty() {
    return oauthProviderImsSessionProperty;
  }

  public void setOauthProviderImsSessionProperty(ConfigNodePropertyString oauthProviderImsSessionProperty) {
    this.oauthProviderImsSessionProperty = oauthProviderImsSessionProperty;
  }

  public ComAdobeGraniteAuthImsImplIMSProviderImplProperties oauthProviderImsServiceTokenClientId(ConfigNodePropertyString oauthProviderImsServiceTokenClientId) {
    this.oauthProviderImsServiceTokenClientId = oauthProviderImsServiceTokenClientId;
    return this;
  }

   /**
   * Get oauthProviderImsServiceTokenClientId
   * @return oauthProviderImsServiceTokenClientId
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getOauthProviderImsServiceTokenClientId() {
    return oauthProviderImsServiceTokenClientId;
  }

  public void setOauthProviderImsServiceTokenClientId(ConfigNodePropertyString oauthProviderImsServiceTokenClientId) {
    this.oauthProviderImsServiceTokenClientId = oauthProviderImsServiceTokenClientId;
  }

  public ComAdobeGraniteAuthImsImplIMSProviderImplProperties oauthProviderImsServiceTokenClientSecret(ConfigNodePropertyString oauthProviderImsServiceTokenClientSecret) {
    this.oauthProviderImsServiceTokenClientSecret = oauthProviderImsServiceTokenClientSecret;
    return this;
  }

   /**
   * Get oauthProviderImsServiceTokenClientSecret
   * @return oauthProviderImsServiceTokenClientSecret
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getOauthProviderImsServiceTokenClientSecret() {
    return oauthProviderImsServiceTokenClientSecret;
  }

  public void setOauthProviderImsServiceTokenClientSecret(ConfigNodePropertyString oauthProviderImsServiceTokenClientSecret) {
    this.oauthProviderImsServiceTokenClientSecret = oauthProviderImsServiceTokenClientSecret;
  }

  public ComAdobeGraniteAuthImsImplIMSProviderImplProperties oauthProviderImsServiceToken(ConfigNodePropertyString oauthProviderImsServiceToken) {
    this.oauthProviderImsServiceToken = oauthProviderImsServiceToken;
    return this;
  }

   /**
   * Get oauthProviderImsServiceToken
   * @return oauthProviderImsServiceToken
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getOauthProviderImsServiceToken() {
    return oauthProviderImsServiceToken;
  }

  public void setOauthProviderImsServiceToken(ConfigNodePropertyString oauthProviderImsServiceToken) {
    this.oauthProviderImsServiceToken = oauthProviderImsServiceToken;
  }

  public ComAdobeGraniteAuthImsImplIMSProviderImplProperties imsOrgRef(ConfigNodePropertyString imsOrgRef) {
    this.imsOrgRef = imsOrgRef;
    return this;
  }

   /**
   * Get imsOrgRef
   * @return imsOrgRef
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getImsOrgRef() {
    return imsOrgRef;
  }

  public void setImsOrgRef(ConfigNodePropertyString imsOrgRef) {
    this.imsOrgRef = imsOrgRef;
  }

  public ComAdobeGraniteAuthImsImplIMSProviderImplProperties imsGroupMapping(ConfigNodePropertyArray imsGroupMapping) {
    this.imsGroupMapping = imsGroupMapping;
    return this;
  }

   /**
   * Get imsGroupMapping
   * @return imsGroupMapping
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getImsGroupMapping() {
    return imsGroupMapping;
  }

  public void setImsGroupMapping(ConfigNodePropertyArray imsGroupMapping) {
    this.imsGroupMapping = imsGroupMapping;
  }

  public ComAdobeGraniteAuthImsImplIMSProviderImplProperties oauthProviderImsOnlyLicenseGroup(ConfigNodePropertyBoolean oauthProviderImsOnlyLicenseGroup) {
    this.oauthProviderImsOnlyLicenseGroup = oauthProviderImsOnlyLicenseGroup;
    return this;
  }

   /**
   * Get oauthProviderImsOnlyLicenseGroup
   * @return oauthProviderImsOnlyLicenseGroup
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getOauthProviderImsOnlyLicenseGroup() {
    return oauthProviderImsOnlyLicenseGroup;
  }

  public void setOauthProviderImsOnlyLicenseGroup(ConfigNodePropertyBoolean oauthProviderImsOnlyLicenseGroup) {
    this.oauthProviderImsOnlyLicenseGroup = oauthProviderImsOnlyLicenseGroup;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeGraniteAuthImsImplIMSProviderImplProperties comAdobeGraniteAuthImsImplIMSProviderImplProperties = (ComAdobeGraniteAuthImsImplIMSProviderImplProperties) o;
    return Objects.equals(this.oauthProviderId, comAdobeGraniteAuthImsImplIMSProviderImplProperties.oauthProviderId) &&
        Objects.equals(this.oauthProviderImsAuthorizationUrl, comAdobeGraniteAuthImsImplIMSProviderImplProperties.oauthProviderImsAuthorizationUrl) &&
        Objects.equals(this.oauthProviderImsTokenUrl, comAdobeGraniteAuthImsImplIMSProviderImplProperties.oauthProviderImsTokenUrl) &&
        Objects.equals(this.oauthProviderImsProfileUrl, comAdobeGraniteAuthImsImplIMSProviderImplProperties.oauthProviderImsProfileUrl) &&
        Objects.equals(this.oauthProviderImsExtendedDetailsUrls, comAdobeGraniteAuthImsImplIMSProviderImplProperties.oauthProviderImsExtendedDetailsUrls) &&
        Objects.equals(this.oauthProviderImsValidateTokenUrl, comAdobeGraniteAuthImsImplIMSProviderImplProperties.oauthProviderImsValidateTokenUrl) &&
        Objects.equals(this.oauthProviderImsSessionProperty, comAdobeGraniteAuthImsImplIMSProviderImplProperties.oauthProviderImsSessionProperty) &&
        Objects.equals(this.oauthProviderImsServiceTokenClientId, comAdobeGraniteAuthImsImplIMSProviderImplProperties.oauthProviderImsServiceTokenClientId) &&
        Objects.equals(this.oauthProviderImsServiceTokenClientSecret, comAdobeGraniteAuthImsImplIMSProviderImplProperties.oauthProviderImsServiceTokenClientSecret) &&
        Objects.equals(this.oauthProviderImsServiceToken, comAdobeGraniteAuthImsImplIMSProviderImplProperties.oauthProviderImsServiceToken) &&
        Objects.equals(this.imsOrgRef, comAdobeGraniteAuthImsImplIMSProviderImplProperties.imsOrgRef) &&
        Objects.equals(this.imsGroupMapping, comAdobeGraniteAuthImsImplIMSProviderImplProperties.imsGroupMapping) &&
        Objects.equals(this.oauthProviderImsOnlyLicenseGroup, comAdobeGraniteAuthImsImplIMSProviderImplProperties.oauthProviderImsOnlyLicenseGroup);
  }

  @Override
  public int hashCode() {
    return Objects.hash(oauthProviderId, oauthProviderImsAuthorizationUrl, oauthProviderImsTokenUrl, oauthProviderImsProfileUrl, oauthProviderImsExtendedDetailsUrls, oauthProviderImsValidateTokenUrl, oauthProviderImsSessionProperty, oauthProviderImsServiceTokenClientId, oauthProviderImsServiceTokenClientSecret, oauthProviderImsServiceToken, imsOrgRef, imsGroupMapping, oauthProviderImsOnlyLicenseGroup);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeGraniteAuthImsImplIMSProviderImplProperties {\n");
    
    sb.append("    oauthProviderId: ").append(toIndentedString(oauthProviderId)).append("\n");
    sb.append("    oauthProviderImsAuthorizationUrl: ").append(toIndentedString(oauthProviderImsAuthorizationUrl)).append("\n");
    sb.append("    oauthProviderImsTokenUrl: ").append(toIndentedString(oauthProviderImsTokenUrl)).append("\n");
    sb.append("    oauthProviderImsProfileUrl: ").append(toIndentedString(oauthProviderImsProfileUrl)).append("\n");
    sb.append("    oauthProviderImsExtendedDetailsUrls: ").append(toIndentedString(oauthProviderImsExtendedDetailsUrls)).append("\n");
    sb.append("    oauthProviderImsValidateTokenUrl: ").append(toIndentedString(oauthProviderImsValidateTokenUrl)).append("\n");
    sb.append("    oauthProviderImsSessionProperty: ").append(toIndentedString(oauthProviderImsSessionProperty)).append("\n");
    sb.append("    oauthProviderImsServiceTokenClientId: ").append(toIndentedString(oauthProviderImsServiceTokenClientId)).append("\n");
    sb.append("    oauthProviderImsServiceTokenClientSecret: ").append(toIndentedString(oauthProviderImsServiceTokenClientSecret)).append("\n");
    sb.append("    oauthProviderImsServiceToken: ").append(toIndentedString(oauthProviderImsServiceToken)).append("\n");
    sb.append("    imsOrgRef: ").append(toIndentedString(imsOrgRef)).append("\n");
    sb.append("    imsGroupMapping: ").append(toIndentedString(imsGroupMapping)).append("\n");
    sb.append("    oauthProviderImsOnlyLicenseGroup: ").append(toIndentedString(oauthProviderImsOnlyLicenseGroup)).append("\n");
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

