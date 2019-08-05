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


package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ConfigNodePropertyArray;
import org.openapitools.model.ConfigNodePropertyBoolean;
import org.openapitools.model.ConfigNodePropertyString;
import javax.validation.constraints.*;

/**
 * ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2019-08-05T00:58:47.028Z[GMT]")
public class ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties   {
  @JsonProperty("nodetypes")
  private ConfigNodePropertyArray nodetypes = null;

  @JsonProperty("ignorableprops")
  private ConfigNodePropertyArray ignorableprops = null;

  @JsonProperty("ignorablenodes")
  private ConfigNodePropertyString ignorablenodes = null;

  @JsonProperty("enabled")
  private ConfigNodePropertyBoolean enabled = null;

  @JsonProperty("distfolders")
  private ConfigNodePropertyString distfolders = null;

  public ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties nodetypes(ConfigNodePropertyArray nodetypes) {
    this.nodetypes = nodetypes;
    return this;
  }

  /**
   * Get nodetypes
   * @return nodetypes
   **/
  @JsonProperty("nodetypes")
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getNodetypes() {
    return nodetypes;
  }

  public void setNodetypes(ConfigNodePropertyArray nodetypes) {
    this.nodetypes = nodetypes;
  }

  public ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties ignorableprops(ConfigNodePropertyArray ignorableprops) {
    this.ignorableprops = ignorableprops;
    return this;
  }

  /**
   * Get ignorableprops
   * @return ignorableprops
   **/
  @JsonProperty("ignorableprops")
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getIgnorableprops() {
    return ignorableprops;
  }

  public void setIgnorableprops(ConfigNodePropertyArray ignorableprops) {
    this.ignorableprops = ignorableprops;
  }

  public ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties ignorablenodes(ConfigNodePropertyString ignorablenodes) {
    this.ignorablenodes = ignorablenodes;
    return this;
  }

  /**
   * Get ignorablenodes
   * @return ignorablenodes
   **/
  @JsonProperty("ignorablenodes")
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getIgnorablenodes() {
    return ignorablenodes;
  }

  public void setIgnorablenodes(ConfigNodePropertyString ignorablenodes) {
    this.ignorablenodes = ignorablenodes;
  }

  public ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties enabled(ConfigNodePropertyBoolean enabled) {
    this.enabled = enabled;
    return this;
  }

  /**
   * Get enabled
   * @return enabled
   **/
  @JsonProperty("enabled")
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getEnabled() {
    return enabled;
  }

  public void setEnabled(ConfigNodePropertyBoolean enabled) {
    this.enabled = enabled;
  }

  public ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties distfolders(ConfigNodePropertyString distfolders) {
    this.distfolders = distfolders;
    return this;
  }

  /**
   * Get distfolders
   * @return distfolders
   **/
  @JsonProperty("distfolders")
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getDistfolders() {
    return distfolders;
  }

  public void setDistfolders(ConfigNodePropertyString distfolders) {
    this.distfolders = distfolders;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties comAdobeCqSocialSyncImplGroupSyncListenerImplProperties = (ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties) o;
    return Objects.equals(this.nodetypes, comAdobeCqSocialSyncImplGroupSyncListenerImplProperties.nodetypes) &&
        Objects.equals(this.ignorableprops, comAdobeCqSocialSyncImplGroupSyncListenerImplProperties.ignorableprops) &&
        Objects.equals(this.ignorablenodes, comAdobeCqSocialSyncImplGroupSyncListenerImplProperties.ignorablenodes) &&
        Objects.equals(this.enabled, comAdobeCqSocialSyncImplGroupSyncListenerImplProperties.enabled) &&
        Objects.equals(this.distfolders, comAdobeCqSocialSyncImplGroupSyncListenerImplProperties.distfolders);
  }

  @Override
  public int hashCode() {
    return Objects.hash(nodetypes, ignorableprops, ignorablenodes, enabled, distfolders);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties {\n");
    
    sb.append("    nodetypes: ").append(toIndentedString(nodetypes)).append("\n");
    sb.append("    ignorableprops: ").append(toIndentedString(ignorableprops)).append("\n");
    sb.append("    ignorablenodes: ").append(toIndentedString(ignorablenodes)).append("\n");
    sb.append("    enabled: ").append(toIndentedString(enabled)).append("\n");
    sb.append("    distfolders: ").append(toIndentedString(distfolders)).append("\n");
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
