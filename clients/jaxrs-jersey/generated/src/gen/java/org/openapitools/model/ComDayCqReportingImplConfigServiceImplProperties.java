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


package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ConfigNodePropertyBoolean;
import org.openapitools.model.ConfigNodePropertyInteger;
import org.openapitools.model.ConfigNodePropertyString;
import javax.validation.constraints.*;

/**
 * ComDayCqReportingImplConfigServiceImplProperties
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2019-08-05T00:58:47.028Z[GMT]")
public class ComDayCqReportingImplConfigServiceImplProperties   {
  @JsonProperty("repconf.timezone")
  private ConfigNodePropertyString repconfTimezone = null;

  @JsonProperty("repconf.locale")
  private ConfigNodePropertyString repconfLocale = null;

  @JsonProperty("repconf.snapshots")
  private ConfigNodePropertyString repconfSnapshots = null;

  @JsonProperty("repconf.repdir")
  private ConfigNodePropertyString repconfRepdir = null;

  @JsonProperty("repconf.hourofday")
  private ConfigNodePropertyInteger repconfHourofday = null;

  @JsonProperty("repconf.minofhour")
  private ConfigNodePropertyInteger repconfMinofhour = null;

  @JsonProperty("repconf.maxrows")
  private ConfigNodePropertyInteger repconfMaxrows = null;

  @JsonProperty("repconf.fakedata")
  private ConfigNodePropertyBoolean repconfFakedata = null;

  @JsonProperty("repconf.snapshotuser")
  private ConfigNodePropertyString repconfSnapshotuser = null;

  @JsonProperty("repconf.enforcesnapshotuser")
  private ConfigNodePropertyBoolean repconfEnforcesnapshotuser = null;

  public ComDayCqReportingImplConfigServiceImplProperties repconfTimezone(ConfigNodePropertyString repconfTimezone) {
    this.repconfTimezone = repconfTimezone;
    return this;
  }

  /**
   * Get repconfTimezone
   * @return repconfTimezone
   **/
  @JsonProperty("repconf.timezone")
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getRepconfTimezone() {
    return repconfTimezone;
  }

  public void setRepconfTimezone(ConfigNodePropertyString repconfTimezone) {
    this.repconfTimezone = repconfTimezone;
  }

  public ComDayCqReportingImplConfigServiceImplProperties repconfLocale(ConfigNodePropertyString repconfLocale) {
    this.repconfLocale = repconfLocale;
    return this;
  }

  /**
   * Get repconfLocale
   * @return repconfLocale
   **/
  @JsonProperty("repconf.locale")
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getRepconfLocale() {
    return repconfLocale;
  }

  public void setRepconfLocale(ConfigNodePropertyString repconfLocale) {
    this.repconfLocale = repconfLocale;
  }

  public ComDayCqReportingImplConfigServiceImplProperties repconfSnapshots(ConfigNodePropertyString repconfSnapshots) {
    this.repconfSnapshots = repconfSnapshots;
    return this;
  }

  /**
   * Get repconfSnapshots
   * @return repconfSnapshots
   **/
  @JsonProperty("repconf.snapshots")
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getRepconfSnapshots() {
    return repconfSnapshots;
  }

  public void setRepconfSnapshots(ConfigNodePropertyString repconfSnapshots) {
    this.repconfSnapshots = repconfSnapshots;
  }

  public ComDayCqReportingImplConfigServiceImplProperties repconfRepdir(ConfigNodePropertyString repconfRepdir) {
    this.repconfRepdir = repconfRepdir;
    return this;
  }

  /**
   * Get repconfRepdir
   * @return repconfRepdir
   **/
  @JsonProperty("repconf.repdir")
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getRepconfRepdir() {
    return repconfRepdir;
  }

  public void setRepconfRepdir(ConfigNodePropertyString repconfRepdir) {
    this.repconfRepdir = repconfRepdir;
  }

  public ComDayCqReportingImplConfigServiceImplProperties repconfHourofday(ConfigNodePropertyInteger repconfHourofday) {
    this.repconfHourofday = repconfHourofday;
    return this;
  }

  /**
   * Get repconfHourofday
   * @return repconfHourofday
   **/
  @JsonProperty("repconf.hourofday")
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getRepconfHourofday() {
    return repconfHourofday;
  }

  public void setRepconfHourofday(ConfigNodePropertyInteger repconfHourofday) {
    this.repconfHourofday = repconfHourofday;
  }

  public ComDayCqReportingImplConfigServiceImplProperties repconfMinofhour(ConfigNodePropertyInteger repconfMinofhour) {
    this.repconfMinofhour = repconfMinofhour;
    return this;
  }

  /**
   * Get repconfMinofhour
   * @return repconfMinofhour
   **/
  @JsonProperty("repconf.minofhour")
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getRepconfMinofhour() {
    return repconfMinofhour;
  }

  public void setRepconfMinofhour(ConfigNodePropertyInteger repconfMinofhour) {
    this.repconfMinofhour = repconfMinofhour;
  }

  public ComDayCqReportingImplConfigServiceImplProperties repconfMaxrows(ConfigNodePropertyInteger repconfMaxrows) {
    this.repconfMaxrows = repconfMaxrows;
    return this;
  }

  /**
   * Get repconfMaxrows
   * @return repconfMaxrows
   **/
  @JsonProperty("repconf.maxrows")
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getRepconfMaxrows() {
    return repconfMaxrows;
  }

  public void setRepconfMaxrows(ConfigNodePropertyInteger repconfMaxrows) {
    this.repconfMaxrows = repconfMaxrows;
  }

  public ComDayCqReportingImplConfigServiceImplProperties repconfFakedata(ConfigNodePropertyBoolean repconfFakedata) {
    this.repconfFakedata = repconfFakedata;
    return this;
  }

  /**
   * Get repconfFakedata
   * @return repconfFakedata
   **/
  @JsonProperty("repconf.fakedata")
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getRepconfFakedata() {
    return repconfFakedata;
  }

  public void setRepconfFakedata(ConfigNodePropertyBoolean repconfFakedata) {
    this.repconfFakedata = repconfFakedata;
  }

  public ComDayCqReportingImplConfigServiceImplProperties repconfSnapshotuser(ConfigNodePropertyString repconfSnapshotuser) {
    this.repconfSnapshotuser = repconfSnapshotuser;
    return this;
  }

  /**
   * Get repconfSnapshotuser
   * @return repconfSnapshotuser
   **/
  @JsonProperty("repconf.snapshotuser")
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getRepconfSnapshotuser() {
    return repconfSnapshotuser;
  }

  public void setRepconfSnapshotuser(ConfigNodePropertyString repconfSnapshotuser) {
    this.repconfSnapshotuser = repconfSnapshotuser;
  }

  public ComDayCqReportingImplConfigServiceImplProperties repconfEnforcesnapshotuser(ConfigNodePropertyBoolean repconfEnforcesnapshotuser) {
    this.repconfEnforcesnapshotuser = repconfEnforcesnapshotuser;
    return this;
  }

  /**
   * Get repconfEnforcesnapshotuser
   * @return repconfEnforcesnapshotuser
   **/
  @JsonProperty("repconf.enforcesnapshotuser")
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getRepconfEnforcesnapshotuser() {
    return repconfEnforcesnapshotuser;
  }

  public void setRepconfEnforcesnapshotuser(ConfigNodePropertyBoolean repconfEnforcesnapshotuser) {
    this.repconfEnforcesnapshotuser = repconfEnforcesnapshotuser;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqReportingImplConfigServiceImplProperties comDayCqReportingImplConfigServiceImplProperties = (ComDayCqReportingImplConfigServiceImplProperties) o;
    return Objects.equals(this.repconfTimezone, comDayCqReportingImplConfigServiceImplProperties.repconfTimezone) &&
        Objects.equals(this.repconfLocale, comDayCqReportingImplConfigServiceImplProperties.repconfLocale) &&
        Objects.equals(this.repconfSnapshots, comDayCqReportingImplConfigServiceImplProperties.repconfSnapshots) &&
        Objects.equals(this.repconfRepdir, comDayCqReportingImplConfigServiceImplProperties.repconfRepdir) &&
        Objects.equals(this.repconfHourofday, comDayCqReportingImplConfigServiceImplProperties.repconfHourofday) &&
        Objects.equals(this.repconfMinofhour, comDayCqReportingImplConfigServiceImplProperties.repconfMinofhour) &&
        Objects.equals(this.repconfMaxrows, comDayCqReportingImplConfigServiceImplProperties.repconfMaxrows) &&
        Objects.equals(this.repconfFakedata, comDayCqReportingImplConfigServiceImplProperties.repconfFakedata) &&
        Objects.equals(this.repconfSnapshotuser, comDayCqReportingImplConfigServiceImplProperties.repconfSnapshotuser) &&
        Objects.equals(this.repconfEnforcesnapshotuser, comDayCqReportingImplConfigServiceImplProperties.repconfEnforcesnapshotuser);
  }

  @Override
  public int hashCode() {
    return Objects.hash(repconfTimezone, repconfLocale, repconfSnapshots, repconfRepdir, repconfHourofday, repconfMinofhour, repconfMaxrows, repconfFakedata, repconfSnapshotuser, repconfEnforcesnapshotuser);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqReportingImplConfigServiceImplProperties {\n");
    
    sb.append("    repconfTimezone: ").append(toIndentedString(repconfTimezone)).append("\n");
    sb.append("    repconfLocale: ").append(toIndentedString(repconfLocale)).append("\n");
    sb.append("    repconfSnapshots: ").append(toIndentedString(repconfSnapshots)).append("\n");
    sb.append("    repconfRepdir: ").append(toIndentedString(repconfRepdir)).append("\n");
    sb.append("    repconfHourofday: ").append(toIndentedString(repconfHourofday)).append("\n");
    sb.append("    repconfMinofhour: ").append(toIndentedString(repconfMinofhour)).append("\n");
    sb.append("    repconfMaxrows: ").append(toIndentedString(repconfMaxrows)).append("\n");
    sb.append("    repconfFakedata: ").append(toIndentedString(repconfFakedata)).append("\n");
    sb.append("    repconfSnapshotuser: ").append(toIndentedString(repconfSnapshotuser)).append("\n");
    sb.append("    repconfEnforcesnapshotuser: ").append(toIndentedString(repconfEnforcesnapshotuser)).append("\n");
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

