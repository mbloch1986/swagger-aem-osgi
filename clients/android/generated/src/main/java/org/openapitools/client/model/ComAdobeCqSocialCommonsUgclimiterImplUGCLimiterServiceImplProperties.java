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
public class ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplProperties {
  
  @SerializedName("event.topics")
  private ConfigNodePropertyString eventTopics = null;
  @SerializedName("event.filter")
  private ConfigNodePropertyString eventFilter = null;
  @SerializedName("verbs")
  private ConfigNodePropertyArray verbs = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getEventTopics() {
    return eventTopics;
  }
  public void setEventTopics(ConfigNodePropertyString eventTopics) {
    this.eventTopics = eventTopics;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getEventFilter() {
    return eventFilter;
  }
  public void setEventFilter(ConfigNodePropertyString eventFilter) {
    this.eventFilter = eventFilter;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getVerbs() {
    return verbs;
  }
  public void setVerbs(ConfigNodePropertyArray verbs) {
    this.verbs = verbs;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplProperties comAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplProperties = (ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplProperties) o;
    return (this.eventTopics == null ? comAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplProperties.eventTopics == null : this.eventTopics.equals(comAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplProperties.eventTopics)) &&
        (this.eventFilter == null ? comAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplProperties.eventFilter == null : this.eventFilter.equals(comAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplProperties.eventFilter)) &&
        (this.verbs == null ? comAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplProperties.verbs == null : this.verbs.equals(comAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplProperties.verbs));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.eventTopics == null ? 0: this.eventTopics.hashCode());
    result = 31 * result + (this.eventFilter == null ? 0: this.eventFilter.hashCode());
    result = 31 * result + (this.verbs == null ? 0: this.verbs.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplProperties {\n");
    
    sb.append("  eventTopics: ").append(eventTopics).append("\n");
    sb.append("  eventFilter: ").append(eventFilter).append("\n");
    sb.append("  verbs: ").append(verbs).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
