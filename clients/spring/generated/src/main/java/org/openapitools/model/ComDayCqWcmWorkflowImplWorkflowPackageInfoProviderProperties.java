package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ConfigNodePropertyArray;
import org.openapitools.model.ConfigNodePropertyString;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderProperties
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.SpringCodegen", date = "2019-08-05T01:13:37.880Z[GMT]")

public class ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderProperties   {
  @JsonProperty("workflowpackageinfoprovider.filter")
  private ConfigNodePropertyArray workflowpackageinfoproviderFilter = null;

  @JsonProperty("workflowpackageinfoprovider.filter.rootpath")
  private ConfigNodePropertyString workflowpackageinfoproviderFilterRootpath = null;

  public ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderProperties workflowpackageinfoproviderFilter(ConfigNodePropertyArray workflowpackageinfoproviderFilter) {
    this.workflowpackageinfoproviderFilter = workflowpackageinfoproviderFilter;
    return this;
  }

  /**
   * Get workflowpackageinfoproviderFilter
   * @return workflowpackageinfoproviderFilter
  **/
  @ApiModelProperty(value = "")

  @Valid

  public ConfigNodePropertyArray getWorkflowpackageinfoproviderFilter() {
    return workflowpackageinfoproviderFilter;
  }

  public void setWorkflowpackageinfoproviderFilter(ConfigNodePropertyArray workflowpackageinfoproviderFilter) {
    this.workflowpackageinfoproviderFilter = workflowpackageinfoproviderFilter;
  }

  public ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderProperties workflowpackageinfoproviderFilterRootpath(ConfigNodePropertyString workflowpackageinfoproviderFilterRootpath) {
    this.workflowpackageinfoproviderFilterRootpath = workflowpackageinfoproviderFilterRootpath;
    return this;
  }

  /**
   * Get workflowpackageinfoproviderFilterRootpath
   * @return workflowpackageinfoproviderFilterRootpath
  **/
  @ApiModelProperty(value = "")

  @Valid

  public ConfigNodePropertyString getWorkflowpackageinfoproviderFilterRootpath() {
    return workflowpackageinfoproviderFilterRootpath;
  }

  public void setWorkflowpackageinfoproviderFilterRootpath(ConfigNodePropertyString workflowpackageinfoproviderFilterRootpath) {
    this.workflowpackageinfoproviderFilterRootpath = workflowpackageinfoproviderFilterRootpath;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderProperties comDayCqWcmWorkflowImplWorkflowPackageInfoProviderProperties = (ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderProperties) o;
    return Objects.equals(this.workflowpackageinfoproviderFilter, comDayCqWcmWorkflowImplWorkflowPackageInfoProviderProperties.workflowpackageinfoproviderFilter) &&
        Objects.equals(this.workflowpackageinfoproviderFilterRootpath, comDayCqWcmWorkflowImplWorkflowPackageInfoProviderProperties.workflowpackageinfoproviderFilterRootpath);
  }

  @Override
  public int hashCode() {
    return Objects.hash(workflowpackageinfoproviderFilter, workflowpackageinfoproviderFilterRootpath);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderProperties {\n");
    
    sb.append("    workflowpackageinfoproviderFilter: ").append(toIndentedString(workflowpackageinfoproviderFilter)).append("\n");
    sb.append("    workflowpackageinfoproviderFilterRootpath: ").append(toIndentedString(workflowpackageinfoproviderFilterRootpath)).append("\n");
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

