package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ConfigNodePropertyBoolean;
import org.openapitools.model.ConfigNodePropertyInteger;
import org.openapitools.model.ConfigNodePropertyString;





@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaUndertowServerCodegen", date = "2019-08-05T00:56:20.785Z[GMT]")
public class ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplProperties   {
  
  private ConfigNodePropertyBoolean createPreviewEnabled = null;
  private ConfigNodePropertyBoolean updatePreviewEnabled = null;
  private ConfigNodePropertyInteger queueSize = null;
  private ConfigNodePropertyString folderPreviewRenditionRegex = null;

  /**
   **/
  public ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplProperties createPreviewEnabled(ConfigNodePropertyBoolean createPreviewEnabled) {
    this.createPreviewEnabled = createPreviewEnabled;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("createPreviewEnabled")
  public ConfigNodePropertyBoolean getCreatePreviewEnabled() {
    return createPreviewEnabled;
  }
  public void setCreatePreviewEnabled(ConfigNodePropertyBoolean createPreviewEnabled) {
    this.createPreviewEnabled = createPreviewEnabled;
  }

  /**
   **/
  public ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplProperties updatePreviewEnabled(ConfigNodePropertyBoolean updatePreviewEnabled) {
    this.updatePreviewEnabled = updatePreviewEnabled;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("updatePreviewEnabled")
  public ConfigNodePropertyBoolean getUpdatePreviewEnabled() {
    return updatePreviewEnabled;
  }
  public void setUpdatePreviewEnabled(ConfigNodePropertyBoolean updatePreviewEnabled) {
    this.updatePreviewEnabled = updatePreviewEnabled;
  }

  /**
   **/
  public ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplProperties queueSize(ConfigNodePropertyInteger queueSize) {
    this.queueSize = queueSize;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("queueSize")
  public ConfigNodePropertyInteger getQueueSize() {
    return queueSize;
  }
  public void setQueueSize(ConfigNodePropertyInteger queueSize) {
    this.queueSize = queueSize;
  }

  /**
   **/
  public ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplProperties folderPreviewRenditionRegex(ConfigNodePropertyString folderPreviewRenditionRegex) {
    this.folderPreviewRenditionRegex = folderPreviewRenditionRegex;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("folderPreviewRenditionRegex")
  public ConfigNodePropertyString getFolderPreviewRenditionRegex() {
    return folderPreviewRenditionRegex;
  }
  public void setFolderPreviewRenditionRegex(ConfigNodePropertyString folderPreviewRenditionRegex) {
    this.folderPreviewRenditionRegex = folderPreviewRenditionRegex;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplProperties comDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplProperties = (ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplProperties) o;
    return Objects.equals(createPreviewEnabled, comDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplProperties.createPreviewEnabled) &&
        Objects.equals(updatePreviewEnabled, comDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplProperties.updatePreviewEnabled) &&
        Objects.equals(queueSize, comDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplProperties.queueSize) &&
        Objects.equals(folderPreviewRenditionRegex, comDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplProperties.folderPreviewRenditionRegex);
  }

  @Override
  public int hashCode() {
    return Objects.hash(createPreviewEnabled, updatePreviewEnabled, queueSize, folderPreviewRenditionRegex);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplProperties {\n");
    
    sb.append("    createPreviewEnabled: ").append(toIndentedString(createPreviewEnabled)).append("\n");
    sb.append("    updatePreviewEnabled: ").append(toIndentedString(updatePreviewEnabled)).append("\n");
    sb.append("    queueSize: ").append(toIndentedString(queueSize)).append("\n");
    sb.append("    folderPreviewRenditionRegex: ").append(toIndentedString(folderPreviewRenditionRegex)).append("\n");
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

