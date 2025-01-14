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
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;

/**
 * ComAdobeAemUpgradePrechecksMbeanImplPreUpgradeTasksMBeanImplProperties
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2019-08-05T00:52:06.785Z[GMT]")
public class ComAdobeAemUpgradePrechecksMbeanImplPreUpgradeTasksMBeanImplProperties {
  public static final String SERIALIZED_NAME_PRE_UPGRADE_MAINTENANCE_TASKS = "pre-upgrade.maintenance.tasks";
  @SerializedName(SERIALIZED_NAME_PRE_UPGRADE_MAINTENANCE_TASKS)
  private ConfigNodePropertyArray preUpgradeMaintenanceTasks = null;

  public static final String SERIALIZED_NAME_PRE_UPGRADE_HC_TAGS = "pre-upgrade.hc.tags";
  @SerializedName(SERIALIZED_NAME_PRE_UPGRADE_HC_TAGS)
  private ConfigNodePropertyArray preUpgradeHcTags = null;

  public ComAdobeAemUpgradePrechecksMbeanImplPreUpgradeTasksMBeanImplProperties preUpgradeMaintenanceTasks(ConfigNodePropertyArray preUpgradeMaintenanceTasks) {
    this.preUpgradeMaintenanceTasks = preUpgradeMaintenanceTasks;
    return this;
  }

   /**
   * Get preUpgradeMaintenanceTasks
   * @return preUpgradeMaintenanceTasks
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getPreUpgradeMaintenanceTasks() {
    return preUpgradeMaintenanceTasks;
  }

  public void setPreUpgradeMaintenanceTasks(ConfigNodePropertyArray preUpgradeMaintenanceTasks) {
    this.preUpgradeMaintenanceTasks = preUpgradeMaintenanceTasks;
  }

  public ComAdobeAemUpgradePrechecksMbeanImplPreUpgradeTasksMBeanImplProperties preUpgradeHcTags(ConfigNodePropertyArray preUpgradeHcTags) {
    this.preUpgradeHcTags = preUpgradeHcTags;
    return this;
  }

   /**
   * Get preUpgradeHcTags
   * @return preUpgradeHcTags
  **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getPreUpgradeHcTags() {
    return preUpgradeHcTags;
  }

  public void setPreUpgradeHcTags(ConfigNodePropertyArray preUpgradeHcTags) {
    this.preUpgradeHcTags = preUpgradeHcTags;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeAemUpgradePrechecksMbeanImplPreUpgradeTasksMBeanImplProperties comAdobeAemUpgradePrechecksMbeanImplPreUpgradeTasksMBeanImplProperties = (ComAdobeAemUpgradePrechecksMbeanImplPreUpgradeTasksMBeanImplProperties) o;
    return Objects.equals(this.preUpgradeMaintenanceTasks, comAdobeAemUpgradePrechecksMbeanImplPreUpgradeTasksMBeanImplProperties.preUpgradeMaintenanceTasks) &&
        Objects.equals(this.preUpgradeHcTags, comAdobeAemUpgradePrechecksMbeanImplPreUpgradeTasksMBeanImplProperties.preUpgradeHcTags);
  }

  @Override
  public int hashCode() {
    return Objects.hash(preUpgradeMaintenanceTasks, preUpgradeHcTags);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeAemUpgradePrechecksMbeanImplPreUpgradeTasksMBeanImplProperties {\n");
    
    sb.append("    preUpgradeMaintenanceTasks: ").append(toIndentedString(preUpgradeMaintenanceTasks)).append("\n");
    sb.append("    preUpgradeHcTags: ").append(toIndentedString(preUpgradeHcTags)).append("\n");
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

