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
import org.openapitools.model.ConfigNodePropertyInteger;
import javax.validation.constraints.*;

/**
 * ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportIProperties
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2019-08-05T00:58:47.028Z[GMT]")
public class ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportIProperties   {
  @JsonProperty("cq.social.reporting.analytics.polling.importer.interval")
  private ConfigNodePropertyInteger cqSocialReportingAnalyticsPollingImporterInterval = null;

  @JsonProperty("cq.social.reporting.analytics.polling.importer.pageSize")
  private ConfigNodePropertyInteger cqSocialReportingAnalyticsPollingImporterPageSize = null;

  public ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportIProperties cqSocialReportingAnalyticsPollingImporterInterval(ConfigNodePropertyInteger cqSocialReportingAnalyticsPollingImporterInterval) {
    this.cqSocialReportingAnalyticsPollingImporterInterval = cqSocialReportingAnalyticsPollingImporterInterval;
    return this;
  }

  /**
   * Get cqSocialReportingAnalyticsPollingImporterInterval
   * @return cqSocialReportingAnalyticsPollingImporterInterval
   **/
  @JsonProperty("cq.social.reporting.analytics.polling.importer.interval")
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getCqSocialReportingAnalyticsPollingImporterInterval() {
    return cqSocialReportingAnalyticsPollingImporterInterval;
  }

  public void setCqSocialReportingAnalyticsPollingImporterInterval(ConfigNodePropertyInteger cqSocialReportingAnalyticsPollingImporterInterval) {
    this.cqSocialReportingAnalyticsPollingImporterInterval = cqSocialReportingAnalyticsPollingImporterInterval;
  }

  public ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportIProperties cqSocialReportingAnalyticsPollingImporterPageSize(ConfigNodePropertyInteger cqSocialReportingAnalyticsPollingImporterPageSize) {
    this.cqSocialReportingAnalyticsPollingImporterPageSize = cqSocialReportingAnalyticsPollingImporterPageSize;
    return this;
  }

  /**
   * Get cqSocialReportingAnalyticsPollingImporterPageSize
   * @return cqSocialReportingAnalyticsPollingImporterPageSize
   **/
  @JsonProperty("cq.social.reporting.analytics.polling.importer.pageSize")
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getCqSocialReportingAnalyticsPollingImporterPageSize() {
    return cqSocialReportingAnalyticsPollingImporterPageSize;
  }

  public void setCqSocialReportingAnalyticsPollingImporterPageSize(ConfigNodePropertyInteger cqSocialReportingAnalyticsPollingImporterPageSize) {
    this.cqSocialReportingAnalyticsPollingImporterPageSize = cqSocialReportingAnalyticsPollingImporterPageSize;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportIProperties comAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportIProperties = (ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportIProperties) o;
    return Objects.equals(this.cqSocialReportingAnalyticsPollingImporterInterval, comAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportIProperties.cqSocialReportingAnalyticsPollingImporterInterval) &&
        Objects.equals(this.cqSocialReportingAnalyticsPollingImporterPageSize, comAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportIProperties.cqSocialReportingAnalyticsPollingImporterPageSize);
  }

  @Override
  public int hashCode() {
    return Objects.hash(cqSocialReportingAnalyticsPollingImporterInterval, cqSocialReportingAnalyticsPollingImporterPageSize);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportIProperties {\n");
    
    sb.append("    cqSocialReportingAnalyticsPollingImporterInterval: ").append(toIndentedString(cqSocialReportingAnalyticsPollingImporterInterval)).append("\n");
    sb.append("    cqSocialReportingAnalyticsPollingImporterPageSize: ").append(toIndentedString(cqSocialReportingAnalyticsPollingImporterPageSize)).append("\n");
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
