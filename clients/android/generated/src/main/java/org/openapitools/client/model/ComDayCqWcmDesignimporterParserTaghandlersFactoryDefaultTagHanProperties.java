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
import org.openapitools.client.model.ConfigNodePropertyString;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ComDayCqWcmDesignimporterParserTaghandlersFactoryDefaultTagHanProperties {
  
  @SerializedName("service.ranking")
  private ConfigNodePropertyInteger serviceRanking = null;
  @SerializedName("tagpattern")
  private ConfigNodePropertyString tagpattern = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getServiceRanking() {
    return serviceRanking;
  }
  public void setServiceRanking(ConfigNodePropertyInteger serviceRanking) {
    this.serviceRanking = serviceRanking;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getTagpattern() {
    return tagpattern;
  }
  public void setTagpattern(ConfigNodePropertyString tagpattern) {
    this.tagpattern = tagpattern;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqWcmDesignimporterParserTaghandlersFactoryDefaultTagHanProperties comDayCqWcmDesignimporterParserTaghandlersFactoryDefaultTagHanProperties = (ComDayCqWcmDesignimporterParserTaghandlersFactoryDefaultTagHanProperties) o;
    return (this.serviceRanking == null ? comDayCqWcmDesignimporterParserTaghandlersFactoryDefaultTagHanProperties.serviceRanking == null : this.serviceRanking.equals(comDayCqWcmDesignimporterParserTaghandlersFactoryDefaultTagHanProperties.serviceRanking)) &&
        (this.tagpattern == null ? comDayCqWcmDesignimporterParserTaghandlersFactoryDefaultTagHanProperties.tagpattern == null : this.tagpattern.equals(comDayCqWcmDesignimporterParserTaghandlersFactoryDefaultTagHanProperties.tagpattern));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.serviceRanking == null ? 0: this.serviceRanking.hashCode());
    result = 31 * result + (this.tagpattern == null ? 0: this.tagpattern.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqWcmDesignimporterParserTaghandlersFactoryDefaultTagHanProperties {\n");
    
    sb.append("  serviceRanking: ").append(serviceRanking).append("\n");
    sb.append("  tagpattern: ").append(tagpattern).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
