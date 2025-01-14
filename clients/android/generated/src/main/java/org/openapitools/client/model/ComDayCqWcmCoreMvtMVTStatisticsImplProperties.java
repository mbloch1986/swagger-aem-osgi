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
public class ComDayCqWcmCoreMvtMVTStatisticsImplProperties {
  
  @SerializedName("mvtstatistics.trackingurl")
  private ConfigNodePropertyString mvtstatisticsTrackingurl = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getMvtstatisticsTrackingurl() {
    return mvtstatisticsTrackingurl;
  }
  public void setMvtstatisticsTrackingurl(ConfigNodePropertyString mvtstatisticsTrackingurl) {
    this.mvtstatisticsTrackingurl = mvtstatisticsTrackingurl;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqWcmCoreMvtMVTStatisticsImplProperties comDayCqWcmCoreMvtMVTStatisticsImplProperties = (ComDayCqWcmCoreMvtMVTStatisticsImplProperties) o;
    return (this.mvtstatisticsTrackingurl == null ? comDayCqWcmCoreMvtMVTStatisticsImplProperties.mvtstatisticsTrackingurl == null : this.mvtstatisticsTrackingurl.equals(comDayCqWcmCoreMvtMVTStatisticsImplProperties.mvtstatisticsTrackingurl));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.mvtstatisticsTrackingurl == null ? 0: this.mvtstatisticsTrackingurl.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqWcmCoreMvtMVTStatisticsImplProperties {\n");
    
    sb.append("  mvtstatisticsTrackingurl: ").append(mvtstatisticsTrackingurl).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
