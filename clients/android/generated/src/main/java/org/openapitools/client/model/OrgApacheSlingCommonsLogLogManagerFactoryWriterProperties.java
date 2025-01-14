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
import org.openapitools.client.model.ConfigNodePropertyInteger;
import org.openapitools.client.model.ConfigNodePropertyString;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class OrgApacheSlingCommonsLogLogManagerFactoryWriterProperties {
  
  @SerializedName("org.apache.sling.commons.log.file")
  private ConfigNodePropertyString orgApacheSlingCommonsLogFile = null;
  @SerializedName("org.apache.sling.commons.log.file.number")
  private ConfigNodePropertyInteger orgApacheSlingCommonsLogFileNumber = null;
  @SerializedName("org.apache.sling.commons.log.file.size")
  private ConfigNodePropertyString orgApacheSlingCommonsLogFileSize = null;
  @SerializedName("org.apache.sling.commons.log.file.buffered")
  private ConfigNodePropertyBoolean orgApacheSlingCommonsLogFileBuffered = null;

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
  public ConfigNodePropertyInteger getOrgApacheSlingCommonsLogFileNumber() {
    return orgApacheSlingCommonsLogFileNumber;
  }
  public void setOrgApacheSlingCommonsLogFileNumber(ConfigNodePropertyInteger orgApacheSlingCommonsLogFileNumber) {
    this.orgApacheSlingCommonsLogFileNumber = orgApacheSlingCommonsLogFileNumber;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getOrgApacheSlingCommonsLogFileSize() {
    return orgApacheSlingCommonsLogFileSize;
  }
  public void setOrgApacheSlingCommonsLogFileSize(ConfigNodePropertyString orgApacheSlingCommonsLogFileSize) {
    this.orgApacheSlingCommonsLogFileSize = orgApacheSlingCommonsLogFileSize;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getOrgApacheSlingCommonsLogFileBuffered() {
    return orgApacheSlingCommonsLogFileBuffered;
  }
  public void setOrgApacheSlingCommonsLogFileBuffered(ConfigNodePropertyBoolean orgApacheSlingCommonsLogFileBuffered) {
    this.orgApacheSlingCommonsLogFileBuffered = orgApacheSlingCommonsLogFileBuffered;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheSlingCommonsLogLogManagerFactoryWriterProperties orgApacheSlingCommonsLogLogManagerFactoryWriterProperties = (OrgApacheSlingCommonsLogLogManagerFactoryWriterProperties) o;
    return (this.orgApacheSlingCommonsLogFile == null ? orgApacheSlingCommonsLogLogManagerFactoryWriterProperties.orgApacheSlingCommonsLogFile == null : this.orgApacheSlingCommonsLogFile.equals(orgApacheSlingCommonsLogLogManagerFactoryWriterProperties.orgApacheSlingCommonsLogFile)) &&
        (this.orgApacheSlingCommonsLogFileNumber == null ? orgApacheSlingCommonsLogLogManagerFactoryWriterProperties.orgApacheSlingCommonsLogFileNumber == null : this.orgApacheSlingCommonsLogFileNumber.equals(orgApacheSlingCommonsLogLogManagerFactoryWriterProperties.orgApacheSlingCommonsLogFileNumber)) &&
        (this.orgApacheSlingCommonsLogFileSize == null ? orgApacheSlingCommonsLogLogManagerFactoryWriterProperties.orgApacheSlingCommonsLogFileSize == null : this.orgApacheSlingCommonsLogFileSize.equals(orgApacheSlingCommonsLogLogManagerFactoryWriterProperties.orgApacheSlingCommonsLogFileSize)) &&
        (this.orgApacheSlingCommonsLogFileBuffered == null ? orgApacheSlingCommonsLogLogManagerFactoryWriterProperties.orgApacheSlingCommonsLogFileBuffered == null : this.orgApacheSlingCommonsLogFileBuffered.equals(orgApacheSlingCommonsLogLogManagerFactoryWriterProperties.orgApacheSlingCommonsLogFileBuffered));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.orgApacheSlingCommonsLogFile == null ? 0: this.orgApacheSlingCommonsLogFile.hashCode());
    result = 31 * result + (this.orgApacheSlingCommonsLogFileNumber == null ? 0: this.orgApacheSlingCommonsLogFileNumber.hashCode());
    result = 31 * result + (this.orgApacheSlingCommonsLogFileSize == null ? 0: this.orgApacheSlingCommonsLogFileSize.hashCode());
    result = 31 * result + (this.orgApacheSlingCommonsLogFileBuffered == null ? 0: this.orgApacheSlingCommonsLogFileBuffered.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheSlingCommonsLogLogManagerFactoryWriterProperties {\n");
    
    sb.append("  orgApacheSlingCommonsLogFile: ").append(orgApacheSlingCommonsLogFile).append("\n");
    sb.append("  orgApacheSlingCommonsLogFileNumber: ").append(orgApacheSlingCommonsLogFileNumber).append("\n");
    sb.append("  orgApacheSlingCommonsLogFileSize: ").append(orgApacheSlingCommonsLogFileSize).append("\n");
    sb.append("  orgApacheSlingCommonsLogFileBuffered: ").append(orgApacheSlingCommonsLogFileBuffered).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
