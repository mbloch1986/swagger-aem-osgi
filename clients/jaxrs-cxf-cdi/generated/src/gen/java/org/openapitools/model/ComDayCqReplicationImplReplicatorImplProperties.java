package org.openapitools.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import org.openapitools.model.ConfigNodePropertyBoolean;
import javax.validation.constraints.*;


import io.swagger.annotations.*;
import java.util.Objects;

import javax.xml.bind.annotation.*;



public class ComDayCqReplicationImplReplicatorImplProperties   {
  
  private ConfigNodePropertyBoolean distributeEvents = null;


  /**
   **/
  public ComDayCqReplicationImplReplicatorImplProperties distributeEvents(ConfigNodePropertyBoolean distributeEvents) {
    this.distributeEvents = distributeEvents;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("distribute_events")
  public ConfigNodePropertyBoolean getDistributeEvents() {
    return distributeEvents;
  }
  public void setDistributeEvents(ConfigNodePropertyBoolean distributeEvents) {
    this.distributeEvents = distributeEvents;
  }



  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqReplicationImplReplicatorImplProperties comDayCqReplicationImplReplicatorImplProperties = (ComDayCqReplicationImplReplicatorImplProperties) o;
    return Objects.equals(distributeEvents, comDayCqReplicationImplReplicatorImplProperties.distributeEvents);
  }

  @Override
  public int hashCode() {
    return Objects.hash(distributeEvents);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqReplicationImplReplicatorImplProperties {\n");
    
    sb.append("    distributeEvents: ").append(toIndentedString(distributeEvents)).append("\n");
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

