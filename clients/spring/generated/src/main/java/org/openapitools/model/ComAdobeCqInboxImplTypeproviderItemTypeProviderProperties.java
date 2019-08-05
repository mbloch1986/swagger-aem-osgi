package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ConfigNodePropertyArray;
import org.openapitools.model.ConfigNodePropertyString;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.SpringCodegen", date = "2019-08-05T01:13:37.880Z[GMT]")

public class ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties   {
  @JsonProperty("inbox.impl.typeprovider.registrypaths")
  private ConfigNodePropertyArray inboxImplTypeproviderRegistrypaths = null;

  @JsonProperty("inbox.impl.typeprovider.legacypaths")
  private ConfigNodePropertyArray inboxImplTypeproviderLegacypaths = null;

  @JsonProperty("inbox.impl.typeprovider.defaulturl.failureitem")
  private ConfigNodePropertyString inboxImplTypeproviderDefaulturlFailureitem = null;

  @JsonProperty("inbox.impl.typeprovider.defaulturl.workitem")
  private ConfigNodePropertyString inboxImplTypeproviderDefaulturlWorkitem = null;

  @JsonProperty("inbox.impl.typeprovider.defaulturl.task")
  private ConfigNodePropertyString inboxImplTypeproviderDefaulturlTask = null;

  public ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties inboxImplTypeproviderRegistrypaths(ConfigNodePropertyArray inboxImplTypeproviderRegistrypaths) {
    this.inboxImplTypeproviderRegistrypaths = inboxImplTypeproviderRegistrypaths;
    return this;
  }

  /**
   * Get inboxImplTypeproviderRegistrypaths
   * @return inboxImplTypeproviderRegistrypaths
  **/
  @ApiModelProperty(value = "")

  @Valid

  public ConfigNodePropertyArray getInboxImplTypeproviderRegistrypaths() {
    return inboxImplTypeproviderRegistrypaths;
  }

  public void setInboxImplTypeproviderRegistrypaths(ConfigNodePropertyArray inboxImplTypeproviderRegistrypaths) {
    this.inboxImplTypeproviderRegistrypaths = inboxImplTypeproviderRegistrypaths;
  }

  public ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties inboxImplTypeproviderLegacypaths(ConfigNodePropertyArray inboxImplTypeproviderLegacypaths) {
    this.inboxImplTypeproviderLegacypaths = inboxImplTypeproviderLegacypaths;
    return this;
  }

  /**
   * Get inboxImplTypeproviderLegacypaths
   * @return inboxImplTypeproviderLegacypaths
  **/
  @ApiModelProperty(value = "")

  @Valid

  public ConfigNodePropertyArray getInboxImplTypeproviderLegacypaths() {
    return inboxImplTypeproviderLegacypaths;
  }

  public void setInboxImplTypeproviderLegacypaths(ConfigNodePropertyArray inboxImplTypeproviderLegacypaths) {
    this.inboxImplTypeproviderLegacypaths = inboxImplTypeproviderLegacypaths;
  }

  public ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties inboxImplTypeproviderDefaulturlFailureitem(ConfigNodePropertyString inboxImplTypeproviderDefaulturlFailureitem) {
    this.inboxImplTypeproviderDefaulturlFailureitem = inboxImplTypeproviderDefaulturlFailureitem;
    return this;
  }

  /**
   * Get inboxImplTypeproviderDefaulturlFailureitem
   * @return inboxImplTypeproviderDefaulturlFailureitem
  **/
  @ApiModelProperty(value = "")

  @Valid

  public ConfigNodePropertyString getInboxImplTypeproviderDefaulturlFailureitem() {
    return inboxImplTypeproviderDefaulturlFailureitem;
  }

  public void setInboxImplTypeproviderDefaulturlFailureitem(ConfigNodePropertyString inboxImplTypeproviderDefaulturlFailureitem) {
    this.inboxImplTypeproviderDefaulturlFailureitem = inboxImplTypeproviderDefaulturlFailureitem;
  }

