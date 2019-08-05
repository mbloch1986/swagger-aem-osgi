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

import org.openapitools.client.model.ConfigNodePropertyString;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ComDayCqWcmCoreImplUtilsDefaultPageNameValidatorProperties {
  
  @SerializedName("nonValidChars")
  private ConfigNodePropertyString nonValidChars = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getNonValidChars() {
    return nonValidChars;
  }
  public void setNonValidChars(ConfigNodePropertyString nonValidChars) {
    this.nonValidChars = nonValidChars;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqWcmCoreImplUtilsDefaultPageNameValidatorProperties comDayCqWcmCoreImplUtilsDefaultPageNameValidatorProperties = (ComDayCqWcmCoreImplUtilsDefaultPageNameValidatorProperties) o;
    return (this.nonValidChars == null ? comDayCqWcmCoreImplUtilsDefaultPageNameValidatorProperties.nonValidChars == null : this.nonValidChars.equals(comDayCqWcmCoreImplUtilsDefaultPageNameValidatorProperties.nonValidChars));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.nonValidChars == null ? 0: this.nonValidChars.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqWcmCoreImplUtilsDefaultPageNameValidatorProperties {\n");
    
    sb.append("  nonValidChars: ").append(nonValidChars).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}