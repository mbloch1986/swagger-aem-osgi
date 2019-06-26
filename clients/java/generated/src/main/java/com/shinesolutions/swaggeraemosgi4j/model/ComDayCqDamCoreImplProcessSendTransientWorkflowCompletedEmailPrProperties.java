/*
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


package com.shinesolutions.swaggeraemosgi4j.model;

import java.util.Objects;
import java.util.Arrays;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import com.shinesolutions.swaggeraemosgi4j.model.ConfigNodePropertyBoolean;
import com.shinesolutions.swaggeraemosgi4j.model.ConfigNodePropertyString;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;

/**
 * ComDayCqDamCoreImplProcessSendTransientWorkflowCompletedEmailPrProperties
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2019-06-26T13:44:27.963Z[GMT]")
public class ComDayCqDamCoreImplProcessSendTransientWorkflowCompletedEmailPrProperties {
  public static final String SERIALIZED_NAME_PROCESS_LABEL = "process.label";
  @SerializedName(SERIALIZED_NAME_PROCESS_LABEL)
  private ConfigNodePropertyString processLabel = null;

  public static final String SERIALIZED_NAME_NOTIFY_ON_COMPLETE = "Notify on Complete";
  @SerializedName(SERIALIZED_NAME_NOTIFY_ON_COMPLETE)
  private ConfigNodePropertyBoolean notifyOnComplete = null;

  public ComDayCqDamCoreImplProcessSendTransientWorkflowCompletedEmailPrProperties processLabel(ConfigNodePropertyString processLabel) {
    this.processLabel = processLabel;
    return this;
  }

   /**
   * Get processLabel
   * @return processLabel
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getProcessLabel() {
    return processLabel;
  }

  public void setProcessLabel(ConfigNodePropertyString processLabel) {
    this.processLabel = processLabel;
  }

  public ComDayCqDamCoreImplProcessSendTransientWorkflowCompletedEmailPrProperties notifyOnComplete(ConfigNodePropertyBoolean notifyOnComplete) {
    this.notifyOnComplete = notifyOnComplete;
    return this;
  }

   /**
   * Get notifyOnComplete
   * @return notifyOnComplete
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getNotifyOnComplete() {
    return notifyOnComplete;
  }

  public void setNotifyOnComplete(ConfigNodePropertyBoolean notifyOnComplete) {
    this.notifyOnComplete = notifyOnComplete;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqDamCoreImplProcessSendTransientWorkflowCompletedEmailPrProperties comDayCqDamCoreImplProcessSendTransientWorkflowCompletedEmailPrProperties = (ComDayCqDamCoreImplProcessSendTransientWorkflowCompletedEmailPrProperties) o;
    return Objects.equals(this.processLabel, comDayCqDamCoreImplProcessSendTransientWorkflowCompletedEmailPrProperties.processLabel) &&
        Objects.equals(this.notifyOnComplete, comDayCqDamCoreImplProcessSendTransientWorkflowCompletedEmailPrProperties.notifyOnComplete);
  }

  @Override
  public int hashCode() {
    return Objects.hash(processLabel, notifyOnComplete);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqDamCoreImplProcessSendTransientWorkflowCompletedEmailPrProperties {\n");
    sb.append("    processLabel: ").append(toIndentedString(processLabel)).append("\n");
    sb.append("    notifyOnComplete: ").append(toIndentedString(notifyOnComplete)).append("\n");
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
