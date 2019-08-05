package org.openapitools.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonInclude;
import com.fasterxml.jackson.annotation.JsonProperty;
import org.openapitools.server.api.model.ConfigNodePropertyArray;

@JsonInclude(JsonInclude.Include.NON_NULL) 
public class ComAdobeGraniteBundlesHcImplInactiveBundlesHealthCheckProperties   {
  
  private ConfigNodePropertyArray hcTags = null;
  private ConfigNodePropertyArray ignoredBundles = null;

  public ComAdobeGraniteBundlesHcImplInactiveBundlesHealthCheckProperties () {

  }

  public ComAdobeGraniteBundlesHcImplInactiveBundlesHealthCheckProperties (ConfigNodePropertyArray hcTags, ConfigNodePropertyArray ignoredBundles) {
    this.hcTags = hcTags;
    this.ignoredBundles = ignoredBundles;
  }

    
  @JsonProperty("hc.tags")
  public ConfigNodePropertyArray getHcTags() {
    return hcTags;
  }
  public void setHcTags(ConfigNodePropertyArray hcTags) {
    this.hcTags = hcTags;
  }

    
  @JsonProperty("ignored.bundles")
  public ConfigNodePropertyArray getIgnoredBundles() {
    return ignoredBundles;
  }
  public void setIgnoredBundles(ConfigNodePropertyArray ignoredBundles) {
    this.ignoredBundles = ignoredBundles;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeGraniteBundlesHcImplInactiveBundlesHealthCheckProperties comAdobeGraniteBundlesHcImplInactiveBundlesHealthCheckProperties = (ComAdobeGraniteBundlesHcImplInactiveBundlesHealthCheckProperties) o;
    return Objects.equals(hcTags, comAdobeGraniteBundlesHcImplInactiveBundlesHealthCheckProperties.hcTags) &&
        Objects.equals(ignoredBundles, comAdobeGraniteBundlesHcImplInactiveBundlesHealthCheckProperties.ignoredBundles);
  }

  @Override
  public int hashCode() {
    return Objects.hash(hcTags, ignoredBundles);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeGraniteBundlesHcImplInactiveBundlesHealthCheckProperties {\n");
    
    sb.append("    hcTags: ").append(toIndentedString(hcTags)).append("\n");
    sb.append("    ignoredBundles: ").append(toIndentedString(ignoredBundles)).append("\n");
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