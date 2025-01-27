package org.openapitools.model;

import org.openapitools.model.ConfigNodePropertyBoolean;
import javax.validation.constraints.*;
import javax.validation.Valid;

import io.swagger.annotations.ApiModelProperty;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;

public class ComAdobeCqSocialUgcbaseImplPublisherConfigurationImplProperties  {
  
  @ApiModelProperty(value = "")
  @Valid
  private ConfigNodePropertyBoolean isPrimaryPublisher = null;
 /**
   * Get isPrimaryPublisher
   * @return isPrimaryPublisher
  **/
  @JsonProperty("isPrimaryPublisher")
  public ConfigNodePropertyBoolean getIsPrimaryPublisher() {
    return isPrimaryPublisher;
  }

  public void setIsPrimaryPublisher(ConfigNodePropertyBoolean isPrimaryPublisher) {
    this.isPrimaryPublisher = isPrimaryPublisher;
  }

  public ComAdobeCqSocialUgcbaseImplPublisherConfigurationImplProperties isPrimaryPublisher(ConfigNodePropertyBoolean isPrimaryPublisher) {
    this.isPrimaryPublisher = isPrimaryPublisher;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeCqSocialUgcbaseImplPublisherConfigurationImplProperties {\n");
    
    sb.append("    isPrimaryPublisher: ").append(toIndentedString(isPrimaryPublisher)).append("\n");
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

