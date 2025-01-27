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
public class OrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties {
  
  @SerializedName("hc.name")
  private ConfigNodePropertyString hcName = null;
  @SerializedName("hc.tags")
  private ConfigNodePropertyArray hcTags = null;
  @SerializedName("hc.mbean.name")
  private ConfigNodePropertyString hcMbeanName = null;
  @SerializedName("mbean.name")
  private ConfigNodePropertyString mbeanName = null;
  @SerializedName("attribute.name")
  private ConfigNodePropertyString attributeName = null;
  @SerializedName("attribute.value.constraint")
  private ConfigNodePropertyString attributeValueConstraint = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getHcName() {
    return hcName;
  }
  public void setHcName(ConfigNodePropertyString hcName) {
    this.hcName = hcName;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getHcTags() {
    return hcTags;
  }
  public void setHcTags(ConfigNodePropertyArray hcTags) {
    this.hcTags = hcTags;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getHcMbeanName() {
    return hcMbeanName;
  }
  public void setHcMbeanName(ConfigNodePropertyString hcMbeanName) {
    this.hcMbeanName = hcMbeanName;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getMbeanName() {
    return mbeanName;
  }
  public void setMbeanName(ConfigNodePropertyString mbeanName) {
    this.mbeanName = mbeanName;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getAttributeName() {
    return attributeName;
  }
  public void setAttributeName(ConfigNodePropertyString attributeName) {
    this.attributeName = attributeName;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getAttributeValueConstraint() {
    return attributeValueConstraint;
  }
  public void setAttributeValueConstraint(ConfigNodePropertyString attributeValueConstraint) {
    this.attributeValueConstraint = attributeValueConstraint;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties orgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties = (OrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties) o;
    return (this.hcName == null ? orgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties.hcName == null : this.hcName.equals(orgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties.hcName)) &&
        (this.hcTags == null ? orgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties.hcTags == null : this.hcTags.equals(orgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties.hcTags)) &&
        (this.hcMbeanName == null ? orgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties.hcMbeanName == null : this.hcMbeanName.equals(orgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties.hcMbeanName)) &&
        (this.mbeanName == null ? orgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties.mbeanName == null : this.mbeanName.equals(orgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties.mbeanName)) &&
        (this.attributeName == null ? orgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties.attributeName == null : this.attributeName.equals(orgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties.attributeName)) &&
        (this.attributeValueConstraint == null ? orgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties.attributeValueConstraint == null : this.attributeValueConstraint.equals(orgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties.attributeValueConstraint));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.hcName == null ? 0: this.hcName.hashCode());
    result = 31 * result + (this.hcTags == null ? 0: this.hcTags.hashCode());
    result = 31 * result + (this.hcMbeanName == null ? 0: this.hcMbeanName.hashCode());
    result = 31 * result + (this.mbeanName == null ? 0: this.mbeanName.hashCode());
    result = 31 * result + (this.attributeName == null ? 0: this.attributeName.hashCode());
    result = 31 * result + (this.attributeValueConstraint == null ? 0: this.attributeValueConstraint.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties {\n");
    
    sb.append("  hcName: ").append(hcName).append("\n");
    sb.append("  hcTags: ").append(hcTags).append("\n");
    sb.append("  hcMbeanName: ").append(hcMbeanName).append("\n");
    sb.append("  mbeanName: ").append(mbeanName).append("\n");
    sb.append("  attributeName: ").append(attributeName).append("\n");
    sb.append("  attributeValueConstraint: ").append(attributeValueConstraint).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
