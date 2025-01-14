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
 * OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigurationImplProperties
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2019-06-26T12:10:03.209Z[GMT]")
public class OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigurationImplProperties {
  public static final String SERIALIZED_NAME_ORG_APACHE_JACKRABBIT_OAK_AUTHENTICATION_APP_NAME = "org.apache.jackrabbit.oak.authentication.appName";
  @SerializedName(SERIALIZED_NAME_ORG_APACHE_JACKRABBIT_OAK_AUTHENTICATION_APP_NAME)
  private ConfigNodePropertyString orgApacheJackrabbitOakAuthenticationAppName = null;

  public static final String SERIALIZED_NAME_ORG_APACHE_JACKRABBIT_OAK_AUTHENTICATION_CONFIG_SPI_NAME = "org.apache.jackrabbit.oak.authentication.configSpiName";
  @SerializedName(SERIALIZED_NAME_ORG_APACHE_JACKRABBIT_OAK_AUTHENTICATION_CONFIG_SPI_NAME)
  private ConfigNodePropertyString orgApacheJackrabbitOakAuthenticationConfigSpiName = null;

  public OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigurationImplProperties orgApacheJackrabbitOakAuthenticationAppName(ConfigNodePropertyString orgApacheJackrabbitOakAuthenticationAppName) {
    this.orgApacheJackrabbitOakAuthenticationAppName = orgApacheJackrabbitOakAuthenticationAppName;
    return this;
  }

   /**
   * Get orgApacheJackrabbitOakAuthenticationAppName
   * @return orgApacheJackrabbitOakAuthenticationAppName
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getOrgApacheJackrabbitOakAuthenticationAppName() {
    return orgApacheJackrabbitOakAuthenticationAppName;
  }

  public void setOrgApacheJackrabbitOakAuthenticationAppName(ConfigNodePropertyString orgApacheJackrabbitOakAuthenticationAppName) {
    this.orgApacheJackrabbitOakAuthenticationAppName = orgApacheJackrabbitOakAuthenticationAppName;
  }

  public OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigurationImplProperties orgApacheJackrabbitOakAuthenticationConfigSpiName(ConfigNodePropertyString orgApacheJackrabbitOakAuthenticationConfigSpiName) {
    this.orgApacheJackrabbitOakAuthenticationConfigSpiName = orgApacheJackrabbitOakAuthenticationConfigSpiName;
    return this;
  }

   /**
   * Get orgApacheJackrabbitOakAuthenticationConfigSpiName
   * @return orgApacheJackrabbitOakAuthenticationConfigSpiName
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getOrgApacheJackrabbitOakAuthenticationConfigSpiName() {
    return orgApacheJackrabbitOakAuthenticationConfigSpiName;
  }

  public void setOrgApacheJackrabbitOakAuthenticationConfigSpiName(ConfigNodePropertyString orgApacheJackrabbitOakAuthenticationConfigSpiName) {
    this.orgApacheJackrabbitOakAuthenticationConfigSpiName = orgApacheJackrabbitOakAuthenticationConfigSpiName;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigurationImplProperties orgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigurationImplProperties = (OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigurationImplProperties) o;
    return Objects.equals(this.orgApacheJackrabbitOakAuthenticationAppName, orgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigurationImplProperties.orgApacheJackrabbitOakAuthenticationAppName) &&
        Objects.equals(this.orgApacheJackrabbitOakAuthenticationConfigSpiName, orgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigurationImplProperties.orgApacheJackrabbitOakAuthenticationConfigSpiName);
  }

  @Override
  public int hashCode() {
    return Objects.hash(orgApacheJackrabbitOakAuthenticationAppName, orgApacheJackrabbitOakAuthenticationConfigSpiName);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigurationImplProperties {\n");
    sb.append("    orgApacheJackrabbitOakAuthenticationAppName: ").append(toIndentedString(orgApacheJackrabbitOakAuthenticationAppName)).append("\n");
    sb.append("    orgApacheJackrabbitOakAuthenticationConfigSpiName: ").append(toIndentedString(orgApacheJackrabbitOakAuthenticationConfigSpiName)).append("\n");
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

