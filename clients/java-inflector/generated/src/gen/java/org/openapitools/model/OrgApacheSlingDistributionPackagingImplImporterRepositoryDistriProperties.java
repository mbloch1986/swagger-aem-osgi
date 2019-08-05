package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ConfigNodePropertyString;





@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaInflectorServerCodegen", date = "2019-08-05T00:53:46.291Z[GMT]")
public class OrgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties   {
  @JsonProperty("name")
  private ConfigNodePropertyString name = null;

  @JsonProperty("service.name")
  private ConfigNodePropertyString serviceName = null;

  @JsonProperty("path")
  private ConfigNodePropertyString path = null;

  @JsonProperty("privilege.name")
  private ConfigNodePropertyString privilegeName = null;

  /**
   **/
  public OrgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties name(ConfigNodePropertyString name) {
    this.name = name;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("name")
  public ConfigNodePropertyString getName() {
    return name;
  }
  public void setName(ConfigNodePropertyString name) {
    this.name = name;
  }

  /**
   **/
  public OrgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties serviceName(ConfigNodePropertyString serviceName) {
    this.serviceName = serviceName;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("service.name")
  public ConfigNodePropertyString getServiceName() {
    return serviceName;
  }
  public void setServiceName(ConfigNodePropertyString serviceName) {
    this.serviceName = serviceName;
  }

  /**
   **/
  public OrgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties path(ConfigNodePropertyString path) {
    this.path = path;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("path")
  public ConfigNodePropertyString getPath() {
    return path;
  }
  public void setPath(ConfigNodePropertyString path) {
    this.path = path;
  }

  /**
   **/
  public OrgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties privilegeName(ConfigNodePropertyString privilegeName) {
    this.privilegeName = privilegeName;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("privilege.name")
  public ConfigNodePropertyString getPrivilegeName() {
    return privilegeName;
  }
  public void setPrivilegeName(ConfigNodePropertyString privilegeName) {
    this.privilegeName = privilegeName;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties orgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties = (OrgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties) o;
    return Objects.equals(name, orgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties.name) &&
        Objects.equals(serviceName, orgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties.serviceName) &&
        Objects.equals(path, orgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties.path) &&
        Objects.equals(privilegeName, orgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties.privilegeName);
  }

  @Override
  public int hashCode() {
    return Objects.hash(name, serviceName, path, privilegeName);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties {\n");
    
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    serviceName: ").append(toIndentedString(serviceName)).append("\n");
    sb.append("    path: ").append(toIndentedString(path)).append("\n");
    sb.append("    privilegeName: ").append(toIndentedString(privilegeName)).append("\n");
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
