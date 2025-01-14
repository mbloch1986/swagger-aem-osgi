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

import org.openapitools.client.model.ConfigNodePropertyDropDown;
import org.openapitools.client.model.ConfigNodePropertyInteger;
import org.openapitools.client.model.ConfigNodePropertyString;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class OrgApacheSlingCommonsMetricsInternalLogReporterProperties {
  
  @SerializedName("period")
  private ConfigNodePropertyInteger period = null;
  @SerializedName("timeUnit")
  private ConfigNodePropertyDropDown timeUnit = null;
  @SerializedName("level")
  private ConfigNodePropertyDropDown level = null;
  @SerializedName("loggerName")
  private ConfigNodePropertyString loggerName = null;
  @SerializedName("prefix")
  private ConfigNodePropertyString prefix = null;
  @SerializedName("pattern")
  private ConfigNodePropertyString pattern = null;
  @SerializedName("registryName")
  private ConfigNodePropertyString registryName = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getPeriod() {
    return period;
  }
  public void setPeriod(ConfigNodePropertyInteger period) {
    this.period = period;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyDropDown getTimeUnit() {
    return timeUnit;
  }
  public void setTimeUnit(ConfigNodePropertyDropDown timeUnit) {
    this.timeUnit = timeUnit;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyDropDown getLevel() {
    return level;
  }
  public void setLevel(ConfigNodePropertyDropDown level) {
    this.level = level;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getLoggerName() {
    return loggerName;
  }
  public void setLoggerName(ConfigNodePropertyString loggerName) {
    this.loggerName = loggerName;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getPrefix() {
    return prefix;
  }
  public void setPrefix(ConfigNodePropertyString prefix) {
    this.prefix = prefix;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getPattern() {
    return pattern;
  }
  public void setPattern(ConfigNodePropertyString pattern) {
    this.pattern = pattern;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getRegistryName() {
    return registryName;
  }
  public void setRegistryName(ConfigNodePropertyString registryName) {
    this.registryName = registryName;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheSlingCommonsMetricsInternalLogReporterProperties orgApacheSlingCommonsMetricsInternalLogReporterProperties = (OrgApacheSlingCommonsMetricsInternalLogReporterProperties) o;
    return (this.period == null ? orgApacheSlingCommonsMetricsInternalLogReporterProperties.period == null : this.period.equals(orgApacheSlingCommonsMetricsInternalLogReporterProperties.period)) &&
        (this.timeUnit == null ? orgApacheSlingCommonsMetricsInternalLogReporterProperties.timeUnit == null : this.timeUnit.equals(orgApacheSlingCommonsMetricsInternalLogReporterProperties.timeUnit)) &&
        (this.level == null ? orgApacheSlingCommonsMetricsInternalLogReporterProperties.level == null : this.level.equals(orgApacheSlingCommonsMetricsInternalLogReporterProperties.level)) &&
        (this.loggerName == null ? orgApacheSlingCommonsMetricsInternalLogReporterProperties.loggerName == null : this.loggerName.equals(orgApacheSlingCommonsMetricsInternalLogReporterProperties.loggerName)) &&
        (this.prefix == null ? orgApacheSlingCommonsMetricsInternalLogReporterProperties.prefix == null : this.prefix.equals(orgApacheSlingCommonsMetricsInternalLogReporterProperties.prefix)) &&
        (this.pattern == null ? orgApacheSlingCommonsMetricsInternalLogReporterProperties.pattern == null : this.pattern.equals(orgApacheSlingCommonsMetricsInternalLogReporterProperties.pattern)) &&
        (this.registryName == null ? orgApacheSlingCommonsMetricsInternalLogReporterProperties.registryName == null : this.registryName.equals(orgApacheSlingCommonsMetricsInternalLogReporterProperties.registryName));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.period == null ? 0: this.period.hashCode());
    result = 31 * result + (this.timeUnit == null ? 0: this.timeUnit.hashCode());
    result = 31 * result + (this.level == null ? 0: this.level.hashCode());
    result = 31 * result + (this.loggerName == null ? 0: this.loggerName.hashCode());
    result = 31 * result + (this.prefix == null ? 0: this.prefix.hashCode());
    result = 31 * result + (this.pattern == null ? 0: this.pattern.hashCode());
    result = 31 * result + (this.registryName == null ? 0: this.registryName.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheSlingCommonsMetricsInternalLogReporterProperties {\n");
    
    sb.append("  period: ").append(period).append("\n");
    sb.append("  timeUnit: ").append(timeUnit).append("\n");
    sb.append("  level: ").append(level).append("\n");
    sb.append("  loggerName: ").append(loggerName).append("\n");
    sb.append("  prefix: ").append(prefix).append("\n");
    sb.append("  pattern: ").append(pattern).append("\n");
    sb.append("  registryName: ").append(registryName).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
