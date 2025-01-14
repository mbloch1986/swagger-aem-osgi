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
public class ComAdobeGraniteActivitystreamsImplActivityManagerImplProperties {
  
  @SerializedName("aggregate.relationships")
  private ConfigNodePropertyArray aggregateRelationships = null;
  @SerializedName("aggregate.descend.virtual")
  private ConfigNodePropertyBoolean aggregateDescendVirtual = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getAggregateRelationships() {
    return aggregateRelationships;
  }
  public void setAggregateRelationships(ConfigNodePropertyArray aggregateRelationships) {
    this.aggregateRelationships = aggregateRelationships;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getAggregateDescendVirtual() {
    return aggregateDescendVirtual;
  }
  public void setAggregateDescendVirtual(ConfigNodePropertyBoolean aggregateDescendVirtual) {
    this.aggregateDescendVirtual = aggregateDescendVirtual;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeGraniteActivitystreamsImplActivityManagerImplProperties comAdobeGraniteActivitystreamsImplActivityManagerImplProperties = (ComAdobeGraniteActivitystreamsImplActivityManagerImplProperties) o;
    return (this.aggregateRelationships == null ? comAdobeGraniteActivitystreamsImplActivityManagerImplProperties.aggregateRelationships == null : this.aggregateRelationships.equals(comAdobeGraniteActivitystreamsImplActivityManagerImplProperties.aggregateRelationships)) &&
        (this.aggregateDescendVirtual == null ? comAdobeGraniteActivitystreamsImplActivityManagerImplProperties.aggregateDescendVirtual == null : this.aggregateDescendVirtual.equals(comAdobeGraniteActivitystreamsImplActivityManagerImplProperties.aggregateDescendVirtual));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.aggregateRelationships == null ? 0: this.aggregateRelationships.hashCode());
    result = 31 * result + (this.aggregateDescendVirtual == null ? 0: this.aggregateDescendVirtual.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeGraniteActivitystreamsImplActivityManagerImplProperties {\n");
    
    sb.append("  aggregateRelationships: ").append(aggregateRelationships).append("\n");
    sb.append("  aggregateDescendVirtual: ").append(aggregateDescendVirtual).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
