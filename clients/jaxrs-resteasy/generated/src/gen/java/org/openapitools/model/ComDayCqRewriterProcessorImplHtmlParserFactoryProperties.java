package org.openapitools.model;

import java.util.Objects;
import java.util.ArrayList;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import org.openapitools.model.ConfigNodePropertyArray;
import org.openapitools.model.ConfigNodePropertyBoolean;
import javax.validation.constraints.*;
import io.swagger.annotations.*;


@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaResteasyServerCodegen", date = "2019-08-05T00:59:30.156Z[GMT]")
public class ComDayCqRewriterProcessorImplHtmlParserFactoryProperties   {
  
  private ConfigNodePropertyArray htmlparserProcessTags = null;
  private ConfigNodePropertyBoolean htmlparserPreserveCamelCase = null;

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("htmlparser.processTags")
  public ConfigNodePropertyArray getHtmlparserProcessTags() {
    return htmlparserProcessTags;
  }
  public void setHtmlparserProcessTags(ConfigNodePropertyArray htmlparserProcessTags) {
    this.htmlparserProcessTags = htmlparserProcessTags;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("htmlparser.preserveCamelCase")
  public ConfigNodePropertyBoolean getHtmlparserPreserveCamelCase() {
    return htmlparserPreserveCamelCase;
  }
  public void setHtmlparserPreserveCamelCase(ConfigNodePropertyBoolean htmlparserPreserveCamelCase) {
    this.htmlparserPreserveCamelCase = htmlparserPreserveCamelCase;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqRewriterProcessorImplHtmlParserFactoryProperties comDayCqRewriterProcessorImplHtmlParserFactoryProperties = (ComDayCqRewriterProcessorImplHtmlParserFactoryProperties) o;
    return Objects.equals(htmlparserProcessTags, comDayCqRewriterProcessorImplHtmlParserFactoryProperties.htmlparserProcessTags) &&
        Objects.equals(htmlparserPreserveCamelCase, comDayCqRewriterProcessorImplHtmlParserFactoryProperties.htmlparserPreserveCamelCase);
  }

  @Override
  public int hashCode() {
    return Objects.hash(htmlparserProcessTags, htmlparserPreserveCamelCase);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqRewriterProcessorImplHtmlParserFactoryProperties {\n");
    
    sb.append("    htmlparserProcessTags: ").append(toIndentedString(htmlparserProcessTags)).append("\n");
    sb.append("    htmlparserPreserveCamelCase: ").append(toIndentedString(htmlparserPreserveCamelCase)).append("\n");
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

