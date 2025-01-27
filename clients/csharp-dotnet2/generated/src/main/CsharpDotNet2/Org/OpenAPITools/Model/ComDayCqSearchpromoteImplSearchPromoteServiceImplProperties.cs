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
  public class ComDayCqSearchpromoteImplSearchPromoteServiceImplProperties {
    /// <summary>
    /// Gets or Sets CqSearchpromoteConfigurationServerUri
    /// </summary>
    [DataMember(Name="cq.searchpromote.configuration.server.uri", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cq.searchpromote.configuration.server.uri")]
    public ConfigNodePropertyString CqSearchpromoteConfigurationServerUri { get; set; }

    /// <summary>
    /// Gets or Sets CqSearchpromoteConfigurationEnvironment
    /// </summary>
    [DataMember(Name="cq.searchpromote.configuration.environment", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cq.searchpromote.configuration.environment")]
    public ConfigNodePropertyString CqSearchpromoteConfigurationEnvironment { get; set; }

    /// <summary>
    /// Gets or Sets ConnectionTimeout
    /// </summary>
    [DataMember(Name="connection.timeout", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "connection.timeout")]
    public ConfigNodePropertyInteger ConnectionTimeout { get; set; }

    /// <summary>
    /// Gets or Sets SocketTimeout
    /// </summary>
    [DataMember(Name="socket.timeout", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "socket.timeout")]
    public ConfigNodePropertyInteger SocketTimeout { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ComDayCqSearchpromoteImplSearchPromoteServiceImplProperties {\n");
      sb.Append("  CqSearchpromoteConfigurationServerUri: ").Append(CqSearchpromoteConfigurationServerUri).Append("\n");
      sb.Append("  CqSearchpromoteConfigurationEnvironment: ").Append(CqSearchpromoteConfigurationEnvironment).Append("\n");
      sb.Append("  ConnectionTimeout: ").Append(ConnectionTimeout).Append("\n");
      sb.Append("  SocketTimeout: ").Append(SocketTimeout).Append("\n");
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
