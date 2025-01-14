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
import org.openapitools.client.model.ConfigNodePropertyString;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties {
  
  @SerializedName("dav.root")
  private ConfigNodePropertyString davRoot = null;
  @SerializedName("dav.create-absolute-uri")
  private ConfigNodePropertyBoolean davCreateAbsoluteUri = null;
  @SerializedName("dav.realm")
  private ConfigNodePropertyString davRealm = null;
  @SerializedName("collection.types")
  private ConfigNodePropertyArray collectionTypes = null;
  @SerializedName("filter.prefixes")
  private ConfigNodePropertyArray filterPrefixes = null;
  @SerializedName("filter.types")
  private ConfigNodePropertyString filterTypes = null;
  @SerializedName("filter.uris")
  private ConfigNodePropertyString filterUris = null;
  @SerializedName("type.collections")
  private ConfigNodePropertyString typeCollections = null;
  @SerializedName("type.noncollections")
  private ConfigNodePropertyString typeNoncollections = null;
  @SerializedName("type.content")
  private ConfigNodePropertyString typeContent = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getDavRoot() {
    return davRoot;
  }
  public void setDavRoot(ConfigNodePropertyString davRoot) {
    this.davRoot = davRoot;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getDavCreateAbsoluteUri() {
    return davCreateAbsoluteUri;
  }
  public void setDavCreateAbsoluteUri(ConfigNodePropertyBoolean davCreateAbsoluteUri) {
    this.davCreateAbsoluteUri = davCreateAbsoluteUri;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getDavRealm() {
    return davRealm;
  }
  public void setDavRealm(ConfigNodePropertyString davRealm) {
    this.davRealm = davRealm;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getCollectionTypes() {
    return collectionTypes;
  }
  public void setCollectionTypes(ConfigNodePropertyArray collectionTypes) {
    this.collectionTypes = collectionTypes;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getFilterPrefixes() {
    return filterPrefixes;
  }
  public void setFilterPrefixes(ConfigNodePropertyArray filterPrefixes) {
    this.filterPrefixes = filterPrefixes;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getFilterTypes() {
    return filterTypes;
  }
  public void setFilterTypes(ConfigNodePropertyString filterTypes) {
    this.filterTypes = filterTypes;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getFilterUris() {
    return filterUris;
  }
  public void setFilterUris(ConfigNodePropertyString filterUris) {
    this.filterUris = filterUris;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getTypeCollections() {
    return typeCollections;
  }
  public void setTypeCollections(ConfigNodePropertyString typeCollections) {
    this.typeCollections = typeCollections;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getTypeNoncollections() {
    return typeNoncollections;
  }
  public void setTypeNoncollections(ConfigNodePropertyString typeNoncollections) {
    this.typeNoncollections = typeNoncollections;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getTypeContent() {
    return typeContent;
  }
  public void setTypeContent(ConfigNodePropertyString typeContent) {
    this.typeContent = typeContent;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties orgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties = (OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties) o;
    return (this.davRoot == null ? orgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.davRoot == null : this.davRoot.equals(orgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.davRoot)) &&
        (this.davCreateAbsoluteUri == null ? orgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.davCreateAbsoluteUri == null : this.davCreateAbsoluteUri.equals(orgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.davCreateAbsoluteUri)) &&
        (this.davRealm == null ? orgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.davRealm == null : this.davRealm.equals(orgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.davRealm)) &&
        (this.collectionTypes == null ? orgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.collectionTypes == null : this.collectionTypes.equals(orgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.collectionTypes)) &&
        (this.filterPrefixes == null ? orgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.filterPrefixes == null : this.filterPrefixes.equals(orgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.filterPrefixes)) &&
        (this.filterTypes == null ? orgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.filterTypes == null : this.filterTypes.equals(orgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.filterTypes)) &&
        (this.filterUris == null ? orgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.filterUris == null : this.filterUris.equals(orgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.filterUris)) &&
        (this.typeCollections == null ? orgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.typeCollections == null : this.typeCollections.equals(orgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.typeCollections)) &&
        (this.typeNoncollections == null ? orgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.typeNoncollections == null : this.typeNoncollections.equals(orgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.typeNoncollections)) &&
        (this.typeContent == null ? orgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.typeContent == null : this.typeContent.equals(orgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.typeContent));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.davRoot == null ? 0: this.davRoot.hashCode());
    result = 31 * result + (this.davCreateAbsoluteUri == null ? 0: this.davCreateAbsoluteUri.hashCode());
    result = 31 * result + (this.davRealm == null ? 0: this.davRealm.hashCode());
    result = 31 * result + (this.collectionTypes == null ? 0: this.collectionTypes.hashCode());
    result = 31 * result + (this.filterPrefixes == null ? 0: this.filterPrefixes.hashCode());
    result = 31 * result + (this.filterTypes == null ? 0: this.filterTypes.hashCode());
    result = 31 * result + (this.filterUris == null ? 0: this.filterUris.hashCode());
    result = 31 * result + (this.typeCollections == null ? 0: this.typeCollections.hashCode());
    result = 31 * result + (this.typeNoncollections == null ? 0: this.typeNoncollections.hashCode());
    result = 31 * result + (this.typeContent == null ? 0: this.typeContent.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties {\n");
    
    sb.append("  davRoot: ").append(davRoot).append("\n");
    sb.append("  davCreateAbsoluteUri: ").append(davCreateAbsoluteUri).append("\n");
    sb.append("  davRealm: ").append(davRealm).append("\n");
    sb.append("  collectionTypes: ").append(collectionTypes).append("\n");
    sb.append("  filterPrefixes: ").append(filterPrefixes).append("\n");
    sb.append("  filterTypes: ").append(filterTypes).append("\n");
    sb.append("  filterUris: ").append(filterUris).append("\n");
    sb.append("  typeCollections: ").append(typeCollections).append("\n");
    sb.append("  typeNoncollections: ").append(typeNoncollections).append("\n");
    sb.append("  typeContent: ").append(typeContent).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
