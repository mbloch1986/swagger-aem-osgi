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
import com.shinesolutions.swaggeraemosgi4j.model.ConfigNodePropertyArray;
import com.shinesolutions.swaggeraemosgi4j.model.ConfigNodePropertyBoolean;
import com.shinesolutions.swaggeraemosgi4j.model.ConfigNodePropertyDropDown;
import com.shinesolutions.swaggeraemosgi4j.model.ConfigNodePropertyInteger;
import com.shinesolutions.swaggeraemosgi4j.model.ConfigNodePropertyString;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;

/**
 * OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2019-08-05T00:52:06.785Z[GMT]")
public class OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties {
  public static final String SERIALIZED_NAME_ORG_APACHE_SLING_INSTALLER_CONFIGURATION_PERSIST = "org.apache.sling.installer.configuration.persist";
  @SerializedName(SERIALIZED_NAME_ORG_APACHE_SLING_INSTALLER_CONFIGURATION_PERSIST)
  private ConfigNodePropertyBoolean orgApacheSlingInstallerConfigurationPersist = null;

  public static final String SERIALIZED_NAME_MODE = "mode";
  @SerializedName(SERIALIZED_NAME_MODE)
  private ConfigNodePropertyDropDown mode = null;

  public static final String SERIALIZED_NAME_PORT = "port";
  @SerializedName(SERIALIZED_NAME_PORT)
  private ConfigNodePropertyInteger port = null;

  public static final String SERIALIZED_NAME_PRIMARY_HOST = "primary.host";
  @SerializedName(SERIALIZED_NAME_PRIMARY_HOST)
  private ConfigNodePropertyString primaryHost = null;

  public static final String SERIALIZED_NAME_INTERVAL = "interval";
  @SerializedName(SERIALIZED_NAME_INTERVAL)
  private ConfigNodePropertyInteger interval = null;

  public static final String SERIALIZED_NAME_PRIMARY_ALLOWED_CLIENT_IP_RANGES = "primary.allowed-client-ip-ranges";
  @SerializedName(SERIALIZED_NAME_PRIMARY_ALLOWED_CLIENT_IP_RANGES)
  private ConfigNodePropertyArray primaryAllowedClientIpRanges = null;

  public static final String SERIALIZED_NAME_SECURE = "secure";
  @SerializedName(SERIALIZED_NAME_SECURE)
  private ConfigNodePropertyBoolean secure = null;

  public static final String SERIALIZED_NAME_STANDBY_READTIMEOUT = "standby.readtimeout";
  @SerializedName(SERIALIZED_NAME_STANDBY_READTIMEOUT)
  private ConfigNodePropertyInteger standbyReadtimeout = null;

  public static final String SERIALIZED_NAME_STANDBY_AUTOCLEAN = "standby.autoclean";
  @SerializedName(SERIALIZED_NAME_STANDBY_AUTOCLEAN)
  private ConfigNodePropertyBoolean standbyAutoclean = null;

  public OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties orgApacheSlingInstallerConfigurationPersist(ConfigNodePropertyBoolean orgApacheSlingInstallerConfigurationPersist) {
    this.orgApacheSlingInstallerConfigurationPersist = orgApacheSlingInstallerConfigurationPersist;
    return this;
  }

   /**
   * Get orgApacheSlingInstallerConfigurationPersist
   * @return orgApacheSlingInstallerConfigurationPersist
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getOrgApacheSlingInstallerConfigurationPersist() {
    return orgApacheSlingInstallerConfigurationPersist;
  }

  public void setOrgApacheSlingInstallerConfigurationPersist(ConfigNodePropertyBoolean orgApacheSlingInstallerConfigurationPersist) {
    this.orgApacheSlingInstallerConfigurationPersist = orgApacheSlingInstallerConfigurationPersist;
  }

  public OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties mode(ConfigNodePropertyDropDown mode) {
    this.mode = mode;
    return this;
  }

   /**
   * Get mode
   * @return mode
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyDropDown getMode() {
    return mode;
  }

  public void setMode(ConfigNodePropertyDropDown mode) {
    this.mode = mode;
  }

  public OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties port(ConfigNodePropertyInteger port) {
    this.port = port;
    return this;
  }

   /**
   * Get port
   * @return port
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getPort() {
    return port;
  }

  public void setPort(ConfigNodePropertyInteger port) {
    this.port = port;
  }

  public OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties primaryHost(ConfigNodePropertyString primaryHost) {
    this.primaryHost = primaryHost;
    return this;
  }

   /**
   * Get primaryHost
   * @return primaryHost
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getPrimaryHost() {
    return primaryHost;
  }

  public void setPrimaryHost(ConfigNodePropertyString primaryHost) {
    this.primaryHost = primaryHost;
  }

  public OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties interval(ConfigNodePropertyInteger interval) {
    this.interval = interval;
    return this;
  }

   /**
   * Get interval
   * @return interval
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getInterval() {
    return interval;
  }

  public void setInterval(ConfigNodePropertyInteger interval) {
    this.interval = interval;
  }

  public OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties primaryAllowedClientIpRanges(ConfigNodePropertyArray primaryAllowedClientIpRanges) {
    this.primaryAllowedClientIpRanges = primaryAllowedClientIpRanges;
    return this;
  }

   /**
   * Get primaryAllowedClientIpRanges
   * @return primaryAllowedClientIpRanges
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getPrimaryAllowedClientIpRanges() {
    return primaryAllowedClientIpRanges;
  }

  public void setPrimaryAllowedClientIpRanges(ConfigNodePropertyArray primaryAllowedClientIpRanges) {
    this.primaryAllowedClientIpRanges = primaryAllowedClientIpRanges;
  }

  public OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties secure(ConfigNodePropertyBoolean secure) {
    this.secure = secure;
    return this;
  }

   /**
   * Get secure
   * @return secure
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getSecure() {
    return secure;
  }

  public void setSecure(ConfigNodePropertyBoolean secure) {
    this.secure = secure;
  }

  public OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties standbyReadtimeout(ConfigNodePropertyInteger standbyReadtimeout) {
    this.standbyReadtimeout = standbyReadtimeout;
    return this;
  }

   /**
   * Get standbyReadtimeout
   * @return standbyReadtimeout
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getStandbyReadtimeout() {
    return standbyReadtimeout;
  }

  public void setStandbyReadtimeout(ConfigNodePropertyInteger standbyReadtimeout) {
    this.standbyReadtimeout = standbyReadtimeout;
  }

  public OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties standbyAutoclean(ConfigNodePropertyBoolean standbyAutoclean) {
    this.standbyAutoclean = standbyAutoclean;
    return this;
  }

   /**
   * Get standbyAutoclean
   * @return standbyAutoclean
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getStandbyAutoclean() {
    return standbyAutoclean;
  }

  public void setStandbyAutoclean(ConfigNodePropertyBoolean standbyAutoclean) {
    this.standbyAutoclean = standbyAutoclean;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties orgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties = (OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties) o;
    return Objects.equals(this.orgApacheSlingInstallerConfigurationPersist, orgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.orgApacheSlingInstallerConfigurationPersist) &&
        Objects.equals(this.mode, orgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.mode) &&
        Objects.equals(this.port, orgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.port) &&
        Objects.equals(this.primaryHost, orgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.primaryHost) &&
        Objects.equals(this.interval, orgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.interval) &&
        Objects.equals(this.primaryAllowedClientIpRanges, orgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.primaryAllowedClientIpRanges) &&
        Objects.equals(this.secure, orgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.secure) &&
        Objects.equals(this.standbyReadtimeout, orgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.standbyReadtimeout) &&
        Objects.equals(this.standbyAutoclean, orgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.standbyAutoclean);
  }

  @Override
  public int hashCode() {
    return Objects.hash(orgApacheSlingInstallerConfigurationPersist, mode, port, primaryHost, interval, primaryAllowedClientIpRanges, secure, standbyReadtimeout, standbyAutoclean);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties {\n");
    
    sb.append("    orgApacheSlingInstallerConfigurationPersist: ").append(toIndentedString(orgApacheSlingInstallerConfigurationPersist)).append("\n");
    sb.append("    mode: ").append(toIndentedString(mode)).append("\n");
    sb.append("    port: ").append(toIndentedString(port)).append("\n");
    sb.append("    primaryHost: ").append(toIndentedString(primaryHost)).append("\n");
    sb.append("    interval: ").append(toIndentedString(interval)).append("\n");
    sb.append("    primaryAllowedClientIpRanges: ").append(toIndentedString(primaryAllowedClientIpRanges)).append("\n");
    sb.append("    secure: ").append(toIndentedString(secure)).append("\n");
    sb.append("    standbyReadtimeout: ").append(toIndentedString(standbyReadtimeout)).append("\n");
    sb.append("    standbyAutoclean: ").append(toIndentedString(standbyAutoclean)).append("\n");
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

