package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupProperties;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupInfo
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.SpringCodegen", date = "2019-08-05T01:13:37.880Z[GMT]")

public class ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupInfo   {
  @JsonProperty("pid")
  private String pid = null;

  @JsonProperty("title")
  private String title = null;

  @JsonProperty("description")
  private String description = null;

  @JsonProperty("properties")
  private ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupProperties properties = null;

  public ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupInfo pid(String pid) {
    this.pid = pid;
    return this;
  }

  /**
   * Get pid
   * @return pid
  **/
  @ApiModelProperty(value = "")


  public String getPid() {
    return pid;
  }

  public void setPid(String pid) {
    this.pid = pid;
  }

  public ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupInfo title(String title) {
    this.title = title;
    return this;
  }

  /**
   * Get title
   * @return title
  **/
  @ApiModelProperty(value = "")


  public String getTitle() {
    return title;
  }

  public void setTitle(String title) {
    this.title = title;
  }

  public ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupInfo description(String description) {
    this.description = description;
    return this;
  }

  /**
   * Get description
   * @return description
  **/
  @ApiModelProperty(value = "")


  public String getDescription() {
    return description;
  }

  public void setDescription(String description) {
    this.description = description;
  }

  public ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupInfo properties(ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupProperties properties) {
    this.properties = properties;
    return this;
  }

  /**
   * Get properties
   * @return properties
  **/
  @ApiModelProperty(value = "")

  @Valid

  public ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupProperties getProperties() {
    return properties;
  }

  public void setProperties(ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupProperties properties) {
    this.properties = properties;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupInfo comAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupInfo = (ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupInfo) o;
    return Objects.equals(this.pid, comAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupInfo.pid) &&
        Objects.equals(this.title, comAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupInfo.title) &&
        Objects.equals(this.description, comAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupInfo.description) &&
        Objects.equals(this.properties, comAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupInfo.properties);
  }

  @Override
  public int hashCode() {
    return Objects.hash(pid, title, description, properties);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupInfo {\n");
    
    sb.append("    pid: ").append(toIndentedString(pid)).append("\n");
    sb.append("    title: ").append(toIndentedString(title)).append("\n");
    sb.append("    description: ").append(toIndentedString(description)).append("\n");
    sb.append("    properties: ").append(toIndentedString(properties)).append("\n");
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

