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
public class ComAdobeCqSocialNotificationsImplMentionsRouterProperties {
  
  @SerializedName("event.topics")
  private ConfigNodePropertyString eventTopics = null;
  @SerializedName("event.filter")
  private ConfigNodePropertyString eventFilter = null;

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


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeCqSocialNotificationsImplMentionsRouterProperties comAdobeCqSocialNotificationsImplMentionsRouterProperties = (ComAdobeCqSocialNotificationsImplMentionsRouterProperties) o;
    return (this.eventTopics == null ? comAdobeCqSocialNotificationsImplMentionsRouterProperties.eventTopics == null : this.eventTopics.equals(comAdobeCqSocialNotificationsImplMentionsRouterProperties.eventTopics)) &&
        (this.eventFilter == null ? comAdobeCqSocialNotificationsImplMentionsRouterProperties.eventFilter == null : this.eventFilter.equals(comAdobeCqSocialNotificationsImplMentionsRouterProperties.eventFilter));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.eventTopics == null ? 0: this.eventTopics.hashCode());
    result = 31 * result + (this.eventFilter == null ? 0: this.eventFilter.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeCqSocialNotificationsImplMentionsRouterProperties {\n");
    
    sb.append("  eventTopics: ").append(eventTopics).append("\n");
    sb.append("  eventFilter: ").append(eventFilter).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
