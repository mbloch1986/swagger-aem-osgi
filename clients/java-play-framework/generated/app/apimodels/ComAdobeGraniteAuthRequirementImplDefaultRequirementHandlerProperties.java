package apimodels;

import apimodels.ConfigNodePropertyArray;
import com.fasterxml.jackson.annotation.*;
import java.util.Set;
import javax.validation.*;
import java.util.Objects;
import javax.validation.constraints.*;
/**
 * ComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerProperties
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaPlayFrameworkCodegen", date = "2019-08-05T00:55:42.601Z[GMT]")

@SuppressWarnings({"UnusedReturnValue", "WeakerAccess"})
public class ComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerProperties   {
  @JsonProperty("supportedPaths")
  private ConfigNodePropertyArray supportedPaths = null;

  public ComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerProperties supportedPaths(ConfigNodePropertyArray supportedPaths) {
    this.supportedPaths = supportedPaths;
    return this;
  }

   /**
   * Get supportedPaths
   * @return supportedPaths
  **/
  @Valid
  public ConfigNodePropertyArray getSupportedPaths() {
    return supportedPaths;
  }

  public void setSupportedPaths(ConfigNodePropertyArray supportedPaths) {
    this.supportedPaths = supportedPaths;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerProperties comAdobeGraniteAuthRequirementImplDefaultRequirementHandlerProperties = (ComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerProperties) o;
    return Objects.equals(supportedPaths, comAdobeGraniteAuthRequirementImplDefaultRequirementHandlerProperties.supportedPaths);
  }

  @Override
  public int hashCode() {
    return Objects.hash(supportedPaths);
  }

  @SuppressWarnings("StringBufferReplaceableByString")
  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerProperties {\n");
    
    sb.append("    supportedPaths: ").append(toIndentedString(supportedPaths)).append("\n");
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

