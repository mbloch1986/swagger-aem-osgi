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
  public class ComDayCqReplicationImplReverseReplicatorProperties {
    /// <summary>
    /// Gets or Sets SchedulerPeriod
    /// </summary>
    [DataMember(Name="scheduler.period", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "scheduler.period")]
    public ConfigNodePropertyInteger SchedulerPeriod { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ComDayCqReplicationImplReverseReplicatorProperties {\n");
      sb.Append("  SchedulerPeriod: ").Append(SchedulerPeriod).Append("\n");
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