package org.openapitools.model;

import org.openapitools.model.ConfigNodePropertyInteger;
import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNameProperties   {
  
  private @Valid ConfigNodePropertyInteger length = null;

  /**
   **/
  public OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNameProperties length(ConfigNodePropertyInteger length) {
    this.length = length;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("length")
  public ConfigNodePropertyInteger getLength() {
    return length;
  }
  public void setLength(ConfigNodePropertyInteger length) {
    this.length = length;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNameProperties orgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNameProperties = (OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNameProperties) o;
    return Objects.equals(length, orgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNameProperties.length);
  }

  @Override
  public int hashCode() {
    return Objects.hash(length);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNameProperties {\n");
    
    sb.append("    length: ").append(toIndentedString(length)).append("\n");
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
