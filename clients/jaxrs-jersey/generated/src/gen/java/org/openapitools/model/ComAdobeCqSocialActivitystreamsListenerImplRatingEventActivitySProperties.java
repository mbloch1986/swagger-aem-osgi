/*
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


package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ConfigNodePropertyBoolean;
import org.openapitools.model.ConfigNodePropertyInteger;
import javax.validation.constraints.*;

/**
 * ComAdobeCqSocialActivitystreamsListenerImplRatingEventActivitySProperties
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2019-08-05T00:58:47.028Z[GMT]")
public class ComAdobeCqSocialActivitystreamsListenerImplRatingEventActivitySProperties   {
  @JsonProperty("ranking")
  private ConfigNodePropertyInteger ranking = null;

  @JsonProperty("enable")
  private ConfigNodePropertyBoolean enable = null;

  public ComAdobeCqSocialActivitystreamsListenerImplRatingEventActivitySProperties ranking(ConfigNodePropertyInteger ranking) {
    this.ranking = ranking;
    return this;
  }

  /**
   * Get ranking
   * @return ranking
   **/
  @JsonProperty("ranking")
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getRanking() {
    return ranking;
  }

  public void setRanking(ConfigNodePropertyInteger ranking) {
    this.ranking = ranking;
  }

  public ComAdobeCqSocialActivitystreamsListenerImplRatingEventActivitySProperties enable(ConfigNodePropertyBoolean enable) {
    this.enable = enable;
    return this;
  }

  /**
   * Get enable
   * @return enable
   **/
  @JsonProperty("enable")
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getEnable() {
    return enable;
  }

  public void setEnable(ConfigNodePropertyBoolean enable) {
    this.enable = enable;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeCqSocialActivitystreamsListenerImplRatingEventActivitySProperties comAdobeCqSocialActivitystreamsListenerImplRatingEventActivitySProperties = (ComAdobeCqSocialActivitystreamsListenerImplRatingEventActivitySProperties) o;
    return Objects.equals(this.ranking, comAdobeCqSocialActivitystreamsListenerImplRatingEventActivitySProperties.ranking) &&
        Objects.equals(this.enable, comAdobeCqSocialActivitystreamsListenerImplRatingEventActivitySProperties.enable);
  }

  @Override
  public int hashCode() {
    return Objects.hash(ranking, enable);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeCqSocialActivitystreamsListenerImplRatingEventActivitySProperties {\n");
    
    sb.append("    ranking: ").append(toIndentedString(ranking)).append("\n");
    sb.append("    enable: ").append(toIndentedString(enable)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
