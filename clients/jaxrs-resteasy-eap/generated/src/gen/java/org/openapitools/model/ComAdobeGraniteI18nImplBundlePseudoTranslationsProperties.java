package org.openapitools.model;

import java.util.Objects;
import java.util.ArrayList;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ConfigNodePropertyArray;
import javax.validation.constraints.*;
import io.swagger.annotations.*;


@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaResteasyEapServerCodegen", date = "2019-08-05T01:00:05.540Z[GMT]")
public class ComAdobeGraniteI18nImplBundlePseudoTranslationsProperties   {
  

  private ConfigNodePropertyArray pseudoPatterns = null;

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("pseudo.patterns")
  public ConfigNodePropertyArray getPseudoPatterns() {
    return pseudoPatterns;
  }
  public void setPseudoPatterns(ConfigNodePropertyArray pseudoPatterns) {
    this.pseudoPatterns = pseudoPatterns;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeGraniteI18nImplBundlePseudoTranslationsProperties comAdobeGraniteI18nImplBundlePseudoTranslationsProperties = (ComAdobeGraniteI18nImplBundlePseudoTranslationsProperties) o;
    return Objects.equals(pseudoPatterns, comAdobeGraniteI18nImplBundlePseudoTranslationsProperties.pseudoPatterns);
  }

  @Override
  public int hashCode() {
    return Objects.hash(pseudoPatterns);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeGraniteI18nImplBundlePseudoTranslationsProperties {\n");
    
    sb.append("    pseudoPatterns: ").append(toIndentedString(pseudoPatterns)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

