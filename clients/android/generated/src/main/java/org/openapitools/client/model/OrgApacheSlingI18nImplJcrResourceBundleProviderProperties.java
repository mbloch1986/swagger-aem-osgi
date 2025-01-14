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
import org.openapitools.client.model.ConfigNodePropertyInteger;
import org.openapitools.client.model.ConfigNodePropertyString;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class OrgApacheSlingI18nImplJcrResourceBundleProviderProperties {
  
  @SerializedName("locale.default")
  private ConfigNodePropertyString localeDefault = null;
  @SerializedName("preload.bundles")
  private ConfigNodePropertyBoolean preloadBundles = null;
  @SerializedName("invalidation.delay")
  private ConfigNodePropertyInteger invalidationDelay = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getLocaleDefault() {
    return localeDefault;
  }
  public void setLocaleDefault(ConfigNodePropertyString localeDefault) {
    this.localeDefault = localeDefault;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getPreloadBundles() {
    return preloadBundles;
  }
  public void setPreloadBundles(ConfigNodePropertyBoolean preloadBundles) {
    this.preloadBundles = preloadBundles;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getInvalidationDelay() {
    return invalidationDelay;
  }
  public void setInvalidationDelay(ConfigNodePropertyInteger invalidationDelay) {
    this.invalidationDelay = invalidationDelay;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheSlingI18nImplJcrResourceBundleProviderProperties orgApacheSlingI18nImplJcrResourceBundleProviderProperties = (OrgApacheSlingI18nImplJcrResourceBundleProviderProperties) o;
    return (this.localeDefault == null ? orgApacheSlingI18nImplJcrResourceBundleProviderProperties.localeDefault == null : this.localeDefault.equals(orgApacheSlingI18nImplJcrResourceBundleProviderProperties.localeDefault)) &&
        (this.preloadBundles == null ? orgApacheSlingI18nImplJcrResourceBundleProviderProperties.preloadBundles == null : this.preloadBundles.equals(orgApacheSlingI18nImplJcrResourceBundleProviderProperties.preloadBundles)) &&
        (this.invalidationDelay == null ? orgApacheSlingI18nImplJcrResourceBundleProviderProperties.invalidationDelay == null : this.invalidationDelay.equals(orgApacheSlingI18nImplJcrResourceBundleProviderProperties.invalidationDelay));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.localeDefault == null ? 0: this.localeDefault.hashCode());
    result = 31 * result + (this.preloadBundles == null ? 0: this.preloadBundles.hashCode());
    result = 31 * result + (this.invalidationDelay == null ? 0: this.invalidationDelay.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheSlingI18nImplJcrResourceBundleProviderProperties {\n");
    
    sb.append("  localeDefault: ").append(localeDefault).append("\n");
    sb.append("  preloadBundles: ").append(preloadBundles).append("\n");
    sb.append("  invalidationDelay: ").append(invalidationDelay).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
