/* 
 * Adobe Experience Manager OSGI config (AEM) API
 *
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System.ComponentModel.DataAnnotations;
using OpenAPIDateConverter = Org.OpenAPITools.Client.OpenAPIDateConverter;

namespace Org.OpenAPITools.Model
{
    /// <summary>
    /// ComDayCqAnalyticsSitecatalystImplSitecatalystHttpClientImplProperties
    /// </summary>
    [DataContract]
    public partial class ComDayCqAnalyticsSitecatalystImplSitecatalystHttpClientImplProperties :  IEquatable<ComDayCqAnalyticsSitecatalystImplSitecatalystHttpClientImplProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComDayCqAnalyticsSitecatalystImplSitecatalystHttpClientImplProperties" /> class.
        /// </summary>
        /// <param name="cqAnalyticsSitecatalystServiceDatacenterUrl">cqAnalyticsSitecatalystServiceDatacenterUrl.</param>
        /// <param name="devhostnamepatterns">devhostnamepatterns.</param>
        /// <param name="connectionTimeout">connectionTimeout.</param>
        /// <param name="socketTimeout">socketTimeout.</param>
        public ComDayCqAnalyticsSitecatalystImplSitecatalystHttpClientImplProperties(ConfigNodePropertyArray cqAnalyticsSitecatalystServiceDatacenterUrl = default(ConfigNodePropertyArray), ConfigNodePropertyArray devhostnamepatterns = default(ConfigNodePropertyArray), ConfigNodePropertyInteger connectionTimeout = default(ConfigNodePropertyInteger), ConfigNodePropertyInteger socketTimeout = default(ConfigNodePropertyInteger))
        {
            this.CqAnalyticsSitecatalystServiceDatacenterUrl = cqAnalyticsSitecatalystServiceDatacenterUrl;
            this.Devhostnamepatterns = devhostnamepatterns;
            this.ConnectionTimeout = connectionTimeout;
            this.SocketTimeout = socketTimeout;
        }
        
        /// <summary>
        /// Gets or Sets CqAnalyticsSitecatalystServiceDatacenterUrl
        /// </summary>
        [DataMember(Name="cq.analytics.sitecatalyst.service.datacenter.url", EmitDefaultValue=false)]
        public ConfigNodePropertyArray CqAnalyticsSitecatalystServiceDatacenterUrl { get; set; }

        /// <summary>
        /// Gets or Sets Devhostnamepatterns
        /// </summary>
        [DataMember(Name="devhostnamepatterns", EmitDefaultValue=false)]
        public ConfigNodePropertyArray Devhostnamepatterns { get; set; }

        /// <summary>
        /// Gets or Sets ConnectionTimeout
        /// </summary>
        [DataMember(Name="connection.timeout", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger ConnectionTimeout { get; set; }

        /// <summary>
        /// Gets or Sets SocketTimeout
        /// </summary>
        [DataMember(Name="socket.timeout", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger SocketTimeout { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqAnalyticsSitecatalystImplSitecatalystHttpClientImplProperties {\n");
            sb.Append("  CqAnalyticsSitecatalystServiceDatacenterUrl: ").Append(CqAnalyticsSitecatalystServiceDatacenterUrl).Append("\n");
            sb.Append("  Devhostnamepatterns: ").Append(Devhostnamepatterns).Append("\n");
            sb.Append("  ConnectionTimeout: ").Append(ConnectionTimeout).Append("\n");
            sb.Append("  SocketTimeout: ").Append(SocketTimeout).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
  
        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public virtual string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="input">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object input)
        {
            return this.Equals(input as ComDayCqAnalyticsSitecatalystImplSitecatalystHttpClientImplProperties);
        }

        /// <summary>
        /// Returns true if ComDayCqAnalyticsSitecatalystImplSitecatalystHttpClientImplProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComDayCqAnalyticsSitecatalystImplSitecatalystHttpClientImplProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqAnalyticsSitecatalystImplSitecatalystHttpClientImplProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.CqAnalyticsSitecatalystServiceDatacenterUrl == input.CqAnalyticsSitecatalystServiceDatacenterUrl ||
                    (this.CqAnalyticsSitecatalystServiceDatacenterUrl != null &&
                    this.CqAnalyticsSitecatalystServiceDatacenterUrl.Equals(input.CqAnalyticsSitecatalystServiceDatacenterUrl))
                ) && 
                (
                    this.Devhostnamepatterns == input.Devhostnamepatterns ||
                    (this.Devhostnamepatterns != null &&
                    this.Devhostnamepatterns.Equals(input.Devhostnamepatterns))
                ) && 
                (
                    this.ConnectionTimeout == input.ConnectionTimeout ||
                    (this.ConnectionTimeout != null &&
                    this.ConnectionTimeout.Equals(input.ConnectionTimeout))
                ) && 
                (
                    this.SocketTimeout == input.SocketTimeout ||
                    (this.SocketTimeout != null &&
                    this.SocketTimeout.Equals(input.SocketTimeout))
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            unchecked // Overflow is fine, just wrap
            {
                int hashCode = 41;
                if (this.CqAnalyticsSitecatalystServiceDatacenterUrl != null)
                    hashCode = hashCode * 59 + this.CqAnalyticsSitecatalystServiceDatacenterUrl.GetHashCode();
                if (this.Devhostnamepatterns != null)
                    hashCode = hashCode * 59 + this.Devhostnamepatterns.GetHashCode();
                if (this.ConnectionTimeout != null)
                    hashCode = hashCode * 59 + this.ConnectionTimeout.GetHashCode();
                if (this.SocketTimeout != null)
                    hashCode = hashCode * 59 + this.SocketTimeout.GetHashCode();
                return hashCode;
            }
        }

        /// <summary>
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        IEnumerable<System.ComponentModel.DataAnnotations.ValidationResult> IValidatableObject.Validate(ValidationContext validationContext)
        {
            yield break;
        }
    }

}
