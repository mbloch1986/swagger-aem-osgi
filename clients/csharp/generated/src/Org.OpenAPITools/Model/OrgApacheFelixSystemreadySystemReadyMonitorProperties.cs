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
    /// OrgApacheFelixSystemreadySystemReadyMonitorProperties
    /// </summary>
    [DataContract]
    public partial class OrgApacheFelixSystemreadySystemReadyMonitorProperties :  IEquatable<OrgApacheFelixSystemreadySystemReadyMonitorProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="OrgApacheFelixSystemreadySystemReadyMonitorProperties" /> class.
        /// </summary>
        /// <param name="pollInterval">pollInterval.</param>
        public OrgApacheFelixSystemreadySystemReadyMonitorProperties(ConfigNodePropertyInteger pollInterval = default(ConfigNodePropertyInteger))
        {
            this.PollInterval = pollInterval;
        }
        
        /// <summary>
        /// Gets or Sets PollInterval
        /// </summary>
        [DataMember(Name="poll.interval", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger PollInterval { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class OrgApacheFelixSystemreadySystemReadyMonitorProperties {\n");
            sb.Append("  PollInterval: ").Append(PollInterval).Append("\n");
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
            return this.Equals(input as OrgApacheFelixSystemreadySystemReadyMonitorProperties);
        }

        /// <summary>
        /// Returns true if OrgApacheFelixSystemreadySystemReadyMonitorProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of OrgApacheFelixSystemreadySystemReadyMonitorProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(OrgApacheFelixSystemreadySystemReadyMonitorProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.PollInterval == input.PollInterval ||
                    (this.PollInterval != null &&
                    this.PollInterval.Equals(input.PollInterval))
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
                if (this.PollInterval != null)
                    hashCode = hashCode * 59 + this.PollInterval.GetHashCode();
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
