/*
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


package com.shinesolutions.swaggeraemosgi4j.model;

import java.util.Objects;
import java.util.Arrays;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import com.shinesolutions.swaggeraemosgi4j.model.ConfigNodePropertyInteger;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;

/**
 * ComAdobeCqSocialCommonsCommentsListingImplSearchCommentSocialComponentListProviderProperties
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2019-06-26T12:10:03.209Z[GMT]")
public class ComAdobeCqSocialCommonsCommentsListingImplSearchCommentSocialComponentListProviderProperties {
  public static final String SERIALIZED_NAME_NUM_USER_LIMIT = "numUserLimit";
  @SerializedName(SERIALIZED_NAME_NUM_USER_LIMIT)
  private ConfigNodePropertyInteger numUserLimit = null;

  public ComAdobeCqSocialCommonsCommentsListingImplSearchCommentSocialComponentListProviderProperties numUserLimit(ConfigNodePropertyInteger numUserLimit) {
    this.numUserLimit = numUserLimit;
    return this;
  }

   /**
   * Get numUserLimit
   * @return numUserLimit
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getNumUserLimit() {
    return numUserLimit;
  }

  public void setNumUserLimit(ConfigNodePropertyInteger numUserLimit) {
    this.numUserLimit = numUserLimit;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeCqSocialCommonsCommentsListingImplSearchCommentSocialComponentListProviderProperties comAdobeCqSocialCommonsCommentsListingImplSearchCommentSocialComponentListProviderProperties = (ComAdobeCqSocialCommonsCommentsListingImplSearchCommentSocialComponentListProviderProperties) o;
    return Objects.equals(this.numUserLimit, comAdobeCqSocialCommonsCommentsListingImplSearchCommentSocialComponentListProviderProperties.numUserLimit);
  }

  @Override
  public int hashCode() {
    return Objects.hash(numUserLimit);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeCqSocialCommonsCommentsListingImplSearchCommentSocialComponentListProviderProperties {\n");
    sb.append("    numUserLimit: ").append(toIndentedString(numUserLimit)).append("\n");
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

