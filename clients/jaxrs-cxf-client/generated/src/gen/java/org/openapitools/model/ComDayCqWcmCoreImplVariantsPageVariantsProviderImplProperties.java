package org.openapitools.model;

import org.openapitools.model.ConfigNodePropertyString;

import io.swagger.annotations.ApiModelProperty;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;

public class ComDayCqWcmCoreImplVariantsPageVariantsProviderImplProperties  {
  
  @ApiModelProperty(value = "")
  private ConfigNodePropertyString defaultExternalizerDomain = null;
 /**
   * Get defaultExternalizerDomain
   * @return defaultExternalizerDomain
  **/
  @JsonProperty("default.externalizer.domain")
  public ConfigNodePropertyString getDefaultExternalizerDomain() {
    return defaultExternalizerDomain;
  }

  public void setDefaultExternalizerDomain(ConfigNodePropertyString defaultExternalizerDomain) {
    this.defaultExternalizerDomain = defaultExternalizerDomain;
  }

  public ComDayCqWcmCoreImplVariantsPageVariantsProviderImplProperties defaultExternalizerDomain(ConfigNodePropertyString defaultExternalizerDomain) {
    this.defaultExternalizerDomain = defaultExternalizerDomain;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqWcmCoreImplVariantsPageVariantsProviderImplProperties {\n");
    
    sb.append("    defaultExternalizerDomain: ").append(toIndentedString(defaultExternalizerDomain)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

