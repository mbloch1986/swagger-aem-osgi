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

import org.openapitools.client.model.ConfigNodePropertyInteger;
import org.openapitools.client.model.ConfigNodePropertyString;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ComDayCqSearchpromoteImplSearchPromoteServiceImplProperties {
  
  @SerializedName("cq.searchpromote.configuration.server.uri")
  private ConfigNodePropertyString cqSearchpromoteConfigurationServerUri = null;
  @SerializedName("cq.searchpromote.configuration.environment")
  private ConfigNodePropertyString cqSearchpromoteConfigurationEnvironment = null;
  @SerializedName("connection.timeout")
  private ConfigNodePropertyInteger connectionTimeout = null;
  @SerializedName("socket.timeout")
  private ConfigNodePropertyInteger socketTimeout = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getCqSearchpromoteConfigurationServerUri() {
    return cqSearchpromoteConfigurationServerUri;
  }
  public void setCqSearchpromoteConfigurationServerUri(ConfigNodePropertyString cqSearchpromoteConfigurationServerUri) {
    this.cqSearchpromoteConfigurationServerUri = cqSearchpromoteConfigurationServerUri;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getCqSearchpromoteConfigurationEnvironment() {
    return cqSearchpromoteConfigurationEnvironment;
  }
  public void setCqSearchpromoteConfigurationEnvironment(ConfigNodePropertyString cqSearchpromoteConfigurationEnvironment) {
    this.cqSearchpromoteConfigurationEnvironment = cqSearchpromoteConfigurationEnvironment;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getConnectionTimeout() {
    return connectionTimeout;
  }
  public void setConnectionTimeout(ConfigNodePropertyInteger connectionTimeout) {
    this.connectionTimeout = connectionTimeout;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getSocketTimeout() {
    return socketTimeout;
  }
  public void setSocketTimeout(ConfigNodePropertyInteger socketTimeout) {
    this.socketTimeout = socketTimeout;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqSearchpromoteImplSearchPromoteServiceImplProperties comDayCqSearchpromoteImplSearchPromoteServiceImplProperties = (ComDayCqSearchpromoteImplSearchPromoteServiceImplProperties) o;
    return (this.cqSearchpromoteConfigurationServerUri == null ? comDayCqSearchpromoteImplSearchPromoteServiceImplProperties.cqSearchpromoteConfigurationServerUri == null : this.cqSearchpromoteConfigurationServerUri.equals(comDayCqSearchpromoteImplSearchPromoteServiceImplProperties.cqSearchpromoteConfigurationServerUri)) &&
        (this.cqSearchpromoteConfigurationEnvironment == null ? comDayCqSearchpromoteImplSearchPromoteServiceImplProperties.cqSearchpromoteConfigurationEnvironment == null : this.cqSearchpromoteConfigurationEnvironment.equals(comDayCqSearchpromoteImplSearchPromoteServiceImplProperties.cqSearchpromoteConfigurationEnvironment)) &&
        (this.connectionTimeout == null ? comDayCqSearchpromoteImplSearchPromoteServiceImplProperties.connectionTimeout == null : this.connectionTimeout.equals(comDayCqSearchpromoteImplSearchPromoteServiceImplProperties.connectionTimeout)) &&
        (this.socketTimeout == null ? comDayCqSearchpromoteImplSearchPromoteServiceImplProperties.socketTimeout == null : this.socketTimeout.equals(comDayCqSearchpromoteImplSearchPromoteServiceImplProperties.socketTimeout));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.cqSearchpromoteConfigurationServerUri == null ? 0: this.cqSearchpromoteConfigurationServerUri.hashCode());
    result = 31 * result + (this.cqSearchpromoteConfigurationEnvironment == null ? 0: this.cqSearchpromoteConfigurationEnvironment.hashCode());
    result = 31 * result + (this.connectionTimeout == null ? 0: this.connectionTimeout.hashCode());
    result = 31 * result + (this.socketTimeout == null ? 0: this.socketTimeout.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqSearchpromoteImplSearchPromoteServiceImplProperties {\n");
    
    sb.append("  cqSearchpromoteConfigurationServerUri: ").append(cqSearchpromoteConfigurationServerUri).append("\n");
    sb.append("  cqSearchpromoteConfigurationEnvironment: ").append(cqSearchpromoteConfigurationEnvironment).append("\n");
    sb.append("  connectionTimeout: ").append(connectionTimeout).append("\n");
    sb.append("  socketTimeout: ").append(socketTimeout).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
