package org.openapitools.model;

import org.openapitools.model.ConfigNodePropertyBoolean;
import org.openapitools.model.ConfigNodePropertyDropDown;
import org.openapitools.model.ConfigNodePropertyInteger;
import org.openapitools.model.ConfigNodePropertyString;
import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties   {
  
  private @Valid ConfigNodePropertyString usersPath = null;
  private @Valid ConfigNodePropertyString groupsPath = null;
  private @Valid ConfigNodePropertyString systemRelativePath = null;
  private @Valid ConfigNodePropertyInteger defaultDepth = null;
  private @Valid ConfigNodePropertyDropDown importBehavior = null;
  private @Valid ConfigNodePropertyString passwordHashAlgorithm = null;
  private @Valid ConfigNodePropertyInteger passwordHashIterations = null;
  private @Valid ConfigNodePropertyInteger passwordSaltSize = null;
  private @Valid ConfigNodePropertyBoolean omitAdminPw = null;
  private @Valid ConfigNodePropertyBoolean supportAutoSave = null;
  private @Valid ConfigNodePropertyInteger passwordMaxAge = null;
  private @Valid ConfigNodePropertyBoolean initialPasswordChange = null;
  private @Valid ConfigNodePropertyInteger passwordHistorySize = null;
  private @Valid ConfigNodePropertyBoolean passwordExpiryForAdmin = null;
  private @Valid ConfigNodePropertyInteger cacheExpiration = null;
  private @Valid ConfigNodePropertyBoolean enableRFC7613UsercaseMappedProfile = null;

  /**
   **/
  public OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties usersPath(ConfigNodePropertyString usersPath) {
    this.usersPath = usersPath;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("usersPath")
  public ConfigNodePropertyString getUsersPath() {
    return usersPath;
  }
  public void setUsersPath(ConfigNodePropertyString usersPath) {
    this.usersPath = usersPath;
  }

  /**
   **/
  public OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties groupsPath(ConfigNodePropertyString groupsPath) {
    this.groupsPath = groupsPath;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("groupsPath")
  public ConfigNodePropertyString getGroupsPath() {
    return groupsPath;
  }
  public void setGroupsPath(ConfigNodePropertyString groupsPath) {
    this.groupsPath = groupsPath;
  }

  /**
   **/
  public OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties systemRelativePath(ConfigNodePropertyString systemRelativePath) {
    this.systemRelativePath = systemRelativePath;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("systemRelativePath")
  public ConfigNodePropertyString getSystemRelativePath() {
    return systemRelativePath;
  }
  public void setSystemRelativePath(ConfigNodePropertyString systemRelativePath) {
    this.systemRelativePath = systemRelativePath;
  }

  /**
   **/
  public OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties defaultDepth(ConfigNodePropertyInteger defaultDepth) {
    this.defaultDepth = defaultDepth;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("defaultDepth")
  public ConfigNodePropertyInteger getDefaultDepth() {
    return defaultDepth;
  }
  public void setDefaultDepth(ConfigNodePropertyInteger defaultDepth) {
    this.defaultDepth = defaultDepth;
  }

  /**
   **/
  public OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties importBehavior(ConfigNodePropertyDropDown importBehavior) {
    this.importBehavior = importBehavior;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("importBehavior")
  public ConfigNodePropertyDropDown getImportBehavior() {
    return importBehavior;
  }
  public void setImportBehavior(ConfigNodePropertyDropDown importBehavior) {
    this.importBehavior = importBehavior;
  }

  /**
   **/
  public OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties passwordHashAlgorithm(ConfigNodePropertyString passwordHashAlgorithm) {
    this.passwordHashAlgorithm = passwordHashAlgorithm;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("passwordHashAlgorithm")
  public ConfigNodePropertyString getPasswordHashAlgorithm() {
    return passwordHashAlgorithm;
  }
  public void setPasswordHashAlgorithm(ConfigNodePropertyString passwordHashAlgorithm) {
    this.passwordHashAlgorithm = passwordHashAlgorithm;
  }

  /**
   **/
  public OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties passwordHashIterations(ConfigNodePropertyInteger passwordHashIterations) {
    this.passwordHashIterations = passwordHashIterations;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("passwordHashIterations")
  public ConfigNodePropertyInteger getPasswordHashIterations() {
    return passwordHashIterations;
  }
  public void setPasswordHashIterations(ConfigNodePropertyInteger passwordHashIterations) {
    this.passwordHashIterations = passwordHashIterations;
  }

  /**
   **/
  public OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties passwordSaltSize(ConfigNodePropertyInteger passwordSaltSize) {
    this.passwordSaltSize = passwordSaltSize;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("passwordSaltSize")
  public ConfigNodePropertyInteger getPasswordSaltSize() {
    return passwordSaltSize;
  }
  public void setPasswordSaltSize(ConfigNodePropertyInteger passwordSaltSize) {
    this.passwordSaltSize = passwordSaltSize;
  }

  /**
   **/
  public OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties omitAdminPw(ConfigNodePropertyBoolean omitAdminPw) {
    this.omitAdminPw = omitAdminPw;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("omitAdminPw")
  public ConfigNodePropertyBoolean getOmitAdminPw() {
    return omitAdminPw;
  }
  public void setOmitAdminPw(ConfigNodePropertyBoolean omitAdminPw) {
    this.omitAdminPw = omitAdminPw;
  }

  /**
   **/
  public OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties supportAutoSave(ConfigNodePropertyBoolean supportAutoSave) {
    this.supportAutoSave = supportAutoSave;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("supportAutoSave")
  public ConfigNodePropertyBoolean getSupportAutoSave() {
    return supportAutoSave;
  }
  public void setSupportAutoSave(ConfigNodePropertyBoolean supportAutoSave) {
    this.supportAutoSave = supportAutoSave;
  }

  /**
   **/
  public OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties passwordMaxAge(ConfigNodePropertyInteger passwordMaxAge) {
    this.passwordMaxAge = passwordMaxAge;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("passwordMaxAge")
  public ConfigNodePropertyInteger getPasswordMaxAge() {
    return passwordMaxAge;
  }
  public void setPasswordMaxAge(ConfigNodePropertyInteger passwordMaxAge) {
    this.passwordMaxAge = passwordMaxAge;
  }

  /**
   **/
  public OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties initialPasswordChange(ConfigNodePropertyBoolean initialPasswordChange) {
    this.initialPasswordChange = initialPasswordChange;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("initialPasswordChange")
  public ConfigNodePropertyBoolean getInitialPasswordChange() {
    return initialPasswordChange;
  }
  public void setInitialPasswordChange(ConfigNodePropertyBoolean initialPasswordChange) {
    this.initialPasswordChange = initialPasswordChange;
  }

  /**
   **/
  public OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties passwordHistorySize(ConfigNodePropertyInteger passwordHistorySize) {
    this.passwordHistorySize = passwordHistorySize;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("passwordHistorySize")
  public ConfigNodePropertyInteger getPasswordHistorySize() {
    return passwordHistorySize;
  }
  public void setPasswordHistorySize(ConfigNodePropertyInteger passwordHistorySize) {
    this.passwordHistorySize = passwordHistorySize;
  }

  /**
   **/
  public OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties passwordExpiryForAdmin(ConfigNodePropertyBoolean passwordExpiryForAdmin) {
    this.passwordExpiryForAdmin = passwordExpiryForAdmin;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("passwordExpiryForAdmin")
  public ConfigNodePropertyBoolean getPasswordExpiryForAdmin() {
    return passwordExpiryForAdmin;
  }
  public void setPasswordExpiryForAdmin(ConfigNodePropertyBoolean passwordExpiryForAdmin) {
    this.passwordExpiryForAdmin = passwordExpiryForAdmin;
  }

  /**
   **/
  public OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties cacheExpiration(ConfigNodePropertyInteger cacheExpiration) {
    this.cacheExpiration = cacheExpiration;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("cacheExpiration")
  public ConfigNodePropertyInteger getCacheExpiration() {
    return cacheExpiration;
  }
  public void setCacheExpiration(ConfigNodePropertyInteger cacheExpiration) {
    this.cacheExpiration = cacheExpiration;
  }

  /**
   **/
  public OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties enableRFC7613UsercaseMappedProfile(ConfigNodePropertyBoolean enableRFC7613UsercaseMappedProfile) {
    this.enableRFC7613UsercaseMappedProfile = enableRFC7613UsercaseMappedProfile;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("enableRFC7613UsercaseMappedProfile")
  public ConfigNodePropertyBoolean getEnableRFC7613UsercaseMappedProfile() {
    return enableRFC7613UsercaseMappedProfile;
  }
  public void setEnableRFC7613UsercaseMappedProfile(ConfigNodePropertyBoolean enableRFC7613UsercaseMappedProfile) {
    this.enableRFC7613UsercaseMappedProfile = enableRFC7613UsercaseMappedProfile;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties orgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties = (OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties) o;
    return Objects.equals(usersPath, orgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.usersPath) &&
        Objects.equals(groupsPath, orgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.groupsPath) &&
        Objects.equals(systemRelativePath, orgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.systemRelativePath) &&
        Objects.equals(defaultDepth, orgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.defaultDepth) &&
        Objects.equals(importBehavior, orgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.importBehavior) &&
        Objects.equals(passwordHashAlgorithm, orgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.passwordHashAlgorithm) &&
        Objects.equals(passwordHashIterations, orgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.passwordHashIterations) &&
        Objects.equals(passwordSaltSize, orgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.passwordSaltSize) &&
        Objects.equals(omitAdminPw, orgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.omitAdminPw) &&
        Objects.equals(supportAutoSave, orgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.supportAutoSave) &&
        Objects.equals(passwordMaxAge, orgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.passwordMaxAge) &&
        Objects.equals(initialPasswordChange, orgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.initialPasswordChange) &&
        Objects.equals(passwordHistorySize, orgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.passwordHistorySize) &&
        Objects.equals(passwordExpiryForAdmin, orgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.passwordExpiryForAdmin) &&
        Objects.equals(cacheExpiration, orgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.cacheExpiration) &&
        Objects.equals(enableRFC7613UsercaseMappedProfile, orgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.enableRFC7613UsercaseMappedProfile);
  }

  @Override
  public int hashCode() {
    return Objects.hash(usersPath, groupsPath, systemRelativePath, defaultDepth, importBehavior, passwordHashAlgorithm, passwordHashIterations, passwordSaltSize, omitAdminPw, supportAutoSave, passwordMaxAge, initialPasswordChange, passwordHistorySize, passwordExpiryForAdmin, cacheExpiration, enableRFC7613UsercaseMappedProfile);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties {\n");
    
    sb.append("    usersPath: ").append(toIndentedString(usersPath)).append("\n");
    sb.append("    groupsPath: ").append(toIndentedString(groupsPath)).append("\n");
    sb.append("    systemRelativePath: ").append(toIndentedString(systemRelativePath)).append("\n");
    sb.append("    defaultDepth: ").append(toIndentedString(defaultDepth)).append("\n");
    sb.append("    importBehavior: ").append(toIndentedString(importBehavior)).append("\n");
    sb.append("    passwordHashAlgorithm: ").append(toIndentedString(passwordHashAlgorithm)).append("\n");
    sb.append("    passwordHashIterations: ").append(toIndentedString(passwordHashIterations)).append("\n");
    sb.append("    passwordSaltSize: ").append(toIndentedString(passwordSaltSize)).append("\n");
    sb.append("    omitAdminPw: ").append(toIndentedString(omitAdminPw)).append("\n");
    sb.append("    supportAutoSave: ").append(toIndentedString(supportAutoSave)).append("\n");
    sb.append("    passwordMaxAge: ").append(toIndentedString(passwordMaxAge)).append("\n");
    sb.append("    initialPasswordChange: ").append(toIndentedString(initialPasswordChange)).append("\n");
    sb.append("    passwordHistorySize: ").append(toIndentedString(passwordHistorySize)).append("\n");
    sb.append("    passwordExpiryForAdmin: ").append(toIndentedString(passwordExpiryForAdmin)).append("\n");
    sb.append("    cacheExpiration: ").append(toIndentedString(cacheExpiration)).append("\n");
    sb.append("    enableRFC7613UsercaseMappedProfile: ").append(toIndentedString(enableRFC7613UsercaseMappedProfile)).append("\n");
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

