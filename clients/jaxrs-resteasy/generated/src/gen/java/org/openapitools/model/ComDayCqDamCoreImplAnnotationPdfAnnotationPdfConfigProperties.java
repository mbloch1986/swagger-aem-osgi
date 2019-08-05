package org.openapitools.model;

import java.util.Objects;
import java.util.ArrayList;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import org.openapitools.model.ConfigNodePropertyInteger;
import org.openapitools.model.ConfigNodePropertyString;
import javax.validation.constraints.*;
import io.swagger.annotations.*;


@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaResteasyServerCodegen", date = "2019-08-05T00:59:30.156Z[GMT]")
public class ComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties   {
  
  private ConfigNodePropertyInteger cqDamConfigAnnotationPdfDocumentWidth = null;
  private ConfigNodePropertyInteger cqDamConfigAnnotationPdfDocumentHeight = null;
  private ConfigNodePropertyInteger cqDamConfigAnnotationPdfDocumentPaddingHorizontal = null;
  private ConfigNodePropertyInteger cqDamConfigAnnotationPdfDocumentPaddingVertical = null;
  private ConfigNodePropertyInteger cqDamConfigAnnotationPdfFontSize = null;
  private ConfigNodePropertyString cqDamConfigAnnotationPdfFontColor = null;
  private ConfigNodePropertyString cqDamConfigAnnotationPdfFontFamily = null;
  private ConfigNodePropertyString cqDamConfigAnnotationPdfFontLight = null;
  private ConfigNodePropertyInteger cqDamConfigAnnotationPdfMarginTextImage = null;
  private ConfigNodePropertyInteger cqDamConfigAnnotationPdfMinImageHeight = null;
  private ConfigNodePropertyInteger cqDamConfigAnnotationPdfReviewStatusWidth = null;
  private ConfigNodePropertyString cqDamConfigAnnotationPdfReviewStatusColorApproved = null;
  private ConfigNodePropertyString cqDamConfigAnnotationPdfReviewStatusColorRejected = null;
  private ConfigNodePropertyString cqDamConfigAnnotationPdfReviewStatusColorChangesRequested = null;
  private ConfigNodePropertyInteger cqDamConfigAnnotationPdfAnnotationMarkerWidth = null;
  private ConfigNodePropertyInteger cqDamConfigAnnotationPdfAssetMinheight = null;

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("cq.dam.config.annotation.pdf.document.width")
  public ConfigNodePropertyInteger getCqDamConfigAnnotationPdfDocumentWidth() {
    return cqDamConfigAnnotationPdfDocumentWidth;
  }
  public void setCqDamConfigAnnotationPdfDocumentWidth(ConfigNodePropertyInteger cqDamConfigAnnotationPdfDocumentWidth) {
    this.cqDamConfigAnnotationPdfDocumentWidth = cqDamConfigAnnotationPdfDocumentWidth;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("cq.dam.config.annotation.pdf.document.height")
  public ConfigNodePropertyInteger getCqDamConfigAnnotationPdfDocumentHeight() {
    return cqDamConfigAnnotationPdfDocumentHeight;
  }
  public void setCqDamConfigAnnotationPdfDocumentHeight(ConfigNodePropertyInteger cqDamConfigAnnotationPdfDocumentHeight) {
    this.cqDamConfigAnnotationPdfDocumentHeight = cqDamConfigAnnotationPdfDocumentHeight;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("cq.dam.config.annotation.pdf.document.padding.horizontal")
  public ConfigNodePropertyInteger getCqDamConfigAnnotationPdfDocumentPaddingHorizontal() {
    return cqDamConfigAnnotationPdfDocumentPaddingHorizontal;
  }
  public void setCqDamConfigAnnotationPdfDocumentPaddingHorizontal(ConfigNodePropertyInteger cqDamConfigAnnotationPdfDocumentPaddingHorizontal) {
    this.cqDamConfigAnnotationPdfDocumentPaddingHorizontal = cqDamConfigAnnotationPdfDocumentPaddingHorizontal;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("cq.dam.config.annotation.pdf.document.padding.vertical")
  public ConfigNodePropertyInteger getCqDamConfigAnnotationPdfDocumentPaddingVertical() {
    return cqDamConfigAnnotationPdfDocumentPaddingVertical;
  }
  public void setCqDamConfigAnnotationPdfDocumentPaddingVertical(ConfigNodePropertyInteger cqDamConfigAnnotationPdfDocumentPaddingVertical) {
    this.cqDamConfigAnnotationPdfDocumentPaddingVertical = cqDamConfigAnnotationPdfDocumentPaddingVertical;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("cq.dam.config.annotation.pdf.font.size")
  public ConfigNodePropertyInteger getCqDamConfigAnnotationPdfFontSize() {
    return cqDamConfigAnnotationPdfFontSize;
  }
  public void setCqDamConfigAnnotationPdfFontSize(ConfigNodePropertyInteger cqDamConfigAnnotationPdfFontSize) {
    this.cqDamConfigAnnotationPdfFontSize = cqDamConfigAnnotationPdfFontSize;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("cq.dam.config.annotation.pdf.font.color")
  public ConfigNodePropertyString getCqDamConfigAnnotationPdfFontColor() {
    return cqDamConfigAnnotationPdfFontColor;
  }
  public void setCqDamConfigAnnotationPdfFontColor(ConfigNodePropertyString cqDamConfigAnnotationPdfFontColor) {
    this.cqDamConfigAnnotationPdfFontColor = cqDamConfigAnnotationPdfFontColor;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("cq.dam.config.annotation.pdf.font.family")
  public ConfigNodePropertyString getCqDamConfigAnnotationPdfFontFamily() {
    return cqDamConfigAnnotationPdfFontFamily;
  }
  public void setCqDamConfigAnnotationPdfFontFamily(ConfigNodePropertyString cqDamConfigAnnotationPdfFontFamily) {
    this.cqDamConfigAnnotationPdfFontFamily = cqDamConfigAnnotationPdfFontFamily;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("cq.dam.config.annotation.pdf.font.light")
  public ConfigNodePropertyString getCqDamConfigAnnotationPdfFontLight() {
    return cqDamConfigAnnotationPdfFontLight;
  }
  public void setCqDamConfigAnnotationPdfFontLight(ConfigNodePropertyString cqDamConfigAnnotationPdfFontLight) {
    this.cqDamConfigAnnotationPdfFontLight = cqDamConfigAnnotationPdfFontLight;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("cq.dam.config.annotation.pdf.marginTextImage")
  public ConfigNodePropertyInteger getCqDamConfigAnnotationPdfMarginTextImage() {
    return cqDamConfigAnnotationPdfMarginTextImage;
  }
  public void setCqDamConfigAnnotationPdfMarginTextImage(ConfigNodePropertyInteger cqDamConfigAnnotationPdfMarginTextImage) {
    this.cqDamConfigAnnotationPdfMarginTextImage = cqDamConfigAnnotationPdfMarginTextImage;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("cq.dam.config.annotation.pdf.minImageHeight")
  public ConfigNodePropertyInteger getCqDamConfigAnnotationPdfMinImageHeight() {
    return cqDamConfigAnnotationPdfMinImageHeight;
  }
  public void setCqDamConfigAnnotationPdfMinImageHeight(ConfigNodePropertyInteger cqDamConfigAnnotationPdfMinImageHeight) {
    this.cqDamConfigAnnotationPdfMinImageHeight = cqDamConfigAnnotationPdfMinImageHeight;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("cq.dam.config.annotation.pdf.reviewStatus.width")
  public ConfigNodePropertyInteger getCqDamConfigAnnotationPdfReviewStatusWidth() {
    return cqDamConfigAnnotationPdfReviewStatusWidth;
  }
  public void setCqDamConfigAnnotationPdfReviewStatusWidth(ConfigNodePropertyInteger cqDamConfigAnnotationPdfReviewStatusWidth) {
    this.cqDamConfigAnnotationPdfReviewStatusWidth = cqDamConfigAnnotationPdfReviewStatusWidth;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("cq.dam.config.annotation.pdf.reviewStatus.color.approved")
  public ConfigNodePropertyString getCqDamConfigAnnotationPdfReviewStatusColorApproved() {
    return cqDamConfigAnnotationPdfReviewStatusColorApproved;
  }
  public void setCqDamConfigAnnotationPdfReviewStatusColorApproved(ConfigNodePropertyString cqDamConfigAnnotationPdfReviewStatusColorApproved) {
    this.cqDamConfigAnnotationPdfReviewStatusColorApproved = cqDamConfigAnnotationPdfReviewStatusColorApproved;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("cq.dam.config.annotation.pdf.reviewStatus.color.rejected")
  public ConfigNodePropertyString getCqDamConfigAnnotationPdfReviewStatusColorRejected() {
    return cqDamConfigAnnotationPdfReviewStatusColorRejected;
  }
  public void setCqDamConfigAnnotationPdfReviewStatusColorRejected(ConfigNodePropertyString cqDamConfigAnnotationPdfReviewStatusColorRejected) {
    this.cqDamConfigAnnotationPdfReviewStatusColorRejected = cqDamConfigAnnotationPdfReviewStatusColorRejected;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("cq.dam.config.annotation.pdf.reviewStatus.color.changesRequested")
  public ConfigNodePropertyString getCqDamConfigAnnotationPdfReviewStatusColorChangesRequested() {
    return cqDamConfigAnnotationPdfReviewStatusColorChangesRequested;
  }
  public void setCqDamConfigAnnotationPdfReviewStatusColorChangesRequested(ConfigNodePropertyString cqDamConfigAnnotationPdfReviewStatusColorChangesRequested) {
    this.cqDamConfigAnnotationPdfReviewStatusColorChangesRequested = cqDamConfigAnnotationPdfReviewStatusColorChangesRequested;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("cq.dam.config.annotation.pdf.annotationMarker.width")
  public ConfigNodePropertyInteger getCqDamConfigAnnotationPdfAnnotationMarkerWidth() {
    return cqDamConfigAnnotationPdfAnnotationMarkerWidth;
  }
  public void setCqDamConfigAnnotationPdfAnnotationMarkerWidth(ConfigNodePropertyInteger cqDamConfigAnnotationPdfAnnotationMarkerWidth) {
    this.cqDamConfigAnnotationPdfAnnotationMarkerWidth = cqDamConfigAnnotationPdfAnnotationMarkerWidth;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("cq.dam.config.annotation.pdf.asset.minheight")
  public ConfigNodePropertyInteger getCqDamConfigAnnotationPdfAssetMinheight() {
    return cqDamConfigAnnotationPdfAssetMinheight;
  }
  public void setCqDamConfigAnnotationPdfAssetMinheight(ConfigNodePropertyInteger cqDamConfigAnnotationPdfAssetMinheight) {
    this.cqDamConfigAnnotationPdfAssetMinheight = cqDamConfigAnnotationPdfAssetMinheight;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties comDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties = (ComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties) o;
    return Objects.equals(cqDamConfigAnnotationPdfDocumentWidth, comDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties.cqDamConfigAnnotationPdfDocumentWidth) &&
        Objects.equals(cqDamConfigAnnotationPdfDocumentHeight, comDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties.cqDamConfigAnnotationPdfDocumentHeight) &&
        Objects.equals(cqDamConfigAnnotationPdfDocumentPaddingHorizontal, comDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties.cqDamConfigAnnotationPdfDocumentPaddingHorizontal) &&
        Objects.equals(cqDamConfigAnnotationPdfDocumentPaddingVertical, comDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties.cqDamConfigAnnotationPdfDocumentPaddingVertical) &&
        Objects.equals(cqDamConfigAnnotationPdfFontSize, comDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties.cqDamConfigAnnotationPdfFontSize) &&
        Objects.equals(cqDamConfigAnnotationPdfFontColor, comDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties.cqDamConfigAnnotationPdfFontColor) &&
        Objects.equals(cqDamConfigAnnotationPdfFontFamily, comDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties.cqDamConfigAnnotationPdfFontFamily) &&
        Objects.equals(cqDamConfigAnnotationPdfFontLight, comDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties.cqDamConfigAnnotationPdfFontLight) &&
        Objects.equals(cqDamConfigAnnotationPdfMarginTextImage, comDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties.cqDamConfigAnnotationPdfMarginTextImage) &&
        Objects.equals(cqDamConfigAnnotationPdfMinImageHeight, comDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties.cqDamConfigAnnotationPdfMinImageHeight) &&
        Objects.equals(cqDamConfigAnnotationPdfReviewStatusWidth, comDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties.cqDamConfigAnnotationPdfReviewStatusWidth) &&
        Objects.equals(cqDamConfigAnnotationPdfReviewStatusColorApproved, comDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties.cqDamConfigAnnotationPdfReviewStatusColorApproved) &&
        Objects.equals(cqDamConfigAnnotationPdfReviewStatusColorRejected, comDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties.cqDamConfigAnnotationPdfReviewStatusColorRejected) &&
        Objects.equals(cqDamConfigAnnotationPdfReviewStatusColorChangesRequested, comDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties.cqDamConfigAnnotationPdfReviewStatusColorChangesRequested) &&
        Objects.equals(cqDamConfigAnnotationPdfAnnotationMarkerWidth, comDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties.cqDamConfigAnnotationPdfAnnotationMarkerWidth) &&
        Objects.equals(cqDamConfigAnnotationPdfAssetMinheight, comDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties.cqDamConfigAnnotationPdfAssetMinheight);
  }

  @Override
  public int hashCode() {
    return Objects.hash(cqDamConfigAnnotationPdfDocumentWidth, cqDamConfigAnnotationPdfDocumentHeight, cqDamConfigAnnotationPdfDocumentPaddingHorizontal, cqDamConfigAnnotationPdfDocumentPaddingVertical, cqDamConfigAnnotationPdfFontSize, cqDamConfigAnnotationPdfFontColor, cqDamConfigAnnotationPdfFontFamily, cqDamConfigAnnotationPdfFontLight, cqDamConfigAnnotationPdfMarginTextImage, cqDamConfigAnnotationPdfMinImageHeight, cqDamConfigAnnotationPdfReviewStatusWidth, cqDamConfigAnnotationPdfReviewStatusColorApproved, cqDamConfigAnnotationPdfReviewStatusColorRejected, cqDamConfigAnnotationPdfReviewStatusColorChangesRequested, cqDamConfigAnnotationPdfAnnotationMarkerWidth, cqDamConfigAnnotationPdfAssetMinheight);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties {\n");
    
    sb.append("    cqDamConfigAnnotationPdfDocumentWidth: ").append(toIndentedString(cqDamConfigAnnotationPdfDocumentWidth)).append("\n");
    sb.append("    cqDamConfigAnnotationPdfDocumentHeight: ").append(toIndentedString(cqDamConfigAnnotationPdfDocumentHeight)).append("\n");
    sb.append("    cqDamConfigAnnotationPdfDocumentPaddingHorizontal: ").append(toIndentedString(cqDamConfigAnnotationPdfDocumentPaddingHorizontal)).append("\n");
    sb.append("    cqDamConfigAnnotationPdfDocumentPaddingVertical: ").append(toIndentedString(cqDamConfigAnnotationPdfDocumentPaddingVertical)).append("\n");
    sb.append("    cqDamConfigAnnotationPdfFontSize: ").append(toIndentedString(cqDamConfigAnnotationPdfFontSize)).append("\n");
    sb.append("    cqDamConfigAnnotationPdfFontColor: ").append(toIndentedString(cqDamConfigAnnotationPdfFontColor)).append("\n");
    sb.append("    cqDamConfigAnnotationPdfFontFamily: ").append(toIndentedString(cqDamConfigAnnotationPdfFontFamily)).append("\n");
    sb.append("    cqDamConfigAnnotationPdfFontLight: ").append(toIndentedString(cqDamConfigAnnotationPdfFontLight)).append("\n");
    sb.append("    cqDamConfigAnnotationPdfMarginTextImage: ").append(toIndentedString(cqDamConfigAnnotationPdfMarginTextImage)).append("\n");
    sb.append("    cqDamConfigAnnotationPdfMinImageHeight: ").append(toIndentedString(cqDamConfigAnnotationPdfMinImageHeight)).append("\n");
    sb.append("    cqDamConfigAnnotationPdfReviewStatusWidth: ").append(toIndentedString(cqDamConfigAnnotationPdfReviewStatusWidth)).append("\n");
    sb.append("    cqDamConfigAnnotationPdfReviewStatusColorApproved: ").append(toIndentedString(cqDamConfigAnnotationPdfReviewStatusColorApproved)).append("\n");
    sb.append("    cqDamConfigAnnotationPdfReviewStatusColorRejected: ").append(toIndentedString(cqDamConfigAnnotationPdfReviewStatusColorRejected)).append("\n");
    sb.append("    cqDamConfigAnnotationPdfReviewStatusColorChangesRequested: ").append(toIndentedString(cqDamConfigAnnotationPdfReviewStatusColorChangesRequested)).append("\n");
    sb.append("    cqDamConfigAnnotationPdfAnnotationMarkerWidth: ").append(toIndentedString(cqDamConfigAnnotationPdfAnnotationMarkerWidth)).append("\n");
    sb.append("    cqDamConfigAnnotationPdfAssetMinheight: ").append(toIndentedString(cqDamConfigAnnotationPdfAssetMinheight)).append("\n");
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
