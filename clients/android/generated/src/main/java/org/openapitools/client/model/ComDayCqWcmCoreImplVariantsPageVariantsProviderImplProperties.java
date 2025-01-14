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
public class ComDayCqWcmCoreImplVariantsPageVariantsProviderImplProperties {
  
  @SerializedName("default.externalizer.domain")
  private ConfigNodePropertyString defaultExternalizerDomain = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getDefaultExternalizerDomain() {
    return defaultExternalizerDomain;
  }
  public void setDefaultExternalizerDomain(ConfigNodePropertyString defaultExternalizerDomain) {
    this.defaultExternalizerDomain = defaultExternalizerDomain;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqWcmCoreImplVariantsPageVariantsProviderImplProperties comDayCqWcmCoreImplVariantsPageVariantsProviderImplProperties = (ComDayCqWcmCoreImplVariantsPageVariantsProviderImplProperties) o;
    return (this.defaultExternalizerDomain == null ? comDayCqWcmCoreImplVariantsPageVariantsProviderImplProperties.defaultExternalizerDomain == null : this.defaultExternalizerDomain.equals(comDayCqWcmCoreImplVariantsPageVariantsProviderImplProperties.defaultExternalizerDomain));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.defaultExternalizerDomain == null ? 0: this.defaultExternalizerDomain.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqWcmCoreImplVariantsPageVariantsProviderImplProperties {\n");
    
    sb.append("  defaultExternalizerDomain: ").append(defaultExternalizerDomain).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
