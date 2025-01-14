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
import com.shinesolutions.swaggeraemosgi4j.model.ConfigNodePropertyString;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;

/**
 * OrgApacheSlingDistributionAgentImplPrivilegeDistributionRequestAuthorizationStrategyFactoryProperties
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2019-06-26T12:10:03.209Z[GMT]")
public class OrgApacheSlingDistributionAgentImplPrivilegeDistributionRequestAuthorizationStrategyFactoryProperties {
  public static final String SERIALIZED_NAME_NAME = "name";
  @SerializedName(SERIALIZED_NAME_NAME)
  private ConfigNodePropertyString name = null;

  public static final String SERIALIZED_NAME_JCR_PRIVILEGE = "jcrPrivilege";
  @SerializedName(SERIALIZED_NAME_JCR_PRIVILEGE)
  private ConfigNodePropertyString jcrPrivilege = null;

  public OrgApacheSlingDistributionAgentImplPrivilegeDistributionRequestAuthorizationStrategyFactoryProperties name(ConfigNodePropertyString name) {
    this.name = name;
    return this;
  }

   /**
   * Get name
   * @return name
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getName() {
    return name;
  }

  public void setName(ConfigNodePropertyString name) {
    this.name = name;
  }

  public OrgApacheSlingDistributionAgentImplPrivilegeDistributionRequestAuthorizationStrategyFactoryProperties jcrPrivilege(ConfigNodePropertyString jcrPrivilege) {
    this.jcrPrivilege = jcrPrivilege;
    return this;
  }

   /**
   * Get jcrPrivilege
   * @return jcrPrivilege
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getJcrPrivilege() {
    return jcrPrivilege;
  }

  public void setJcrPrivilege(ConfigNodePropertyString jcrPrivilege) {
    this.jcrPrivilege = jcrPrivilege;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheSlingDistributionAgentImplPrivilegeDistributionRequestAuthorizationStrategyFactoryProperties orgApacheSlingDistributionAgentImplPrivilegeDistributionRequestAuthorizationStrategyFactoryProperties = (OrgApacheSlingDistributionAgentImplPrivilegeDistributionRequestAuthorizationStrategyFactoryProperties) o;
    return Objects.equals(this.name, orgApacheSlingDistributionAgentImplPrivilegeDistributionRequestAuthorizationStrategyFactoryProperties.name) &&
        Objects.equals(this.jcrPrivilege, orgApacheSlingDistributionAgentImplPrivilegeDistributionRequestAuthorizationStrategyFactoryProperties.jcrPrivilege);
  }

  @Override
  public int hashCode() {
    return Objects.hash(name, jcrPrivilege);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheSlingDistributionAgentImplPrivilegeDistributionRequestAuthorizationStrategyFactoryProperties {\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    jcrPrivilege: ").append(toIndentedString(jcrPrivilege)).append("\n");
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

