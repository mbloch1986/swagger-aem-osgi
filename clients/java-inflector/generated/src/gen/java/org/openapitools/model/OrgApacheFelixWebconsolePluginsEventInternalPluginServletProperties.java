package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ConfigNodePropertyInteger;





@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaInflectorServerCodegen", date = "2019-08-05T00:53:46.291Z[GMT]")
public class OrgApacheFelixWebconsolePluginsEventInternalPluginServletProperties   {
  @JsonProperty("max.size")
  private ConfigNodePropertyInteger maxSize = null;

  /**
   **/
  public OrgApacheFelixWebconsolePluginsEventInternalPluginServletProperties maxSize(ConfigNodePropertyInteger maxSize) {
    this.maxSize = maxSize;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("max.size")
  public ConfigNodePropertyInteger getMaxSize() {
    return maxSize;
  }
  public void setMaxSize(ConfigNodePropertyInteger maxSize) {
    this.maxSize = maxSize;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheFelixWebconsolePluginsEventInternalPluginServletProperties orgApacheFelixWebconsolePluginsEventInternalPluginServletProperties = (OrgApacheFelixWebconsolePluginsEventInternalPluginServletProperties) o;
    return Objects.equals(maxSize, orgApacheFelixWebconsolePluginsEventInternalPluginServletProperties.maxSize);
  }

  @Override
  public int hashCode() {
    return Objects.hash(maxSize);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheFelixWebconsolePluginsEventInternalPluginServletProperties {\n");
    
    sb.append("    maxSize: ").append(toIndentedString(maxSize)).append("\n");
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

