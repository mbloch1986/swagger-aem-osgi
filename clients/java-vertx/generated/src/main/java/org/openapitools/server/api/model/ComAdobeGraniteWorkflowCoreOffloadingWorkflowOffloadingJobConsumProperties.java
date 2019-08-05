package org.openapitools.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonInclude;
import com.fasterxml.jackson.annotation.JsonProperty;
import org.openapitools.server.api.model.ConfigNodePropertyString;

@JsonInclude(JsonInclude.Include.NON_NULL) 
public class ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumProperties   {
  
  private ConfigNodePropertyString jobTopics = null;

  public ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumProperties () {

  }

  public ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumProperties (ConfigNodePropertyString jobTopics) {
    this.jobTopics = jobTopics;
  }

    
  @JsonProperty("job.topics")
  public ConfigNodePropertyString getJobTopics() {
    return jobTopics;
  }
  public void setJobTopics(ConfigNodePropertyString jobTopics) {
    this.jobTopics = jobTopics;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumProperties comAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumProperties = (ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumProperties) o;
    return Objects.equals(jobTopics, comAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumProperties.jobTopics);
  }

  @Override
  public int hashCode() {
    return Objects.hash(jobTopics);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumProperties {\n");
    
    sb.append("    jobTopics: ").append(toIndentedString(jobTopics)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}