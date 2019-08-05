package org.openapitools.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import org.openapitools.model.ConfigNodePropertyArray;
import javax.validation.constraints.*;


import io.swagger.annotations.*;
import java.util.Objects;

import javax.xml.bind.annotation.*;



public class ComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplProperties   {
  
  private ConfigNodePropertyArray cqDamScene7AssetmimetypeserviceMapping = null;


  /**
   **/
  public ComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplProperties cqDamScene7AssetmimetypeserviceMapping(ConfigNodePropertyArray cqDamScene7AssetmimetypeserviceMapping) {
    this.cqDamScene7AssetmimetypeserviceMapping = cqDamScene7AssetmimetypeserviceMapping;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("cq.dam.scene7.assetmimetypeservice.mapping")
  public ConfigNodePropertyArray getCqDamScene7AssetmimetypeserviceMapping() {
    return cqDamScene7AssetmimetypeserviceMapping;
  }
  public void setCqDamScene7AssetmimetypeserviceMapping(ConfigNodePropertyArray cqDamScene7AssetmimetypeserviceMapping) {
    this.cqDamScene7AssetmimetypeserviceMapping = cqDamScene7AssetmimetypeserviceMapping;
  }



  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplProperties comDayCqDamScene7ImplScene7AssetMimeTypeServiceImplProperties = (ComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplProperties) o;
    return Objects.equals(cqDamScene7AssetmimetypeserviceMapping, comDayCqDamScene7ImplScene7AssetMimeTypeServiceImplProperties.cqDamScene7AssetmimetypeserviceMapping);
  }

  @Override
  public int hashCode() {
    return Objects.hash(cqDamScene7AssetmimetypeserviceMapping);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplProperties {\n");
    
    sb.append("    cqDamScene7AssetmimetypeserviceMapping: ").append(toIndentedString(cqDamScene7AssetmimetypeserviceMapping)).append("\n");
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
