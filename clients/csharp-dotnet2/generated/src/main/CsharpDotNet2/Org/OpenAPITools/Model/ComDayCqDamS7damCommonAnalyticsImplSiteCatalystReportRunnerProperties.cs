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
  public class ComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties {
    /// <summary>
    /// Gets or Sets SchedulerExpression
    /// </summary>
    [DataMember(Name="scheduler.expression", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "scheduler.expression")]
    public ConfigNodePropertyString SchedulerExpression { get; set; }

    /// <summary>
    /// Gets or Sets SchedulerConcurrent
    /// </summary>
    [DataMember(Name="scheduler.concurrent", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "scheduler.concurrent")]
    public ConfigNodePropertyBoolean SchedulerConcurrent { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties {\n");
      sb.Append("  SchedulerExpression: ").Append(SchedulerExpression).Append("\n");
      sb.Append("  SchedulerConcurrent: ").Append(SchedulerConcurrent).Append("\n");
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