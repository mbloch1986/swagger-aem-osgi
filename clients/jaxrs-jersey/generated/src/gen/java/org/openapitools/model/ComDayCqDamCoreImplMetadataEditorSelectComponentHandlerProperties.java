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
import org.openapitools.model.ConfigNodePropertyArray;
import javax.validation.constraints.*;

/**
 * ComDayCqDamCoreImplMetadataEditorSelectComponentHandlerProperties
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2019-08-05T00:58:47.028Z[GMT]")
public class ComDayCqDamCoreImplMetadataEditorSelectComponentHandlerProperties   {
  @JsonProperty("granite:data")
  private ConfigNodePropertyArray graniteColonData = null;

  public ComDayCqDamCoreImplMetadataEditorSelectComponentHandlerProperties graniteColonData(ConfigNodePropertyArray graniteColonData) {
    this.graniteColonData = graniteColonData;
    return this;
  }

  /**
   * Get graniteColonData
   * @return graniteColonData
   **/
  @JsonProperty("granite:data")
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getGraniteColonData() {
    return graniteColonData;
  }

  public void setGraniteColonData(ConfigNodePropertyArray graniteColonData) {
    this.graniteColonData = graniteColonData;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqDamCoreImplMetadataEditorSelectComponentHandlerProperties comDayCqDamCoreImplMetadataEditorSelectComponentHandlerProperties = (ComDayCqDamCoreImplMetadataEditorSelectComponentHandlerProperties) o;
    return Objects.equals(this.graniteColonData, comDayCqDamCoreImplMetadataEditorSelectComponentHandlerProperties.graniteColonData);
  }

  @Override
  public int hashCode() {
    return Objects.hash(graniteColonData);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqDamCoreImplMetadataEditorSelectComponentHandlerProperties {\n");
    
    sb.append("    graniteColonData: ").append(toIndentedString(graniteColonData)).append("\n");
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

