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
import org.openapitools.client.model.ConfigNodePropertyInteger;
import org.openapitools.client.model.ConfigNodePropertyString;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties {
  
  @SerializedName("handler.name")
  private ConfigNodePropertyString handlerName = null;
  @SerializedName("user.expirationTime")
  private ConfigNodePropertyString userExpirationTime = null;
  @SerializedName("user.autoMembership")
  private ConfigNodePropertyArray userAutoMembership = null;
  @SerializedName("user.propertyMapping")
  private ConfigNodePropertyArray userPropertyMapping = null;
  @SerializedName("user.pathPrefix")
  private ConfigNodePropertyString userPathPrefix = null;
  @SerializedName("user.membershipExpTime")
  private ConfigNodePropertyString userMembershipExpTime = null;
  @SerializedName("user.membershipNestingDepth")
  private ConfigNodePropertyInteger userMembershipNestingDepth = null;
  @SerializedName("user.dynamicMembership")
  private ConfigNodePropertyBoolean userDynamicMembership = null;
  @SerializedName("user.disableMissing")
  private ConfigNodePropertyBoolean userDisableMissing = null;
  @SerializedName("group.expirationTime")
  private ConfigNodePropertyString groupExpirationTime = null;
  @SerializedName("group.autoMembership")
  private ConfigNodePropertyArray groupAutoMembership = null;
  @SerializedName("group.propertyMapping")
  private ConfigNodePropertyArray groupPropertyMapping = null;
  @SerializedName("group.pathPrefix")
  private ConfigNodePropertyString groupPathPrefix = null;
  @SerializedName("enableRFC7613UsercaseMappedProfile")
  private ConfigNodePropertyBoolean enableRFC7613UsercaseMappedProfile = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getHandlerName() {
    return handlerName;
  }
  public void setHandlerName(ConfigNodePropertyString handlerName) {
    this.handlerName = handlerName;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getUserExpirationTime() {
    return userExpirationTime;
  }
  public void setUserExpirationTime(ConfigNodePropertyString userExpirationTime) {
    this.userExpirationTime = userExpirationTime;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getUserAutoMembership() {
    return userAutoMembership;
  }
  public void setUserAutoMembership(ConfigNodePropertyArray userAutoMembership) {
    this.userAutoMembership = userAutoMembership;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getUserPropertyMapping() {
    return userPropertyMapping;
  }
  public void setUserPropertyMapping(ConfigNodePropertyArray userPropertyMapping) {
    this.userPropertyMapping = userPropertyMapping;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getUserPathPrefix() {
    return userPathPrefix;
  }
  public void setUserPathPrefix(ConfigNodePropertyString userPathPrefix) {
    this.userPathPrefix = userPathPrefix;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getUserMembershipExpTime() {
    return userMembershipExpTime;
  }
  public void setUserMembershipExpTime(ConfigNodePropertyString userMembershipExpTime) {
    this.userMembershipExpTime = userMembershipExpTime;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getUserMembershipNestingDepth() {
    return userMembershipNestingDepth;
  }
  public void setUserMembershipNestingDepth(ConfigNodePropertyInteger userMembershipNestingDepth) {
    this.userMembershipNestingDepth = userMembershipNestingDepth;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getUserDynamicMembership() {
    return userDynamicMembership;
  }
  public void setUserDynamicMembership(ConfigNodePropertyBoolean userDynamicMembership) {
    this.userDynamicMembership = userDynamicMembership;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getUserDisableMissing() {
    return userDisableMissing;
  }
  public void setUserDisableMissing(ConfigNodePropertyBoolean userDisableMissing) {
    this.userDisableMissing = userDisableMissing;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getGroupExpirationTime() {
    return groupExpirationTime;
  }
  public void setGroupExpirationTime(ConfigNodePropertyString groupExpirationTime) {
    this.groupExpirationTime = groupExpirationTime;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getGroupAutoMembership() {
    return groupAutoMembership;
  }
  public void setGroupAutoMembership(ConfigNodePropertyArray groupAutoMembership) {
    this.groupAutoMembership = groupAutoMembership;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getGroupPropertyMapping() {
    return groupPropertyMapping;
  }
  public void setGroupPropertyMapping(ConfigNodePropertyArray groupPropertyMapping) {
    this.groupPropertyMapping = groupPropertyMapping;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getGroupPathPrefix() {
    return groupPathPrefix;
  }
  public void setGroupPathPrefix(ConfigNodePropertyString groupPathPrefix) {
    this.groupPathPrefix = groupPathPrefix;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getEnableRFC7613UsercaseMappedProfile() {
    return enableRFC7613UsercaseMappedProfile;
  }
  public void setEnableRFC7613UsercaseMappedProfile(ConfigNodePropertyBoolean enableRFC7613UsercaseMappedProfile) {
    this.enableRFC7613UsercaseMappedProfile = enableRFC7613UsercaseMappedProfile;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties orgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties = (OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties) o;
    return (this.handlerName == null ? orgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.handlerName == null : this.handlerName.equals(orgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.handlerName)) &&
        (this.userExpirationTime == null ? orgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.userExpirationTime == null : this.userExpirationTime.equals(orgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.userExpirationTime)) &&
        (this.userAutoMembership == null ? orgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.userAutoMembership == null : this.userAutoMembership.equals(orgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.userAutoMembership)) &&
        (this.userPropertyMapping == null ? orgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.userPropertyMapping == null : this.userPropertyMapping.equals(orgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.userPropertyMapping)) &&
        (this.userPathPrefix == null ? orgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.userPathPrefix == null : this.userPathPrefix.equals(orgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.userPathPrefix)) &&
        (this.userMembershipExpTime == null ? orgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.userMembershipExpTime == null : this.userMembershipExpTime.equals(orgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.userMembershipExpTime)) &&
        (this.userMembershipNestingDepth == null ? orgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.userMembershipNestingDepth == null : this.userMembershipNestingDepth.equals(orgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.userMembershipNestingDepth)) &&
        (this.userDynamicMembership == null ? orgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.userDynamicMembership == null : this.userDynamicMembership.equals(orgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.userDynamicMembership)) &&
        (this.userDisableMissing == null ? orgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.userDisableMissing == null : this.userDisableMissing.equals(orgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.userDisableMissing)) &&
        (this.groupExpirationTime == null ? orgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.groupExpirationTime == null : this.groupExpirationTime.equals(orgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.groupExpirationTime)) &&
        (this.groupAutoMembership == null ? orgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.groupAutoMembership == null : this.groupAutoMembership.equals(orgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.groupAutoMembership)) &&
        (this.groupPropertyMapping == null ? orgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.groupPropertyMapping == null : this.groupPropertyMapping.equals(orgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.groupPropertyMapping)) &&
        (this.groupPathPrefix == null ? orgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.groupPathPrefix == null : this.groupPathPrefix.equals(orgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.groupPathPrefix)) &&
        (this.enableRFC7613UsercaseMappedProfile == null ? orgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.enableRFC7613UsercaseMappedProfile == null : this.enableRFC7613UsercaseMappedProfile.equals(orgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.enableRFC7613UsercaseMappedProfile));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.handlerName == null ? 0: this.handlerName.hashCode());
    result = 31 * result + (this.userExpirationTime == null ? 0: this.userExpirationTime.hashCode());
    result = 31 * result + (this.userAutoMembership == null ? 0: this.userAutoMembership.hashCode());
    result = 31 * result + (this.userPropertyMapping == null ? 0: this.userPropertyMapping.hashCode());
    result = 31 * result + (this.userPathPrefix == null ? 0: this.userPathPrefix.hashCode());
    result = 31 * result + (this.userMembershipExpTime == null ? 0: this.userMembershipExpTime.hashCode());
    result = 31 * result + (this.userMembershipNestingDepth == null ? 0: this.userMembershipNestingDepth.hashCode());
    result = 31 * result + (this.userDynamicMembership == null ? 0: this.userDynamicMembership.hashCode());
    result = 31 * result + (this.userDisableMissing == null ? 0: this.userDisableMissing.hashCode());
    result = 31 * result + (this.groupExpirationTime == null ? 0: this.groupExpirationTime.hashCode());
    result = 31 * result + (this.groupAutoMembership == null ? 0: this.groupAutoMembership.hashCode());
    result = 31 * result + (this.groupPropertyMapping == null ? 0: this.groupPropertyMapping.hashCode());
    result = 31 * result + (this.groupPathPrefix == null ? 0: this.groupPathPrefix.hashCode());
    result = 31 * result + (this.enableRFC7613UsercaseMappedProfile == null ? 0: this.enableRFC7613UsercaseMappedProfile.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties {\n");
    
    sb.append("  handlerName: ").append(handlerName).append("\n");
    sb.append("  userExpirationTime: ").append(userExpirationTime).append("\n");
    sb.append("  userAutoMembership: ").append(userAutoMembership).append("\n");
    sb.append("  userPropertyMapping: ").append(userPropertyMapping).append("\n");
    sb.append("  userPathPrefix: ").append(userPathPrefix).append("\n");
    sb.append("  userMembershipExpTime: ").append(userMembershipExpTime).append("\n");
    sb.append("  userMembershipNestingDepth: ").append(userMembershipNestingDepth).append("\n");
    sb.append("  userDynamicMembership: ").append(userDynamicMembership).append("\n");
    sb.append("  userDisableMissing: ").append(userDisableMissing).append("\n");
    sb.append("  groupExpirationTime: ").append(groupExpirationTime).append("\n");
    sb.append("  groupAutoMembership: ").append(groupAutoMembership).append("\n");
    sb.append("  groupPropertyMapping: ").append(groupPropertyMapping).append("\n");
    sb.append("  groupPathPrefix: ").append(groupPathPrefix).append("\n");
    sb.append("  enableRFC7613UsercaseMappedProfile: ").append(enableRFC7613UsercaseMappedProfile).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}