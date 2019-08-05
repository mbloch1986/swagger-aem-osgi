package org.openapitools.model;

import org.openapitools.model.ConfigNodePropertyBoolean;
import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatProperties   {
  
  private @Valid ConfigNodePropertyBoolean isEnabled = null;

  /**
   **/
  public ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatProperties isEnabled(ConfigNodePropertyBoolean isEnabled) {
    this.isEnabled = isEnabled;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("isEnabled")
  public ConfigNodePropertyBoolean getIsEnabled() {
    return isEnabled;
  }
  public void setIsEnabled(ConfigNodePropertyBoolean isEnabled) {
    this.isEnabled = isEnabled;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatProperties comDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatProperties = (ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatProperties) o;
    return Objects.equals(isEnabled, comDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatProperties.isEnabled);
  }

  @Override
  public int hashCode() {
    return Objects.hash(isEnabled);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatProperties {\n");
    
    sb.append("    isEnabled: ").append(toIndentedString(isEnabled)).append("\n");
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
