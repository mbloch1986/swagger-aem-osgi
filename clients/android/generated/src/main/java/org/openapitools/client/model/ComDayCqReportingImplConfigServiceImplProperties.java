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

import org.openapitools.client.model.ConfigNodePropertyBoolean;
import org.openapitools.client.model.ConfigNodePropertyInteger;
import org.openapitools.client.model.ConfigNodePropertyString;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ComDayCqReportingImplConfigServiceImplProperties {
  
  @SerializedName("repconf.timezone")
  private ConfigNodePropertyString repconfTimezone = null;
  @SerializedName("repconf.locale")
  private ConfigNodePropertyString repconfLocale = null;
  @SerializedName("repconf.snapshots")
  private ConfigNodePropertyString repconfSnapshots = null;
  @SerializedName("repconf.repdir")
  private ConfigNodePropertyString repconfRepdir = null;
  @SerializedName("repconf.hourofday")
  private ConfigNodePropertyInteger repconfHourofday = null;
  @SerializedName("repconf.minofhour")
  private ConfigNodePropertyInteger repconfMinofhour = null;
  @SerializedName("repconf.maxrows")
  private ConfigNodePropertyInteger repconfMaxrows = null;
  @SerializedName("repconf.fakedata")
  private ConfigNodePropertyBoolean repconfFakedata = null;
  @SerializedName("repconf.snapshotuser")
  private ConfigNodePropertyString repconfSnapshotuser = null;
  @SerializedName("repconf.enforcesnapshotuser")
  private ConfigNodePropertyBoolean repconfEnforcesnapshotuser = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getRepconfTimezone() {
    return repconfTimezone;
  }
  public void setRepconfTimezone(ConfigNodePropertyString repconfTimezone) {
    this.repconfTimezone = repconfTimezone;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getRepconfLocale() {
    return repconfLocale;
  }
  public void setRepconfLocale(ConfigNodePropertyString repconfLocale) {
    this.repconfLocale = repconfLocale;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getRepconfSnapshots() {
    return repconfSnapshots;
  }
  public void setRepconfSnapshots(ConfigNodePropertyString repconfSnapshots) {
    this.repconfSnapshots = repconfSnapshots;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getRepconfRepdir() {
    return repconfRepdir;
  }
  public void setRepconfRepdir(ConfigNodePropertyString repconfRepdir) {
    this.repconfRepdir = repconfRepdir;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getRepconfHourofday() {
    return repconfHourofday;
  }
  public void setRepconfHourofday(ConfigNodePropertyInteger repconfHourofday) {
    this.repconfHourofday = repconfHourofday;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getRepconfMinofhour() {
    return repconfMinofhour;
  }
  public void setRepconfMinofhour(ConfigNodePropertyInteger repconfMinofhour) {
    this.repconfMinofhour = repconfMinofhour;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getRepconfMaxrows() {
    return repconfMaxrows;
  }
  public void setRepconfMaxrows(ConfigNodePropertyInteger repconfMaxrows) {
    this.repconfMaxrows = repconfMaxrows;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getRepconfFakedata() {
    return repconfFakedata;
  }
  public void setRepconfFakedata(ConfigNodePropertyBoolean repconfFakedata) {
    this.repconfFakedata = repconfFakedata;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getRepconfSnapshotuser() {
    return repconfSnapshotuser;
  }
  public void setRepconfSnapshotuser(ConfigNodePropertyString repconfSnapshotuser) {
    this.repconfSnapshotuser = repconfSnapshotuser;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getRepconfEnforcesnapshotuser() {
    return repconfEnforcesnapshotuser;
  }
  public void setRepconfEnforcesnapshotuser(ConfigNodePropertyBoolean repconfEnforcesnapshotuser) {
    this.repconfEnforcesnapshotuser = repconfEnforcesnapshotuser;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqReportingImplConfigServiceImplProperties comDayCqReportingImplConfigServiceImplProperties = (ComDayCqReportingImplConfigServiceImplProperties) o;
    return (this.repconfTimezone == null ? comDayCqReportingImplConfigServiceImplProperties.repconfTimezone == null : this.repconfTimezone.equals(comDayCqReportingImplConfigServiceImplProperties.repconfTimezone)) &&
        (this.repconfLocale == null ? comDayCqReportingImplConfigServiceImplProperties.repconfLocale == null : this.repconfLocale.equals(comDayCqReportingImplConfigServiceImplProperties.repconfLocale)) &&
        (this.repconfSnapshots == null ? comDayCqReportingImplConfigServiceImplProperties.repconfSnapshots == null : this.repconfSnapshots.equals(comDayCqReportingImplConfigServiceImplProperties.repconfSnapshots)) &&
        (this.repconfRepdir == null ? comDayCqReportingImplConfigServiceImplProperties.repconfRepdir == null : this.repconfRepdir.equals(comDayCqReportingImplConfigServiceImplProperties.repconfRepdir)) &&
        (this.repconfHourofday == null ? comDayCqReportingImplConfigServiceImplProperties.repconfHourofday == null : this.repconfHourofday.equals(comDayCqReportingImplConfigServiceImplProperties.repconfHourofday)) &&
        (this.repconfMinofhour == null ? comDayCqReportingImplConfigServiceImplProperties.repconfMinofhour == null : this.repconfMinofhour.equals(comDayCqReportingImplConfigServiceImplProperties.repconfMinofhour)) &&
        (this.repconfMaxrows == null ? comDayCqReportingImplConfigServiceImplProperties.repconfMaxrows == null : this.repconfMaxrows.equals(comDayCqReportingImplConfigServiceImplProperties.repconfMaxrows)) &&
        (this.repconfFakedata == null ? comDayCqReportingImplConfigServiceImplProperties.repconfFakedata == null : this.repconfFakedata.equals(comDayCqReportingImplConfigServiceImplProperties.repconfFakedata)) &&
        (this.repconfSnapshotuser == null ? comDayCqReportingImplConfigServiceImplProperties.repconfSnapshotuser == null : this.repconfSnapshotuser.equals(comDayCqReportingImplConfigServiceImplProperties.repconfSnapshotuser)) &&
        (this.repconfEnforcesnapshotuser == null ? comDayCqReportingImplConfigServiceImplProperties.repconfEnforcesnapshotuser == null : this.repconfEnforcesnapshotuser.equals(comDayCqReportingImplConfigServiceImplProperties.repconfEnforcesnapshotuser));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.repconfTimezone == null ? 0: this.repconfTimezone.hashCode());
    result = 31 * result + (this.repconfLocale == null ? 0: this.repconfLocale.hashCode());
    result = 31 * result + (this.repconfSnapshots == null ? 0: this.repconfSnapshots.hashCode());
    result = 31 * result + (this.repconfRepdir == null ? 0: this.repconfRepdir.hashCode());
    result = 31 * result + (this.repconfHourofday == null ? 0: this.repconfHourofday.hashCode());
    result = 31 * result + (this.repconfMinofhour == null ? 0: this.repconfMinofhour.hashCode());
    result = 31 * result + (this.repconfMaxrows == null ? 0: this.repconfMaxrows.hashCode());
    result = 31 * result + (this.repconfFakedata == null ? 0: this.repconfFakedata.hashCode());
    result = 31 * result + (this.repconfSnapshotuser == null ? 0: this.repconfSnapshotuser.hashCode());
    result = 31 * result + (this.repconfEnforcesnapshotuser == null ? 0: this.repconfEnforcesnapshotuser.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqReportingImplConfigServiceImplProperties {\n");
    
    sb.append("  repconfTimezone: ").append(repconfTimezone).append("\n");
    sb.append("  repconfLocale: ").append(repconfLocale).append("\n");
    sb.append("  repconfSnapshots: ").append(repconfSnapshots).append("\n");
    sb.append("  repconfRepdir: ").append(repconfRepdir).append("\n");
    sb.append("  repconfHourofday: ").append(repconfHourofday).append("\n");
    sb.append("  repconfMinofhour: ").append(repconfMinofhour).append("\n");
    sb.append("  repconfMaxrows: ").append(repconfMaxrows).append("\n");
    sb.append("  repconfFakedata: ").append(repconfFakedata).append("\n");
    sb.append("  repconfSnapshotuser: ").append(repconfSnapshotuser).append("\n");
    sb.append("  repconfEnforcesnapshotuser: ").append(repconfEnforcesnapshotuser).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
