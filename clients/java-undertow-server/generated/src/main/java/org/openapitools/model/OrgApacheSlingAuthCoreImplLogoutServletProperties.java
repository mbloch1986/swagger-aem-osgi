package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ConfigNodePropertyArray;
import org.openapitools.model.ConfigNodePropertyString;





@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaUndertowServerCodegen", date = "2019-08-05T00:56:20.785Z[GMT]")
public class OrgApacheSlingAuthCoreImplLogoutServletProperties   {
  
  private ConfigNodePropertyArray slingServletMethods = null;
  private ConfigNodePropertyString slingServletPaths = null;

  /**
   **/
  public OrgApacheSlingAuthCoreImplLogoutServletProperties slingServletMethods(ConfigNodePropertyArray slingServletMethods) {
    this.slingServletMethods = slingServletMethods;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("sling.servlet.methods")
  public ConfigNodePropertyArray getSlingServletMethods() {
    return slingServletMethods;
  }
  public void setSlingServletMethods(ConfigNodePropertyArray slingServletMethods) {
    this.slingServletMethods = slingServletMethods;
  }

  /**
   **/
  public OrgApacheSlingAuthCoreImplLogoutServletProperties slingServletPaths(ConfigNodePropertyString slingServletPaths) {
    this.slingServletPaths = slingServletPaths;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("sling.servlet.paths")
  public ConfigNodePropertyString getSlingServletPaths() {
    return slingServletPaths;
  }
  public void setSlingServletPaths(ConfigNodePropertyString slingServletPaths) {
    this.slingServletPaths = slingServletPaths;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheSlingAuthCoreImplLogoutServletProperties orgApacheSlingAuthCoreImplLogoutServletProperties = (OrgApacheSlingAuthCoreImplLogoutServletProperties) o;
    return Objects.equals(slingServletMethods, orgApacheSlingAuthCoreImplLogoutServletProperties.slingServletMethods) &&
        Objects.equals(slingServletPaths, orgApacheSlingAuthCoreImplLogoutServletProperties.slingServletPaths);
  }

  @Override
  public int hashCode() {
    return Objects.hash(slingServletMethods, slingServletPaths);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheSlingAuthCoreImplLogoutServletProperties {\n");
    
    sb.append("    slingServletMethods: ").append(toIndentedString(slingServletMethods)).append("\n");
    sb.append("    slingServletPaths: ").append(toIndentedString(slingServletPaths)).append("\n");
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

