package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;





@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaUndertowServerCodegen", date = "2019-08-05T00:56:20.785Z[GMT]")
public class ConfigNodePropertyBoolean   {
  
  private String name = null;
  private Boolean optional = null;
  private Boolean isSet = null;
  private Integer type = null;
  private Boolean value = null;
  private String description = null;

  /**
   * property name
   **/
  public ConfigNodePropertyBoolean name(String name) {
    this.name = name;
    return this;
  }

  
  @ApiModelProperty(value = "property name")
  @JsonProperty("name")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  /**
   * True if optional
   **/
  public ConfigNodePropertyBoolean optional(Boolean optional) {
    this.optional = optional;
    return this;
  }

  
  @ApiModelProperty(value = "True if optional")
  @JsonProperty("optional")
  public Boolean getOptional() {
    return optional;
  }
  public void setOptional(Boolean optional) {
    this.optional = optional;
  }

  /**
   * True if property is set
   **/
  public ConfigNodePropertyBoolean isSet(Boolean isSet) {
    this.isSet = isSet;
    return this;
  }

  
  @ApiModelProperty(value = "True if property is set")
  @JsonProperty("is_set")
  public Boolean getIsSet() {
    return isSet;
  }
  public void setIsSet(Boolean isSet) {
    this.isSet = isSet;
  }

  /**
   * Property type, 1=String, 2=Long, 3=Integer, 7=Float, 11=Boolean, 12=Secrets(String)
   **/
  public ConfigNodePropertyBoolean type(Integer type) {
    this.type = type;
    return this;
  }

  
  @ApiModelProperty(value = "Property type, 1=String, 2=Long, 3=Integer, 7=Float, 11=Boolean, 12=Secrets(String)")
  @JsonProperty("type")
  public Integer getType() {
    return type;
  }
  public void setType(Integer type) {
    this.type = type;
  }

  /**
   * Property value
   **/
  public ConfigNodePropertyBoolean value(Boolean value) {
    this.value = value;
    return this;
  }

  
  @ApiModelProperty(value = "Property value")
  @JsonProperty("value")
  public Boolean getValue() {
    return value;
  }
  public void setValue(Boolean value) {
    this.value = value;
  }

  /**
   * Property description
   **/
  public ConfigNodePropertyBoolean description(String description) {
    this.description = description;
    return this;
  }

  
  @ApiModelProperty(value = "Property description")
  @JsonProperty("description")
  public String getDescription() {
    return description;
  }
  public void setDescription(String description) {
    this.description = description;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ConfigNodePropertyBoolean configNodePropertyBoolean = (ConfigNodePropertyBoolean) o;
    return Objects.equals(name, configNodePropertyBoolean.name) &&
        Objects.equals(optional, configNodePropertyBoolean.optional) &&
        Objects.equals(isSet, configNodePropertyBoolean.isSet) &&
        Objects.equals(type, configNodePropertyBoolean.type) &&
        Objects.equals(value, configNodePropertyBoolean.value) &&
        Objects.equals(description, configNodePropertyBoolean.description);
  }

  @Override
  public int hashCode() {
    return Objects.hash(name, optional, isSet, type, value, description);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ConfigNodePropertyBoolean {\n");
    
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    optional: ").append(toIndentedString(optional)).append("\n");
    sb.append("    isSet: ").append(toIndentedString(isSet)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    value: ").append(toIndentedString(value)).append("\n");
    sb.append("    description: ").append(toIndentedString(description)).append("\n");
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

