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

import org.openapitools.client.model.ConfigNodePropertyArray;
import org.openapitools.client.model.ConfigNodePropertyInteger;
import org.openapitools.client.model.ConfigNodePropertyString;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties {
  
  @SerializedName("datasources")
  private ConfigNodePropertyArray datasources = null;
  @SerializedName("step")
  private ConfigNodePropertyInteger step = null;
  @SerializedName("archives")
  private ConfigNodePropertyArray archives = null;
  @SerializedName("path")
  private ConfigNodePropertyString path = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getDatasources() {
    return datasources;
  }
  public void setDatasources(ConfigNodePropertyArray datasources) {
    this.datasources = datasources;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getStep() {
    return step;
  }
  public void setStep(ConfigNodePropertyInteger step) {
    this.step = step;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getArchives() {
    return archives;
  }
  public void setArchives(ConfigNodePropertyArray archives) {
    this.archives = archives;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getPath() {
    return path;
  }
  public void setPath(ConfigNodePropertyString path) {
    this.path = path;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties orgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties = (OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties) o;
    return (this.datasources == null ? orgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties.datasources == null : this.datasources.equals(orgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties.datasources)) &&
        (this.step == null ? orgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties.step == null : this.step.equals(orgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties.step)) &&
        (this.archives == null ? orgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties.archives == null : this.archives.equals(orgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties.archives)) &&
        (this.path == null ? orgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties.path == null : this.path.equals(orgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties.path));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.datasources == null ? 0: this.datasources.hashCode());
    result = 31 * result + (this.step == null ? 0: this.step.hashCode());
    result = 31 * result + (this.archives == null ? 0: this.archives.hashCode());
    result = 31 * result + (this.path == null ? 0: this.path.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties {\n");
    
    sb.append("  datasources: ").append(datasources).append("\n");
    sb.append("  step: ").append(step).append("\n");
    sb.append("  archives: ").append(archives).append("\n");
    sb.append("  path: ").append(path).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
