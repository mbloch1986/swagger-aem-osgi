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
import com.shinesolutions.swaggeraemosgi4j.model.ConfigNodePropertyInteger;
import com.shinesolutions.swaggeraemosgi4j.model.ConfigNodePropertyString;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;

/**
 * OrgApacheSlingEngineImplSlingMainServletProperties
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2019-08-05T00:52:06.785Z[GMT]")
public class OrgApacheSlingEngineImplSlingMainServletProperties {
  public static final String SERIALIZED_NAME_SLING_MAX_CALLS = "sling.max.calls";
  @SerializedName(SERIALIZED_NAME_SLING_MAX_CALLS)
  private ConfigNodePropertyInteger slingMaxCalls = null;

  public static final String SERIALIZED_NAME_SLING_MAX_INCLUSIONS = "sling.max.inclusions";
  @SerializedName(SERIALIZED_NAME_SLING_MAX_INCLUSIONS)
  private ConfigNodePropertyInteger slingMaxInclusions = null;

  public static final String SERIALIZED_NAME_SLING_TRACE_ALLOW = "sling.trace.allow";
  @SerializedName(SERIALIZED_NAME_SLING_TRACE_ALLOW)
  private ConfigNodePropertyBoolean slingTraceAllow = null;

  public static final String SERIALIZED_NAME_SLING_MAX_RECORD_REQUESTS = "sling.max.record.requests";
  @SerializedName(SERIALIZED_NAME_SLING_MAX_RECORD_REQUESTS)
  private ConfigNodePropertyInteger slingMaxRecordRequests = null;

  public static final String SERIALIZED_NAME_SLING_STORE_PATTERN_REQUESTS = "sling.store.pattern.requests";
  @SerializedName(SERIALIZED_NAME_SLING_STORE_PATTERN_REQUESTS)
  private ConfigNodePropertyArray slingStorePatternRequests = null;

  public static final String SERIALIZED_NAME_SLING_SERVERINFO = "sling.serverinfo";
  @SerializedName(SERIALIZED_NAME_SLING_SERVERINFO)
  private ConfigNodePropertyString slingServerinfo = null;

  public static final String SERIALIZED_NAME_SLING_ADDITIONAL_RESPONSE_HEADERS = "sling.additional.response.headers";
  @SerializedName(SERIALIZED_NAME_SLING_ADDITIONAL_RESPONSE_HEADERS)
  private ConfigNodePropertyArray slingAdditionalResponseHeaders = null;

  public OrgApacheSlingEngineImplSlingMainServletProperties slingMaxCalls(ConfigNodePropertyInteger slingMaxCalls) {
    this.slingMaxCalls = slingMaxCalls;
    return this;
  }

   /**
   * Get slingMaxCalls
   * @return slingMaxCalls
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getSlingMaxCalls() {
    return slingMaxCalls;
  }

  public void setSlingMaxCalls(ConfigNodePropertyInteger slingMaxCalls) {
    this.slingMaxCalls = slingMaxCalls;
  }

  public OrgApacheSlingEngineImplSlingMainServletProperties slingMaxInclusions(ConfigNodePropertyInteger slingMaxInclusions) {
    this.slingMaxInclusions = slingMaxInclusions;
    return this;
  }

   /**
   * Get slingMaxInclusions
   * @return slingMaxInclusions
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getSlingMaxInclusions() {
    return slingMaxInclusions;
  }

  public void setSlingMaxInclusions(ConfigNodePropertyInteger slingMaxInclusions) {
    this.slingMaxInclusions = slingMaxInclusions;
  }

  public OrgApacheSlingEngineImplSlingMainServletProperties slingTraceAllow(ConfigNodePropertyBoolean slingTraceAllow) {
    this.slingTraceAllow = slingTraceAllow;
    return this;
  }

   /**
   * Get slingTraceAllow
   * @return slingTraceAllow
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getSlingTraceAllow() {
    return slingTraceAllow;
  }

  public void setSlingTraceAllow(ConfigNodePropertyBoolean slingTraceAllow) {
    this.slingTraceAllow = slingTraceAllow;
  }

  public OrgApacheSlingEngineImplSlingMainServletProperties slingMaxRecordRequests(ConfigNodePropertyInteger slingMaxRecordRequests) {
    this.slingMaxRecordRequests = slingMaxRecordRequests;
    return this;
  }

   /**
   * Get slingMaxRecordRequests
   * @return slingMaxRecordRequests
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getSlingMaxRecordRequests() {
    return slingMaxRecordRequests;
  }

  public void setSlingMaxRecordRequests(ConfigNodePropertyInteger slingMaxRecordRequests) {
    this.slingMaxRecordRequests = slingMaxRecordRequests;
  }

  public OrgApacheSlingEngineImplSlingMainServletProperties slingStorePatternRequests(ConfigNodePropertyArray slingStorePatternRequests) {
    this.slingStorePatternRequests = slingStorePatternRequests;
    return this;
  }

   /**
   * Get slingStorePatternRequests
   * @return slingStorePatternRequests
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getSlingStorePatternRequests() {
    return slingStorePatternRequests;
  }

  public void setSlingStorePatternRequests(ConfigNodePropertyArray slingStorePatternRequests) {
    this.slingStorePatternRequests = slingStorePatternRequests;
  }

  public OrgApacheSlingEngineImplSlingMainServletProperties slingServerinfo(ConfigNodePropertyString slingServerinfo) {
    this.slingServerinfo = slingServerinfo;
    return this;
  }

   /**
   * Get slingServerinfo
   * @return slingServerinfo
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getSlingServerinfo() {
    return slingServerinfo;
  }

  public void setSlingServerinfo(ConfigNodePropertyString slingServerinfo) {
    this.slingServerinfo = slingServerinfo;
  }

  public OrgApacheSlingEngineImplSlingMainServletProperties slingAdditionalResponseHeaders(ConfigNodePropertyArray slingAdditionalResponseHeaders) {
    this.slingAdditionalResponseHeaders = slingAdditionalResponseHeaders;
    return this;
  }

   /**
   * Get slingAdditionalResponseHeaders
   * @return slingAdditionalResponseHeaders
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getSlingAdditionalResponseHeaders() {
    return slingAdditionalResponseHeaders;
  }

  public void setSlingAdditionalResponseHeaders(ConfigNodePropertyArray slingAdditionalResponseHeaders) {
    this.slingAdditionalResponseHeaders = slingAdditionalResponseHeaders;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheSlingEngineImplSlingMainServletProperties orgApacheSlingEngineImplSlingMainServletProperties = (OrgApacheSlingEngineImplSlingMainServletProperties) o;
    return Objects.equals(this.slingMaxCalls, orgApacheSlingEngineImplSlingMainServletProperties.slingMaxCalls) &&
        Objects.equals(this.slingMaxInclusions, orgApacheSlingEngineImplSlingMainServletProperties.slingMaxInclusions) &&
        Objects.equals(this.slingTraceAllow, orgApacheSlingEngineImplSlingMainServletProperties.slingTraceAllow) &&
        Objects.equals(this.slingMaxRecordRequests, orgApacheSlingEngineImplSlingMainServletProperties.slingMaxRecordRequests) &&
        Objects.equals(this.slingStorePatternRequests, orgApacheSlingEngineImplSlingMainServletProperties.slingStorePatternRequests) &&
        Objects.equals(this.slingServerinfo, orgApacheSlingEngineImplSlingMainServletProperties.slingServerinfo) &&
        Objects.equals(this.slingAdditionalResponseHeaders, orgApacheSlingEngineImplSlingMainServletProperties.slingAdditionalResponseHeaders);
  }

  @Override
  public int hashCode() {
    return Objects.hash(slingMaxCalls, slingMaxInclusions, slingTraceAllow, slingMaxRecordRequests, slingStorePatternRequests, slingServerinfo, slingAdditionalResponseHeaders);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheSlingEngineImplSlingMainServletProperties {\n");
    
    sb.append("    slingMaxCalls: ").append(toIndentedString(slingMaxCalls)).append("\n");
    sb.append("    slingMaxInclusions: ").append(toIndentedString(slingMaxInclusions)).append("\n");
    sb.append("    slingTraceAllow: ").append(toIndentedString(slingTraceAllow)).append("\n");
    sb.append("    slingMaxRecordRequests: ").append(toIndentedString(slingMaxRecordRequests)).append("\n");
    sb.append("    slingStorePatternRequests: ").append(toIndentedString(slingStorePatternRequests)).append("\n");
    sb.append("    slingServerinfo: ").append(toIndentedString(slingServerinfo)).append("\n");
    sb.append("    slingAdditionalResponseHeaders: ").append(toIndentedString(slingAdditionalResponseHeaders)).append("\n");
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

