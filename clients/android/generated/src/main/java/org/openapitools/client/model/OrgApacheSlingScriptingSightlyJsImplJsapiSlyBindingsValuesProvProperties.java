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
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class OrgApacheSlingScriptingSightlyJsImplJsapiSlyBindingsValuesProvProperties {
  
  @SerializedName("org.apache.sling.scripting.sightly.js.bindings")
  private ConfigNodePropertyArray orgApacheSlingScriptingSightlyJsBindings = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getOrgApacheSlingScriptingSightlyJsBindings() {
    return orgApacheSlingScriptingSightlyJsBindings;
  }
  public void setOrgApacheSlingScriptingSightlyJsBindings(ConfigNodePropertyArray orgApacheSlingScriptingSightlyJsBindings) {
    this.orgApacheSlingScriptingSightlyJsBindings = orgApacheSlingScriptingSightlyJsBindings;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheSlingScriptingSightlyJsImplJsapiSlyBindingsValuesProvProperties orgApacheSlingScriptingSightlyJsImplJsapiSlyBindingsValuesProvProperties = (OrgApacheSlingScriptingSightlyJsImplJsapiSlyBindingsValuesProvProperties) o;
    return (this.orgApacheSlingScriptingSightlyJsBindings == null ? orgApacheSlingScriptingSightlyJsImplJsapiSlyBindingsValuesProvProperties.orgApacheSlingScriptingSightlyJsBindings == null : this.orgApacheSlingScriptingSightlyJsBindings.equals(orgApacheSlingScriptingSightlyJsImplJsapiSlyBindingsValuesProvProperties.orgApacheSlingScriptingSightlyJsBindings));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.orgApacheSlingScriptingSightlyJsBindings == null ? 0: this.orgApacheSlingScriptingSightlyJsBindings.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheSlingScriptingSightlyJsImplJsapiSlyBindingsValuesProvProperties {\n");
    
    sb.append("  orgApacheSlingScriptingSightlyJsBindings: ").append(orgApacheSlingScriptingSightlyJsBindings).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
