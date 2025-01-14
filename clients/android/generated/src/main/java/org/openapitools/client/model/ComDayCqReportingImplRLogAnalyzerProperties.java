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

import org.openapitools.client.model.ConfigNodePropertyString;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ComDayCqReportingImplRLogAnalyzerProperties {
  
  @SerializedName("request.log.output")
  private ConfigNodePropertyString requestLogOutput = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getRequestLogOutput() {
    return requestLogOutput;
  }
  public void setRequestLogOutput(ConfigNodePropertyString requestLogOutput) {
    this.requestLogOutput = requestLogOutput;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqReportingImplRLogAnalyzerProperties comDayCqReportingImplRLogAnalyzerProperties = (ComDayCqReportingImplRLogAnalyzerProperties) o;
    return (this.requestLogOutput == null ? comDayCqReportingImplRLogAnalyzerProperties.requestLogOutput == null : this.requestLogOutput.equals(comDayCqReportingImplRLogAnalyzerProperties.requestLogOutput));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.requestLogOutput == null ? 0: this.requestLogOutput.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqReportingImplRLogAnalyzerProperties {\n");
    
    sb.append("  requestLogOutput: ").append(requestLogOutput).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
