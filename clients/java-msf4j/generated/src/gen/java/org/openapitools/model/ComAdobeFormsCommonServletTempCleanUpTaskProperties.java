package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ConfigNodePropertyString;

/**
 * ComAdobeFormsCommonServletTempCleanUpTaskProperties
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaMSF4JServerCodegen", date = "2019-08-05T00:54:29.762Z[GMT]")
public class ComAdobeFormsCommonServletTempCleanUpTaskProperties   {
  @JsonProperty("scheduler.expression")
  private ConfigNodePropertyString schedulerExpression = null;

  @JsonProperty("Duration for Temporary Storage")
  private ConfigNodePropertyString durationForTemporaryStorage = null;

  @JsonProperty("Duration for Anonymous Storage")
  private ConfigNodePropertyString durationForAnonymousStorage = null;

  public ComAdobeFormsCommonServletTempCleanUpTaskProperties schedulerExpression(ConfigNodePropertyString schedulerExpression) {
    this.schedulerExpression = schedulerExpression;
    return this;
  }

   /**
   * Get schedulerExpression
   * @return schedulerExpression
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getSchedulerExpression() {
    return schedulerExpression;
  }

  public void setSchedulerExpression(ConfigNodePropertyString schedulerExpression) {
    this.schedulerExpression = schedulerExpression;
  }

  public ComAdobeFormsCommonServletTempCleanUpTaskProperties durationForTemporaryStorage(ConfigNodePropertyString durationForTemporaryStorage) {
    this.durationForTemporaryStorage = durationForTemporaryStorage;
    return this;
  }

   /**
   * Get durationForTemporaryStorage
   * @return durationForTemporaryStorage
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getDurationForTemporaryStorage() {
    return durationForTemporaryStorage;
  }

  public void setDurationForTemporaryStorage(ConfigNodePropertyString durationForTemporaryStorage) {
    this.durationForTemporaryStorage = durationForTemporaryStorage;
  }

  public ComAdobeFormsCommonServletTempCleanUpTaskProperties durationForAnonymousStorage(ConfigNodePropertyString durationForAnonymousStorage) {
    this.durationForAnonymousStorage = durationForAnonymousStorage;
    return this;
  }

   /**
   * Get durationForAnonymousStorage
   * @return durationForAnonymousStorage
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getDurationForAnonymousStorage() {
    return durationForAnonymousStorage;
  }

  public void setDurationForAnonymousStorage(ConfigNodePropertyString durationForAnonymousStorage) {
    this.durationForAnonymousStorage = durationForAnonymousStorage;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeFormsCommonServletTempCleanUpTaskProperties comAdobeFormsCommonServletTempCleanUpTaskProperties = (ComAdobeFormsCommonServletTempCleanUpTaskProperties) o;
    return Objects.equals(this.schedulerExpression, comAdobeFormsCommonServletTempCleanUpTaskProperties.schedulerExpression) &&
        Objects.equals(this.durationForTemporaryStorage, comAdobeFormsCommonServletTempCleanUpTaskProperties.durationForTemporaryStorage) &&
        Objects.equals(this.durationForAnonymousStorage, comAdobeFormsCommonServletTempCleanUpTaskProperties.durationForAnonymousStorage);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
