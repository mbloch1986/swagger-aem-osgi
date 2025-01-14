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
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ComAdobeGraniteRepositoryHcImplContentSlingSlingContentHealthCProperties {
  
  @SerializedName("hc.tags")
  private ConfigNodePropertyArray hcTags = null;
  @SerializedName("exclude.search.path")
  private ConfigNodePropertyArray excludeSearchPath = null;

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
  public ConfigNodePropertyArray getExcludeSearchPath() {
    return excludeSearchPath;
  }
  public void setExcludeSearchPath(ConfigNodePropertyArray excludeSearchPath) {
    this.excludeSearchPath = excludeSearchPath;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeGraniteRepositoryHcImplContentSlingSlingContentHealthCProperties comAdobeGraniteRepositoryHcImplContentSlingSlingContentHealthCProperties = (ComAdobeGraniteRepositoryHcImplContentSlingSlingContentHealthCProperties) o;
    return (this.hcTags == null ? comAdobeGraniteRepositoryHcImplContentSlingSlingContentHealthCProperties.hcTags == null : this.hcTags.equals(comAdobeGraniteRepositoryHcImplContentSlingSlingContentHealthCProperties.hcTags)) &&
        (this.excludeSearchPath == null ? comAdobeGraniteRepositoryHcImplContentSlingSlingContentHealthCProperties.excludeSearchPath == null : this.excludeSearchPath.equals(comAdobeGraniteRepositoryHcImplContentSlingSlingContentHealthCProperties.excludeSearchPath));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.hcTags == null ? 0: this.hcTags.hashCode());
    result = 31 * result + (this.excludeSearchPath == null ? 0: this.excludeSearchPath.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeGraniteRepositoryHcImplContentSlingSlingContentHealthCProperties {\n");
    
    sb.append("  hcTags: ").append(hcTags).append("\n");
    sb.append("  excludeSearchPath: ").append(excludeSearchPath).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
