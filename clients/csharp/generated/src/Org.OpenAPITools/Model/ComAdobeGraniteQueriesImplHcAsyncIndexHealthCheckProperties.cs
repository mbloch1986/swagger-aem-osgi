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
    /// ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckProperties
    /// </summary>
    [DataContract]
    public partial class ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckProperties :  IEquatable<ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckProperties" /> class.
        /// </summary>
        /// <param name="indexingCriticalThreshold">indexingCriticalThreshold.</param>
        /// <param name="indexingWarnThreshold">indexingWarnThreshold.</param>
        /// <param name="hcTags">hcTags.</param>
        public ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckProperties(ConfigNodePropertyInteger indexingCriticalThreshold = default(ConfigNodePropertyInteger), ConfigNodePropertyInteger indexingWarnThreshold = default(ConfigNodePropertyInteger), ConfigNodePropertyArray hcTags = default(ConfigNodePropertyArray))
        {
            this.IndexingCriticalThreshold = indexingCriticalThreshold;
            this.IndexingWarnThreshold = indexingWarnThreshold;
            this.HcTags = hcTags;
        }
        
        /// <summary>
        /// Gets or Sets IndexingCriticalThreshold
        /// </summary>
        [DataMember(Name="indexing.critical.threshold", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger IndexingCriticalThreshold { get; set; }

        /// <summary>
        /// Gets or Sets IndexingWarnThreshold
        /// </summary>
        [DataMember(Name="indexing.warn.threshold", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger IndexingWarnThreshold { get; set; }

        /// <summary>
        /// Gets or Sets HcTags
        /// </summary>
        [DataMember(Name="hc.tags", EmitDefaultValue=false)]
        public ConfigNodePropertyArray HcTags { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckProperties {\n");
            sb.Append("  IndexingCriticalThreshold: ").Append(IndexingCriticalThreshold).Append("\n");
            sb.Append("  IndexingWarnThreshold: ").Append(IndexingWarnThreshold).Append("\n");
            sb.Append("  HcTags: ").Append(HcTags).Append("\n");
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
            return this.Equals(input as ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckProperties);
        }

        /// <summary>
        /// Returns true if ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.IndexingCriticalThreshold == input.IndexingCriticalThreshold ||
                    (this.IndexingCriticalThreshold != null &&
                    this.IndexingCriticalThreshold.Equals(input.IndexingCriticalThreshold))
                ) && 
                (
                    this.IndexingWarnThreshold == input.IndexingWarnThreshold ||
                    (this.IndexingWarnThreshold != null &&
                    this.IndexingWarnThreshold.Equals(input.IndexingWarnThreshold))
                ) && 
                (
                    this.HcTags == input.HcTags ||
                    (this.HcTags != null &&
                    this.HcTags.Equals(input.HcTags))
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
                if (this.IndexingCriticalThreshold != null)
                    hashCode = hashCode * 59 + this.IndexingCriticalThreshold.GetHashCode();
                if (this.IndexingWarnThreshold != null)
                    hashCode = hashCode * 59 + this.IndexingWarnThreshold.GetHashCode();
                if (this.HcTags != null)
                    hashCode = hashCode * 59 + this.HcTags.GetHashCode();
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