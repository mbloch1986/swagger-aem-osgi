/**
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

package org.openapitools.client.model;

import org.openapitools.client.model.ConfigNodePropertyArray;
import org.openapitools.client.model.ConfigNodePropertyBoolean;
import org.openapitools.client.model.ConfigNodePropertyInteger;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class OrgApacheSlingTracerInternalLogTracerProperties {
  
  @SerializedName("tracerSets")
  private ConfigNodePropertyArray tracerSets = null;
  @SerializedName("enabled")
  private ConfigNodePropertyBoolean enabled = null;
  @SerializedName("servletEnabled")
  private ConfigNodePropertyBoolean servletEnabled = null;
  @SerializedName("recordingCacheSizeInMB")
  private ConfigNodePropertyInteger recordingCacheSizeInMB = null;
  @SerializedName("recordingCacheDurationInSecs")
  private ConfigNodePropertyInteger recordingCacheDurationInSecs = null;
  @SerializedName("recordingCompressionEnabled")
  private ConfigNodePropertyBoolean recordingCompressionEnabled = null;
  @SerializedName("gzipResponse")
  private ConfigNodePropertyBoolean gzipResponse = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getTracerSets() {
    return tracerSets;
  }
  public void setTracerSets(ConfigNodePropertyArray tracerSets) {
    this.tracerSets = tracerSets;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getEnabled() {
    return enabled;
  }
  public void setEnabled(ConfigNodePropertyBoolean enabled) {
    this.enabled = enabled;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getServletEnabled() {
    return servletEnabled;
  }
  public void setServletEnabled(ConfigNodePropertyBoolean servletEnabled) {
    this.servletEnabled = servletEnabled;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getRecordingCacheSizeInMB() {
    return recordingCacheSizeInMB;
  }
  public void setRecordingCacheSizeInMB(ConfigNodePropertyInteger recordingCacheSizeInMB) {
    this.recordingCacheSizeInMB = recordingCacheSizeInMB;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getRecordingCacheDurationInSecs() {
    return recordingCacheDurationInSecs;
  }
  public void setRecordingCacheDurationInSecs(ConfigNodePropertyInteger recordingCacheDurationInSecs) {
    this.recordingCacheDurationInSecs = recordingCacheDurationInSecs;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getRecordingCompressionEnabled() {
    return recordingCompressionEnabled;
  }
  public void setRecordingCompressionEnabled(ConfigNodePropertyBoolean recordingCompressionEnabled) {
    this.recordingCompressionEnabled = recordingCompressionEnabled;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getGzipResponse() {
    return gzipResponse;
  }
  public void setGzipResponse(ConfigNodePropertyBoolean gzipResponse) {
    this.gzipResponse = gzipResponse;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheSlingTracerInternalLogTracerProperties orgApacheSlingTracerInternalLogTracerProperties = (OrgApacheSlingTracerInternalLogTracerProperties) o;
    return (this.tracerSets == null ? orgApacheSlingTracerInternalLogTracerProperties.tracerSets == null : this.tracerSets.equals(orgApacheSlingTracerInternalLogTracerProperties.tracerSets)) &&
        (this.enabled == null ? orgApacheSlingTracerInternalLogTracerProperties.enabled == null : this.enabled.equals(orgApacheSlingTracerInternalLogTracerProperties.enabled)) &&
        (this.servletEnabled == null ? orgApacheSlingTracerInternalLogTracerProperties.servletEnabled == null : this.servletEnabled.equals(orgApacheSlingTracerInternalLogTracerProperties.servletEnabled)) &&
        (this.recordingCacheSizeInMB == null ? orgApacheSlingTracerInternalLogTracerProperties.recordingCacheSizeInMB == null : this.recordingCacheSizeInMB.equals(orgApacheSlingTracerInternalLogTracerProperties.recordingCacheSizeInMB)) &&
        (this.recordingCacheDurationInSecs == null ? orgApacheSlingTracerInternalLogTracerProperties.recordingCacheDurationInSecs == null : this.recordingCacheDurationInSecs.equals(orgApacheSlingTracerInternalLogTracerProperties.recordingCacheDurationInSecs)) &&
        (this.recordingCompressionEnabled == null ? orgApacheSlingTracerInternalLogTracerProperties.recordingCompressionEnabled == null : this.recordingCompressionEnabled.equals(orgApacheSlingTracerInternalLogTracerProperties.recordingCompressionEnabled)) &&
        (this.gzipResponse == null ? orgApacheSlingTracerInternalLogTracerProperties.gzipResponse == null : this.gzipResponse.equals(orgApacheSlingTracerInternalLogTracerProperties.gzipResponse));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.tracerSets == null ? 0: this.tracerSets.hashCode());
    result = 31 * result + (this.enabled == null ? 0: this.enabled.hashCode());
    result = 31 * result + (this.servletEnabled == null ? 0: this.servletEnabled.hashCode());
    result = 31 * result + (this.recordingCacheSizeInMB == null ? 0: this.recordingCacheSizeInMB.hashCode());
    result = 31 * result + (this.recordingCacheDurationInSecs == null ? 0: this.recordingCacheDurationInSecs.hashCode());
    result = 31 * result + (this.recordingCompressionEnabled == null ? 0: this.recordingCompressionEnabled.hashCode());
    result = 31 * result + (this.gzipResponse == null ? 0: this.gzipResponse.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheSlingTracerInternalLogTracerProperties {\n");
    
    sb.append("  tracerSets: ").append(tracerSets).append("\n");
    sb.append("  enabled: ").append(enabled).append("\n");
    sb.append("  servletEnabled: ").append(servletEnabled).append("\n");
    sb.append("  recordingCacheSizeInMB: ").append(recordingCacheSizeInMB).append("\n");
    sb.append("  recordingCacheDurationInSecs: ").append(recordingCacheDurationInSecs).append("\n");
    sb.append("  recordingCompressionEnabled: ").append(recordingCompressionEnabled).append("\n");
    sb.append("  gzipResponse: ").append(gzipResponse).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}