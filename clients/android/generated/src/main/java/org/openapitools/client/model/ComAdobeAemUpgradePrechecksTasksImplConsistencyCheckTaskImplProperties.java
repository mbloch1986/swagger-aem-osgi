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
import org.openapitools.client.model.ConfigNodePropertyString;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplProperties {
  
  @SerializedName("root.path")
  private ConfigNodePropertyString rootPath = null;
  @SerializedName("fix.inconsistencies")
  private ConfigNodePropertyBoolean fixInconsistencies = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getRootPath() {
    return rootPath;
  }
  public void setRootPath(ConfigNodePropertyString rootPath) {
    this.rootPath = rootPath;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getFixInconsistencies() {
    return fixInconsistencies;
  }
  public void setFixInconsistencies(ConfigNodePropertyBoolean fixInconsistencies) {
    this.fixInconsistencies = fixInconsistencies;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplProperties comAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplProperties = (ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplProperties) o;
    return (this.rootPath == null ? comAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplProperties.rootPath == null : this.rootPath.equals(comAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplProperties.rootPath)) &&
        (this.fixInconsistencies == null ? comAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplProperties.fixInconsistencies == null : this.fixInconsistencies.equals(comAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplProperties.fixInconsistencies));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.rootPath == null ? 0: this.rootPath.hashCode());
    result = 31 * result + (this.fixInconsistencies == null ? 0: this.fixInconsistencies.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplProperties {\n");
    
    sb.append("  rootPath: ").append(rootPath).append("\n");
    sb.append("  fixInconsistencies: ").append(fixInconsistencies).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}