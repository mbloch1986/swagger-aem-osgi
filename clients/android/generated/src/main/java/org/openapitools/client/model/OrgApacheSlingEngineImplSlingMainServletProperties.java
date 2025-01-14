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
import org.openapitools.client.model.ConfigNodePropertyString;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class OrgApacheSlingEngineImplSlingMainServletProperties {
  
  @SerializedName("sling.max.calls")
  private ConfigNodePropertyInteger slingMaxCalls = null;
  @SerializedName("sling.max.inclusions")
  private ConfigNodePropertyInteger slingMaxInclusions = null;
  @SerializedName("sling.trace.allow")
  private ConfigNodePropertyBoolean slingTraceAllow = null;
  @SerializedName("sling.max.record.requests")
  private ConfigNodePropertyInteger slingMaxRecordRequests = null;
  @SerializedName("sling.store.pattern.requests")
  private ConfigNodePropertyArray slingStorePatternRequests = null;
  @SerializedName("sling.serverinfo")
  private ConfigNodePropertyString slingServerinfo = null;
  @SerializedName("sling.additional.response.headers")
  private ConfigNodePropertyArray slingAdditionalResponseHeaders = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getSlingMaxCalls() {
    return slingMaxCalls;
  }
  public void setSlingMaxCalls(ConfigNodePropertyInteger slingMaxCalls) {
    this.slingMaxCalls = slingMaxCalls;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getSlingMaxInclusions() {
    return slingMaxInclusions;
  }
  public void setSlingMaxInclusions(ConfigNodePropertyInteger slingMaxInclusions) {
    this.slingMaxInclusions = slingMaxInclusions;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getSlingTraceAllow() {
    return slingTraceAllow;
  }
  public void setSlingTraceAllow(ConfigNodePropertyBoolean slingTraceAllow) {
    this.slingTraceAllow = slingTraceAllow;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getSlingMaxRecordRequests() {
    return slingMaxRecordRequests;
  }
  public void setSlingMaxRecordRequests(ConfigNodePropertyInteger slingMaxRecordRequests) {
    this.slingMaxRecordRequests = slingMaxRecordRequests;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getSlingStorePatternRequests() {
    return slingStorePatternRequests;
  }
  public void setSlingStorePatternRequests(ConfigNodePropertyArray slingStorePatternRequests) {
    this.slingStorePatternRequests = slingStorePatternRequests;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getSlingServerinfo() {
    return slingServerinfo;
  }
  public void setSlingServerinfo(ConfigNodePropertyString slingServerinfo) {
    this.slingServerinfo = slingServerinfo;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getSlingAdditionalResponseHeaders() {
    return slingAdditionalResponseHeaders;
  }
  public void setSlingAdditionalResponseHeaders(ConfigNodePropertyArray slingAdditionalResponseHeaders) {
    this.slingAdditionalResponseHeaders = slingAdditionalResponseHeaders;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheSlingEngineImplSlingMainServletProperties orgApacheSlingEngineImplSlingMainServletProperties = (OrgApacheSlingEngineImplSlingMainServletProperties) o;
    return (this.slingMaxCalls == null ? orgApacheSlingEngineImplSlingMainServletProperties.slingMaxCalls == null : this.slingMaxCalls.equals(orgApacheSlingEngineImplSlingMainServletProperties.slingMaxCalls)) &&
        (this.slingMaxInclusions == null ? orgApacheSlingEngineImplSlingMainServletProperties.slingMaxInclusions == null : this.slingMaxInclusions.equals(orgApacheSlingEngineImplSlingMainServletProperties.slingMaxInclusions)) &&
        (this.slingTraceAllow == null ? orgApacheSlingEngineImplSlingMainServletProperties.slingTraceAllow == null : this.slingTraceAllow.equals(orgApacheSlingEngineImplSlingMainServletProperties.slingTraceAllow)) &&
        (this.slingMaxRecordRequests == null ? orgApacheSlingEngineImplSlingMainServletProperties.slingMaxRecordRequests == null : this.slingMaxRecordRequests.equals(orgApacheSlingEngineImplSlingMainServletProperties.slingMaxRecordRequests)) &&
        (this.slingStorePatternRequests == null ? orgApacheSlingEngineImplSlingMainServletProperties.slingStorePatternRequests == null : this.slingStorePatternRequests.equals(orgApacheSlingEngineImplSlingMainServletProperties.slingStorePatternRequests)) &&
        (this.slingServerinfo == null ? orgApacheSlingEngineImplSlingMainServletProperties.slingServerinfo == null : this.slingServerinfo.equals(orgApacheSlingEngineImplSlingMainServletProperties.slingServerinfo)) &&
        (this.slingAdditionalResponseHeaders == null ? orgApacheSlingEngineImplSlingMainServletProperties.slingAdditionalResponseHeaders == null : this.slingAdditionalResponseHeaders.equals(orgApacheSlingEngineImplSlingMainServletProperties.slingAdditionalResponseHeaders));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.slingMaxCalls == null ? 0: this.slingMaxCalls.hashCode());
    result = 31 * result + (this.slingMaxInclusions == null ? 0: this.slingMaxInclusions.hashCode());
    result = 31 * result + (this.slingTraceAllow == null ? 0: this.slingTraceAllow.hashCode());
    result = 31 * result + (this.slingMaxRecordRequests == null ? 0: this.slingMaxRecordRequests.hashCode());
    result = 31 * result + (this.slingStorePatternRequests == null ? 0: this.slingStorePatternRequests.hashCode());
    result = 31 * result + (this.slingServerinfo == null ? 0: this.slingServerinfo.hashCode());
    result = 31 * result + (this.slingAdditionalResponseHeaders == null ? 0: this.slingAdditionalResponseHeaders.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheSlingEngineImplSlingMainServletProperties {\n");
    
    sb.append("  slingMaxCalls: ").append(slingMaxCalls).append("\n");
    sb.append("  slingMaxInclusions: ").append(slingMaxInclusions).append("\n");
    sb.append("  slingTraceAllow: ").append(slingTraceAllow).append("\n");
    sb.append("  slingMaxRecordRequests: ").append(slingMaxRecordRequests).append("\n");
    sb.append("  slingStorePatternRequests: ").append(slingStorePatternRequests).append("\n");
    sb.append("  slingServerinfo: ").append(slingServerinfo).append("\n");
    sb.append("  slingAdditionalResponseHeaders: ").append(slingAdditionalResponseHeaders).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
