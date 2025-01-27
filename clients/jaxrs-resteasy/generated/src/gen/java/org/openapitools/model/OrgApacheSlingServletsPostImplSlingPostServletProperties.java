package org.openapitools.model;

import java.util.Objects;
import java.util.ArrayList;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import org.openapitools.model.ConfigNodePropertyArray;
import org.openapitools.model.ConfigNodePropertyBoolean;
import org.openapitools.model.ConfigNodePropertyInteger;
import org.openapitools.model.ConfigNodePropertyString;
import javax.validation.constraints.*;
import io.swagger.annotations.*;


@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaResteasyServerCodegen", date = "2019-08-05T00:59:30.156Z[GMT]")
public class OrgApacheSlingServletsPostImplSlingPostServletProperties   {
  
  private ConfigNodePropertyArray servletPostDateFormats = null;
  private ConfigNodePropertyArray servletPostNodeNameHints = null;
  private ConfigNodePropertyInteger servletPostNodeNameMaxLength = null;
  private ConfigNodePropertyBoolean servletPostCheckinNewVersionableNodes = null;
  private ConfigNodePropertyBoolean servletPostAutoCheckout = null;
  private ConfigNodePropertyBoolean servletPostAutoCheckin = null;
  private ConfigNodePropertyString servletPostIgnorePattern = null;

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("servlet.post.dateFormats")
  public ConfigNodePropertyArray getServletPostDateFormats() {
    return servletPostDateFormats;
  }
  public void setServletPostDateFormats(ConfigNodePropertyArray servletPostDateFormats) {
    this.servletPostDateFormats = servletPostDateFormats;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("servlet.post.nodeNameHints")
  public ConfigNodePropertyArray getServletPostNodeNameHints() {
    return servletPostNodeNameHints;
  }
  public void setServletPostNodeNameHints(ConfigNodePropertyArray servletPostNodeNameHints) {
    this.servletPostNodeNameHints = servletPostNodeNameHints;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("servlet.post.nodeNameMaxLength")
  public ConfigNodePropertyInteger getServletPostNodeNameMaxLength() {
    return servletPostNodeNameMaxLength;
  }
  public void setServletPostNodeNameMaxLength(ConfigNodePropertyInteger servletPostNodeNameMaxLength) {
    this.servletPostNodeNameMaxLength = servletPostNodeNameMaxLength;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("servlet.post.checkinNewVersionableNodes")
  public ConfigNodePropertyBoolean getServletPostCheckinNewVersionableNodes() {
    return servletPostCheckinNewVersionableNodes;
  }
  public void setServletPostCheckinNewVersionableNodes(ConfigNodePropertyBoolean servletPostCheckinNewVersionableNodes) {
    this.servletPostCheckinNewVersionableNodes = servletPostCheckinNewVersionableNodes;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("servlet.post.autoCheckout")
  public ConfigNodePropertyBoolean getServletPostAutoCheckout() {
    return servletPostAutoCheckout;
  }
  public void setServletPostAutoCheckout(ConfigNodePropertyBoolean servletPostAutoCheckout) {
    this.servletPostAutoCheckout = servletPostAutoCheckout;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("servlet.post.autoCheckin")
  public ConfigNodePropertyBoolean getServletPostAutoCheckin() {
    return servletPostAutoCheckin;
  }
  public void setServletPostAutoCheckin(ConfigNodePropertyBoolean servletPostAutoCheckin) {
    this.servletPostAutoCheckin = servletPostAutoCheckin;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("servlet.post.ignorePattern")
  public ConfigNodePropertyString getServletPostIgnorePattern() {
    return servletPostIgnorePattern;
  }
  public void setServletPostIgnorePattern(ConfigNodePropertyString servletPostIgnorePattern) {
    this.servletPostIgnorePattern = servletPostIgnorePattern;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrgApacheSlingServletsPostImplSlingPostServletProperties orgApacheSlingServletsPostImplSlingPostServletProperties = (OrgApacheSlingServletsPostImplSlingPostServletProperties) o;
    return Objects.equals(servletPostDateFormats, orgApacheSlingServletsPostImplSlingPostServletProperties.servletPostDateFormats) &&
        Objects.equals(servletPostNodeNameHints, orgApacheSlingServletsPostImplSlingPostServletProperties.servletPostNodeNameHints) &&
        Objects.equals(servletPostNodeNameMaxLength, orgApacheSlingServletsPostImplSlingPostServletProperties.servletPostNodeNameMaxLength) &&
        Objects.equals(servletPostCheckinNewVersionableNodes, orgApacheSlingServletsPostImplSlingPostServletProperties.servletPostCheckinNewVersionableNodes) &&
        Objects.equals(servletPostAutoCheckout, orgApacheSlingServletsPostImplSlingPostServletProperties.servletPostAutoCheckout) &&
        Objects.equals(servletPostAutoCheckin, orgApacheSlingServletsPostImplSlingPostServletProperties.servletPostAutoCheckin) &&
        Objects.equals(servletPostIgnorePattern, orgApacheSlingServletsPostImplSlingPostServletProperties.servletPostIgnorePattern);
  }

  @Override
  public int hashCode() {
    return Objects.hash(servletPostDateFormats, servletPostNodeNameHints, servletPostNodeNameMaxLength, servletPostCheckinNewVersionableNodes, servletPostAutoCheckout, servletPostAutoCheckin, servletPostIgnorePattern);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgApacheSlingServletsPostImplSlingPostServletProperties {\n");
    
    sb.append("    servletPostDateFormats: ").append(toIndentedString(servletPostDateFormats)).append("\n");
    sb.append("    servletPostNodeNameHints: ").append(toIndentedString(servletPostNodeNameHints)).append("\n");
    sb.append("    servletPostNodeNameMaxLength: ").append(toIndentedString(servletPostNodeNameMaxLength)).append("\n");
    sb.append("    servletPostCheckinNewVersionableNodes: ").append(toIndentedString(servletPostCheckinNewVersionableNodes)).append("\n");
    sb.append("    servletPostAutoCheckout: ").append(toIndentedString(servletPostAutoCheckout)).append("\n");
    sb.append("    servletPostAutoCheckin: ").append(toIndentedString(servletPostAutoCheckin)).append("\n");
    sb.append("    servletPostIgnorePattern: ").append(toIndentedString(servletPostIgnorePattern)).append("\n");
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

