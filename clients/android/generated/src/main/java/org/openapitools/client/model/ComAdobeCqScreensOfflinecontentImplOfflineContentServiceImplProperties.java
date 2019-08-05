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
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties {
  
  @SerializedName("disableSmartSync")
  private ConfigNodePropertyBoolean disableSmartSync = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getDisableSmartSync() {
    return disableSmartSync;
  }
  public void setDisableSmartSync(ConfigNodePropertyBoolean disableSmartSync) {
    this.disableSmartSync = disableSmartSync;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties comAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties = (ComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties) o;
    return (this.disableSmartSync == null ? comAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties.disableSmartSync == null : this.disableSmartSync.equals(comAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties.disableSmartSync));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.disableSmartSync == null ? 0: this.disableSmartSync.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties {\n");
    
    sb.append("  disableSmartSync: ").append(disableSmartSync).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}