package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ConfigNodePropertyString;





@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaUndertowServerCodegen", date = "2019-08-05T00:56:20.785Z[GMT]")
public class OrgApacheSlingXssImplXSSFilterImplProperties   {
  
  private ConfigNodePropertyString policyPath = null;

  /**
   **/
  public OrgApacheSlingXssImplXSSFilterImplProperties policyPath(ConfigNodePropertyString policyPath) {
    this.policyPath = policyPath;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("policyPath")
  public ConfigNodePropertyString getPolicyPath() {
    return policyPath;
  }
  public void setPolicyPath(ConfigNodePropertyString policyPath) {
    this.policyPath = policyPath;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheSlingXssImplXSSFilterImplProperties orgApacheSlingXssImplXSSFilterImplProperties = (OrgApacheSlingXssImplXSSFilterImplProperties) o;
    return Objects.equals(policyPath, orgApacheSlingXssImplXSSFilterImplProperties.policyPath);
  }

  @Override
  public int hashCode() {
    return Objects.hash(policyPath);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheSlingXssImplXSSFilterImplProperties {\n");
    
    sb.append("    policyPath: ").append(toIndentedString(policyPath)).append("\n");
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

