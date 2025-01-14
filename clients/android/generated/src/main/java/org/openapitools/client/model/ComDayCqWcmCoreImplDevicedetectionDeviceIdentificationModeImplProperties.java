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
import org.openapitools.client.model.ConfigNodePropertyDropDown;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ComDayCqWcmCoreImplDevicedetectionDeviceIdentificationModeImplProperties {
  
  @SerializedName("dim.default.mode")
  private ConfigNodePropertyDropDown dimDefaultMode = null;
  @SerializedName("dim.appcache.enabled")
  private ConfigNodePropertyBoolean dimAppcacheEnabled = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyDropDown getDimDefaultMode() {
    return dimDefaultMode;
  }
  public void setDimDefaultMode(ConfigNodePropertyDropDown dimDefaultMode) {
    this.dimDefaultMode = dimDefaultMode;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getDimAppcacheEnabled() {
    return dimAppcacheEnabled;
  }
  public void setDimAppcacheEnabled(ConfigNodePropertyBoolean dimAppcacheEnabled) {
    this.dimAppcacheEnabled = dimAppcacheEnabled;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqWcmCoreImplDevicedetectionDeviceIdentificationModeImplProperties comDayCqWcmCoreImplDevicedetectionDeviceIdentificationModeImplProperties = (ComDayCqWcmCoreImplDevicedetectionDeviceIdentificationModeImplProperties) o;
    return (this.dimDefaultMode == null ? comDayCqWcmCoreImplDevicedetectionDeviceIdentificationModeImplProperties.dimDefaultMode == null : this.dimDefaultMode.equals(comDayCqWcmCoreImplDevicedetectionDeviceIdentificationModeImplProperties.dimDefaultMode)) &&
        (this.dimAppcacheEnabled == null ? comDayCqWcmCoreImplDevicedetectionDeviceIdentificationModeImplProperties.dimAppcacheEnabled == null : this.dimAppcacheEnabled.equals(comDayCqWcmCoreImplDevicedetectionDeviceIdentificationModeImplProperties.dimAppcacheEnabled));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.dimDefaultMode == null ? 0: this.dimDefaultMode.hashCode());
    result = 31 * result + (this.dimAppcacheEnabled == null ? 0: this.dimAppcacheEnabled.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqWcmCoreImplDevicedetectionDeviceIdentificationModeImplProperties {\n");
    
    sb.append("  dimDefaultMode: ").append(dimDefaultMode).append("\n");
    sb.append("  dimAppcacheEnabled: ").append(dimAppcacheEnabled).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
