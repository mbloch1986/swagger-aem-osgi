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
public class OrgApacheSlingJcrRepoinitImplRepositoryInitializerProperties {
  
  @SerializedName("references")
  private ConfigNodePropertyArray references = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getReferences() {
    return references;
  }
  public void setReferences(ConfigNodePropertyArray references) {
    this.references = references;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheSlingJcrRepoinitImplRepositoryInitializerProperties orgApacheSlingJcrRepoinitImplRepositoryInitializerProperties = (OrgApacheSlingJcrRepoinitImplRepositoryInitializerProperties) o;
    return (this.references == null ? orgApacheSlingJcrRepoinitImplRepositoryInitializerProperties.references == null : this.references.equals(orgApacheSlingJcrRepoinitImplRepositoryInitializerProperties.references));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.references == null ? 0: this.references.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheSlingJcrRepoinitImplRepositoryInitializerProperties {\n");
    
    sb.append("  references: ").append(references).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
