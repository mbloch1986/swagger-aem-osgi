package org.openapitools.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonInclude;
import com.fasterxml.jackson.annotation.JsonProperty;
import org.openapitools.server.api.model.ConfigNodePropertyBoolean;

@JsonInclude(JsonInclude.Include.NON_NULL) 
public class ComDayCqDamCoreImplAssethomeAssetHomePageConfigurationProperties   {
  
  private ConfigNodePropertyBoolean isEnabled = null;

  public ComDayCqDamCoreImplAssethomeAssetHomePageConfigurationProperties () {

  }

  public ComDayCqDamCoreImplAssethomeAssetHomePageConfigurationProperties (ConfigNodePropertyBoolean isEnabled) {
    this.isEnabled = isEnabled;
  }

    
  @JsonProperty("isEnabled")
  public ConfigNodePropertyBoolean getIsEnabled() {
    return isEnabled;
  }
  public void setIsEnabled(ConfigNodePropertyBoolean isEnabled) {
    this.isEnabled = isEnabled;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqDamCoreImplAssethomeAssetHomePageConfigurationProperties comDayCqDamCoreImplAssethomeAssetHomePageConfigurationProperties = (ComDayCqDamCoreImplAssethomeAssetHomePageConfigurationProperties) o;
    return Objects.equals(isEnabled, comDayCqDamCoreImplAssethomeAssetHomePageConfigurationProperties.isEnabled);
  }

  @Override
  public int hashCode() {
    return Objects.hash(isEnabled);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqDamCoreImplAssethomeAssetHomePageConfigurationProperties {\n");
    
    sb.append("    isEnabled: ").append(toIndentedString(isEnabled)).append("\n");
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