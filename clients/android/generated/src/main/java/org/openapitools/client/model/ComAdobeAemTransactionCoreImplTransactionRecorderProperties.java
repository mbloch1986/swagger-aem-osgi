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
public class ComAdobeAemTransactionCoreImplTransactionRecorderProperties {
  
  @SerializedName("isTransactionRecordingEnabled")
  private ConfigNodePropertyBoolean isTransactionRecordingEnabled = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getIsTransactionRecordingEnabled() {
    return isTransactionRecordingEnabled;
  }
  public void setIsTransactionRecordingEnabled(ConfigNodePropertyBoolean isTransactionRecordingEnabled) {
    this.isTransactionRecordingEnabled = isTransactionRecordingEnabled;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeAemTransactionCoreImplTransactionRecorderProperties comAdobeAemTransactionCoreImplTransactionRecorderProperties = (ComAdobeAemTransactionCoreImplTransactionRecorderProperties) o;
    return (this.isTransactionRecordingEnabled == null ? comAdobeAemTransactionCoreImplTransactionRecorderProperties.isTransactionRecordingEnabled == null : this.isTransactionRecordingEnabled.equals(comAdobeAemTransactionCoreImplTransactionRecorderProperties.isTransactionRecordingEnabled));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.isTransactionRecordingEnabled == null ? 0: this.isTransactionRecordingEnabled.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeAemTransactionCoreImplTransactionRecorderProperties {\n");
    
    sb.append("  isTransactionRecordingEnabled: ").append(isTransactionRecordingEnabled).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
