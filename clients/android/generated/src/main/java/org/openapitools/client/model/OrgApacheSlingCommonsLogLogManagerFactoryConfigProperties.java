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
import org.openapitools.client.model.ConfigNodePropertyDropDown;
import org.openapitools.client.model.ConfigNodePropertyString;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties {
  
  @SerializedName("org.apache.sling.commons.log.level")
  private ConfigNodePropertyDropDown orgApacheSlingCommonsLogLevel = null;
  @SerializedName("org.apache.sling.commons.log.file")
  private ConfigNodePropertyString orgApacheSlingCommonsLogFile = null;
  @SerializedName("org.apache.sling.commons.log.pattern")
  private ConfigNodePropertyString orgApacheSlingCommonsLogPattern = null;
  @SerializedName("org.apache.sling.commons.log.names")
  private ConfigNodePropertyArray orgApacheSlingCommonsLogNames = null;
  @SerializedName("org.apache.sling.commons.log.additiv")
  private ConfigNodePropertyBoolean orgApacheSlingCommonsLogAdditiv = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyDropDown getOrgApacheSlingCommonsLogLevel() {
    return orgApacheSlingCommonsLogLevel;
  }
  public void setOrgApacheSlingCommonsLogLevel(ConfigNodePropertyDropDown orgApacheSlingCommonsLogLevel) {
    this.orgApacheSlingCommonsLogLevel = orgApacheSlingCommonsLogLevel;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getOrgApacheSlingCommonsLogFile() {
    return orgApacheSlingCommonsLogFile;
  }
  public void setOrgApacheSlingCommonsLogFile(ConfigNodePropertyString orgApacheSlingCommonsLogFile) {
    this.orgApacheSlingCommonsLogFile = orgApacheSlingCommonsLogFile;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getOrgApacheSlingCommonsLogPattern() {
    return orgApacheSlingCommonsLogPattern;
  }
  public void setOrgApacheSlingCommonsLogPattern(ConfigNodePropertyString orgApacheSlingCommonsLogPattern) {
    this.orgApacheSlingCommonsLogPattern = orgApacheSlingCommonsLogPattern;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getOrgApacheSlingCommonsLogNames() {
    return orgApacheSlingCommonsLogNames;
  }
  public void setOrgApacheSlingCommonsLogNames(ConfigNodePropertyArray orgApacheSlingCommonsLogNames) {
    this.orgApacheSlingCommonsLogNames = orgApacheSlingCommonsLogNames;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getOrgApacheSlingCommonsLogAdditiv() {
    return orgApacheSlingCommonsLogAdditiv;
  }
  public void setOrgApacheSlingCommonsLogAdditiv(ConfigNodePropertyBoolean orgApacheSlingCommonsLogAdditiv) {
    this.orgApacheSlingCommonsLogAdditiv = orgApacheSlingCommonsLogAdditiv;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties orgApacheSlingCommonsLogLogManagerFactoryConfigProperties = (OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties) o;
    return (this.orgApacheSlingCommonsLogLevel == null ? orgApacheSlingCommonsLogLogManagerFactoryConfigProperties.orgApacheSlingCommonsLogLevel == null : this.orgApacheSlingCommonsLogLevel.equals(orgApacheSlingCommonsLogLogManagerFactoryConfigProperties.orgApacheSlingCommonsLogLevel)) &&
        (this.orgApacheSlingCommonsLogFile == null ? orgApacheSlingCommonsLogLogManagerFactoryConfigProperties.orgApacheSlingCommonsLogFile == null : this.orgApacheSlingCommonsLogFile.equals(orgApacheSlingCommonsLogLogManagerFactoryConfigProperties.orgApacheSlingCommonsLogFile)) &&
        (this.orgApacheSlingCommonsLogPattern == null ? orgApacheSlingCommonsLogLogManagerFactoryConfigProperties.orgApacheSlingCommonsLogPattern == null : this.orgApacheSlingCommonsLogPattern.equals(orgApacheSlingCommonsLogLogManagerFactoryConfigProperties.orgApacheSlingCommonsLogPattern)) &&
        (this.orgApacheSlingCommonsLogNames == null ? orgApacheSlingCommonsLogLogManagerFactoryConfigProperties.orgApacheSlingCommonsLogNames == null : this.orgApacheSlingCommonsLogNames.equals(orgApacheSlingCommonsLogLogManagerFactoryConfigProperties.orgApacheSlingCommonsLogNames)) &&
        (this.orgApacheSlingCommonsLogAdditiv == null ? orgApacheSlingCommonsLogLogManagerFactoryConfigProperties.orgApacheSlingCommonsLogAdditiv == null : this.orgApacheSlingCommonsLogAdditiv.equals(orgApacheSlingCommonsLogLogManagerFactoryConfigProperties.orgApacheSlingCommonsLogAdditiv));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.orgApacheSlingCommonsLogLevel == null ? 0: this.orgApacheSlingCommonsLogLevel.hashCode());
    result = 31 * result + (this.orgApacheSlingCommonsLogFile == null ? 0: this.orgApacheSlingCommonsLogFile.hashCode());
    result = 31 * result + (this.orgApacheSlingCommonsLogPattern == null ? 0: this.orgApacheSlingCommonsLogPattern.hashCode());
    result = 31 * result + (this.orgApacheSlingCommonsLogNames == null ? 0: this.orgApacheSlingCommonsLogNames.hashCode());
    result = 31 * result + (this.orgApacheSlingCommonsLogAdditiv == null ? 0: this.orgApacheSlingCommonsLogAdditiv.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties {\n");
    
    sb.append("  orgApacheSlingCommonsLogLevel: ").append(orgApacheSlingCommonsLogLevel).append("\n");
    sb.append("  orgApacheSlingCommonsLogFile: ").append(orgApacheSlingCommonsLogFile).append("\n");
    sb.append("  orgApacheSlingCommonsLogPattern: ").append(orgApacheSlingCommonsLogPattern).append("\n");
    sb.append("  orgApacheSlingCommonsLogNames: ").append(orgApacheSlingCommonsLogNames).append("\n");
    sb.append("  orgApacheSlingCommonsLogAdditiv: ").append(orgApacheSlingCommonsLogAdditiv).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}