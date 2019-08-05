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
    /// ComDayCqReplicationImplReplicatorImplProperties
    /// </summary>
    [DataContract]
    public partial class ComDayCqReplicationImplReplicatorImplProperties :  IEquatable<ComDayCqReplicationImplReplicatorImplProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComDayCqReplicationImplReplicatorImplProperties" /> class.
        /// </summary>
        /// <param name="distributeEvents">distributeEvents.</param>
        public ComDayCqReplicationImplReplicatorImplProperties(ConfigNodePropertyBoolean distributeEvents = default(ConfigNodePropertyBoolean))
        {
            this.DistributeEvents = distributeEvents;
        }
        
        /// <summary>
        /// Gets or Sets DistributeEvents
        /// </summary>
        [DataMember(Name="distribute_events", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean DistributeEvents { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqReplicationImplReplicatorImplProperties {\n");
            sb.Append("  DistributeEvents: ").Append(DistributeEvents).Append("\n");
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
            return this.Equals(input as ComDayCqReplicationImplReplicatorImplProperties);
        }

        /// <summary>
        /// Returns true if ComDayCqReplicationImplReplicatorImplProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComDayCqReplicationImplReplicatorImplProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqReplicationImplReplicatorImplProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.DistributeEvents == input.DistributeEvents ||
                    (this.DistributeEvents != null &&
                    this.DistributeEvents.Equals(input.DistributeEvents))
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
                if (this.DistributeEvents != null)
                    hashCode = hashCode * 59 + this.DistributeEvents.GetHashCode();
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