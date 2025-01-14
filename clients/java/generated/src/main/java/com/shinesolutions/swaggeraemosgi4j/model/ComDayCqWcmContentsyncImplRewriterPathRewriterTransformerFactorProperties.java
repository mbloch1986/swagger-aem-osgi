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


package com.shinesolutions.swaggeraemosgi4j.model;

import java.util.Objects;
import java.util.Arrays;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import com.shinesolutions.swaggeraemosgi4j.model.ConfigNodePropertyArray;
import com.shinesolutions.swaggeraemosgi4j.model.ConfigNodePropertyString;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;

/**
 * ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2019-08-05T00:52:06.785Z[GMT]")
public class ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties {
  public static final String SERIALIZED_NAME_CQ_CONTENTSYNC_PATHREWRITERTRANSFORMER_MAPPING_LINKS = "cq.contentsync.pathrewritertransformer.mapping.links";
  @SerializedName(SERIALIZED_NAME_CQ_CONTENTSYNC_PATHREWRITERTRANSFORMER_MAPPING_LINKS)
  private ConfigNodePropertyArray cqContentsyncPathrewritertransformerMappingLinks = null;

  public static final String SERIALIZED_NAME_CQ_CONTENTSYNC_PATHREWRITERTRANSFORMER_MAPPING_CLIENTLIBS = "cq.contentsync.pathrewritertransformer.mapping.clientlibs";
  @SerializedName(SERIALIZED_NAME_CQ_CONTENTSYNC_PATHREWRITERTRANSFORMER_MAPPING_CLIENTLIBS)
  private ConfigNodePropertyArray cqContentsyncPathrewritertransformerMappingClientlibs = null;

  public static final String SERIALIZED_NAME_CQ_CONTENTSYNC_PATHREWRITERTRANSFORMER_MAPPING_IMAGES = "cq.contentsync.pathrewritertransformer.mapping.images";
  @SerializedName(SERIALIZED_NAME_CQ_CONTENTSYNC_PATHREWRITERTRANSFORMER_MAPPING_IMAGES)
  private ConfigNodePropertyArray cqContentsyncPathrewritertransformerMappingImages = null;

  public static final String SERIALIZED_NAME_CQ_CONTENTSYNC_PATHREWRITERTRANSFORMER_ATTRIBUTE_PATTERN = "cq.contentsync.pathrewritertransformer.attribute.pattern";
  @SerializedName(SERIALIZED_NAME_CQ_CONTENTSYNC_PATHREWRITERTRANSFORMER_ATTRIBUTE_PATTERN)
  private ConfigNodePropertyString cqContentsyncPathrewritertransformerAttributePattern = null;

  public static final String SERIALIZED_NAME_CQ_CONTENTSYNC_PATHREWRITERTRANSFORMER_CLIENTLIBRARY_PATTERN = "cq.contentsync.pathrewritertransformer.clientlibrary.pattern";
  @SerializedName(SERIALIZED_NAME_CQ_CONTENTSYNC_PATHREWRITERTRANSFORMER_CLIENTLIBRARY_PATTERN)
  private ConfigNodePropertyString cqContentsyncPathrewritertransformerClientlibraryPattern = null;

  public static final String SERIALIZED_NAME_CQ_CONTENTSYNC_PATHREWRITERTRANSFORMER_CLIENTLIBRARY_REPLACE = "cq.contentsync.pathrewritertransformer.clientlibrary.replace";
  @SerializedName(SERIALIZED_NAME_CQ_CONTENTSYNC_PATHREWRITERTRANSFORMER_CLIENTLIBRARY_REPLACE)
  private ConfigNodePropertyString cqContentsyncPathrewritertransformerClientlibraryReplace = null;

  public ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties cqContentsyncPathrewritertransformerMappingLinks(ConfigNodePropertyArray cqContentsyncPathrewritertransformerMappingLinks) {
    this.cqContentsyncPathrewritertransformerMappingLinks = cqContentsyncPathrewritertransformerMappingLinks;
    return this;
  }

   /**
   * Get cqContentsyncPathrewritertransformerMappingLinks
   * @return cqContentsyncPathrewritertransformerMappingLinks
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getCqContentsyncPathrewritertransformerMappingLinks() {
    return cqContentsyncPathrewritertransformerMappingLinks;
  }

  public void setCqContentsyncPathrewritertransformerMappingLinks(ConfigNodePropertyArray cqContentsyncPathrewritertransformerMappingLinks) {
    this.cqContentsyncPathrewritertransformerMappingLinks = cqContentsyncPathrewritertransformerMappingLinks;
  }

  public ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties cqContentsyncPathrewritertransformerMappingClientlibs(ConfigNodePropertyArray cqContentsyncPathrewritertransformerMappingClientlibs) {
    this.cqContentsyncPathrewritertransformerMappingClientlibs = cqContentsyncPathrewritertransformerMappingClientlibs;
    return this;
  }

   /**
   * Get cqContentsyncPathrewritertransformerMappingClientlibs
   * @return cqContentsyncPathrewritertransformerMappingClientlibs
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getCqContentsyncPathrewritertransformerMappingClientlibs() {
    return cqContentsyncPathrewritertransformerMappingClientlibs;
  }

  public void setCqContentsyncPathrewritertransformerMappingClientlibs(ConfigNodePropertyArray cqContentsyncPathrewritertransformerMappingClientlibs) {
    this.cqContentsyncPathrewritertransformerMappingClientlibs = cqContentsyncPathrewritertransformerMappingClientlibs;
  }

  public ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties cqContentsyncPathrewritertransformerMappingImages(ConfigNodePropertyArray cqContentsyncPathrewritertransformerMappingImages) {
    this.cqContentsyncPathrewritertransformerMappingImages = cqContentsyncPathrewritertransformerMappingImages;
    return this;
  }

   /**
   * Get cqContentsyncPathrewritertransformerMappingImages
   * @return cqContentsyncPathrewritertransformerMappingImages
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getCqContentsyncPathrewritertransformerMappingImages() {
    return cqContentsyncPathrewritertransformerMappingImages;
  }

  public void setCqContentsyncPathrewritertransformerMappingImages(ConfigNodePropertyArray cqContentsyncPathrewritertransformerMappingImages) {
    this.cqContentsyncPathrewritertransformerMappingImages = cqContentsyncPathrewritertransformerMappingImages;
  }

  public ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties cqContentsyncPathrewritertransformerAttributePattern(ConfigNodePropertyString cqContentsyncPathrewritertransformerAttributePattern) {
    this.cqContentsyncPathrewritertransformerAttributePattern = cqContentsyncPathrewritertransformerAttributePattern;
    return this;
  }

   /**
   * Get cqContentsyncPathrewritertransformerAttributePattern
   * @return cqContentsyncPathrewritertransformerAttributePattern
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getCqContentsyncPathrewritertransformerAttributePattern() {
    return cqContentsyncPathrewritertransformerAttributePattern;
  }

  public void setCqContentsyncPathrewritertransformerAttributePattern(ConfigNodePropertyString cqContentsyncPathrewritertransformerAttributePattern) {
    this.cqContentsyncPathrewritertransformerAttributePattern = cqContentsyncPathrewritertransformerAttributePattern;
  }

  public ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties cqContentsyncPathrewritertransformerClientlibraryPattern(ConfigNodePropertyString cqContentsyncPathrewritertransformerClientlibraryPattern) {
    this.cqContentsyncPathrewritertransformerClientlibraryPattern = cqContentsyncPathrewritertransformerClientlibraryPattern;
    return this;
  }

   /**
   * Get cqContentsyncPathrewritertransformerClientlibraryPattern
   * @return cqContentsyncPathrewritertransformerClientlibraryPattern
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getCqContentsyncPathrewritertransformerClientlibraryPattern() {
    return cqContentsyncPathrewritertransformerClientlibraryPattern;
  }

  public void setCqContentsyncPathrewritertransformerClientlibraryPattern(ConfigNodePropertyString cqContentsyncPathrewritertransformerClientlibraryPattern) {
    this.cqContentsyncPathrewritertransformerClientlibraryPattern = cqContentsyncPathrewritertransformerClientlibraryPattern;
  }

  public ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties cqContentsyncPathrewritertransformerClientlibraryReplace(ConfigNodePropertyString cqContentsyncPathrewritertransformerClientlibraryReplace) {
    this.cqContentsyncPathrewritertransformerClientlibraryReplace = cqContentsyncPathrewritertransformerClientlibraryReplace;
    return this;
  }

   /**
   * Get cqContentsyncPathrewritertransformerClientlibraryReplace
   * @return cqContentsyncPathrewritertransformerClientlibraryReplace
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getCqContentsyncPathrewritertransformerClientlibraryReplace() {
    return cqContentsyncPathrewritertransformerClientlibraryReplace;
  }

  public void setCqContentsyncPathrewritertransformerClientlibraryReplace(ConfigNodePropertyString cqContentsyncPathrewritertransformerClientlibraryReplace) {
    this.cqContentsyncPathrewritertransformerClientlibraryReplace = cqContentsyncPathrewritertransformerClientlibraryReplace;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties comDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties = (ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties) o;
    return Objects.equals(this.cqContentsyncPathrewritertransformerMappingLinks, comDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties.cqContentsyncPathrewritertransformerMappingLinks) &&
        Objects.equals(this.cqContentsyncPathrewritertransformerMappingClientlibs, comDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties.cqContentsyncPathrewritertransformerMappingClientlibs) &&
        Objects.equals(this.cqContentsyncPathrewritertransformerMappingImages, comDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties.cqContentsyncPathrewritertransformerMappingImages) &&
        Objects.equals(this.cqContentsyncPathrewritertransformerAttributePattern, comDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties.cqContentsyncPathrewritertransformerAttributePattern) &&
        Objects.equals(this.cqContentsyncPathrewritertransformerClientlibraryPattern, comDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties.cqContentsyncPathrewritertransformerClientlibraryPattern) &&
        Objects.equals(this.cqContentsyncPathrewritertransformerClientlibraryReplace, comDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties.cqContentsyncPathrewritertransformerClientlibraryReplace);
  }

  @Override
  public int hashCode() {
    return Objects.hash(cqContentsyncPathrewritertransformerMappingLinks, cqContentsyncPathrewritertransformerMappingClientlibs, cqContentsyncPathrewritertransformerMappingImages, cqContentsyncPathrewritertransformerAttributePattern, cqContentsyncPathrewritertransformerClientlibraryPattern, cqContentsyncPathrewritertransformerClientlibraryReplace);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties {\n");
    
    sb.append("    cqContentsyncPathrewritertransformerMappingLinks: ").append(toIndentedString(cqContentsyncPathrewritertransformerMappingLinks)).append("\n");
    sb.append("    cqContentsyncPathrewritertransformerMappingClientlibs: ").append(toIndentedString(cqContentsyncPathrewritertransformerMappingClientlibs)).append("\n");
    sb.append("    cqContentsyncPathrewritertransformerMappingImages: ").append(toIndentedString(cqContentsyncPathrewritertransformerMappingImages)).append("\n");
    sb.append("    cqContentsyncPathrewritertransformerAttributePattern: ").append(toIndentedString(cqContentsyncPathrewritertransformerAttributePattern)).append("\n");
    sb.append("    cqContentsyncPathrewritertransformerClientlibraryPattern: ").append(toIndentedString(cqContentsyncPathrewritertransformerClientlibraryPattern)).append("\n");
    sb.append("    cqContentsyncPathrewritertransformerClientlibraryReplace: ").append(toIndentedString(cqContentsyncPathrewritertransformerClientlibraryReplace)).append("\n");
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

