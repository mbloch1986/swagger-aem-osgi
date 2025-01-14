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
public class OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExProperties {
  
  @SerializedName("jaas.ranking")
  private ConfigNodePropertyInteger jaasRanking = null;
  @SerializedName("jaas.controlFlag")
  private ConfigNodePropertyString jaasControlFlag = null;
  @SerializedName("jaas.realmName")
  private ConfigNodePropertyString jaasRealmName = null;
  @SerializedName("idp.name")
  private ConfigNodePropertyString idpName = null;
  @SerializedName("sync.handlerName")
  private ConfigNodePropertyString syncHandlerName = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getJaasRanking() {
    return jaasRanking;
  }
  public void setJaasRanking(ConfigNodePropertyInteger jaasRanking) {
    this.jaasRanking = jaasRanking;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getJaasControlFlag() {
    return jaasControlFlag;
  }
  public void setJaasControlFlag(ConfigNodePropertyString jaasControlFlag) {
    this.jaasControlFlag = jaasControlFlag;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getJaasRealmName() {
    return jaasRealmName;
  }
  public void setJaasRealmName(ConfigNodePropertyString jaasRealmName) {
    this.jaasRealmName = jaasRealmName;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getIdpName() {
    return idpName;
  }
  public void setIdpName(ConfigNodePropertyString idpName) {
    this.idpName = idpName;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getSyncHandlerName() {
    return syncHandlerName;
  }
  public void setSyncHandlerName(ConfigNodePropertyString syncHandlerName) {
    this.syncHandlerName = syncHandlerName;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExProperties orgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExProperties = (OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExProperties) o;
    return (this.jaasRanking == null ? orgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExProperties.jaasRanking == null : this.jaasRanking.equals(orgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExProperties.jaasRanking)) &&
        (this.jaasControlFlag == null ? orgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExProperties.jaasControlFlag == null : this.jaasControlFlag.equals(orgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExProperties.jaasControlFlag)) &&
        (this.jaasRealmName == null ? orgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExProperties.jaasRealmName == null : this.jaasRealmName.equals(orgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExProperties.jaasRealmName)) &&
        (this.idpName == null ? orgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExProperties.idpName == null : this.idpName.equals(orgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExProperties.idpName)) &&
        (this.syncHandlerName == null ? orgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExProperties.syncHandlerName == null : this.syncHandlerName.equals(orgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExProperties.syncHandlerName));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.jaasRanking == null ? 0: this.jaasRanking.hashCode());
    result = 31 * result + (this.jaasControlFlag == null ? 0: this.jaasControlFlag.hashCode());
    result = 31 * result + (this.jaasRealmName == null ? 0: this.jaasRealmName.hashCode());
    result = 31 * result + (this.idpName == null ? 0: this.idpName.hashCode());
    result = 31 * result + (this.syncHandlerName == null ? 0: this.syncHandlerName.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExProperties {\n");
    
    sb.append("  jaasRanking: ").append(jaasRanking).append("\n");
    sb.append("  jaasControlFlag: ").append(jaasControlFlag).append("\n");
    sb.append("  jaasRealmName: ").append(jaasRealmName).append("\n");
    sb.append("  idpName: ").append(idpName).append("\n");
    sb.append("  syncHandlerName: ").append(syncHandlerName).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
