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
public class ComDayCqDamCoreImplExpiryNotificationJobImplProperties {
  
  @SerializedName("cq.dam.expiry.notification.scheduler.istimebased")
  private ConfigNodePropertyBoolean cqDamExpiryNotificationSchedulerIstimebased = null;
  @SerializedName("cq.dam.expiry.notification.scheduler.timebased.rule")
  private ConfigNodePropertyString cqDamExpiryNotificationSchedulerTimebasedRule = null;
  @SerializedName("cq.dam.expiry.notification.scheduler.period.rule")
  private ConfigNodePropertyInteger cqDamExpiryNotificationSchedulerPeriodRule = null;
  @SerializedName("send_email")
  private ConfigNodePropertyBoolean sendEmail = null;
  @SerializedName("asset_expired_limit")
  private ConfigNodePropertyInteger assetExpiredLimit = null;
  @SerializedName("prior_notification_seconds")
  private ConfigNodePropertyInteger priorNotificationSeconds = null;
  @SerializedName("cq.dam.expiry.notification.url.protocol")
  private ConfigNodePropertyString cqDamExpiryNotificationUrlProtocol = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getCqDamExpiryNotificationSchedulerIstimebased() {
    return cqDamExpiryNotificationSchedulerIstimebased;
  }
  public void setCqDamExpiryNotificationSchedulerIstimebased(ConfigNodePropertyBoolean cqDamExpiryNotificationSchedulerIstimebased) {
    this.cqDamExpiryNotificationSchedulerIstimebased = cqDamExpiryNotificationSchedulerIstimebased;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getCqDamExpiryNotificationSchedulerTimebasedRule() {
    return cqDamExpiryNotificationSchedulerTimebasedRule;
  }
  public void setCqDamExpiryNotificationSchedulerTimebasedRule(ConfigNodePropertyString cqDamExpiryNotificationSchedulerTimebasedRule) {
    this.cqDamExpiryNotificationSchedulerTimebasedRule = cqDamExpiryNotificationSchedulerTimebasedRule;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getCqDamExpiryNotificationSchedulerPeriodRule() {
    return cqDamExpiryNotificationSchedulerPeriodRule;
  }
  public void setCqDamExpiryNotificationSchedulerPeriodRule(ConfigNodePropertyInteger cqDamExpiryNotificationSchedulerPeriodRule) {
    this.cqDamExpiryNotificationSchedulerPeriodRule = cqDamExpiryNotificationSchedulerPeriodRule;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getSendEmail() {
    return sendEmail;
  }
  public void setSendEmail(ConfigNodePropertyBoolean sendEmail) {
    this.sendEmail = sendEmail;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getAssetExpiredLimit() {
    return assetExpiredLimit;
  }
  public void setAssetExpiredLimit(ConfigNodePropertyInteger assetExpiredLimit) {
    this.assetExpiredLimit = assetExpiredLimit;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getPriorNotificationSeconds() {
    return priorNotificationSeconds;
  }
  public void setPriorNotificationSeconds(ConfigNodePropertyInteger priorNotificationSeconds) {
    this.priorNotificationSeconds = priorNotificationSeconds;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getCqDamExpiryNotificationUrlProtocol() {
    return cqDamExpiryNotificationUrlProtocol;
  }
  public void setCqDamExpiryNotificationUrlProtocol(ConfigNodePropertyString cqDamExpiryNotificationUrlProtocol) {
    this.cqDamExpiryNotificationUrlProtocol = cqDamExpiryNotificationUrlProtocol;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqDamCoreImplExpiryNotificationJobImplProperties comDayCqDamCoreImplExpiryNotificationJobImplProperties = (ComDayCqDamCoreImplExpiryNotificationJobImplProperties) o;
    return (this.cqDamExpiryNotificationSchedulerIstimebased == null ? comDayCqDamCoreImplExpiryNotificationJobImplProperties.cqDamExpiryNotificationSchedulerIstimebased == null : this.cqDamExpiryNotificationSchedulerIstimebased.equals(comDayCqDamCoreImplExpiryNotificationJobImplProperties.cqDamExpiryNotificationSchedulerIstimebased)) &&
        (this.cqDamExpiryNotificationSchedulerTimebasedRule == null ? comDayCqDamCoreImplExpiryNotificationJobImplProperties.cqDamExpiryNotificationSchedulerTimebasedRule == null : this.cqDamExpiryNotificationSchedulerTimebasedRule.equals(comDayCqDamCoreImplExpiryNotificationJobImplProperties.cqDamExpiryNotificationSchedulerTimebasedRule)) &&
        (this.cqDamExpiryNotificationSchedulerPeriodRule == null ? comDayCqDamCoreImplExpiryNotificationJobImplProperties.cqDamExpiryNotificationSchedulerPeriodRule == null : this.cqDamExpiryNotificationSchedulerPeriodRule.equals(comDayCqDamCoreImplExpiryNotificationJobImplProperties.cqDamExpiryNotificationSchedulerPeriodRule)) &&
        (this.sendEmail == null ? comDayCqDamCoreImplExpiryNotificationJobImplProperties.sendEmail == null : this.sendEmail.equals(comDayCqDamCoreImplExpiryNotificationJobImplProperties.sendEmail)) &&
        (this.assetExpiredLimit == null ? comDayCqDamCoreImplExpiryNotificationJobImplProperties.assetExpiredLimit == null : this.assetExpiredLimit.equals(comDayCqDamCoreImplExpiryNotificationJobImplProperties.assetExpiredLimit)) &&
        (this.priorNotificationSeconds == null ? comDayCqDamCoreImplExpiryNotificationJobImplProperties.priorNotificationSeconds == null : this.priorNotificationSeconds.equals(comDayCqDamCoreImplExpiryNotificationJobImplProperties.priorNotificationSeconds)) &&
        (this.cqDamExpiryNotificationUrlProtocol == null ? comDayCqDamCoreImplExpiryNotificationJobImplProperties.cqDamExpiryNotificationUrlProtocol == null : this.cqDamExpiryNotificationUrlProtocol.equals(comDayCqDamCoreImplExpiryNotificationJobImplProperties.cqDamExpiryNotificationUrlProtocol));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.cqDamExpiryNotificationSchedulerIstimebased == null ? 0: this.cqDamExpiryNotificationSchedulerIstimebased.hashCode());
    result = 31 * result + (this.cqDamExpiryNotificationSchedulerTimebasedRule == null ? 0: this.cqDamExpiryNotificationSchedulerTimebasedRule.hashCode());
    result = 31 * result + (this.cqDamExpiryNotificationSchedulerPeriodRule == null ? 0: this.cqDamExpiryNotificationSchedulerPeriodRule.hashCode());
    result = 31 * result + (this.sendEmail == null ? 0: this.sendEmail.hashCode());
    result = 31 * result + (this.assetExpiredLimit == null ? 0: this.assetExpiredLimit.hashCode());
    result = 31 * result + (this.priorNotificationSeconds == null ? 0: this.priorNotificationSeconds.hashCode());
    result = 31 * result + (this.cqDamExpiryNotificationUrlProtocol == null ? 0: this.cqDamExpiryNotificationUrlProtocol.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqDamCoreImplExpiryNotificationJobImplProperties {\n");
    
    sb.append("  cqDamExpiryNotificationSchedulerIstimebased: ").append(cqDamExpiryNotificationSchedulerIstimebased).append("\n");
    sb.append("  cqDamExpiryNotificationSchedulerTimebasedRule: ").append(cqDamExpiryNotificationSchedulerTimebasedRule).append("\n");
    sb.append("  cqDamExpiryNotificationSchedulerPeriodRule: ").append(cqDamExpiryNotificationSchedulerPeriodRule).append("\n");
    sb.append("  sendEmail: ").append(sendEmail).append("\n");
    sb.append("  assetExpiredLimit: ").append(assetExpiredLimit).append("\n");
    sb.append("  priorNotificationSeconds: ").append(priorNotificationSeconds).append("\n");
    sb.append("  cqDamExpiryNotificationUrlProtocol: ").append(cqDamExpiryNotificationUrlProtocol).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
