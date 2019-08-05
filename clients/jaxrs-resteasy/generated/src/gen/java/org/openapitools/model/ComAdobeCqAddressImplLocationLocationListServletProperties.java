package org.openapitools.model;

import java.util.Objects;
import java.util.ArrayList;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import org.openapitools.model.ConfigNodePropertyInteger;
import javax.validation.constraints.*;
import io.swagger.annotations.*;


@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaResteasyServerCodegen", date = "2019-08-05T00:59:30.156Z[GMT]")
public class ComAdobeCqAddressImplLocationLocationListServletProperties   {
  
  private ConfigNodePropertyInteger cqAddressLocationDefaultMaxResults = null;

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("cq.address.location.default.maxResults")
  public ConfigNodePropertyInteger getCqAddressLocationDefaultMaxResults() {
    return cqAddressLocationDefaultMaxResults;
  }
  public void setCqAddressLocationDefaultMaxResults(ConfigNodePropertyInteger cqAddressLocationDefaultMaxResults) {
    this.cqAddressLocationDefaultMaxResults = cqAddressLocationDefaultMaxResults;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeCqAddressImplLocationLocationListServletProperties comAdobeCqAddressImplLocationLocationListServletProperties = (ComAdobeCqAddressImplLocationLocationListServletProperties) o;
    return Objects.equals(cqAddressLocationDefaultMaxResults, comAdobeCqAddressImplLocationLocationListServletProperties.cqAddressLocationDefaultMaxResults);
  }

  @Override
  public int hashCode() {
    return Objects.hash(cqAddressLocationDefaultMaxResults);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeCqAddressImplLocationLocationListServletProperties {\n");
    
    sb.append("    cqAddressLocationDefaultMaxResults: ").append(toIndentedString(cqAddressLocationDefaultMaxResults)).append("\n");
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
