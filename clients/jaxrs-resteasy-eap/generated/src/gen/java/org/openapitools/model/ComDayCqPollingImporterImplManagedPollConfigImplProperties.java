package org.openapitools.model;

import java.util.Objects;
import java.util.ArrayList;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ConfigNodePropertyBoolean;
import org.openapitools.model.ConfigNodePropertyInteger;
import org.openapitools.model.ConfigNodePropertyString;
import javax.validation.constraints.*;
import io.swagger.annotations.*;


@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaResteasyEapServerCodegen", date = "2019-08-05T01:00:05.540Z[GMT]")
public class ComDayCqPollingImporterImplManagedPollConfigImplProperties   {
  

  private ConfigNodePropertyString id = null;

  private ConfigNodePropertyBoolean enabled = null;

  private ConfigNodePropertyBoolean reference = null;

  private ConfigNodePropertyInteger interval = null;

  private ConfigNodePropertyString expression = null;

  private ConfigNodePropertyString source = null;

  private ConfigNodePropertyString target = null;

  private ConfigNodePropertyString login = null;

  private ConfigNodePropertyString password = null;

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("id")
  public ConfigNodePropertyString getId() {
    return id;
  }
  public void setId(ConfigNodePropertyString id) {
    this.id = id;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("enabled")
  public ConfigNodePropertyBoolean getEnabled() {
    return enabled;
  }
  public void setEnabled(ConfigNodePropertyBoolean enabled) {
    this.enabled = enabled;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("reference")
  public ConfigNodePropertyBoolean getReference() {
    return reference;
  }
  public void setReference(ConfigNodePropertyBoolean reference) {
    this.reference = reference;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("interval")
  public ConfigNodePropertyInteger getInterval() {
    return interval;
  }
  public void setInterval(ConfigNodePropertyInteger interval) {
    this.interval = interval;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("expression")
  public ConfigNodePropertyString getExpression() {
    return expression;
  }
  public void setExpression(ConfigNodePropertyString expression) {
    this.expression = expression;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("source")
  public ConfigNodePropertyString getSource() {
    return source;
  }
  public void setSource(ConfigNodePropertyString source) {
    this.source = source;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("target")
  public ConfigNodePropertyString getTarget() {
    return target;
  }
  public void setTarget(ConfigNodePropertyString target) {
    this.target = target;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("login")
  public ConfigNodePropertyString getLogin() {
    return login;
  }
  public void setLogin(ConfigNodePropertyString login) {
    this.login = login;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("password")
  public ConfigNodePropertyString getPassword() {
    return password;
  }
  public void setPassword(ConfigNodePropertyString password) {
    this.password = password;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqPollingImporterImplManagedPollConfigImplProperties comDayCqPollingImporterImplManagedPollConfigImplProperties = (ComDayCqPollingImporterImplManagedPollConfigImplProperties) o;
    return Objects.equals(id, comDayCqPollingImporterImplManagedPollConfigImplProperties.id) &&
        Objects.equals(enabled, comDayCqPollingImporterImplManagedPollConfigImplProperties.enabled) &&
        Objects.equals(reference, comDayCqPollingImporterImplManagedPollConfigImplProperties.reference) &&
        Objects.equals(interval, comDayCqPollingImporterImplManagedPollConfigImplProperties.interval) &&
        Objects.equals(expression, comDayCqPollingImporterImplManagedPollConfigImplProperties.expression) &&
        Objects.equals(source, comDayCqPollingImporterImplManagedPollConfigImplProperties.source) &&
        Objects.equals(target, comDayCqPollingImporterImplManagedPollConfigImplProperties.target) &&
        Objects.equals(login, comDayCqPollingImporterImplManagedPollConfigImplProperties.login) &&
        Objects.equals(password, comDayCqPollingImporterImplManagedPollConfigImplProperties.password);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, enabled, reference, interval, expression, source, target, login, password);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqPollingImporterImplManagedPollConfigImplProperties {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    enabled: ").append(toIndentedString(enabled)).append("\n");
    sb.append("    reference: ").append(toIndentedString(reference)).append("\n");
    sb.append("    interval: ").append(toIndentedString(interval)).append("\n");
    sb.append("    expression: ").append(toIndentedString(expression)).append("\n");
    sb.append("    source: ").append(toIndentedString(source)).append("\n");
    sb.append("    target: ").append(toIndentedString(target)).append("\n");
    sb.append("    login: ").append(toIndentedString(login)).append("\n");
    sb.append("    password: ").append(toIndentedString(password)).append("\n");
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
