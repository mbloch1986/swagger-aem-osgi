package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ConfigNodePropertyArray;

/**
 * ComDayCqDamCoreImplDamChangeEventListenerProperties
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaMSF4JServerCodegen", date = "2019-08-05T00:54:29.762Z[GMT]")
public class ComDayCqDamCoreImplDamChangeEventListenerProperties   {
  @JsonProperty("changeeventlistener.observed.paths")
  private ConfigNodePropertyArray changeeventlistenerObservedPaths = null;

  public ComDayCqDamCoreImplDamChangeEventListenerProperties changeeventlistenerObservedPaths(ConfigNodePropertyArray changeeventlistenerObservedPaths) {
    this.changeeventlistenerObservedPaths = changeeventlistenerObservedPaths;
    return this;
  }

   /**
   * Get changeeventlistenerObservedPaths
   * @return changeeventlistenerObservedPaths
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getChangeeventlistenerObservedPaths() {
    return changeeventlistenerObservedPaths;
  }

  public void setChangeeventlistenerObservedPaths(ConfigNodePropertyArray changeeventlistenerObservedPaths) {
    this.changeeventlistenerObservedPaths = changeeventlistenerObservedPaths;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqDamCoreImplDamChangeEventListenerProperties comDayCqDamCoreImplDamChangeEventListenerProperties = (ComDayCqDamCoreImplDamChangeEventListenerProperties) o;
    return Objects.equals(this.changeeventlistenerObservedPaths, comDayCqDamCoreImplDamChangeEventListenerProperties.changeeventlistenerObservedPaths);
  }

  @Override
  public int hashCode() {
    return Objects.hash(changeeventlistenerObservedPaths);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqDamCoreImplDamChangeEventListenerProperties {\n");
    
    sb.append("    changeeventlistenerObservedPaths: ").append(toIndentedString(changeeventlistenerObservedPaths)).append("\n");
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
