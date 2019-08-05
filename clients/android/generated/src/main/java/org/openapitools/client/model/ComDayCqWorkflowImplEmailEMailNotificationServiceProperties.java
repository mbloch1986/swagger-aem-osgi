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
import org.openapitools.client.model.ConfigNodePropertyString;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ComDayCqWorkflowImplEmailEMailNotificationServiceProperties {
  
  @SerializedName("from.address")
  private ConfigNodePropertyString fromAddress = null;
  @SerializedName("host.prefix")
  private ConfigNodePropertyString hostPrefix = null;
  @SerializedName("notify.onabort")
  private ConfigNodePropertyBoolean notifyOnabort = null;
  @SerializedName("notify.oncomplete")
  private ConfigNodePropertyBoolean notifyOncomplete = null;
  @SerializedName("notify.oncontainercomplete")
  private ConfigNodePropertyBoolean notifyOncontainercomplete = null;
  @SerializedName("notify.useronly")
  private ConfigNodePropertyBoolean notifyUseronly = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getFromAddress() {
    return fromAddress;
  }
  public void setFromAddress(ConfigNodePropertyString fromAddress) {
    this.fromAddress = fromAddress;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getHostPrefix() {
    return hostPrefix;
  }
  public void setHostPrefix(ConfigNodePropertyString hostPrefix) {
    this.hostPrefix = hostPrefix;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getNotifyOnabort() {
    return notifyOnabort;
  }
  public void setNotifyOnabort(ConfigNodePropertyBoolean notifyOnabort) {
    this.notifyOnabort = notifyOnabort;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getNotifyOncomplete() {
    return notifyOncomplete;
  }
  public void setNotifyOncomplete(ConfigNodePropertyBoolean notifyOncomplete) {
    this.notifyOncomplete = notifyOncomplete;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getNotifyOncontainercomplete() {
    return notifyOncontainercomplete;
  }
  public void setNotifyOncontainercomplete(ConfigNodePropertyBoolean notifyOncontainercomplete) {
    this.notifyOncontainercomplete = notifyOncontainercomplete;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getNotifyUseronly() {
    return notifyUseronly;
  }
  public void setNotifyUseronly(ConfigNodePropertyBoolean notifyUseronly) {
    this.notifyUseronly = notifyUseronly;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqWorkflowImplEmailEMailNotificationServiceProperties comDayCqWorkflowImplEmailEMailNotificationServiceProperties = (ComDayCqWorkflowImplEmailEMailNotificationServiceProperties) o;
    return (this.fromAddress == null ? comDayCqWorkflowImplEmailEMailNotificationServiceProperties.fromAddress == null : this.fromAddress.equals(comDayCqWorkflowImplEmailEMailNotificationServiceProperties.fromAddress)) &&
        (this.hostPrefix == null ? comDayCqWorkflowImplEmailEMailNotificationServiceProperties.hostPrefix == null : this.hostPrefix.equals(comDayCqWorkflowImplEmailEMailNotificationServiceProperties.hostPrefix)) &&
        (this.notifyOnabort == null ? comDayCqWorkflowImplEmailEMailNotificationServiceProperties.notifyOnabort == null : this.notifyOnabort.equals(comDayCqWorkflowImplEmailEMailNotificationServiceProperties.notifyOnabort)) &&
        (this.notifyOncomplete == null ? comDayCqWorkflowImplEmailEMailNotificationServiceProperties.notifyOncomplete == null : this.notifyOncomplete.equals(comDayCqWorkflowImplEmailEMailNotificationServiceProperties.notifyOncomplete)) &&
        (this.notifyOncontainercomplete == null ? comDayCqWorkflowImplEmailEMailNotificationServiceProperties.notifyOncontainercomplete == null : this.notifyOncontainercomplete.equals(comDayCqWorkflowImplEmailEMailNotificationServiceProperties.notifyOncontainercomplete)) &&
        (this.notifyUseronly == null ? comDayCqWorkflowImplEmailEMailNotificationServiceProperties.notifyUseronly == null : this.notifyUseronly.equals(comDayCqWorkflowImplEmailEMailNotificationServiceProperties.notifyUseronly));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.fromAddress == null ? 0: this.fromAddress.hashCode());
    result = 31 * result + (this.hostPrefix == null ? 0: this.hostPrefix.hashCode());
    result = 31 * result + (this.notifyOnabort == null ? 0: this.notifyOnabort.hashCode());
    result = 31 * result + (this.notifyOncomplete == null ? 0: this.notifyOncomplete.hashCode());
    result = 31 * result + (this.notifyOncontainercomplete == null ? 0: this.notifyOncontainercomplete.hashCode());
    result = 31 * result + (this.notifyUseronly == null ? 0: this.notifyUseronly.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqWorkflowImplEmailEMailNotificationServiceProperties {\n");
    
    sb.append("  fromAddress: ").append(fromAddress).append("\n");
    sb.append("  hostPrefix: ").append(hostPrefix).append("\n");
    sb.append("  notifyOnabort: ").append(notifyOnabort).append("\n");
    sb.append("  notifyOncomplete: ").append(notifyOncomplete).append("\n");
    sb.append("  notifyOncontainercomplete: ").append(notifyOncontainercomplete).append("\n");
    sb.append("  notifyUseronly: ").append(notifyUseronly).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}