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

import org.openapitools.client.model.OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletInfo {
  
  @SerializedName("pid")
  private String pid = null;
  @SerializedName("title")
  private String title = null;
  @SerializedName("description")
  private String description = null;
  @SerializedName("properties")
  private OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties properties = null;
  @SerializedName("bundle_location")
  private String bundleLocation = null;
  @SerializedName("service_location")
  private String serviceLocation = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public String getPid() {
    return pid;
  }
  public void setPid(String pid) {
    this.pid = pid;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getTitle() {
    return title;
  }
  public void setTitle(String title) {
    this.title = title;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getDescription() {
    return description;
  }
  public void setDescription(String description) {
    this.description = description;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties getProperties() {
    return properties;
  }
  public void setProperties(OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties properties) {
    this.properties = properties;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getBundleLocation() {
    return bundleLocation;
  }
  public void setBundleLocation(String bundleLocation) {
    this.bundleLocation = bundleLocation;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getServiceLocation() {
    return serviceLocation;
  }
  public void setServiceLocation(String serviceLocation) {
    this.serviceLocation = serviceLocation;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletInfo orgApacheSlingJcrWebdavImplServletsSimpleWebDavServletInfo = (OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletInfo) o;
    return (this.pid == null ? orgApacheSlingJcrWebdavImplServletsSimpleWebDavServletInfo.pid == null : this.pid.equals(orgApacheSlingJcrWebdavImplServletsSimpleWebDavServletInfo.pid)) &&
        (this.title == null ? orgApacheSlingJcrWebdavImplServletsSimpleWebDavServletInfo.title == null : this.title.equals(orgApacheSlingJcrWebdavImplServletsSimpleWebDavServletInfo.title)) &&
        (this.description == null ? orgApacheSlingJcrWebdavImplServletsSimpleWebDavServletInfo.description == null : this.description.equals(orgApacheSlingJcrWebdavImplServletsSimpleWebDavServletInfo.description)) &&
        (this.properties == null ? orgApacheSlingJcrWebdavImplServletsSimpleWebDavServletInfo.properties == null : this.properties.equals(orgApacheSlingJcrWebdavImplServletsSimpleWebDavServletInfo.properties)) &&
        (this.bundleLocation == null ? orgApacheSlingJcrWebdavImplServletsSimpleWebDavServletInfo.bundleLocation == null : this.bundleLocation.equals(orgApacheSlingJcrWebdavImplServletsSimpleWebDavServletInfo.bundleLocation)) &&
        (this.serviceLocation == null ? orgApacheSlingJcrWebdavImplServletsSimpleWebDavServletInfo.serviceLocation == null : this.serviceLocation.equals(orgApacheSlingJcrWebdavImplServletsSimpleWebDavServletInfo.serviceLocation));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.pid == null ? 0: this.pid.hashCode());
    result = 31 * result + (this.title == null ? 0: this.title.hashCode());
    result = 31 * result + (this.description == null ? 0: this.description.hashCode());
    result = 31 * result + (this.properties == null ? 0: this.properties.hashCode());
    result = 31 * result + (this.bundleLocation == null ? 0: this.bundleLocation.hashCode());
    result = 31 * result + (this.serviceLocation == null ? 0: this.serviceLocation.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletInfo {\n");
    
    sb.append("  pid: ").append(pid).append("\n");
    sb.append("  title: ").append(title).append("\n");
    sb.append("  description: ").append(description).append("\n");
    sb.append("  properties: ").append(properties).append("\n");
    sb.append("  bundleLocation: ").append(bundleLocation).append("\n");
    sb.append("  serviceLocation: ").append(serviceLocation).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
