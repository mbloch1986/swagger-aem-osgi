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
import org.openapitools.client.model.ConfigNodePropertyString;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ComAdobeGraniteSecurityUserUserPropertiesServiceProperties {
  
  @SerializedName("adapter.condition")
  private ConfigNodePropertyString adapterCondition = null;
  @SerializedName("granite.userproperties.nodetypes")
  private ConfigNodePropertyArray graniteUserpropertiesNodetypes = null;
  @SerializedName("granite.userproperties.resourcetypes")
  private ConfigNodePropertyArray graniteUserpropertiesResourcetypes = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getAdapterCondition() {
    return adapterCondition;
  }
  public void setAdapterCondition(ConfigNodePropertyString adapterCondition) {
    this.adapterCondition = adapterCondition;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getGraniteUserpropertiesNodetypes() {
    return graniteUserpropertiesNodetypes;
  }
  public void setGraniteUserpropertiesNodetypes(ConfigNodePropertyArray graniteUserpropertiesNodetypes) {
    this.graniteUserpropertiesNodetypes = graniteUserpropertiesNodetypes;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getGraniteUserpropertiesResourcetypes() {
    return graniteUserpropertiesResourcetypes;
  }
  public void setGraniteUserpropertiesResourcetypes(ConfigNodePropertyArray graniteUserpropertiesResourcetypes) {
    this.graniteUserpropertiesResourcetypes = graniteUserpropertiesResourcetypes;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeGraniteSecurityUserUserPropertiesServiceProperties comAdobeGraniteSecurityUserUserPropertiesServiceProperties = (ComAdobeGraniteSecurityUserUserPropertiesServiceProperties) o;
    return (this.adapterCondition == null ? comAdobeGraniteSecurityUserUserPropertiesServiceProperties.adapterCondition == null : this.adapterCondition.equals(comAdobeGraniteSecurityUserUserPropertiesServiceProperties.adapterCondition)) &&
        (this.graniteUserpropertiesNodetypes == null ? comAdobeGraniteSecurityUserUserPropertiesServiceProperties.graniteUserpropertiesNodetypes == null : this.graniteUserpropertiesNodetypes.equals(comAdobeGraniteSecurityUserUserPropertiesServiceProperties.graniteUserpropertiesNodetypes)) &&
        (this.graniteUserpropertiesResourcetypes == null ? comAdobeGraniteSecurityUserUserPropertiesServiceProperties.graniteUserpropertiesResourcetypes == null : this.graniteUserpropertiesResourcetypes.equals(comAdobeGraniteSecurityUserUserPropertiesServiceProperties.graniteUserpropertiesResourcetypes));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.adapterCondition == null ? 0: this.adapterCondition.hashCode());
    result = 31 * result + (this.graniteUserpropertiesNodetypes == null ? 0: this.graniteUserpropertiesNodetypes.hashCode());
    result = 31 * result + (this.graniteUserpropertiesResourcetypes == null ? 0: this.graniteUserpropertiesResourcetypes.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeGraniteSecurityUserUserPropertiesServiceProperties {\n");
    
    sb.append("  adapterCondition: ").append(adapterCondition).append("\n");
    sb.append("  graniteUserpropertiesNodetypes: ").append(graniteUserpropertiesNodetypes).append("\n");
    sb.append("  graniteUserpropertiesResourcetypes: ").append(graniteUserpropertiesResourcetypes).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
