/**
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

package org.openapitools.client.model;

import org.openapitools.client.model.ConfigNodePropertyArray;
import org.openapitools.client.model.ConfigNodePropertyBoolean;
import org.openapitools.client.model.ConfigNodePropertyInteger;
import org.openapitools.client.model.ConfigNodePropertyString;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ComDayCqWidgetImplHtmlLibraryManagerImplProperties {
  
  @SerializedName("htmllibmanager.clientmanager")
  private ConfigNodePropertyString htmllibmanagerClientmanager = null;
  @SerializedName("htmllibmanager.debug")
  private ConfigNodePropertyBoolean htmllibmanagerDebug = null;
  @SerializedName("htmllibmanager.debug.console")
  private ConfigNodePropertyBoolean htmllibmanagerDebugConsole = null;
  @SerializedName("htmllibmanager.debug.init.js")
  private ConfigNodePropertyString htmllibmanagerDebugInitJs = null;
  @SerializedName("htmllibmanager.defaultthemename")
  private ConfigNodePropertyString htmllibmanagerDefaultthemename = null;
  @SerializedName("htmllibmanager.defaultuserthemename")
  private ConfigNodePropertyString htmllibmanagerDefaultuserthemename = null;
  @SerializedName("htmllibmanager.firebuglite.path")
  private ConfigNodePropertyString htmllibmanagerFirebuglitePath = null;
  @SerializedName("htmllibmanager.forceCQUrlInfo")
  private ConfigNodePropertyBoolean htmllibmanagerForceCQUrlInfo = null;
  @SerializedName("htmllibmanager.gzip")
  private ConfigNodePropertyBoolean htmllibmanagerGzip = null;
  @SerializedName("htmllibmanager.maxage")
  private ConfigNodePropertyInteger htmllibmanagerMaxage = null;
  @SerializedName("htmllibmanager.maxDataUriSize")
  private ConfigNodePropertyInteger htmllibmanagerMaxDataUriSize = null;
  @SerializedName("htmllibmanager.minify")
  private ConfigNodePropertyBoolean htmllibmanagerMinify = null;
  @SerializedName("htmllibmanager.path.list")
  private ConfigNodePropertyArray htmllibmanagerPathList = null;
  @SerializedName("htmllibmanager.timing")
  private ConfigNodePropertyBoolean htmllibmanagerTiming = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getHtmllibmanagerClientmanager() {
    return htmllibmanagerClientmanager;
  }
  public void setHtmllibmanagerClientmanager(ConfigNodePropertyString htmllibmanagerClientmanager) {
    this.htmllibmanagerClientmanager = htmllibmanagerClientmanager;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getHtmllibmanagerDebug() {
    return htmllibmanagerDebug;
  }
  public void setHtmllibmanagerDebug(ConfigNodePropertyBoolean htmllibmanagerDebug) {
    this.htmllibmanagerDebug = htmllibmanagerDebug;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getHtmllibmanagerDebugConsole() {
    return htmllibmanagerDebugConsole;
  }
  public void setHtmllibmanagerDebugConsole(ConfigNodePropertyBoolean htmllibmanagerDebugConsole) {
    this.htmllibmanagerDebugConsole = htmllibmanagerDebugConsole;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getHtmllibmanagerDebugInitJs() {
    return htmllibmanagerDebugInitJs;
  }
  public void setHtmllibmanagerDebugInitJs(ConfigNodePropertyString htmllibmanagerDebugInitJs) {
    this.htmllibmanagerDebugInitJs = htmllibmanagerDebugInitJs;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getHtmllibmanagerDefaultthemename() {
    return htmllibmanagerDefaultthemename;
  }
  public void setHtmllibmanagerDefaultthemename(ConfigNodePropertyString htmllibmanagerDefaultthemename) {
    this.htmllibmanagerDefaultthemename = htmllibmanagerDefaultthemename;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getHtmllibmanagerDefaultuserthemename() {
    return htmllibmanagerDefaultuserthemename;
  }
  public void setHtmllibmanagerDefaultuserthemename(ConfigNodePropertyString htmllibmanagerDefaultuserthemename) {
    this.htmllibmanagerDefaultuserthemename = htmllibmanagerDefaultuserthemename;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getHtmllibmanagerFirebuglitePath() {
    return htmllibmanagerFirebuglitePath;
  }
  public void setHtmllibmanagerFirebuglitePath(ConfigNodePropertyString htmllibmanagerFirebuglitePath) {
    this.htmllibmanagerFirebuglitePath = htmllibmanagerFirebuglitePath;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getHtmllibmanagerForceCQUrlInfo() {
    return htmllibmanagerForceCQUrlInfo;
  }
  public void setHtmllibmanagerForceCQUrlInfo(ConfigNodePropertyBoolean htmllibmanagerForceCQUrlInfo) {
    this.htmllibmanagerForceCQUrlInfo = htmllibmanagerForceCQUrlInfo;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getHtmllibmanagerGzip() {
    return htmllibmanagerGzip;
  }
  public void setHtmllibmanagerGzip(ConfigNodePropertyBoolean htmllibmanagerGzip) {
    this.htmllibmanagerGzip = htmllibmanagerGzip;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getHtmllibmanagerMaxage() {
    return htmllibmanagerMaxage;
  }
  public void setHtmllibmanagerMaxage(ConfigNodePropertyInteger htmllibmanagerMaxage) {
    this.htmllibmanagerMaxage = htmllibmanagerMaxage;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getHtmllibmanagerMaxDataUriSize() {
    return htmllibmanagerMaxDataUriSize;
  }
  public void setHtmllibmanagerMaxDataUriSize(ConfigNodePropertyInteger htmllibmanagerMaxDataUriSize) {
    this.htmllibmanagerMaxDataUriSize = htmllibmanagerMaxDataUriSize;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getHtmllibmanagerMinify() {
    return htmllibmanagerMinify;
  }
  public void setHtmllibmanagerMinify(ConfigNodePropertyBoolean htmllibmanagerMinify) {
    this.htmllibmanagerMinify = htmllibmanagerMinify;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getHtmllibmanagerPathList() {
    return htmllibmanagerPathList;
  }
  public void setHtmllibmanagerPathList(ConfigNodePropertyArray htmllibmanagerPathList) {
    this.htmllibmanagerPathList = htmllibmanagerPathList;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getHtmllibmanagerTiming() {
    return htmllibmanagerTiming;
  }
  public void setHtmllibmanagerTiming(ConfigNodePropertyBoolean htmllibmanagerTiming) {
    this.htmllibmanagerTiming = htmllibmanagerTiming;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqWidgetImplHtmlLibraryManagerImplProperties comDayCqWidgetImplHtmlLibraryManagerImplProperties = (ComDayCqWidgetImplHtmlLibraryManagerImplProperties) o;
    return (this.htmllibmanagerClientmanager == null ? comDayCqWidgetImplHtmlLibraryManagerImplProperties.htmllibmanagerClientmanager == null : this.htmllibmanagerClientmanager.equals(comDayCqWidgetImplHtmlLibraryManagerImplProperties.htmllibmanagerClientmanager)) &&
        (this.htmllibmanagerDebug == null ? comDayCqWidgetImplHtmlLibraryManagerImplProperties.htmllibmanagerDebug == null : this.htmllibmanagerDebug.equals(comDayCqWidgetImplHtmlLibraryManagerImplProperties.htmllibmanagerDebug)) &&
        (this.htmllibmanagerDebugConsole == null ? comDayCqWidgetImplHtmlLibraryManagerImplProperties.htmllibmanagerDebugConsole == null : this.htmllibmanagerDebugConsole.equals(comDayCqWidgetImplHtmlLibraryManagerImplProperties.htmllibmanagerDebugConsole)) &&
        (this.htmllibmanagerDebugInitJs == null ? comDayCqWidgetImplHtmlLibraryManagerImplProperties.htmllibmanagerDebugInitJs == null : this.htmllibmanagerDebugInitJs.equals(comDayCqWidgetImplHtmlLibraryManagerImplProperties.htmllibmanagerDebugInitJs)) &&
        (this.htmllibmanagerDefaultthemename == null ? comDayCqWidgetImplHtmlLibraryManagerImplProperties.htmllibmanagerDefaultthemename == null : this.htmllibmanagerDefaultthemename.equals(comDayCqWidgetImplHtmlLibraryManagerImplProperties.htmllibmanagerDefaultthemename)) &&
        (this.htmllibmanagerDefaultuserthemename == null ? comDayCqWidgetImplHtmlLibraryManagerImplProperties.htmllibmanagerDefaultuserthemename == null : this.htmllibmanagerDefaultuserthemename.equals(comDayCqWidgetImplHtmlLibraryManagerImplProperties.htmllibmanagerDefaultuserthemename)) &&
        (this.htmllibmanagerFirebuglitePath == null ? comDayCqWidgetImplHtmlLibraryManagerImplProperties.htmllibmanagerFirebuglitePath == null : this.htmllibmanagerFirebuglitePath.equals(comDayCqWidgetImplHtmlLibraryManagerImplProperties.htmllibmanagerFirebuglitePath)) &&
        (this.htmllibmanagerForceCQUrlInfo == null ? comDayCqWidgetImplHtmlLibraryManagerImplProperties.htmllibmanagerForceCQUrlInfo == null : this.htmllibmanagerForceCQUrlInfo.equals(comDayCqWidgetImplHtmlLibraryManagerImplProperties.htmllibmanagerForceCQUrlInfo)) &&
        (this.htmllibmanagerGzip == null ? comDayCqWidgetImplHtmlLibraryManagerImplProperties.htmllibmanagerGzip == null : this.htmllibmanagerGzip.equals(comDayCqWidgetImplHtmlLibraryManagerImplProperties.htmllibmanagerGzip)) &&
        (this.htmllibmanagerMaxage == null ? comDayCqWidgetImplHtmlLibraryManagerImplProperties.htmllibmanagerMaxage == null : this.htmllibmanagerMaxage.equals(comDayCqWidgetImplHtmlLibraryManagerImplProperties.htmllibmanagerMaxage)) &&
        (this.htmllibmanagerMaxDataUriSize == null ? comDayCqWidgetImplHtmlLibraryManagerImplProperties.htmllibmanagerMaxDataUriSize == null : this.htmllibmanagerMaxDataUriSize.equals(comDayCqWidgetImplHtmlLibraryManagerImplProperties.htmllibmanagerMaxDataUriSize)) &&
        (this.htmllibmanagerMinify == null ? comDayCqWidgetImplHtmlLibraryManagerImplProperties.htmllibmanagerMinify == null : this.htmllibmanagerMinify.equals(comDayCqWidgetImplHtmlLibraryManagerImplProperties.htmllibmanagerMinify)) &&
        (this.htmllibmanagerPathList == null ? comDayCqWidgetImplHtmlLibraryManagerImplProperties.htmllibmanagerPathList == null : this.htmllibmanagerPathList.equals(comDayCqWidgetImplHtmlLibraryManagerImplProperties.htmllibmanagerPathList)) &&
        (this.htmllibmanagerTiming == null ? comDayCqWidgetImplHtmlLibraryManagerImplProperties.htmllibmanagerTiming == null : this.htmllibmanagerTiming.equals(comDayCqWidgetImplHtmlLibraryManagerImplProperties.htmllibmanagerTiming));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.htmllibmanagerClientmanager == null ? 0: this.htmllibmanagerClientmanager.hashCode());
    result = 31 * result + (this.htmllibmanagerDebug == null ? 0: this.htmllibmanagerDebug.hashCode());
    result = 31 * result + (this.htmllibmanagerDebugConsole == null ? 0: this.htmllibmanagerDebugConsole.hashCode());
    result = 31 * result + (this.htmllibmanagerDebugInitJs == null ? 0: this.htmllibmanagerDebugInitJs.hashCode());
    result = 31 * result + (this.htmllibmanagerDefaultthemename == null ? 0: this.htmllibmanagerDefaultthemename.hashCode());
    result = 31 * result + (this.htmllibmanagerDefaultuserthemename == null ? 0: this.htmllibmanagerDefaultuserthemename.hashCode());
    result = 31 * result + (this.htmllibmanagerFirebuglitePath == null ? 0: this.htmllibmanagerFirebuglitePath.hashCode());
    result = 31 * result + (this.htmllibmanagerForceCQUrlInfo == null ? 0: this.htmllibmanagerForceCQUrlInfo.hashCode());
    result = 31 * result + (this.htmllibmanagerGzip == null ? 0: this.htmllibmanagerGzip.hashCode());
    result = 31 * result + (this.htmllibmanagerMaxage == null ? 0: this.htmllibmanagerMaxage.hashCode());
    result = 31 * result + (this.htmllibmanagerMaxDataUriSize == null ? 0: this.htmllibmanagerMaxDataUriSize.hashCode());
    result = 31 * result + (this.htmllibmanagerMinify == null ? 0: this.htmllibmanagerMinify.hashCode());
    result = 31 * result + (this.htmllibmanagerPathList == null ? 0: this.htmllibmanagerPathList.hashCode());
    result = 31 * result + (this.htmllibmanagerTiming == null ? 0: this.htmllibmanagerTiming.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqWidgetImplHtmlLibraryManagerImplProperties {\n");
    
    sb.append("  htmllibmanagerClientmanager: ").append(htmllibmanagerClientmanager).append("\n");
    sb.append("  htmllibmanagerDebug: ").append(htmllibmanagerDebug).append("\n");
    sb.append("  htmllibmanagerDebugConsole: ").append(htmllibmanagerDebugConsole).append("\n");
    sb.append("  htmllibmanagerDebugInitJs: ").append(htmllibmanagerDebugInitJs).append("\n");
    sb.append("  htmllibmanagerDefaultthemename: ").append(htmllibmanagerDefaultthemename).append("\n");
    sb.append("  htmllibmanagerDefaultuserthemename: ").append(htmllibmanagerDefaultuserthemename).append("\n");
    sb.append("  htmllibmanagerFirebuglitePath: ").append(htmllibmanagerFirebuglitePath).append("\n");
    sb.append("  htmllibmanagerForceCQUrlInfo: ").append(htmllibmanagerForceCQUrlInfo).append("\n");
    sb.append("  htmllibmanagerGzip: ").append(htmllibmanagerGzip).append("\n");
    sb.append("  htmllibmanagerMaxage: ").append(htmllibmanagerMaxage).append("\n");
    sb.append("  htmllibmanagerMaxDataUriSize: ").append(htmllibmanagerMaxDataUriSize).append("\n");
    sb.append("  htmllibmanagerMinify: ").append(htmllibmanagerMinify).append("\n");
    sb.append("  htmllibmanagerPathList: ").append(htmllibmanagerPathList).append("\n");
    sb.append("  htmllibmanagerTiming: ").append(htmllibmanagerTiming).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
