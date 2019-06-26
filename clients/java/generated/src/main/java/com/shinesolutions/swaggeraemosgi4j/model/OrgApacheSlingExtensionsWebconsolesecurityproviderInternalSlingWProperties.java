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
import com.shinesolutions.swaggeraemosgi4j.model.ConfigNodePropertyArray;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;

/**
 * OrgApacheSlingExtensionsWebconsolesecurityproviderInternalSlingWProperties
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2019-06-26T13:44:27.963Z[GMT]")
public class OrgApacheSlingExtensionsWebconsolesecurityproviderInternalSlingWProperties {
  public static final String SERIALIZED_NAME_USERS = "users";
  @SerializedName(SERIALIZED_NAME_USERS)
  private ConfigNodePropertyArray users = null;

  public static final String SERIALIZED_NAME_GROUPS = "groups";
  @SerializedName(SERIALIZED_NAME_GROUPS)
  private ConfigNodePropertyArray groups = null;

  public OrgApacheSlingExtensionsWebconsolesecurityproviderInternalSlingWProperties users(ConfigNodePropertyArray users) {
    this.users = users;
    return this;
  }

   /**
   * Get users
   * @return users
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getUsers() {
    return users;
  }

  public void setUsers(ConfigNodePropertyArray users) {
    this.users = users;
  }

  public OrgApacheSlingExtensionsWebconsolesecurityproviderInternalSlingWProperties groups(ConfigNodePropertyArray groups) {
    this.groups = groups;
    return this;
  }

   /**
   * Get groups
   * @return groups
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getGroups() {
    return groups;
  }

  public void setGroups(ConfigNodePropertyArray groups) {
    this.groups = groups;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheSlingExtensionsWebconsolesecurityproviderInternalSlingWProperties orgApacheSlingExtensionsWebconsolesecurityproviderInternalSlingWProperties = (OrgApacheSlingExtensionsWebconsolesecurityproviderInternalSlingWProperties) o;
    return Objects.equals(this.users, orgApacheSlingExtensionsWebconsolesecurityproviderInternalSlingWProperties.users) &&
        Objects.equals(this.groups, orgApacheSlingExtensionsWebconsolesecurityproviderInternalSlingWProperties.groups);
  }

  @Override
  public int hashCode() {
    return Objects.hash(users, groups);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheSlingExtensionsWebconsolesecurityproviderInternalSlingWProperties {\n");
    sb.append("    users: ").append(toIndentedString(users)).append("\n");
    sb.append("    groups: ").append(toIndentedString(groups)).append("\n");
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
