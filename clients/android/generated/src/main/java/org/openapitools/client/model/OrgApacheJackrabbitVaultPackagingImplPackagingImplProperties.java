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
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class OrgApacheJackrabbitVaultPackagingImplPackagingImplProperties {
  
  @SerializedName("packageRoots")
  private ConfigNodePropertyArray packageRoots = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getPackageRoots() {
    return packageRoots;
  }
  public void setPackageRoots(ConfigNodePropertyArray packageRoots) {
    this.packageRoots = packageRoots;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheJackrabbitVaultPackagingImplPackagingImplProperties orgApacheJackrabbitVaultPackagingImplPackagingImplProperties = (OrgApacheJackrabbitVaultPackagingImplPackagingImplProperties) o;
    return (this.packageRoots == null ? orgApacheJackrabbitVaultPackagingImplPackagingImplProperties.packageRoots == null : this.packageRoots.equals(orgApacheJackrabbitVaultPackagingImplPackagingImplProperties.packageRoots));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.packageRoots == null ? 0: this.packageRoots.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheJackrabbitVaultPackagingImplPackagingImplProperties {\n");
    
    sb.append("  packageRoots: ").append(packageRoots).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
