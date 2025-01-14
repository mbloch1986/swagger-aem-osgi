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
  public class ConfigNodePropertyArray {
    /// <summary>
    /// property name
    /// </summary>
    /// <value>property name</value>
    [DataMember(Name="name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "name")]
    public string Name { get; set; }

    /// <summary>
    /// True if optional
    /// </summary>
    /// <value>True if optional</value>
    [DataMember(Name="optional", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "optional")]
    public bool? Optional { get; set; }

    /// <summary>
    /// True if property is set
    /// </summary>
    /// <value>True if property is set</value>
    [DataMember(Name="is_set", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "is_set")]
    public bool? IsSet { get; set; }

    /// <summary>
    /// Property type, 1=String, 2=Long, 3=Integer, 7=Float, 11=Boolean, 12=Secrets(String)
    /// </summary>
    /// <value>Property type, 1=String, 2=Long, 3=Integer, 7=Float, 11=Boolean, 12=Secrets(String)</value>
    [DataMember(Name="type", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "type")]
    public int? Type { get; set; }

    /// <summary>
    /// Property value
    /// </summary>
    /// <value>Property value</value>
    [DataMember(Name="values", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "values")]
    public List<string> Values { get; set; }

    /// <summary>
    /// Property description
    /// </summary>
    /// <value>Property description</value>
    [DataMember(Name="description", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "description")]
    public string Description { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ConfigNodePropertyArray {\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("  Optional: ").Append(Optional).Append("\n");
      sb.Append("  IsSet: ").Append(IsSet).Append("\n");
      sb.Append("  Type: ").Append(Type).Append("\n");
      sb.Append("  Values: ").Append(Values).Append("\n");
      sb.Append("  Description: ").Append(Description).Append("\n");
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
