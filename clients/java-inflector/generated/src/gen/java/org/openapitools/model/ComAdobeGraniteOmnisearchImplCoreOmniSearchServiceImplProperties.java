package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ConfigNodePropertyBoolean;
import org.openapitools.model.ConfigNodePropertyInteger;





@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaInflectorServerCodegen", date = "2019-08-05T00:53:46.291Z[GMT]")
public class ComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties   {
  @JsonProperty("omnisearch.suggestion.requiretext.min")
  private ConfigNodePropertyInteger omnisearchSuggestionRequiretextMin = null;

  @JsonProperty("omnisearch.suggestion.spellcheck.require")
  private ConfigNodePropertyBoolean omnisearchSuggestionSpellcheckRequire = null;

  /**
   **/
  public ComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties omnisearchSuggestionRequiretextMin(ConfigNodePropertyInteger omnisearchSuggestionRequiretextMin) {
    this.omnisearchSuggestionRequiretextMin = omnisearchSuggestionRequiretextMin;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("omnisearch.suggestion.requiretext.min")
  public ConfigNodePropertyInteger getOmnisearchSuggestionRequiretextMin() {
    return omnisearchSuggestionRequiretextMin;
  }
  public void setOmnisearchSuggestionRequiretextMin(ConfigNodePropertyInteger omnisearchSuggestionRequiretextMin) {
    this.omnisearchSuggestionRequiretextMin = omnisearchSuggestionRequiretextMin;
  }

  /**
   **/
  public ComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties omnisearchSuggestionSpellcheckRequire(ConfigNodePropertyBoolean omnisearchSuggestionSpellcheckRequire) {
    this.omnisearchSuggestionSpellcheckRequire = omnisearchSuggestionSpellcheckRequire;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("omnisearch.suggestion.spellcheck.require")
  public ConfigNodePropertyBoolean getOmnisearchSuggestionSpellcheckRequire() {
    return omnisearchSuggestionSpellcheckRequire;
  }
  public void setOmnisearchSuggestionSpellcheckRequire(ConfigNodePropertyBoolean omnisearchSuggestionSpellcheckRequire) {
    this.omnisearchSuggestionSpellcheckRequire = omnisearchSuggestionSpellcheckRequire;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties comAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties = (ComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties) o;
    return Objects.equals(omnisearchSuggestionRequiretextMin, comAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties.omnisearchSuggestionRequiretextMin) &&
        Objects.equals(omnisearchSuggestionSpellcheckRequire, comAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties.omnisearchSuggestionSpellcheckRequire);
  }

  @Override
  public int hashCode() {
    return Objects.hash(omnisearchSuggestionRequiretextMin, omnisearchSuggestionSpellcheckRequire);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties {\n");
    
    sb.append("    omnisearchSuggestionRequiretextMin: ").append(toIndentedString(omnisearchSuggestionRequiretextMin)).append("\n");
    sb.append("    omnisearchSuggestionSpellcheckRequire: ").append(toIndentedString(omnisearchSuggestionSpellcheckRequire)).append("\n");
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
