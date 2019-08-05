package org.openapitools.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonInclude;
import com.fasterxml.jackson.annotation.JsonProperty;
import org.openapitools.server.api.model.ConfigNodePropertyArray;
import org.openapitools.server.api.model.ConfigNodePropertyBoolean;
import org.openapitools.server.api.model.ConfigNodePropertyInteger;

@JsonInclude(JsonInclude.Include.NON_NULL) 
public class ComAdobeGraniteLicenseImplLicenseCheckFilterProperties   {
  
  private ConfigNodePropertyInteger checkInternval = null;
  private ConfigNodePropertyArray excludeIds = null;
  private ConfigNodePropertyBoolean encryptPing = null;

  public ComAdobeGraniteLicenseImplLicenseCheckFilterProperties () {

  }

  public ComAdobeGraniteLicenseImplLicenseCheckFilterProperties (ConfigNodePropertyInteger checkInternval, ConfigNodePropertyArray excludeIds, ConfigNodePropertyBoolean encryptPing) {
    this.checkInternval = checkInternval;
    this.excludeIds = excludeIds;
    this.encryptPing = encryptPing;
  }

    
  @JsonProperty("checkInternval")
  public ConfigNodePropertyInteger getCheckInternval() {
    return checkInternval;
  }
  public void setCheckInternval(ConfigNodePropertyInteger checkInternval) {
    this.checkInternval = checkInternval;
  }

    
  @JsonProperty("excludeIds")
  public ConfigNodePropertyArray getExcludeIds() {
    return excludeIds;
  }
  public void setExcludeIds(ConfigNodePropertyArray excludeIds) {
    this.excludeIds = excludeIds;
  }

    
  @JsonProperty("encryptPing")
  public ConfigNodePropertyBoolean getEncryptPing() {
    return encryptPing;
  }
  public void setEncryptPing(ConfigNodePropertyBoolean encryptPing) {
    this.encryptPing = encryptPing;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeGraniteLicenseImplLicenseCheckFilterProperties comAdobeGraniteLicenseImplLicenseCheckFilterProperties = (ComAdobeGraniteLicenseImplLicenseCheckFilterProperties) o;
    return Objects.equals(checkInternval, comAdobeGraniteLicenseImplLicenseCheckFilterProperties.checkInternval) &&
        Objects.equals(excludeIds, comAdobeGraniteLicenseImplLicenseCheckFilterProperties.excludeIds) &&
        Objects.equals(encryptPing, comAdobeGraniteLicenseImplLicenseCheckFilterProperties.encryptPing);
  }

  @Override
  public int hashCode() {
    return Objects.hash(checkInternval, excludeIds, encryptPing);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeGraniteLicenseImplLicenseCheckFilterProperties {\n");
    
    sb.append("    checkInternval: ").append(toIndentedString(checkInternval)).append("\n");
    sb.append("    excludeIds: ").append(toIndentedString(excludeIds)).append("\n");
    sb.append("    encryptPing: ").append(toIndentedString(encryptPing)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}