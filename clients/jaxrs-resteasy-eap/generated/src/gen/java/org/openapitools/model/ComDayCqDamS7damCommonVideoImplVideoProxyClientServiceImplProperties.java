package org.openapitools.model;

import java.util.Objects;
import java.util.ArrayList;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ConfigNodePropertyInteger;
import javax.validation.constraints.*;
import io.swagger.annotations.*;


@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaResteasyEapServerCodegen", date = "2019-08-05T01:00:05.540Z[GMT]")
public class ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties   {
  

  private ConfigNodePropertyInteger cqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName = null;

  private ConfigNodePropertyInteger cqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName = null;

  private ConfigNodePropertyInteger cqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName = null;

  private ConfigNodePropertyInteger cqDamS7damVideoproxyclientserviceHttpReadtimeoutName = null;

  private ConfigNodePropertyInteger cqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName = null;

  private ConfigNodePropertyInteger cqDamS7damVideoproxyclientserviceHttpMaxretrycountName = null;

  private ConfigNodePropertyInteger cqDamS7damVideoproxyclientserviceUploadprogressIntervalName = null;

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("cq.dam.s7dam.videoproxyclientservice.multipartupload.minsize.name")
  public ConfigNodePropertyInteger getCqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName() {
    return cqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName;
  }
  public void setCqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName(ConfigNodePropertyInteger cqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName) {
    this.cqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName = cqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("cq.dam.s7dam.videoproxyclientservice.multipartupload.partsize.name")
  public ConfigNodePropertyInteger getCqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName() {
    return cqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName;
  }
  public void setCqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName(ConfigNodePropertyInteger cqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName) {
    this.cqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName = cqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("cq.dam.s7dam.videoproxyclientservice.multipartupload.numthread.name")
  public ConfigNodePropertyInteger getCqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName() {
    return cqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName;
  }
  public void setCqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName(ConfigNodePropertyInteger cqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName) {
    this.cqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName = cqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("cq.dam.s7dam.videoproxyclientservice.http.readtimeout.name")
  public ConfigNodePropertyInteger getCqDamS7damVideoproxyclientserviceHttpReadtimeoutName() {
    return cqDamS7damVideoproxyclientserviceHttpReadtimeoutName;
  }
  public void setCqDamS7damVideoproxyclientserviceHttpReadtimeoutName(ConfigNodePropertyInteger cqDamS7damVideoproxyclientserviceHttpReadtimeoutName) {
    this.cqDamS7damVideoproxyclientserviceHttpReadtimeoutName = cqDamS7damVideoproxyclientserviceHttpReadtimeoutName;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("cq.dam.s7dam.videoproxyclientservice.http.connectiontimeout.name")
  public ConfigNodePropertyInteger getCqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName() {
    return cqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName;
  }
  public void setCqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName(ConfigNodePropertyInteger cqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName) {
    this.cqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName = cqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("cq.dam.s7dam.videoproxyclientservice.http.maxretrycount.name")
  public ConfigNodePropertyInteger getCqDamS7damVideoproxyclientserviceHttpMaxretrycountName() {
    return cqDamS7damVideoproxyclientserviceHttpMaxretrycountName;
  }
  public void setCqDamS7damVideoproxyclientserviceHttpMaxretrycountName(ConfigNodePropertyInteger cqDamS7damVideoproxyclientserviceHttpMaxretrycountName) {
    this.cqDamS7damVideoproxyclientserviceHttpMaxretrycountName = cqDamS7damVideoproxyclientserviceHttpMaxretrycountName;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("cq.dam.s7dam.videoproxyclientservice.uploadprogress.interval.name")
  public ConfigNodePropertyInteger getCqDamS7damVideoproxyclientserviceUploadprogressIntervalName() {
    return cqDamS7damVideoproxyclientserviceUploadprogressIntervalName;
  }
  public void setCqDamS7damVideoproxyclientserviceUploadprogressIntervalName(ConfigNodePropertyInteger cqDamS7damVideoproxyclientserviceUploadprogressIntervalName) {
    this.cqDamS7damVideoproxyclientserviceUploadprogressIntervalName = cqDamS7damVideoproxyclientserviceUploadprogressIntervalName;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties comDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties = (ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties) o;
    return Objects.equals(cqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName, comDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties.cqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName) &&
        Objects.equals(cqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName, comDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties.cqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName) &&
        Objects.equals(cqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName, comDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties.cqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName) &&
        Objects.equals(cqDamS7damVideoproxyclientserviceHttpReadtimeoutName, comDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties.cqDamS7damVideoproxyclientserviceHttpReadtimeoutName) &&
        Objects.equals(cqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName, comDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties.cqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName) &&
        Objects.equals(cqDamS7damVideoproxyclientserviceHttpMaxretrycountName, comDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties.cqDamS7damVideoproxyclientserviceHttpMaxretrycountName) &&
        Objects.equals(cqDamS7damVideoproxyclientserviceUploadprogressIntervalName, comDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties.cqDamS7damVideoproxyclientserviceUploadprogressIntervalName);
  }

  @Override
  public int hashCode() {
    return Objects.hash(cqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName, cqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName, cqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName, cqDamS7damVideoproxyclientserviceHttpReadtimeoutName, cqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName, cqDamS7damVideoproxyclientserviceHttpMaxretrycountName, cqDamS7damVideoproxyclientserviceUploadprogressIntervalName);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties {\n");
    
    sb.append("    cqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName: ").append(toIndentedString(cqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName)).append("\n");
    sb.append("    cqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName: ").append(toIndentedString(cqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName)).append("\n");
    sb.append("    cqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName: ").append(toIndentedString(cqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName)).append("\n");
    sb.append("    cqDamS7damVideoproxyclientserviceHttpReadtimeoutName: ").append(toIndentedString(cqDamS7damVideoproxyclientserviceHttpReadtimeoutName)).append("\n");
    sb.append("    cqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName: ").append(toIndentedString(cqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName)).append("\n");
    sb.append("    cqDamS7damVideoproxyclientserviceHttpMaxretrycountName: ").append(toIndentedString(cqDamS7damVideoproxyclientserviceHttpMaxretrycountName)).append("\n");
    sb.append("    cqDamS7damVideoproxyclientserviceUploadprogressIntervalName: ").append(toIndentedString(cqDamS7damVideoproxyclientserviceUploadprogressIntervalName)).append("\n");
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

