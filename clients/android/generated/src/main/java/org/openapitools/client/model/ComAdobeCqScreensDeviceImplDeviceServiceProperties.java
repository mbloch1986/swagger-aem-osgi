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
public class ComAdobeCqScreensDeviceImplDeviceServiceProperties {
  
  @SerializedName("com.adobe.aem.screens.player.pingfrequency")
  private ConfigNodePropertyInteger comAdobeAemScreensPlayerPingfrequency = null;
  @SerializedName("com.adobe.aem.screens.device.pasword.specialchars")
  private ConfigNodePropertyString comAdobeAemScreensDevicePaswordSpecialchars = null;
  @SerializedName("com.adobe.aem.screens.device.pasword.minlowercasechars")
  private ConfigNodePropertyInteger comAdobeAemScreensDevicePaswordMinlowercasechars = null;
  @SerializedName("com.adobe.aem.screens.device.pasword.minuppercasechars")
  private ConfigNodePropertyInteger comAdobeAemScreensDevicePaswordMinuppercasechars = null;
  @SerializedName("com.adobe.aem.screens.device.pasword.minnumberchars")
  private ConfigNodePropertyInteger comAdobeAemScreensDevicePaswordMinnumberchars = null;
  @SerializedName("com.adobe.aem.screens.device.pasword.minspecialchars")
  private ConfigNodePropertyInteger comAdobeAemScreensDevicePaswordMinspecialchars = null;
  @SerializedName("com.adobe.aem.screens.device.pasword.minlength")
  private ConfigNodePropertyInteger comAdobeAemScreensDevicePaswordMinlength = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getComAdobeAemScreensPlayerPingfrequency() {
    return comAdobeAemScreensPlayerPingfrequency;
  }
  public void setComAdobeAemScreensPlayerPingfrequency(ConfigNodePropertyInteger comAdobeAemScreensPlayerPingfrequency) {
    this.comAdobeAemScreensPlayerPingfrequency = comAdobeAemScreensPlayerPingfrequency;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getComAdobeAemScreensDevicePaswordSpecialchars() {
    return comAdobeAemScreensDevicePaswordSpecialchars;
  }
  public void setComAdobeAemScreensDevicePaswordSpecialchars(ConfigNodePropertyString comAdobeAemScreensDevicePaswordSpecialchars) {
    this.comAdobeAemScreensDevicePaswordSpecialchars = comAdobeAemScreensDevicePaswordSpecialchars;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getComAdobeAemScreensDevicePaswordMinlowercasechars() {
    return comAdobeAemScreensDevicePaswordMinlowercasechars;
  }
  public void setComAdobeAemScreensDevicePaswordMinlowercasechars(ConfigNodePropertyInteger comAdobeAemScreensDevicePaswordMinlowercasechars) {
    this.comAdobeAemScreensDevicePaswordMinlowercasechars = comAdobeAemScreensDevicePaswordMinlowercasechars;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getComAdobeAemScreensDevicePaswordMinuppercasechars() {
    return comAdobeAemScreensDevicePaswordMinuppercasechars;
  }
  public void setComAdobeAemScreensDevicePaswordMinuppercasechars(ConfigNodePropertyInteger comAdobeAemScreensDevicePaswordMinuppercasechars) {
    this.comAdobeAemScreensDevicePaswordMinuppercasechars = comAdobeAemScreensDevicePaswordMinuppercasechars;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getComAdobeAemScreensDevicePaswordMinnumberchars() {
    return comAdobeAemScreensDevicePaswordMinnumberchars;
  }
  public void setComAdobeAemScreensDevicePaswordMinnumberchars(ConfigNodePropertyInteger comAdobeAemScreensDevicePaswordMinnumberchars) {
    this.comAdobeAemScreensDevicePaswordMinnumberchars = comAdobeAemScreensDevicePaswordMinnumberchars;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getComAdobeAemScreensDevicePaswordMinspecialchars() {
    return comAdobeAemScreensDevicePaswordMinspecialchars;
  }
  public void setComAdobeAemScreensDevicePaswordMinspecialchars(ConfigNodePropertyInteger comAdobeAemScreensDevicePaswordMinspecialchars) {
    this.comAdobeAemScreensDevicePaswordMinspecialchars = comAdobeAemScreensDevicePaswordMinspecialchars;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getComAdobeAemScreensDevicePaswordMinlength() {
    return comAdobeAemScreensDevicePaswordMinlength;
  }
  public void setComAdobeAemScreensDevicePaswordMinlength(ConfigNodePropertyInteger comAdobeAemScreensDevicePaswordMinlength) {
    this.comAdobeAemScreensDevicePaswordMinlength = comAdobeAemScreensDevicePaswordMinlength;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeCqScreensDeviceImplDeviceServiceProperties comAdobeCqScreensDeviceImplDeviceServiceProperties = (ComAdobeCqScreensDeviceImplDeviceServiceProperties) o;
    return (this.comAdobeAemScreensPlayerPingfrequency == null ? comAdobeCqScreensDeviceImplDeviceServiceProperties.comAdobeAemScreensPlayerPingfrequency == null : this.comAdobeAemScreensPlayerPingfrequency.equals(comAdobeCqScreensDeviceImplDeviceServiceProperties.comAdobeAemScreensPlayerPingfrequency)) &&
        (this.comAdobeAemScreensDevicePaswordSpecialchars == null ? comAdobeCqScreensDeviceImplDeviceServiceProperties.comAdobeAemScreensDevicePaswordSpecialchars == null : this.comAdobeAemScreensDevicePaswordSpecialchars.equals(comAdobeCqScreensDeviceImplDeviceServiceProperties.comAdobeAemScreensDevicePaswordSpecialchars)) &&
        (this.comAdobeAemScreensDevicePaswordMinlowercasechars == null ? comAdobeCqScreensDeviceImplDeviceServiceProperties.comAdobeAemScreensDevicePaswordMinlowercasechars == null : this.comAdobeAemScreensDevicePaswordMinlowercasechars.equals(comAdobeCqScreensDeviceImplDeviceServiceProperties.comAdobeAemScreensDevicePaswordMinlowercasechars)) &&
        (this.comAdobeAemScreensDevicePaswordMinuppercasechars == null ? comAdobeCqScreensDeviceImplDeviceServiceProperties.comAdobeAemScreensDevicePaswordMinuppercasechars == null : this.comAdobeAemScreensDevicePaswordMinuppercasechars.equals(comAdobeCqScreensDeviceImplDeviceServiceProperties.comAdobeAemScreensDevicePaswordMinuppercasechars)) &&
        (this.comAdobeAemScreensDevicePaswordMinnumberchars == null ? comAdobeCqScreensDeviceImplDeviceServiceProperties.comAdobeAemScreensDevicePaswordMinnumberchars == null : this.comAdobeAemScreensDevicePaswordMinnumberchars.equals(comAdobeCqScreensDeviceImplDeviceServiceProperties.comAdobeAemScreensDevicePaswordMinnumberchars)) &&
        (this.comAdobeAemScreensDevicePaswordMinspecialchars == null ? comAdobeCqScreensDeviceImplDeviceServiceProperties.comAdobeAemScreensDevicePaswordMinspecialchars == null : this.comAdobeAemScreensDevicePaswordMinspecialchars.equals(comAdobeCqScreensDeviceImplDeviceServiceProperties.comAdobeAemScreensDevicePaswordMinspecialchars)) &&
        (this.comAdobeAemScreensDevicePaswordMinlength == null ? comAdobeCqScreensDeviceImplDeviceServiceProperties.comAdobeAemScreensDevicePaswordMinlength == null : this.comAdobeAemScreensDevicePaswordMinlength.equals(comAdobeCqScreensDeviceImplDeviceServiceProperties.comAdobeAemScreensDevicePaswordMinlength));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.comAdobeAemScreensPlayerPingfrequency == null ? 0: this.comAdobeAemScreensPlayerPingfrequency.hashCode());
    result = 31 * result + (this.comAdobeAemScreensDevicePaswordSpecialchars == null ? 0: this.comAdobeAemScreensDevicePaswordSpecialchars.hashCode());
    result = 31 * result + (this.comAdobeAemScreensDevicePaswordMinlowercasechars == null ? 0: this.comAdobeAemScreensDevicePaswordMinlowercasechars.hashCode());
    result = 31 * result + (this.comAdobeAemScreensDevicePaswordMinuppercasechars == null ? 0: this.comAdobeAemScreensDevicePaswordMinuppercasechars.hashCode());
    result = 31 * result + (this.comAdobeAemScreensDevicePaswordMinnumberchars == null ? 0: this.comAdobeAemScreensDevicePaswordMinnumberchars.hashCode());
    result = 31 * result + (this.comAdobeAemScreensDevicePaswordMinspecialchars == null ? 0: this.comAdobeAemScreensDevicePaswordMinspecialchars.hashCode());
    result = 31 * result + (this.comAdobeAemScreensDevicePaswordMinlength == null ? 0: this.comAdobeAemScreensDevicePaswordMinlength.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeCqScreensDeviceImplDeviceServiceProperties {\n");
    
    sb.append("  comAdobeAemScreensPlayerPingfrequency: ").append(comAdobeAemScreensPlayerPingfrequency).append("\n");
    sb.append("  comAdobeAemScreensDevicePaswordSpecialchars: ").append(comAdobeAemScreensDevicePaswordSpecialchars).append("\n");
    sb.append("  comAdobeAemScreensDevicePaswordMinlowercasechars: ").append(comAdobeAemScreensDevicePaswordMinlowercasechars).append("\n");
    sb.append("  comAdobeAemScreensDevicePaswordMinuppercasechars: ").append(comAdobeAemScreensDevicePaswordMinuppercasechars).append("\n");
    sb.append("  comAdobeAemScreensDevicePaswordMinnumberchars: ").append(comAdobeAemScreensDevicePaswordMinnumberchars).append("\n");
    sb.append("  comAdobeAemScreensDevicePaswordMinspecialchars: ").append(comAdobeAemScreensDevicePaswordMinspecialchars).append("\n");
    sb.append("  comAdobeAemScreensDevicePaswordMinlength: ").append(comAdobeAemScreensDevicePaswordMinlength).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
