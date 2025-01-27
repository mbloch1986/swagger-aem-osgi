/*
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * The version of the OpenAPI document: 1.0.0
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
 * ComDayCqDamStockIntegrationImplConfigurationStockConfigurationImplProperties
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2019-06-26T12:10:03.209Z[GMT]")
public class ComDayCqDamStockIntegrationImplConfigurationStockConfigurationImplProperties {
  public static final String SERIALIZED_NAME_NAME = "name";
  @SerializedName(SERIALIZED_NAME_NAME)
  private ConfigNodePropertyString name = null;

  public static final String SERIALIZED_NAME_LOCALE = "locale";
  @SerializedName(SERIALIZED_NAME_LOCALE)
  private ConfigNodePropertyString locale = null;

  public static final String SERIALIZED_NAME_IMS_CONFIG = "imsConfig";
  @SerializedName(SERIALIZED_NAME_IMS_CONFIG)
  private ConfigNodePropertyString imsConfig = null;

  public ComDayCqDamStockIntegrationImplConfigurationStockConfigurationImplProperties name(ConfigNodePropertyString name) {
    this.name = name;
    return this;
  }

   /**
   * Get name
   * @return name
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getName() {
    return name;
  }

  public void setName(ConfigNodePropertyString name) {
    this.name = name;
  }

  public ComDayCqDamStockIntegrationImplConfigurationStockConfigurationImplProperties locale(ConfigNodePropertyString locale) {
    this.locale = locale;
    return this;
  }

   /**
   * Get locale
   * @return locale
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getLocale() {
    return locale;
  }

  public void setLocale(ConfigNodePropertyString locale) {
    this.locale = locale;
  }

  public ComDayCqDamStockIntegrationImplConfigurationStockConfigurationImplProperties imsConfig(ConfigNodePropertyString imsConfig) {
    this.imsConfig = imsConfig;
    return this;
  }

   /**
   * Get imsConfig
   * @return imsConfig
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getImsConfig() {
    return imsConfig;
  }

  public void setImsConfig(ConfigNodePropertyString imsConfig) {
    this.imsConfig = imsConfig;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqDamStockIntegrationImplConfigurationStockConfigurationImplProperties comDayCqDamStockIntegrationImplConfigurationStockConfigurationImplProperties = (ComDayCqDamStockIntegrationImplConfigurationStockConfigurationImplProperties) o;
    return Objects.equals(this.name, comDayCqDamStockIntegrationImplConfigurationStockConfigurationImplProperties.name) &&
        Objects.equals(this.locale, comDayCqDamStockIntegrationImplConfigurationStockConfigurationImplProperties.locale) &&
        Objects.equals(this.imsConfig, comDayCqDamStockIntegrationImplConfigurationStockConfigurationImplProperties.imsConfig);
  }

  @Override
  public int hashCode() {
    return Objects.hash(name, locale, imsConfig);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqDamStockIntegrationImplConfigurationStockConfigurationImplProperties {\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    locale: ").append(toIndentedString(locale)).append("\n");
    sb.append("    imsConfig: ").append(toIndentedString(imsConfig)).append("\n");
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

