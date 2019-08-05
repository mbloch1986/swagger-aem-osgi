package org.openapitools.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonInclude;
import com.fasterxml.jackson.annotation.JsonProperty;
import org.openapitools.server.api.model.ConfigNodePropertyString;

@JsonInclude(JsonInclude.Include.NON_NULL) 
public class ComAdobeFormsCommonServletTempCleanUpTaskProperties   {
  
  private ConfigNodePropertyString schedulerExpression = null;
  private ConfigNodePropertyString durationForTemporaryStorage = null;
  private ConfigNodePropertyString durationForAnonymousStorage = null;

  public ComAdobeFormsCommonServletTempCleanUpTaskProperties () {

  }

  public ComAdobeFormsCommonServletTempCleanUpTaskProperties (ConfigNodePropertyString schedulerExpression, ConfigNodePropertyString durationForTemporaryStorage, ConfigNodePropertyString durationForAnonymousStorage) {
    this.schedulerExpression = schedulerExpression;
    this.durationForTemporaryStorage = durationForTemporaryStorage;
    this.durationForAnonymousStorage = durationForAnonymousStorage;
  }

    
  @JsonProperty("scheduler.expression")
  public ConfigNodePropertyString getSchedulerExpression() {
    return schedulerExpression;
  }
  public void setSchedulerExpression(ConfigNodePropertyString schedulerExpression) {
    this.schedulerExpression = schedulerExpression;
  }

    
  @JsonProperty("Duration for Temporary Storage")
  public ConfigNodePropertyString getDurationForTemporaryStorage() {
    return durationForTemporaryStorage;
  }
  public void setDurationForTemporaryStorage(ConfigNodePropertyString durationForTemporaryStorage) {
    this.durationForTemporaryStorage = durationForTemporaryStorage;
  }

    
  @JsonProperty("Duration for Anonymous Storage")
  public ConfigNodePropertyString getDurationForAnonymousStorage() {
    return durationForAnonymousStorage;
  }
  public void setDurationForAnonymousStorage(ConfigNodePropertyString durationForAnonymousStorage) {
    this.durationForAnonymousStorage = durationForAnonymousStorage;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeFormsCommonServletTempCleanUpTaskProperties comAdobeFormsCommonServletTempCleanUpTaskProperties = (ComAdobeFormsCommonServletTempCleanUpTaskProperties) o;
    return Objects.equals(schedulerExpression, comAdobeFormsCommonServletTempCleanUpTaskProperties.schedulerExpression) &&
        Objects.equals(durationForTemporaryStorage, comAdobeFormsCommonServletTempCleanUpTaskProperties.durationForTemporaryStorage) &&
        Objects.equals(durationForAnonymousStorage, comAdobeFormsCommonServletTempCleanUpTaskProperties.durationForAnonymousStorage);
  }

  @Override
  public int hashCode() {
    return Objects.hash(schedulerExpression, durationForTemporaryStorage, durationForAnonymousStorage);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeFormsCommonServletTempCleanUpTaskProperties {\n");
    
    sb.append("    schedulerExpression: ").append(toIndentedString(schedulerExpression)).append("\n");
    sb.append("    durationForTemporaryStorage: ").append(toIndentedString(durationForTemporaryStorage)).append("\n");
    sb.append("    durationForAnonymousStorage: ").append(toIndentedString(durationForAnonymousStorage)).append("\n");
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