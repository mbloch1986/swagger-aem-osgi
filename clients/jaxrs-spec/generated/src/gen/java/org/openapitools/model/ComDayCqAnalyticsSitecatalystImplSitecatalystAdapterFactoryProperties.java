package org.openapitools.model;

import org.openapitools.model.ConfigNodePropertyArray;
import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryProperties   {
  
  private @Valid ConfigNodePropertyArray cqAnalyticsAdapterfactoryContextstores = null;

  /**
   **/
  public ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryProperties cqAnalyticsAdapterfactoryContextstores(ConfigNodePropertyArray cqAnalyticsAdapterfactoryContextstores) {
    this.cqAnalyticsAdapterfactoryContextstores = cqAnalyticsAdapterfactoryContextstores;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("cq.analytics.adapterfactory.contextstores")
  public ConfigNodePropertyArray getCqAnalyticsAdapterfactoryContextstores() {
    return cqAnalyticsAdapterfactoryContextstores;
  }
  public void setCqAnalyticsAdapterfactoryContextstores(ConfigNodePropertyArray cqAnalyticsAdapterfactoryContextstores) {
    this.cqAnalyticsAdapterfactoryContextstores = cqAnalyticsAdapterfactoryContextstores;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryProperties comDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryProperties = (ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryProperties) o;
    return Objects.equals(cqAnalyticsAdapterfactoryContextstores, comDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryProperties.cqAnalyticsAdapterfactoryContextstores);
  }

  @Override
  public int hashCode() {
    return Objects.hash(cqAnalyticsAdapterfactoryContextstores);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryProperties {\n");
    
    sb.append("    cqAnalyticsAdapterfactoryContextstores: ").append(toIndentedString(cqAnalyticsAdapterfactoryContextstores)).append("\n");
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

