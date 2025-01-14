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
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ComAdobeCqSocialUgcbaseImplSocialUtilsImplProperties {
  
  @SerializedName("legacyCloudUGCPathMapping")
  private ConfigNodePropertyBoolean legacyCloudUGCPathMapping = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getLegacyCloudUGCPathMapping() {
    return legacyCloudUGCPathMapping;
  }
  public void setLegacyCloudUGCPathMapping(ConfigNodePropertyBoolean legacyCloudUGCPathMapping) {
    this.legacyCloudUGCPathMapping = legacyCloudUGCPathMapping;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeCqSocialUgcbaseImplSocialUtilsImplProperties comAdobeCqSocialUgcbaseImplSocialUtilsImplProperties = (ComAdobeCqSocialUgcbaseImplSocialUtilsImplProperties) o;
    return (this.legacyCloudUGCPathMapping == null ? comAdobeCqSocialUgcbaseImplSocialUtilsImplProperties.legacyCloudUGCPathMapping == null : this.legacyCloudUGCPathMapping.equals(comAdobeCqSocialUgcbaseImplSocialUtilsImplProperties.legacyCloudUGCPathMapping));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.legacyCloudUGCPathMapping == null ? 0: this.legacyCloudUGCPathMapping.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeCqSocialUgcbaseImplSocialUtilsImplProperties {\n");
    
    sb.append("  legacyCloudUGCPathMapping: ").append(legacyCloudUGCPathMapping).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
