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
import com.shinesolutions.swaggeraemosgi4j.model.ConfigNodePropertyInteger;
import com.shinesolutions.swaggeraemosgi4j.model.ConfigNodePropertyString;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;

/**
 * OrgApacheSlingModelsImplModelAdapterFactoryProperties
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2019-08-05T00:52:06.785Z[GMT]")
public class OrgApacheSlingModelsImplModelAdapterFactoryProperties {
  public static final String SERIALIZED_NAME_OSGI_HTTP_WHITEBOARD_LISTENER = "osgi.http.whiteboard.listener";
  @SerializedName(SERIALIZED_NAME_OSGI_HTTP_WHITEBOARD_LISTENER)
  private ConfigNodePropertyString osgiHttpWhiteboardListener = null;

  public static final String SERIALIZED_NAME_OSGI_HTTP_WHITEBOARD_CONTEXT_SELECT = "osgi.http.whiteboard.context.select";
  @SerializedName(SERIALIZED_NAME_OSGI_HTTP_WHITEBOARD_CONTEXT_SELECT)
  private ConfigNodePropertyString osgiHttpWhiteboardContextSelect = null;

  public static final String SERIALIZED_NAME_MAX_RECURSION_DEPTH = "max.recursion.depth";
  @SerializedName(SERIALIZED_NAME_MAX_RECURSION_DEPTH)
  private ConfigNodePropertyInteger maxRecursionDepth = null;

  public static final String SERIALIZED_NAME_CLEANUP_JOB_PERIOD = "cleanup.job.period";
  @SerializedName(SERIALIZED_NAME_CLEANUP_JOB_PERIOD)
  private ConfigNodePropertyInteger cleanupJobPeriod = null;

  public OrgApacheSlingModelsImplModelAdapterFactoryProperties osgiHttpWhiteboardListener(ConfigNodePropertyString osgiHttpWhiteboardListener) {
    this.osgiHttpWhiteboardListener = osgiHttpWhiteboardListener;
    return this;
  }

   /**
   * Get osgiHttpWhiteboardListener
   * @return osgiHttpWhiteboardListener
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getOsgiHttpWhiteboardListener() {
    return osgiHttpWhiteboardListener;
  }

  public void setOsgiHttpWhiteboardListener(ConfigNodePropertyString osgiHttpWhiteboardListener) {
    this.osgiHttpWhiteboardListener = osgiHttpWhiteboardListener;
  }

  public OrgApacheSlingModelsImplModelAdapterFactoryProperties osgiHttpWhiteboardContextSelect(ConfigNodePropertyString osgiHttpWhiteboardContextSelect) {
    this.osgiHttpWhiteboardContextSelect = osgiHttpWhiteboardContextSelect;
    return this;
  }

   /**
   * Get osgiHttpWhiteboardContextSelect
   * @return osgiHttpWhiteboardContextSelect
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getOsgiHttpWhiteboardContextSelect() {
    return osgiHttpWhiteboardContextSelect;
  }

  public void setOsgiHttpWhiteboardContextSelect(ConfigNodePropertyString osgiHttpWhiteboardContextSelect) {
    this.osgiHttpWhiteboardContextSelect = osgiHttpWhiteboardContextSelect;
  }

  public OrgApacheSlingModelsImplModelAdapterFactoryProperties maxRecursionDepth(ConfigNodePropertyInteger maxRecursionDepth) {
    this.maxRecursionDepth = maxRecursionDepth;
    return this;
  }

   /**
   * Get maxRecursionDepth
   * @return maxRecursionDepth
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getMaxRecursionDepth() {
    return maxRecursionDepth;
  }

  public void setMaxRecursionDepth(ConfigNodePropertyInteger maxRecursionDepth) {
    this.maxRecursionDepth = maxRecursionDepth;
  }

  public OrgApacheSlingModelsImplModelAdapterFactoryProperties cleanupJobPeriod(ConfigNodePropertyInteger cleanupJobPeriod) {
    this.cleanupJobPeriod = cleanupJobPeriod;
    return this;
  }

   /**
   * Get cleanupJobPeriod
   * @return cleanupJobPeriod
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getCleanupJobPeriod() {
    return cleanupJobPeriod;
  }

  public void setCleanupJobPeriod(ConfigNodePropertyInteger cleanupJobPeriod) {
    this.cleanupJobPeriod = cleanupJobPeriod;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheSlingModelsImplModelAdapterFactoryProperties orgApacheSlingModelsImplModelAdapterFactoryProperties = (OrgApacheSlingModelsImplModelAdapterFactoryProperties) o;
    return Objects.equals(this.osgiHttpWhiteboardListener, orgApacheSlingModelsImplModelAdapterFactoryProperties.osgiHttpWhiteboardListener) &&
        Objects.equals(this.osgiHttpWhiteboardContextSelect, orgApacheSlingModelsImplModelAdapterFactoryProperties.osgiHttpWhiteboardContextSelect) &&
        Objects.equals(this.maxRecursionDepth, orgApacheSlingModelsImplModelAdapterFactoryProperties.maxRecursionDepth) &&
        Objects.equals(this.cleanupJobPeriod, orgApacheSlingModelsImplModelAdapterFactoryProperties.cleanupJobPeriod);
  }

  @Override
  public int hashCode() {
    return Objects.hash(osgiHttpWhiteboardListener, osgiHttpWhiteboardContextSelect, maxRecursionDepth, cleanupJobPeriod);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheSlingModelsImplModelAdapterFactoryProperties {\n");
    
    sb.append("    osgiHttpWhiteboardListener: ").append(toIndentedString(osgiHttpWhiteboardListener)).append("\n");
    sb.append("    osgiHttpWhiteboardContextSelect: ").append(toIndentedString(osgiHttpWhiteboardContextSelect)).append("\n");
    sb.append("    maxRecursionDepth: ").append(toIndentedString(maxRecursionDepth)).append("\n");
    sb.append("    cleanupJobPeriod: ").append(toIndentedString(cleanupJobPeriod)).append("\n");
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

