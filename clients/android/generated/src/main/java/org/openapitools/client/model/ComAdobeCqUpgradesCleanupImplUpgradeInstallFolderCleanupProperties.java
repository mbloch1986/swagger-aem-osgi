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
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupProperties {
  
  @SerializedName("delete.name.regexps")
  private ConfigNodePropertyArray deleteNameRegexps = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getDeleteNameRegexps() {
    return deleteNameRegexps;
  }
  public void setDeleteNameRegexps(ConfigNodePropertyArray deleteNameRegexps) {
    this.deleteNameRegexps = deleteNameRegexps;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupProperties comAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupProperties = (ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupProperties) o;
    return (this.deleteNameRegexps == null ? comAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupProperties.deleteNameRegexps == null : this.deleteNameRegexps.equals(comAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupProperties.deleteNameRegexps));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.deleteNameRegexps == null ? 0: this.deleteNameRegexps.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupProperties {\n");
    
    sb.append("  deleteNameRegexps: ").append(deleteNameRegexps).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}