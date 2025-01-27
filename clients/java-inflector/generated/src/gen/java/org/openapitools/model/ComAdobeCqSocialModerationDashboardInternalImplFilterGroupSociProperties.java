package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ConfigNodePropertyArray;
import org.openapitools.model.ConfigNodePropertyInteger;





@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaInflectorServerCodegen", date = "2019-08-05T00:53:46.291Z[GMT]")
public class ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociProperties   {
  @JsonProperty("resourceType.filters")
  private ConfigNodePropertyArray resourceTypeFilters = null;

  @JsonProperty("priority")
  private ConfigNodePropertyInteger priority = null;

  /**
   **/
  public ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociProperties resourceTypeFilters(ConfigNodePropertyArray resourceTypeFilters) {
    this.resourceTypeFilters = resourceTypeFilters;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("resourceType.filters")
  public ConfigNodePropertyArray getResourceTypeFilters() {
    return resourceTypeFilters;
  }
  public void setResourceTypeFilters(ConfigNodePropertyArray resourceTypeFilters) {
    this.resourceTypeFilters = resourceTypeFilters;
  }

  /**
   **/
  public ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociProperties priority(ConfigNodePropertyInteger priority) {
    this.priority = priority;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("priority")
  public ConfigNodePropertyInteger getPriority() {
    return priority;
  }
  public void setPriority(ConfigNodePropertyInteger priority) {
    this.priority = priority;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociProperties comAdobeCqSocialModerationDashboardInternalImplFilterGroupSociProperties = (ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociProperties) o;
    return Objects.equals(resourceTypeFilters, comAdobeCqSocialModerationDashboardInternalImplFilterGroupSociProperties.resourceTypeFilters) &&
        Objects.equals(priority, comAdobeCqSocialModerationDashboardInternalImplFilterGroupSociProperties.priority);
  }

  @Override
  public int hashCode() {
    return Objects.hash(resourceTypeFilters, priority);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociProperties {\n");
    
    sb.append("    resourceTypeFilters: ").append(toIndentedString(resourceTypeFilters)).append("\n");
    sb.append("    priority: ").append(toIndentedString(priority)).append("\n");
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

