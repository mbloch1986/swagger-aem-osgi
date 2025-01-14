/*
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


package com.shinesolutions.swaggeraemosgi4j.model;

import java.util.Objects;
import java.util.Arrays;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import com.shinesolutions.swaggeraemosgi4j.model.ConfigNodePropertyString;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;

/**
 * ComAdobeGraniteAuthImsImplImsConfigProviderImplProperties
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2019-08-05T00:52:06.785Z[GMT]")
public class ComAdobeGraniteAuthImsImplImsConfigProviderImplProperties {
  public static final String SERIALIZED_NAME_OAUTH_CONFIGMANAGER_IMS_CONFIGID = "oauth.configmanager.ims.configid";
  @SerializedName(SERIALIZED_NAME_OAUTH_CONFIGMANAGER_IMS_CONFIGID)
  private ConfigNodePropertyString oauthConfigmanagerImsConfigid = null;

  public static final String SERIALIZED_NAME_IMS_OWNING_ENTITY = "ims.owningEntity";
  @SerializedName(SERIALIZED_NAME_IMS_OWNING_ENTITY)
  private ConfigNodePropertyString imsOwningEntity = null;

  public static final String SERIALIZED_NAME_AEM_INSTANCE_ID = "aem.instanceId";
  @SerializedName(SERIALIZED_NAME_AEM_INSTANCE_ID)
  private ConfigNodePropertyString aemInstanceId = null;

  public static final String SERIALIZED_NAME_IMS_SERVICE_CODE = "ims.serviceCode";
  @SerializedName(SERIALIZED_NAME_IMS_SERVICE_CODE)
  private ConfigNodePropertyString imsServiceCode = null;

  public ComAdobeGraniteAuthImsImplImsConfigProviderImplProperties oauthConfigmanagerImsConfigid(ConfigNodePropertyString oauthConfigmanagerImsConfigid) {
    this.oauthConfigmanagerImsConfigid = oauthConfigmanagerImsConfigid;
    return this;
  }

   /**
   * Get oauthConfigmanagerImsConfigid
   * @return oauthConfigmanagerImsConfigid
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getOauthConfigmanagerImsConfigid() {
    return oauthConfigmanagerImsConfigid;
  }

  public void setOauthConfigmanagerImsConfigid(ConfigNodePropertyString oauthConfigmanagerImsConfigid) {
    this.oauthConfigmanagerImsConfigid = oauthConfigmanagerImsConfigid;
  }

  public ComAdobeGraniteAuthImsImplImsConfigProviderImplProperties imsOwningEntity(ConfigNodePropertyString imsOwningEntity) {
    this.imsOwningEntity = imsOwningEntity;
    return this;
  }

   /**
   * Get imsOwningEntity
   * @return imsOwningEntity
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getImsOwningEntity() {
    return imsOwningEntity;
  }

  public void setImsOwningEntity(ConfigNodePropertyString imsOwningEntity) {
    this.imsOwningEntity = imsOwningEntity;
  }

  public ComAdobeGraniteAuthImsImplImsConfigProviderImplProperties aemInstanceId(ConfigNodePropertyString aemInstanceId) {
    this.aemInstanceId = aemInstanceId;
    return this;
  }

   /**
   * Get aemInstanceId
   * @return aemInstanceId
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getAemInstanceId() {
    return aemInstanceId;
  }

  public void setAemInstanceId(ConfigNodePropertyString aemInstanceId) {
    this.aemInstanceId = aemInstanceId;
  }

  public ComAdobeGraniteAuthImsImplImsConfigProviderImplProperties imsServiceCode(ConfigNodePropertyString imsServiceCode) {
    this.imsServiceCode = imsServiceCode;
    return this;
  }

   /**
   * Get imsServiceCode
   * @return imsServiceCode
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getImsServiceCode() {
    return imsServiceCode;
  }

  public void setImsServiceCode(ConfigNodePropertyString imsServiceCode) {
    this.imsServiceCode = imsServiceCode;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeGraniteAuthImsImplImsConfigProviderImplProperties comAdobeGraniteAuthImsImplImsConfigProviderImplProperties = (ComAdobeGraniteAuthImsImplImsConfigProviderImplProperties) o;
    return Objects.equals(this.oauthConfigmanagerImsConfigid, comAdobeGraniteAuthImsImplImsConfigProviderImplProperties.oauthConfigmanagerImsConfigid) &&
        Objects.equals(this.imsOwningEntity, comAdobeGraniteAuthImsImplImsConfigProviderImplProperties.imsOwningEntity) &&
        Objects.equals(this.aemInstanceId, comAdobeGraniteAuthImsImplImsConfigProviderImplProperties.aemInstanceId) &&
        Objects.equals(this.imsServiceCode, comAdobeGraniteAuthImsImplImsConfigProviderImplProperties.imsServiceCode);
  }

  @Override
  public int hashCode() {
    return Objects.hash(oauthConfigmanagerImsConfigid, imsOwningEntity, aemInstanceId, imsServiceCode);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeGraniteAuthImsImplImsConfigProviderImplProperties {\n");
    
    sb.append("    oauthConfigmanagerImsConfigid: ").append(toIndentedString(oauthConfigmanagerImsConfigid)).append("\n");
    sb.append("    imsOwningEntity: ").append(toIndentedString(imsOwningEntity)).append("\n");
    sb.append("    aemInstanceId: ").append(toIndentedString(aemInstanceId)).append("\n");
    sb.append("    imsServiceCode: ").append(toIndentedString(imsServiceCode)).append("\n");
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

