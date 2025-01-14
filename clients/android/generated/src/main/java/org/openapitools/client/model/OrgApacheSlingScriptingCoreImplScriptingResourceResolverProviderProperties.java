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

import org.openapitools.client.model.ConfigNodePropertyBoolean;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderProperties {
  
  @SerializedName("log.stacktrace.onclose")
  private ConfigNodePropertyBoolean logStacktraceOnclose = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getLogStacktraceOnclose() {
    return logStacktraceOnclose;
  }
  public void setLogStacktraceOnclose(ConfigNodePropertyBoolean logStacktraceOnclose) {
    this.logStacktraceOnclose = logStacktraceOnclose;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderProperties orgApacheSlingScriptingCoreImplScriptingResourceResolverProviderProperties = (OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderProperties) o;
    return (this.logStacktraceOnclose == null ? orgApacheSlingScriptingCoreImplScriptingResourceResolverProviderProperties.logStacktraceOnclose == null : this.logStacktraceOnclose.equals(orgApacheSlingScriptingCoreImplScriptingResourceResolverProviderProperties.logStacktraceOnclose));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.logStacktraceOnclose == null ? 0: this.logStacktraceOnclose.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderProperties {\n");
    
    sb.append("  logStacktraceOnclose: ").append(logStacktraceOnclose).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
