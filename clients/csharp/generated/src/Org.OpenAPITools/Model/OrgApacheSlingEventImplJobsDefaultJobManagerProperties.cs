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
    /// OrgApacheSlingEventImplJobsDefaultJobManagerProperties
    /// </summary>
    [DataContract]
    public partial class OrgApacheSlingEventImplJobsDefaultJobManagerProperties :  IEquatable<OrgApacheSlingEventImplJobsDefaultJobManagerProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="OrgApacheSlingEventImplJobsDefaultJobManagerProperties" /> class.
        /// </summary>
        /// <param name="queuePriority">queuePriority.</param>
        /// <param name="queueRetries">queueRetries.</param>
        /// <param name="queueRetrydelay">queueRetrydelay.</param>
        /// <param name="queueMaxparallel">queueMaxparallel.</param>
        public OrgApacheSlingEventImplJobsDefaultJobManagerProperties(ConfigNodePropertyDropDown queuePriority = default(ConfigNodePropertyDropDown), ConfigNodePropertyInteger queueRetries = default(ConfigNodePropertyInteger), ConfigNodePropertyInteger queueRetrydelay = default(ConfigNodePropertyInteger), ConfigNodePropertyInteger queueMaxparallel = default(ConfigNodePropertyInteger))
        {
            this.QueuePriority = queuePriority;
            this.QueueRetries = queueRetries;
            this.QueueRetrydelay = queueRetrydelay;
            this.QueueMaxparallel = queueMaxparallel;
        }
        
        /// <summary>
        /// Gets or Sets QueuePriority
        /// </summary>
        [DataMember(Name="queue.priority", EmitDefaultValue=false)]
        public ConfigNodePropertyDropDown QueuePriority { get; set; }

        /// <summary>
        /// Gets or Sets QueueRetries
        /// </summary>
        [DataMember(Name="queue.retries", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger QueueRetries { get; set; }

        /// <summary>
        /// Gets or Sets QueueRetrydelay
        /// </summary>
        [DataMember(Name="queue.retrydelay", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger QueueRetrydelay { get; set; }

        /// <summary>
        /// Gets or Sets QueueMaxparallel
        /// </summary>
        [DataMember(Name="queue.maxparallel", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger QueueMaxparallel { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class OrgApacheSlingEventImplJobsDefaultJobManagerProperties {\n");
            sb.Append("  QueuePriority: ").Append(QueuePriority).Append("\n");
            sb.Append("  QueueRetries: ").Append(QueueRetries).Append("\n");
            sb.Append("  QueueRetrydelay: ").Append(QueueRetrydelay).Append("\n");
            sb.Append("  QueueMaxparallel: ").Append(QueueMaxparallel).Append("\n");
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
            return this.Equals(input as OrgApacheSlingEventImplJobsDefaultJobManagerProperties);
        }

        /// <summary>
        /// Returns true if OrgApacheSlingEventImplJobsDefaultJobManagerProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of OrgApacheSlingEventImplJobsDefaultJobManagerProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(OrgApacheSlingEventImplJobsDefaultJobManagerProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.QueuePriority == input.QueuePriority ||
                    (this.QueuePriority != null &&
                    this.QueuePriority.Equals(input.QueuePriority))
                ) && 
                (
                    this.QueueRetries == input.QueueRetries ||
                    (this.QueueRetries != null &&
                    this.QueueRetries.Equals(input.QueueRetries))
                ) && 
                (
                    this.QueueRetrydelay == input.QueueRetrydelay ||
                    (this.QueueRetrydelay != null &&
                    this.QueueRetrydelay.Equals(input.QueueRetrydelay))
                ) && 
                (
                    this.QueueMaxparallel == input.QueueMaxparallel ||
                    (this.QueueMaxparallel != null &&
                    this.QueueMaxparallel.Equals(input.QueueMaxparallel))
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
                if (this.QueuePriority != null)
                    hashCode = hashCode * 59 + this.QueuePriority.GetHashCode();
                if (this.QueueRetries != null)
                    hashCode = hashCode * 59 + this.QueueRetries.GetHashCode();
                if (this.QueueRetrydelay != null)
                    hashCode = hashCode * 59 + this.QueueRetrydelay.GetHashCode();
                if (this.QueueMaxparallel != null)
                    hashCode = hashCode * 59 + this.QueueMaxparallel.GetHashCode();
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
