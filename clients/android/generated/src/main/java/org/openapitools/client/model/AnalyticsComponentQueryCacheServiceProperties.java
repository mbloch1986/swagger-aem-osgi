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

import org.openapitools.client.model.ConfigNodePropertyInteger;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class AnalyticsComponentQueryCacheServiceProperties {
  
  @SerializedName("cq.analytics.component.query.cache.size")
  private ConfigNodePropertyInteger cqAnalyticsComponentQueryCacheSize = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getCqAnalyticsComponentQueryCacheSize() {
    return cqAnalyticsComponentQueryCacheSize;
  }
  public void setCqAnalyticsComponentQueryCacheSize(ConfigNodePropertyInteger cqAnalyticsComponentQueryCacheSize) {
    this.cqAnalyticsComponentQueryCacheSize = cqAnalyticsComponentQueryCacheSize;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AnalyticsComponentQueryCacheServiceProperties analyticsComponentQueryCacheServiceProperties = (AnalyticsComponentQueryCacheServiceProperties) o;
    return (this.cqAnalyticsComponentQueryCacheSize == null ? analyticsComponentQueryCacheServiceProperties.cqAnalyticsComponentQueryCacheSize == null : this.cqAnalyticsComponentQueryCacheSize.equals(analyticsComponentQueryCacheServiceProperties.cqAnalyticsComponentQueryCacheSize));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.cqAnalyticsComponentQueryCacheSize == null ? 0: this.cqAnalyticsComponentQueryCacheSize.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class AnalyticsComponentQueryCacheServiceProperties {\n");
    
    sb.append("  cqAnalyticsComponentQueryCacheSize: ").append(cqAnalyticsComponentQueryCacheSize).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}