  public ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties inboxImplTypeproviderDefaulturlWorkitem(ConfigNodePropertyString inboxImplTypeproviderDefaulturlWorkitem) {
    this.inboxImplTypeproviderDefaulturlWorkitem = inboxImplTypeproviderDefaulturlWorkitem;
    return this;
  }

  /**
   * Get inboxImplTypeproviderDefaulturlWorkitem
   * @return inboxImplTypeproviderDefaulturlWorkitem
  **/
  @ApiModelProperty(value = "")

  @Valid

  public ConfigNodePropertyString getInboxImplTypeproviderDefaulturlWorkitem() {
    return inboxImplTypeproviderDefaulturlWorkitem;
  }

  public void setInboxImplTypeproviderDefaulturlWorkitem(ConfigNodePropertyString inboxImplTypeproviderDefaulturlWorkitem) {
    this.inboxImplTypeproviderDefaulturlWorkitem = inboxImplTypeproviderDefaulturlWorkitem;
  }

  public ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties inboxImplTypeproviderDefaulturlTask(ConfigNodePropertyString inboxImplTypeproviderDefaulturlTask) {
    this.inboxImplTypeproviderDefaulturlTask = inboxImplTypeproviderDefaulturlTask;
    return this;
  }

  /**
   * Get inboxImplTypeproviderDefaulturlTask
   * @return inboxImplTypeproviderDefaulturlTask
  **/
  @ApiModelProperty(value = "")

  @Valid

  public ConfigNodePropertyString getInboxImplTypeproviderDefaulturlTask() {
    return inboxImplTypeproviderDefaulturlTask;
  }

  public void setInboxImplTypeproviderDefaulturlTask(ConfigNodePropertyString inboxImplTypeproviderDefaulturlTask) {
    this.inboxImplTypeproviderDefaulturlTask = inboxImplTypeproviderDefaulturlTask;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties comAdobeCqInboxImplTypeproviderItemTypeProviderProperties = (ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties) o;
    return Objects.equals(this.inboxImplTypeproviderRegistrypaths, comAdobeCqInboxImplTypeproviderItemTypeProviderProperties.inboxImplTypeproviderRegistrypaths) &&
        Objects.equals(this.inboxImplTypeproviderLegacypaths, comAdobeCqInboxImplTypeproviderItemTypeProviderProperties.inboxImplTypeproviderLegacypaths) &&
        Objects.equals(this.inboxImplTypeproviderDefaulturlFailureitem, comAdobeCqInboxImplTypeproviderItemTypeProviderProperties.inboxImplTypeproviderDefaulturlFailureitem) &&
        Objects.equals(this.inboxImplTypeproviderDefaulturlWorkitem, comAdobeCqInboxImplTypeproviderItemTypeProviderProperties.inboxImplTypeproviderDefaulturlWorkitem) &&
        Objects.equals(this.inboxImplTypeproviderDefaulturlTask, comAdobeCqInboxImplTypeproviderItemTypeProviderProperties.inboxImplTypeproviderDefaulturlTask);
  }

  @Override
  public int hashCode() {
    return Objects.hash(inboxImplTypeproviderRegistrypaths, inboxImplTypeproviderLegacypaths, inboxImplTypeproviderDefaulturlFailureitem, inboxImplTypeproviderDefaulturlWorkitem, inboxImplTypeproviderDefaulturlTask);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties {\n");
    
    sb.append("    inboxImplTypeproviderRegistrypaths: ").append(toIndentedString(inboxImplTypeproviderRegistrypaths)).append("\n");
    sb.append("    inboxImplTypeproviderLegacypaths: ").append(toIndentedString(inboxImplTypeproviderLegacypaths)).append("\n");
    sb.append("    inboxImplTypeproviderDefaulturlFailureitem: ").append(toIndentedString(inboxImplTypeproviderDefaulturlFailureitem)).append("\n");
    sb.append("    inboxImplTypeproviderDefaulturlWorkitem: ").append(toIndentedString(inboxImplTypeproviderDefaulturlWorkitem)).append("\n");
    sb.append("    inboxImplTypeproviderDefaulturlTask: ").append(toIndentedString(inboxImplTypeproviderDefaulturlTask)).append("\n");
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
