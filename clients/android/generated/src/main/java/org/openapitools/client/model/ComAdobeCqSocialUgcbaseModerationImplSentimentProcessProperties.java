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
public class ComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties {
  
  @SerializedName("watchwords.positive")
  private ConfigNodePropertyArray watchwordsPositive = null;
  @SerializedName("watchwords.negative")
  private ConfigNodePropertyArray watchwordsNegative = null;
  @SerializedName("watchwords.path")
  private ConfigNodePropertyString watchwordsPath = null;
  @SerializedName("sentiment.path")
  private ConfigNodePropertyString sentimentPath = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getWatchwordsPositive() {
    return watchwordsPositive;
  }
  public void setWatchwordsPositive(ConfigNodePropertyArray watchwordsPositive) {
    this.watchwordsPositive = watchwordsPositive;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getWatchwordsNegative() {
    return watchwordsNegative;
  }
  public void setWatchwordsNegative(ConfigNodePropertyArray watchwordsNegative) {
    this.watchwordsNegative = watchwordsNegative;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getWatchwordsPath() {
    return watchwordsPath;
  }
  public void setWatchwordsPath(ConfigNodePropertyString watchwordsPath) {
    this.watchwordsPath = watchwordsPath;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getSentimentPath() {
    return sentimentPath;
  }
  public void setSentimentPath(ConfigNodePropertyString sentimentPath) {
    this.sentimentPath = sentimentPath;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties comAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties = (ComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties) o;
    return (this.watchwordsPositive == null ? comAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties.watchwordsPositive == null : this.watchwordsPositive.equals(comAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties.watchwordsPositive)) &&
        (this.watchwordsNegative == null ? comAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties.watchwordsNegative == null : this.watchwordsNegative.equals(comAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties.watchwordsNegative)) &&
        (this.watchwordsPath == null ? comAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties.watchwordsPath == null : this.watchwordsPath.equals(comAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties.watchwordsPath)) &&
        (this.sentimentPath == null ? comAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties.sentimentPath == null : this.sentimentPath.equals(comAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties.sentimentPath));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.watchwordsPositive == null ? 0: this.watchwordsPositive.hashCode());
    result = 31 * result + (this.watchwordsNegative == null ? 0: this.watchwordsNegative.hashCode());
    result = 31 * result + (this.watchwordsPath == null ? 0: this.watchwordsPath.hashCode());
    result = 31 * result + (this.sentimentPath == null ? 0: this.sentimentPath.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties {\n");
    
    sb.append("  watchwordsPositive: ").append(watchwordsPositive).append("\n");
    sb.append("  watchwordsNegative: ").append(watchwordsNegative).append("\n");
    sb.append("  watchwordsPath: ").append(watchwordsPath).append("\n");
    sb.append("  sentimentPath: ").append(sentimentPath).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
