package org.openapitools.model;

import java.util.Objects;
import java.util.ArrayList;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import org.openapitools.model.ConfigNodePropertyArray;
import javax.validation.constraints.*;
import io.swagger.annotations.*;


@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaResteasyServerCodegen", date = "2019-08-05T00:59:30.156Z[GMT]")
public class ComAdobeCqSocialSyncImplPublisherSyncServiceImplProperties   {
  
  private ConfigNodePropertyArray activeRunModes = null;

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("activeRunModes")
  public ConfigNodePropertyArray getActiveRunModes() {
    return activeRunModes;
  }
  public void setActiveRunModes(ConfigNodePropertyArray activeRunModes) {
    this.activeRunModes = activeRunModes;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeCqSocialSyncImplPublisherSyncServiceImplProperties comAdobeCqSocialSyncImplPublisherSyncServiceImplProperties = (ComAdobeCqSocialSyncImplPublisherSyncServiceImplProperties) o;
    return Objects.equals(activeRunModes, comAdobeCqSocialSyncImplPublisherSyncServiceImplProperties.activeRunModes);
  }

  @Override
  public int hashCode() {
    return Objects.hash(activeRunModes);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeCqSocialSyncImplPublisherSyncServiceImplProperties {\n");
    
    sb.append("    activeRunModes: ").append(toIndentedString(activeRunModes)).append("\n");
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
