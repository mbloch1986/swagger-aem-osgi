package org.openapitools.model;

import org.openapitools.model.ConfigNodePropertyInteger;
import javax.validation.constraints.*;
import javax.validation.Valid;

import io.swagger.annotations.ApiModelProperty;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;

public class OrgApacheFelixSystemreadySystemReadyMonitorProperties  {
  
  @ApiModelProperty(value = "")
  @Valid
  private ConfigNodePropertyInteger pollInterval = null;
 /**
   * Get pollInterval
   * @return pollInterval
  **/
  @JsonProperty("poll.interval")
  public ConfigNodePropertyInteger getPollInterval() {
    return pollInterval;
  }

  public void setPollInterval(ConfigNodePropertyInteger pollInterval) {
    this.pollInterval = pollInterval;
  }

  public OrgApacheFelixSystemreadySystemReadyMonitorProperties pollInterval(ConfigNodePropertyInteger pollInterval) {
    this.pollInterval = pollInterval;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheFelixSystemreadySystemReadyMonitorProperties {\n");
    
    sb.append("    pollInterval: ").append(toIndentedString(pollInterval)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

