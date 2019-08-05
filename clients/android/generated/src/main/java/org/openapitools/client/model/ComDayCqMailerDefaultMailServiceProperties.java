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
public class ComDayCqMailerDefaultMailServiceProperties {
  
  @SerializedName("smtp.host")
  private ConfigNodePropertyString smtpHost = null;
  @SerializedName("smtp.port")
  private ConfigNodePropertyInteger smtpPort = null;
  @SerializedName("smtp.user")
  private ConfigNodePropertyString smtpUser = null;
  @SerializedName("smtp.password")
  private ConfigNodePropertyString smtpPassword = null;
  @SerializedName("from.address")
  private ConfigNodePropertyString fromAddress = null;
  @SerializedName("smtp.ssl")
  private ConfigNodePropertyBoolean smtpSsl = null;
  @SerializedName("smtp.starttls")
  private ConfigNodePropertyBoolean smtpStarttls = null;
  @SerializedName("debug.email")
  private ConfigNodePropertyBoolean debugEmail = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getSmtpHost() {
    return smtpHost;
  }
  public void setSmtpHost(ConfigNodePropertyString smtpHost) {
    this.smtpHost = smtpHost;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getSmtpPort() {
    return smtpPort;
  }
  public void setSmtpPort(ConfigNodePropertyInteger smtpPort) {
    this.smtpPort = smtpPort;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getSmtpUser() {
    return smtpUser;
  }
  public void setSmtpUser(ConfigNodePropertyString smtpUser) {
    this.smtpUser = smtpUser;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getSmtpPassword() {
    return smtpPassword;
  }
  public void setSmtpPassword(ConfigNodePropertyString smtpPassword) {
    this.smtpPassword = smtpPassword;
  }

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
  public ConfigNodePropertyBoolean getSmtpSsl() {
    return smtpSsl;
  }
  public void setSmtpSsl(ConfigNodePropertyBoolean smtpSsl) {
    this.smtpSsl = smtpSsl;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getSmtpStarttls() {
    return smtpStarttls;
  }
  public void setSmtpStarttls(ConfigNodePropertyBoolean smtpStarttls) {
    this.smtpStarttls = smtpStarttls;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getDebugEmail() {
    return debugEmail;
  }
  public void setDebugEmail(ConfigNodePropertyBoolean debugEmail) {
    this.debugEmail = debugEmail;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqMailerDefaultMailServiceProperties comDayCqMailerDefaultMailServiceProperties = (ComDayCqMailerDefaultMailServiceProperties) o;
    return (this.smtpHost == null ? comDayCqMailerDefaultMailServiceProperties.smtpHost == null : this.smtpHost.equals(comDayCqMailerDefaultMailServiceProperties.smtpHost)) &&
        (this.smtpPort == null ? comDayCqMailerDefaultMailServiceProperties.smtpPort == null : this.smtpPort.equals(comDayCqMailerDefaultMailServiceProperties.smtpPort)) &&
        (this.smtpUser == null ? comDayCqMailerDefaultMailServiceProperties.smtpUser == null : this.smtpUser.equals(comDayCqMailerDefaultMailServiceProperties.smtpUser)) &&
        (this.smtpPassword == null ? comDayCqMailerDefaultMailServiceProperties.smtpPassword == null : this.smtpPassword.equals(comDayCqMailerDefaultMailServiceProperties.smtpPassword)) &&
        (this.fromAddress == null ? comDayCqMailerDefaultMailServiceProperties.fromAddress == null : this.fromAddress.equals(comDayCqMailerDefaultMailServiceProperties.fromAddress)) &&
        (this.smtpSsl == null ? comDayCqMailerDefaultMailServiceProperties.smtpSsl == null : this.smtpSsl.equals(comDayCqMailerDefaultMailServiceProperties.smtpSsl)) &&
        (this.smtpStarttls == null ? comDayCqMailerDefaultMailServiceProperties.smtpStarttls == null : this.smtpStarttls.equals(comDayCqMailerDefaultMailServiceProperties.smtpStarttls)) &&
        (this.debugEmail == null ? comDayCqMailerDefaultMailServiceProperties.debugEmail == null : this.debugEmail.equals(comDayCqMailerDefaultMailServiceProperties.debugEmail));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.smtpHost == null ? 0: this.smtpHost.hashCode());
    result = 31 * result + (this.smtpPort == null ? 0: this.smtpPort.hashCode());
    result = 31 * result + (this.smtpUser == null ? 0: this.smtpUser.hashCode());
    result = 31 * result + (this.smtpPassword == null ? 0: this.smtpPassword.hashCode());
    result = 31 * result + (this.fromAddress == null ? 0: this.fromAddress.hashCode());
    result = 31 * result + (this.smtpSsl == null ? 0: this.smtpSsl.hashCode());
    result = 31 * result + (this.smtpStarttls == null ? 0: this.smtpStarttls.hashCode());
    result = 31 * result + (this.debugEmail == null ? 0: this.debugEmail.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqMailerDefaultMailServiceProperties {\n");
    
    sb.append("  smtpHost: ").append(smtpHost).append("\n");
    sb.append("  smtpPort: ").append(smtpPort).append("\n");
    sb.append("  smtpUser: ").append(smtpUser).append("\n");
    sb.append("  smtpPassword: ").append(smtpPassword).append("\n");
    sb.append("  fromAddress: ").append(fromAddress).append("\n");
    sb.append("  smtpSsl: ").append(smtpSsl).append("\n");
    sb.append("  smtpStarttls: ").append(smtpStarttls).append("\n");
    sb.append("  debugEmail: ").append(debugEmail).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}