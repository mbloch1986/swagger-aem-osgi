/*
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
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
import com.shinesolutions.swaggeraemosgi4j.model.ConfigNodePropertyArray;
import com.shinesolutions.swaggeraemosgi4j.model.ConfigNodePropertyBoolean;
import com.shinesolutions.swaggeraemosgi4j.model.ConfigNodePropertyDropDown;
import com.shinesolutions.swaggeraemosgi4j.model.ConfigNodePropertyInteger;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;

/**
 * ComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2019-08-05T00:52:06.785Z[GMT]")
public class ComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties {
  public static final String SERIALIZED_NAME_COM_ADOBE_CQ_DAM_MAC_SYNC_DAMSYNCSERVICE_REGISTERED_PATHS = "com.adobe.cq.dam.mac.sync.damsyncservice.registered_paths";
  @SerializedName(SERIALIZED_NAME_COM_ADOBE_CQ_DAM_MAC_SYNC_DAMSYNCSERVICE_REGISTERED_PATHS)
  private ConfigNodePropertyArray comAdobeCqDamMacSyncDamsyncserviceRegisteredPaths = null;

  public static final String SERIALIZED_NAME_COM_ADOBE_CQ_DAM_MAC_SYNC_DAMSYNCSERVICE_SYNC_RENDITIONS = "com.adobe.cq.dam.mac.sync.damsyncservice.sync.renditions";
  @SerializedName(SERIALIZED_NAME_COM_ADOBE_CQ_DAM_MAC_SYNC_DAMSYNCSERVICE_SYNC_RENDITIONS)
  private ConfigNodePropertyBoolean comAdobeCqDamMacSyncDamsyncserviceSyncRenditions = null;

  public static final String SERIALIZED_NAME_COM_ADOBE_CQ_DAM_MAC_SYNC_DAMSYNCSERVICE_REPLICATE_THREAD_WAIT_MS = "com.adobe.cq.dam.mac.sync.damsyncservice.replicate.thread.wait.ms";
  @SerializedName(SERIALIZED_NAME_COM_ADOBE_CQ_DAM_MAC_SYNC_DAMSYNCSERVICE_REPLICATE_THREAD_WAIT_MS)
  private ConfigNodePropertyInteger comAdobeCqDamMacSyncDamsyncserviceReplicateThreadWaitMs = null;

  public static final String SERIALIZED_NAME_COM_ADOBE_CQ_DAM_MAC_SYNC_DAMSYNCSERVICE_PLATFORM = "com.adobe.cq.dam.mac.sync.damsyncservice.platform";
  @SerializedName(SERIALIZED_NAME_COM_ADOBE_CQ_DAM_MAC_SYNC_DAMSYNCSERVICE_PLATFORM)
  private ConfigNodePropertyDropDown comAdobeCqDamMacSyncDamsyncservicePlatform = null;

  public ComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties comAdobeCqDamMacSyncDamsyncserviceRegisteredPaths(ConfigNodePropertyArray comAdobeCqDamMacSyncDamsyncserviceRegisteredPaths) {
    this.comAdobeCqDamMacSyncDamsyncserviceRegisteredPaths = comAdobeCqDamMacSyncDamsyncserviceRegisteredPaths;
    return this;
  }

   /**
   * Get comAdobeCqDamMacSyncDamsyncserviceRegisteredPaths
   * @return comAdobeCqDamMacSyncDamsyncserviceRegisteredPaths
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getComAdobeCqDamMacSyncDamsyncserviceRegisteredPaths() {
    return comAdobeCqDamMacSyncDamsyncserviceRegisteredPaths;
  }

  public void setComAdobeCqDamMacSyncDamsyncserviceRegisteredPaths(ConfigNodePropertyArray comAdobeCqDamMacSyncDamsyncserviceRegisteredPaths) {
    this.comAdobeCqDamMacSyncDamsyncserviceRegisteredPaths = comAdobeCqDamMacSyncDamsyncserviceRegisteredPaths;
  }

  public ComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties comAdobeCqDamMacSyncDamsyncserviceSyncRenditions(ConfigNodePropertyBoolean comAdobeCqDamMacSyncDamsyncserviceSyncRenditions) {
    this.comAdobeCqDamMacSyncDamsyncserviceSyncRenditions = comAdobeCqDamMacSyncDamsyncserviceSyncRenditions;
    return this;
  }

   /**
   * Get comAdobeCqDamMacSyncDamsyncserviceSyncRenditions
   * @return comAdobeCqDamMacSyncDamsyncserviceSyncRenditions
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getComAdobeCqDamMacSyncDamsyncserviceSyncRenditions() {
    return comAdobeCqDamMacSyncDamsyncserviceSyncRenditions;
  }

  public void setComAdobeCqDamMacSyncDamsyncserviceSyncRenditions(ConfigNodePropertyBoolean comAdobeCqDamMacSyncDamsyncserviceSyncRenditions) {
    this.comAdobeCqDamMacSyncDamsyncserviceSyncRenditions = comAdobeCqDamMacSyncDamsyncserviceSyncRenditions;
  }

  public ComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties comAdobeCqDamMacSyncDamsyncserviceReplicateThreadWaitMs(ConfigNodePropertyInteger comAdobeCqDamMacSyncDamsyncserviceReplicateThreadWaitMs) {
    this.comAdobeCqDamMacSyncDamsyncserviceReplicateThreadWaitMs = comAdobeCqDamMacSyncDamsyncserviceReplicateThreadWaitMs;
    return this;
  }

   /**
   * Get comAdobeCqDamMacSyncDamsyncserviceReplicateThreadWaitMs
   * @return comAdobeCqDamMacSyncDamsyncserviceReplicateThreadWaitMs
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getComAdobeCqDamMacSyncDamsyncserviceReplicateThreadWaitMs() {
    return comAdobeCqDamMacSyncDamsyncserviceReplicateThreadWaitMs;
  }

  public void setComAdobeCqDamMacSyncDamsyncserviceReplicateThreadWaitMs(ConfigNodePropertyInteger comAdobeCqDamMacSyncDamsyncserviceReplicateThreadWaitMs) {
    this.comAdobeCqDamMacSyncDamsyncserviceReplicateThreadWaitMs = comAdobeCqDamMacSyncDamsyncserviceReplicateThreadWaitMs;
  }

  public ComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties comAdobeCqDamMacSyncDamsyncservicePlatform(ConfigNodePropertyDropDown comAdobeCqDamMacSyncDamsyncservicePlatform) {
    this.comAdobeCqDamMacSyncDamsyncservicePlatform = comAdobeCqDamMacSyncDamsyncservicePlatform;
    return this;
  }

   /**
   * Get comAdobeCqDamMacSyncDamsyncservicePlatform
   * @return comAdobeCqDamMacSyncDamsyncservicePlatform
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyDropDown getComAdobeCqDamMacSyncDamsyncservicePlatform() {
    return comAdobeCqDamMacSyncDamsyncservicePlatform;
  }

  public void setComAdobeCqDamMacSyncDamsyncservicePlatform(ConfigNodePropertyDropDown comAdobeCqDamMacSyncDamsyncservicePlatform) {
    this.comAdobeCqDamMacSyncDamsyncservicePlatform = comAdobeCqDamMacSyncDamsyncservicePlatform;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties comAdobeCqDamMacSyncImplDAMSyncServiceImplProperties = (ComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties) o;
    return Objects.equals(this.comAdobeCqDamMacSyncDamsyncserviceRegisteredPaths, comAdobeCqDamMacSyncImplDAMSyncServiceImplProperties.comAdobeCqDamMacSyncDamsyncserviceRegisteredPaths) &&
        Objects.equals(this.comAdobeCqDamMacSyncDamsyncserviceSyncRenditions, comAdobeCqDamMacSyncImplDAMSyncServiceImplProperties.comAdobeCqDamMacSyncDamsyncserviceSyncRenditions) &&
        Objects.equals(this.comAdobeCqDamMacSyncDamsyncserviceReplicateThreadWaitMs, comAdobeCqDamMacSyncImplDAMSyncServiceImplProperties.comAdobeCqDamMacSyncDamsyncserviceReplicateThreadWaitMs) &&
        Objects.equals(this.comAdobeCqDamMacSyncDamsyncservicePlatform, comAdobeCqDamMacSyncImplDAMSyncServiceImplProperties.comAdobeCqDamMacSyncDamsyncservicePlatform);
  }

  @Override
  public int hashCode() {
    return Objects.hash(comAdobeCqDamMacSyncDamsyncserviceRegisteredPaths, comAdobeCqDamMacSyncDamsyncserviceSyncRenditions, comAdobeCqDamMacSyncDamsyncserviceReplicateThreadWaitMs, comAdobeCqDamMacSyncDamsyncservicePlatform);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties {\n");
    
    sb.append("    comAdobeCqDamMacSyncDamsyncserviceRegisteredPaths: ").append(toIndentedString(comAdobeCqDamMacSyncDamsyncserviceRegisteredPaths)).append("\n");
    sb.append("    comAdobeCqDamMacSyncDamsyncserviceSyncRenditions: ").append(toIndentedString(comAdobeCqDamMacSyncDamsyncserviceSyncRenditions)).append("\n");
    sb.append("    comAdobeCqDamMacSyncDamsyncserviceReplicateThreadWaitMs: ").append(toIndentedString(comAdobeCqDamMacSyncDamsyncserviceReplicateThreadWaitMs)).append("\n");
    sb.append("    comAdobeCqDamMacSyncDamsyncservicePlatform: ").append(toIndentedString(comAdobeCqDamMacSyncDamsyncservicePlatform)).append("\n");
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

