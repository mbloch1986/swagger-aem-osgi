package org.openapitools.model;

import java.util.Objects;
import java.util.ArrayList;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import org.openapitools.model.ConfigNodePropertyBoolean;
import javax.validation.constraints.*;
import io.swagger.annotations.*;


@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaResteasyServerCodegen", date = "2019-08-05T00:59:30.156Z[GMT]")
public class ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceProperties   {
  
  private ConfigNodePropertyBoolean graniteWorkflowWorkflowPublishEventServiceEnabled = null;

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("granite.workflow.WorkflowPublishEventService.enabled")
  public ConfigNodePropertyBoolean getGraniteWorkflowWorkflowPublishEventServiceEnabled() {
    return graniteWorkflowWorkflowPublishEventServiceEnabled;
  }
  public void setGraniteWorkflowWorkflowPublishEventServiceEnabled(ConfigNodePropertyBoolean graniteWorkflowWorkflowPublishEventServiceEnabled) {
    this.graniteWorkflowWorkflowPublishEventServiceEnabled = graniteWorkflowWorkflowPublishEventServiceEnabled;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceProperties comAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceProperties = (ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceProperties) o;
    return Objects.equals(graniteWorkflowWorkflowPublishEventServiceEnabled, comAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceProperties.graniteWorkflowWorkflowPublishEventServiceEnabled);
  }

  @Override
  public int hashCode() {
    return Objects.hash(graniteWorkflowWorkflowPublishEventServiceEnabled);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceProperties {\n");
    
    sb.append("    graniteWorkflowWorkflowPublishEventServiceEnabled: ").append(toIndentedString(graniteWorkflowWorkflowPublishEventServiceEnabled)).append("\n");
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
