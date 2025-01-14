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
public class ComDayCqTaggingImplJcrTagManagerFactoryImplProperties {
  
  @SerializedName("validation.enabled")
  private ConfigNodePropertyBoolean validationEnabled = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getValidationEnabled() {
    return validationEnabled;
  }
  public void setValidationEnabled(ConfigNodePropertyBoolean validationEnabled) {
    this.validationEnabled = validationEnabled;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqTaggingImplJcrTagManagerFactoryImplProperties comDayCqTaggingImplJcrTagManagerFactoryImplProperties = (ComDayCqTaggingImplJcrTagManagerFactoryImplProperties) o;
    return (this.validationEnabled == null ? comDayCqTaggingImplJcrTagManagerFactoryImplProperties.validationEnabled == null : this.validationEnabled.equals(comDayCqTaggingImplJcrTagManagerFactoryImplProperties.validationEnabled));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.validationEnabled == null ? 0: this.validationEnabled.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqTaggingImplJcrTagManagerFactoryImplProperties {\n");
    
    sb.append("  validationEnabled: ").append(validationEnabled).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
