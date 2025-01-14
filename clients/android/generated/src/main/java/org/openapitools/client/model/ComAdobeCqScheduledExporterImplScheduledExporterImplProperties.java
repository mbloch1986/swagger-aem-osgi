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
import org.openapitools.client.model.ConfigNodePropertyString;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ComAdobeCqScheduledExporterImplScheduledExporterImplProperties {
  
  @SerializedName("include.paths")
  private ConfigNodePropertyArray includePaths = null;
  @SerializedName("exporter.user")
  private ConfigNodePropertyString exporterUser = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getIncludePaths() {
    return includePaths;
  }
  public void setIncludePaths(ConfigNodePropertyArray includePaths) {
    this.includePaths = includePaths;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getExporterUser() {
    return exporterUser;
  }
  public void setExporterUser(ConfigNodePropertyString exporterUser) {
    this.exporterUser = exporterUser;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeCqScheduledExporterImplScheduledExporterImplProperties comAdobeCqScheduledExporterImplScheduledExporterImplProperties = (ComAdobeCqScheduledExporterImplScheduledExporterImplProperties) o;
    return (this.includePaths == null ? comAdobeCqScheduledExporterImplScheduledExporterImplProperties.includePaths == null : this.includePaths.equals(comAdobeCqScheduledExporterImplScheduledExporterImplProperties.includePaths)) &&
        (this.exporterUser == null ? comAdobeCqScheduledExporterImplScheduledExporterImplProperties.exporterUser == null : this.exporterUser.equals(comAdobeCqScheduledExporterImplScheduledExporterImplProperties.exporterUser));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.includePaths == null ? 0: this.includePaths.hashCode());
    result = 31 * result + (this.exporterUser == null ? 0: this.exporterUser.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeCqScheduledExporterImplScheduledExporterImplProperties {\n");
    
    sb.append("  includePaths: ").append(includePaths).append("\n");
    sb.append("  exporterUser: ").append(exporterUser).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
