package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ConfigNodePropertyArray;
import org.openapitools.model.ConfigNodePropertyBoolean;
import org.openapitools.model.ConfigNodePropertyString;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * ComDayCqMcmCampaignImplIntegrationConfigImplProperties
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.SpringCodegen", date = "2019-08-05T01:13:37.880Z[GMT]")

public class ComDayCqMcmCampaignImplIntegrationConfigImplProperties   {
  @JsonProperty("aem.mcm.campaign.formConstraints")
  private ConfigNodePropertyArray aemMcmCampaignFormConstraints = null;

  @JsonProperty("aem.mcm.campaign.publicUrl")
  private ConfigNodePropertyString aemMcmCampaignPublicUrl = null;

  @JsonProperty("aem.mcm.campaign.relaxedSSL")
  private ConfigNodePropertyBoolean aemMcmCampaignRelaxedSSL = null;

  public ComDayCqMcmCampaignImplIntegrationConfigImplProperties aemMcmCampaignFormConstraints(ConfigNodePropertyArray aemMcmCampaignFormConstraints) {
    this.aemMcmCampaignFormConstraints = aemMcmCampaignFormConstraints;
    return this;
  }

  /**
   * Get aemMcmCampaignFormConstraints
   * @return aemMcmCampaignFormConstraints
  **/
  @ApiModelProperty(value = "")

  @Valid

  public ConfigNodePropertyArray getAemMcmCampaignFormConstraints() {
    return aemMcmCampaignFormConstraints;
  }

  public void setAemMcmCampaignFormConstraints(ConfigNodePropertyArray aemMcmCampaignFormConstraints) {
    this.aemMcmCampaignFormConstraints = aemMcmCampaignFormConstraints;
  }

  public ComDayCqMcmCampaignImplIntegrationConfigImplProperties aemMcmCampaignPublicUrl(ConfigNodePropertyString aemMcmCampaignPublicUrl) {
    this.aemMcmCampaignPublicUrl = aemMcmCampaignPublicUrl;
    return this;
  }

  /**
   * Get aemMcmCampaignPublicUrl
   * @return aemMcmCampaignPublicUrl
  **/
  @ApiModelProperty(value = "")

  @Valid

  public ConfigNodePropertyString getAemMcmCampaignPublicUrl() {
    return aemMcmCampaignPublicUrl;
  }

  public void setAemMcmCampaignPublicUrl(ConfigNodePropertyString aemMcmCampaignPublicUrl) {
    this.aemMcmCampaignPublicUrl = aemMcmCampaignPublicUrl;
  }

  public ComDayCqMcmCampaignImplIntegrationConfigImplProperties aemMcmCampaignRelaxedSSL(ConfigNodePropertyBoolean aemMcmCampaignRelaxedSSL) {
    this.aemMcmCampaignRelaxedSSL = aemMcmCampaignRelaxedSSL;
    return this;
  }

  /**
   * Get aemMcmCampaignRelaxedSSL
   * @return aemMcmCampaignRelaxedSSL
  **/
  @ApiModelProperty(value = "")

  @Valid

  public ConfigNodePropertyBoolean getAemMcmCampaignRelaxedSSL() {
    return aemMcmCampaignRelaxedSSL;
  }

  public void setAemMcmCampaignRelaxedSSL(ConfigNodePropertyBoolean aemMcmCampaignRelaxedSSL) {
    this.aemMcmCampaignRelaxedSSL = aemMcmCampaignRelaxedSSL;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComDayCqMcmCampaignImplIntegrationConfigImplProperties comDayCqMcmCampaignImplIntegrationConfigImplProperties = (ComDayCqMcmCampaignImplIntegrationConfigImplProperties) o;
    return Objects.equals(this.aemMcmCampaignFormConstraints, comDayCqMcmCampaignImplIntegrationConfigImplProperties.aemMcmCampaignFormConstraints) &&
        Objects.equals(this.aemMcmCampaignPublicUrl, comDayCqMcmCampaignImplIntegrationConfigImplProperties.aemMcmCampaignPublicUrl) &&
        Objects.equals(this.aemMcmCampaignRelaxedSSL, comDayCqMcmCampaignImplIntegrationConfigImplProperties.aemMcmCampaignRelaxedSSL);
  }

  @Override
  public int hashCode() {
    return Objects.hash(aemMcmCampaignFormConstraints, aemMcmCampaignPublicUrl, aemMcmCampaignRelaxedSSL);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComDayCqMcmCampaignImplIntegrationConfigImplProperties {\n");
    
    sb.append("    aemMcmCampaignFormConstraints: ").append(toIndentedString(aemMcmCampaignFormConstraints)).append("\n");
    sb.append("    aemMcmCampaignPublicUrl: ").append(toIndentedString(aemMcmCampaignPublicUrl)).append("\n");
    sb.append("    aemMcmCampaignRelaxedSSL: ").append(toIndentedString(aemMcmCampaignRelaxedSSL)).append("\n");
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

