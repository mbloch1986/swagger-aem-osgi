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
import org.openapitools.model.ConfigNodePropertyBoolean;
import org.openapitools.model.ConfigNodePropertyDropDown;
import org.openapitools.model.ConfigNodePropertyInteger;
import javax.validation.constraints.*;

/**
 * OrgApacheFelixScrScrServiceProperties
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2019-08-05T00:58:47.028Z[GMT]")
public class OrgApacheFelixScrScrServiceProperties   {
  @JsonProperty("ds.loglevel")
  private ConfigNodePropertyDropDown dsLoglevel = null;

  @JsonProperty("ds.factory.enabled")
  private ConfigNodePropertyBoolean dsFactoryEnabled = null;

  @JsonProperty("ds.delayed.keepInstances")
  private ConfigNodePropertyBoolean dsDelayedKeepInstances = null;

  @JsonProperty("ds.lock.timeout.milliseconds")
  private ConfigNodePropertyInteger dsLockTimeoutMilliseconds = null;

  @JsonProperty("ds.stop.timeout.milliseconds")
  private ConfigNodePropertyInteger dsStopTimeoutMilliseconds = null;

  @JsonProperty("ds.global.extender")
  private ConfigNodePropertyBoolean dsGlobalExtender = null;

  public OrgApacheFelixScrScrServiceProperties dsLoglevel(ConfigNodePropertyDropDown dsLoglevel) {
    this.dsLoglevel = dsLoglevel;
    return this;
  }

  /**
   * Get dsLoglevel
   * @return dsLoglevel
   **/
  @JsonProperty("ds.loglevel")
  @ApiModelProperty(value = "")
  public ConfigNodePropertyDropDown getDsLoglevel() {
    return dsLoglevel;
  }

  public void setDsLoglevel(ConfigNodePropertyDropDown dsLoglevel) {
    this.dsLoglevel = dsLoglevel;
  }

  public OrgApacheFelixScrScrServiceProperties dsFactoryEnabled(ConfigNodePropertyBoolean dsFactoryEnabled) {
    this.dsFactoryEnabled = dsFactoryEnabled;
    return this;
  }

  /**
   * Get dsFactoryEnabled
   * @return dsFactoryEnabled
   **/
  @JsonProperty("ds.factory.enabled")
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getDsFactoryEnabled() {
    return dsFactoryEnabled;
  }

  public void setDsFactoryEnabled(ConfigNodePropertyBoolean dsFactoryEnabled) {
    this.dsFactoryEnabled = dsFactoryEnabled;
  }

  public OrgApacheFelixScrScrServiceProperties dsDelayedKeepInstances(ConfigNodePropertyBoolean dsDelayedKeepInstances) {
    this.dsDelayedKeepInstances = dsDelayedKeepInstances;
    return this;
  }

  /**
   * Get dsDelayedKeepInstances
   * @return dsDelayedKeepInstances
   **/
  @JsonProperty("ds.delayed.keepInstances")
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getDsDelayedKeepInstances() {
    return dsDelayedKeepInstances;
  }

  public void setDsDelayedKeepInstances(ConfigNodePropertyBoolean dsDelayedKeepInstances) {
    this.dsDelayedKeepInstances = dsDelayedKeepInstances;
  }

  public OrgApacheFelixScrScrServiceProperties dsLockTimeoutMilliseconds(ConfigNodePropertyInteger dsLockTimeoutMilliseconds) {
    this.dsLockTimeoutMilliseconds = dsLockTimeoutMilliseconds;
    return this;
  }

  /**
   * Get dsLockTimeoutMilliseconds
   * @return dsLockTimeoutMilliseconds
   **/
  @JsonProperty("ds.lock.timeout.milliseconds")
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getDsLockTimeoutMilliseconds() {
    return dsLockTimeoutMilliseconds;
  }

  public void setDsLockTimeoutMilliseconds(ConfigNodePropertyInteger dsLockTimeoutMilliseconds) {
    this.dsLockTimeoutMilliseconds = dsLockTimeoutMilliseconds;
  }

  public OrgApacheFelixScrScrServiceProperties dsStopTimeoutMilliseconds(ConfigNodePropertyInteger dsStopTimeoutMilliseconds) {
    this.dsStopTimeoutMilliseconds = dsStopTimeoutMilliseconds;
    return this;
  }

  /**
   * Get dsStopTimeoutMilliseconds
   * @return dsStopTimeoutMilliseconds
   **/
  @JsonProperty("ds.stop.timeout.milliseconds")
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getDsStopTimeoutMilliseconds() {
    return dsStopTimeoutMilliseconds;
  }

  public void setDsStopTimeoutMilliseconds(ConfigNodePropertyInteger dsStopTimeoutMilliseconds) {
    this.dsStopTimeoutMilliseconds = dsStopTimeoutMilliseconds;
  }

  public OrgApacheFelixScrScrServiceProperties dsGlobalExtender(ConfigNodePropertyBoolean dsGlobalExtender) {
    this.dsGlobalExtender = dsGlobalExtender;
    return this;
  }

  /**
   * Get dsGlobalExtender
   * @return dsGlobalExtender
   **/
  @JsonProperty("ds.global.extender")
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getDsGlobalExtender() {
    return dsGlobalExtender;
  }

  public void setDsGlobalExtender(ConfigNodePropertyBoolean dsGlobalExtender) {
    this.dsGlobalExtender = dsGlobalExtender;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheFelixScrScrServiceProperties orgApacheFelixScrScrServiceProperties = (OrgApacheFelixScrScrServiceProperties) o;
    return Objects.equals(this.dsLoglevel, orgApacheFelixScrScrServiceProperties.dsLoglevel) &&
        Objects.equals(this.dsFactoryEnabled, orgApacheFelixScrScrServiceProperties.dsFactoryEnabled) &&
        Objects.equals(this.dsDelayedKeepInstances, orgApacheFelixScrScrServiceProperties.dsDelayedKeepInstances) &&
        Objects.equals(this.dsLockTimeoutMilliseconds, orgApacheFelixScrScrServiceProperties.dsLockTimeoutMilliseconds) &&
        Objects.equals(this.dsStopTimeoutMilliseconds, orgApacheFelixScrScrServiceProperties.dsStopTimeoutMilliseconds) &&
        Objects.equals(this.dsGlobalExtender, orgApacheFelixScrScrServiceProperties.dsGlobalExtender);
  }

  @Override
  public int hashCode() {
    return Objects.hash(dsLoglevel, dsFactoryEnabled, dsDelayedKeepInstances, dsLockTimeoutMilliseconds, dsStopTimeoutMilliseconds, dsGlobalExtender);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheFelixScrScrServiceProperties {\n");
    
    sb.append("    dsLoglevel: ").append(toIndentedString(dsLoglevel)).append("\n");
    sb.append("    dsFactoryEnabled: ").append(toIndentedString(dsFactoryEnabled)).append("\n");
    sb.append("    dsDelayedKeepInstances: ").append(toIndentedString(dsDelayedKeepInstances)).append("\n");
    sb.append("    dsLockTimeoutMilliseconds: ").append(toIndentedString(dsLockTimeoutMilliseconds)).append("\n");
    sb.append("    dsStopTimeoutMilliseconds: ").append(toIndentedString(dsStopTimeoutMilliseconds)).append("\n");
    sb.append("    dsGlobalExtender: ").append(toIndentedString(dsGlobalExtender)).append("\n");
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

