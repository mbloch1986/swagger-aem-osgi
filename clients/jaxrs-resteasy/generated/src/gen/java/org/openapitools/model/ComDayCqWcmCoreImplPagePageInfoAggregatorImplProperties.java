package org.openapitools.model;

import java.util.Objects;
import java.util.ArrayList;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import org.openapitools.model.ConfigNodePropertyString;
import javax.validation.constraints.*;
import io.swagger.annotations.*;


@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaResteasyServerCodegen", date = "2019-08-05T00:59:30.156Z[GMT]")
public class ComDayCqWcmCoreImplPagePageInfoAggregatorImplProperties   {
  
  private ConfigNodePropertyString pageInfoProviderPropertyRegexDefault = null;
  private ConfigNodePropertyString pageInfoProviderPropertyName = null;

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("page.info.provider.property.regex.default")
  public ConfigNodePropertyString getPageInfoProviderPropertyRegexDefault() {
    return pageInfoProviderPropertyRegexDefault;
  }
  public void setPageInfoProviderPropertyRegexDefault(ConfigNodePropertyString pageInfoProviderPropertyRegexDefault) {
    this.pageInfoProviderPropertyRegexDefault = pageInfoProviderPropertyRegexDefault;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("page.info.provider.property.name")
  public ConfigNodePropertyString getPageInfoProviderPropertyName() {
    return pageInfoProviderPropertyName;
  }
  public void setPageInfoProviderPropertyName(ConfigNodePropertyString pageInfoProviderPropertyName) {
    this.pageInfoProviderPropertyName = pageInfoProviderPropertyName;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqWcmCoreImplPagePageInfoAggregatorImplProperties comDayCqWcmCoreImplPagePageInfoAggregatorImplProperties = (ComDayCqWcmCoreImplPagePageInfoAggregatorImplProperties) o;
    return Objects.equals(pageInfoProviderPropertyRegexDefault, comDayCqWcmCoreImplPagePageInfoAggregatorImplProperties.pageInfoProviderPropertyRegexDefault) &&
        Objects.equals(pageInfoProviderPropertyName, comDayCqWcmCoreImplPagePageInfoAggregatorImplProperties.pageInfoProviderPropertyName);
  }

  @Override
  public int hashCode() {
    return Objects.hash(pageInfoProviderPropertyRegexDefault, pageInfoProviderPropertyName);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqWcmCoreImplPagePageInfoAggregatorImplProperties {\n");
    
    sb.append("    pageInfoProviderPropertyRegexDefault: ").append(toIndentedString(pageInfoProviderPropertyRegexDefault)).append("\n");
    sb.append("    pageInfoProviderPropertyName: ").append(toIndentedString(pageInfoProviderPropertyName)).append("\n");
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

