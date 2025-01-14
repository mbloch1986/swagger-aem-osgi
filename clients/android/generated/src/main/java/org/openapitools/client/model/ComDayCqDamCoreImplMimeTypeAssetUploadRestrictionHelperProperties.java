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
import org.openapitools.client.model.ConfigNodePropertyBoolean;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ComDayCqDamCoreImplMimeTypeAssetUploadRestrictionHelperProperties {
  
  @SerializedName("cq.dam.allow.all.mime")
  private ConfigNodePropertyBoolean cqDamAllowAllMime = null;
  @SerializedName("cq.dam.allowed.asset.mimes")
  private ConfigNodePropertyArray cqDamAllowedAssetMimes = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getCqDamAllowAllMime() {
    return cqDamAllowAllMime;
  }
  public void setCqDamAllowAllMime(ConfigNodePropertyBoolean cqDamAllowAllMime) {
    this.cqDamAllowAllMime = cqDamAllowAllMime;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getCqDamAllowedAssetMimes() {
    return cqDamAllowedAssetMimes;
  }
  public void setCqDamAllowedAssetMimes(ConfigNodePropertyArray cqDamAllowedAssetMimes) {
    this.cqDamAllowedAssetMimes = cqDamAllowedAssetMimes;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqDamCoreImplMimeTypeAssetUploadRestrictionHelperProperties comDayCqDamCoreImplMimeTypeAssetUploadRestrictionHelperProperties = (ComDayCqDamCoreImplMimeTypeAssetUploadRestrictionHelperProperties) o;
    return (this.cqDamAllowAllMime == null ? comDayCqDamCoreImplMimeTypeAssetUploadRestrictionHelperProperties.cqDamAllowAllMime == null : this.cqDamAllowAllMime.equals(comDayCqDamCoreImplMimeTypeAssetUploadRestrictionHelperProperties.cqDamAllowAllMime)) &&
        (this.cqDamAllowedAssetMimes == null ? comDayCqDamCoreImplMimeTypeAssetUploadRestrictionHelperProperties.cqDamAllowedAssetMimes == null : this.cqDamAllowedAssetMimes.equals(comDayCqDamCoreImplMimeTypeAssetUploadRestrictionHelperProperties.cqDamAllowedAssetMimes));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.cqDamAllowAllMime == null ? 0: this.cqDamAllowAllMime.hashCode());
    result = 31 * result + (this.cqDamAllowedAssetMimes == null ? 0: this.cqDamAllowedAssetMimes.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqDamCoreImplMimeTypeAssetUploadRestrictionHelperProperties {\n");
    
    sb.append("  cqDamAllowAllMime: ").append(cqDamAllowAllMime).append("\n");
    sb.append("  cqDamAllowedAssetMimes: ").append(cqDamAllowedAssetMimes).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
