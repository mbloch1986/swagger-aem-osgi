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
import org.openapitools.model.ConfigNodePropertyString;
import javax.validation.constraints.*;

/**
 * ComDayCqDamInddImplHandlerIndesignXMPHandlerProperties
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2019-08-05T00:58:47.028Z[GMT]")
public class ComDayCqDamInddImplHandlerIndesignXMPHandlerProperties   {
  @JsonProperty("process.label")
  private ConfigNodePropertyString processLabel = null;

  @JsonProperty("extract.pages")
  private ConfigNodePropertyBoolean extractPages = null;

  public ComDayCqDamInddImplHandlerIndesignXMPHandlerProperties processLabel(ConfigNodePropertyString processLabel) {
    this.processLabel = processLabel;
    return this;
  }

  /**
   * Get processLabel
   * @return processLabel
   **/
  @JsonProperty("process.label")
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getProcessLabel() {
    return processLabel;
  }

  public void setProcessLabel(ConfigNodePropertyString processLabel) {
    this.processLabel = processLabel;
  }

  public ComDayCqDamInddImplHandlerIndesignXMPHandlerProperties extractPages(ConfigNodePropertyBoolean extractPages) {
    this.extractPages = extractPages;
    return this;
  }

  /**
   * Get extractPages
   * @return extractPages
   **/
  @JsonProperty("extract.pages")
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getExtractPages() {
    return extractPages;
  }

  public void setExtractPages(ConfigNodePropertyBoolean extractPages) {
    this.extractPages = extractPages;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqDamInddImplHandlerIndesignXMPHandlerProperties comDayCqDamInddImplHandlerIndesignXMPHandlerProperties = (ComDayCqDamInddImplHandlerIndesignXMPHandlerProperties) o;
    return Objects.equals(this.processLabel, comDayCqDamInddImplHandlerIndesignXMPHandlerProperties.processLabel) &&
        Objects.equals(this.extractPages, comDayCqDamInddImplHandlerIndesignXMPHandlerProperties.extractPages);
  }

  @Override
  public int hashCode() {
    return Objects.hash(processLabel, extractPages);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqDamInddImplHandlerIndesignXMPHandlerProperties {\n");
    
    sb.append("    processLabel: ").append(toIndentedString(processLabel)).append("\n");
    sb.append("    extractPages: ").append(toIndentedString(extractPages)).append("\n");
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

