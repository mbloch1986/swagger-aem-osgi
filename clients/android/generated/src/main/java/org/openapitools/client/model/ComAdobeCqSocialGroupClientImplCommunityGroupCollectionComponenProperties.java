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
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties {
  
  @SerializedName("group.listing.pagination.enable")
  private ConfigNodePropertyBoolean groupListingPaginationEnable = null;
  @SerializedName("group.listing.lazyloading.enable")
  private ConfigNodePropertyBoolean groupListingLazyloadingEnable = null;
  @SerializedName("page.size")
  private ConfigNodePropertyInteger pageSize = null;
  @SerializedName("priority")
  private ConfigNodePropertyInteger priority = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getGroupListingPaginationEnable() {
    return groupListingPaginationEnable;
  }
  public void setGroupListingPaginationEnable(ConfigNodePropertyBoolean groupListingPaginationEnable) {
    this.groupListingPaginationEnable = groupListingPaginationEnable;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getGroupListingLazyloadingEnable() {
    return groupListingLazyloadingEnable;
  }
  public void setGroupListingLazyloadingEnable(ConfigNodePropertyBoolean groupListingLazyloadingEnable) {
    this.groupListingLazyloadingEnable = groupListingLazyloadingEnable;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getPageSize() {
    return pageSize;
  }
  public void setPageSize(ConfigNodePropertyInteger pageSize) {
    this.pageSize = pageSize;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getPriority() {
    return priority;
  }
  public void setPriority(ConfigNodePropertyInteger priority) {
    this.priority = priority;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties comAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties = (ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties) o;
    return (this.groupListingPaginationEnable == null ? comAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties.groupListingPaginationEnable == null : this.groupListingPaginationEnable.equals(comAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties.groupListingPaginationEnable)) &&
        (this.groupListingLazyloadingEnable == null ? comAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties.groupListingLazyloadingEnable == null : this.groupListingLazyloadingEnable.equals(comAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties.groupListingLazyloadingEnable)) &&
        (this.pageSize == null ? comAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties.pageSize == null : this.pageSize.equals(comAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties.pageSize)) &&
        (this.priority == null ? comAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties.priority == null : this.priority.equals(comAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties.priority));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.groupListingPaginationEnable == null ? 0: this.groupListingPaginationEnable.hashCode());
    result = 31 * result + (this.groupListingLazyloadingEnable == null ? 0: this.groupListingLazyloadingEnable.hashCode());
    result = 31 * result + (this.pageSize == null ? 0: this.pageSize.hashCode());
    result = 31 * result + (this.priority == null ? 0: this.priority.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties {\n");
    
    sb.append("  groupListingPaginationEnable: ").append(groupListingPaginationEnable).append("\n");
    sb.append("  groupListingLazyloadingEnable: ").append(groupListingLazyloadingEnable).append("\n");
    sb.append("  pageSize: ").append(pageSize).append("\n");
    sb.append("  priority: ").append(priority).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}