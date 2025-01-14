package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ConfigNodePropertyString;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * ComDayCqWcmCoreMvtMVTStatisticsImplProperties
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.SpringCodegen", date = "2019-08-05T01:13:37.880Z[GMT]")

public class ComDayCqWcmCoreMvtMVTStatisticsImplProperties   {
  @JsonProperty("mvtstatistics.trackingurl")
  private ConfigNodePropertyString mvtstatisticsTrackingurl = null;

  public ComDayCqWcmCoreMvtMVTStatisticsImplProperties mvtstatisticsTrackingurl(ConfigNodePropertyString mvtstatisticsTrackingurl) {
    this.mvtstatisticsTrackingurl = mvtstatisticsTrackingurl;
    return this;
  }

  /**
   * Get mvtstatisticsTrackingurl
   * @return mvtstatisticsTrackingurl
  **/
  @ApiModelProperty(value = "")

  @Valid

  public ConfigNodePropertyString getMvtstatisticsTrackingurl() {
    return mvtstatisticsTrackingurl;
  }

  public void setMvtstatisticsTrackingurl(ConfigNodePropertyString mvtstatisticsTrackingurl) {
    this.mvtstatisticsTrackingurl = mvtstatisticsTrackingurl;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqWcmCoreMvtMVTStatisticsImplProperties comDayCqWcmCoreMvtMVTStatisticsImplProperties = (ComDayCqWcmCoreMvtMVTStatisticsImplProperties) o;
    return Objects.equals(this.mvtstatisticsTrackingurl, comDayCqWcmCoreMvtMVTStatisticsImplProperties.mvtstatisticsTrackingurl);
  }

  @Override
  public int hashCode() {
    return Objects.hash(mvtstatisticsTrackingurl);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqWcmCoreMvtMVTStatisticsImplProperties {\n");
    
    sb.append("    mvtstatisticsTrackingurl: ").append(toIndentedString(mvtstatisticsTrackingurl)).append("\n");
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

