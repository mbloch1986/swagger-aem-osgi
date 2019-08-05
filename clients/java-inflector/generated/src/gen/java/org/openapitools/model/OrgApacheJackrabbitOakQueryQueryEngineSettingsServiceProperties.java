package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ConfigNodePropertyBoolean;
import org.openapitools.model.ConfigNodePropertyInteger;





@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaInflectorServerCodegen", date = "2019-08-05T00:53:46.291Z[GMT]")
public class OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties   {
  @JsonProperty("queryLimitInMemory")
  private ConfigNodePropertyInteger queryLimitInMemory = null;

  @JsonProperty("queryLimitReads")
  private ConfigNodePropertyInteger queryLimitReads = null;

  @JsonProperty("queryFailTraversal")
  private ConfigNodePropertyBoolean queryFailTraversal = null;

  @JsonProperty("fastQuerySize")
  private ConfigNodePropertyBoolean fastQuerySize = null;

  /**
   **/
  public OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties queryLimitInMemory(ConfigNodePropertyInteger queryLimitInMemory) {
    this.queryLimitInMemory = queryLimitInMemory;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("queryLimitInMemory")
  public ConfigNodePropertyInteger getQueryLimitInMemory() {
    return queryLimitInMemory;
  }
  public void setQueryLimitInMemory(ConfigNodePropertyInteger queryLimitInMemory) {
    this.queryLimitInMemory = queryLimitInMemory;
  }

  /**
   **/
  public OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties queryLimitReads(ConfigNodePropertyInteger queryLimitReads) {
    this.queryLimitReads = queryLimitReads;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("queryLimitReads")
  public ConfigNodePropertyInteger getQueryLimitReads() {
    return queryLimitReads;
  }
  public void setQueryLimitReads(ConfigNodePropertyInteger queryLimitReads) {
    this.queryLimitReads = queryLimitReads;
  }

  /**
   **/
  public OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties queryFailTraversal(ConfigNodePropertyBoolean queryFailTraversal) {
    this.queryFailTraversal = queryFailTraversal;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("queryFailTraversal")
  public ConfigNodePropertyBoolean getQueryFailTraversal() {
    return queryFailTraversal;
  }
  public void setQueryFailTraversal(ConfigNodePropertyBoolean queryFailTraversal) {
    this.queryFailTraversal = queryFailTraversal;
  }

  /**
   **/
  public OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties fastQuerySize(ConfigNodePropertyBoolean fastQuerySize) {
    this.fastQuerySize = fastQuerySize;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("fastQuerySize")
  public ConfigNodePropertyBoolean getFastQuerySize() {
    return fastQuerySize;
  }
  public void setFastQuerySize(ConfigNodePropertyBoolean fastQuerySize) {
    this.fastQuerySize = fastQuerySize;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties orgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties = (OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties) o;
    return Objects.equals(queryLimitInMemory, orgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties.queryLimitInMemory) &&
        Objects.equals(queryLimitReads, orgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties.queryLimitReads) &&
        Objects.equals(queryFailTraversal, orgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties.queryFailTraversal) &&
        Objects.equals(fastQuerySize, orgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties.fastQuerySize);
  }

  @Override
  public int hashCode() {
    return Objects.hash(queryLimitInMemory, queryLimitReads, queryFailTraversal, fastQuerySize);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties {\n");
    
    sb.append("    queryLimitInMemory: ").append(toIndentedString(queryLimitInMemory)).append("\n");
    sb.append("    queryLimitReads: ").append(toIndentedString(queryLimitReads)).append("\n");
    sb.append("    queryFailTraversal: ").append(toIndentedString(queryFailTraversal)).append("\n");
    sb.append("    fastQuerySize: ").append(toIndentedString(fastQuerySize)).append("\n");
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
