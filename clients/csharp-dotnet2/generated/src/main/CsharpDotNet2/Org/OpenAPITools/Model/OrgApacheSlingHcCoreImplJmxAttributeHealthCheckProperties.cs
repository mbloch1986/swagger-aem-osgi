using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace Org.OpenAPITools.Model {

  /// <summary>
  /// 
  /// </summary>
  [DataContract]
  public class OrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties {
    /// <summary>
    /// Gets or Sets HcName
    /// </summary>
    [DataMember(Name="hc.name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "hc.name")]
    public ConfigNodePropertyString HcName { get; set; }

    /// <summary>
    /// Gets or Sets HcTags
    /// </summary>
    [DataMember(Name="hc.tags", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "hc.tags")]
    public ConfigNodePropertyArray HcTags { get; set; }

    /// <summary>
    /// Gets or Sets HcMbeanName
    /// </summary>
    [DataMember(Name="hc.mbean.name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "hc.mbean.name")]
    public ConfigNodePropertyString HcMbeanName { get; set; }

    /// <summary>
    /// Gets or Sets MbeanName
    /// </summary>
    [DataMember(Name="mbean.name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "mbean.name")]
    public ConfigNodePropertyString MbeanName { get; set; }

    /// <summary>
    /// Gets or Sets AttributeName
    /// </summary>
    [DataMember(Name="attribute.name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "attribute.name")]
    public ConfigNodePropertyString AttributeName { get; set; }

    /// <summary>
    /// Gets or Sets AttributeValueConstraint
    /// </summary>
    [DataMember(Name="attribute.value.constraint", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "attribute.value.constraint")]
    public ConfigNodePropertyString AttributeValueConstraint { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class OrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties {\n");
      sb.Append("  HcName: ").Append(HcName).Append("\n");
      sb.Append("  HcTags: ").Append(HcTags).Append("\n");
      sb.Append("  HcMbeanName: ").Append(HcMbeanName).Append("\n");
      sb.Append("  MbeanName: ").Append(MbeanName).Append("\n");
      sb.Append("  AttributeName: ").Append(AttributeName).Append("\n");
      sb.Append("  AttributeValueConstraint: ").Append(AttributeValueConstraint).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }

    /// <summary>
    /// Get the JSON string presentation of the object
    /// </summary>
    /// <returns>JSON string presentation of the object</returns>
    public string ToJson() {
      return JsonConvert.SerializeObject(this, Formatting.Indented);
    }

}
}
