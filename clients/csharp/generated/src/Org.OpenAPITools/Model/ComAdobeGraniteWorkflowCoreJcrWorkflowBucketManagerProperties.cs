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
    /// ComAdobeGraniteWorkflowCoreJcrWorkflowBucketManagerProperties
    /// </summary>
    [DataContract]
    public partial class ComAdobeGraniteWorkflowCoreJcrWorkflowBucketManagerProperties :  IEquatable<ComAdobeGraniteWorkflowCoreJcrWorkflowBucketManagerProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComAdobeGraniteWorkflowCoreJcrWorkflowBucketManagerProperties" /> class.
        /// </summary>
        /// <param name="bucketSize">bucketSize.</param>
        public ComAdobeGraniteWorkflowCoreJcrWorkflowBucketManagerProperties(ConfigNodePropertyInteger bucketSize = default(ConfigNodePropertyInteger))
        {
            this.BucketSize = bucketSize;
        }
        
        /// <summary>
        /// Gets or Sets BucketSize
        /// </summary>
        [DataMember(Name="bucketSize", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger BucketSize { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComAdobeGraniteWorkflowCoreJcrWorkflowBucketManagerProperties {\n");
            sb.Append("  BucketSize: ").Append(BucketSize).Append("\n");
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
            return this.Equals(input as ComAdobeGraniteWorkflowCoreJcrWorkflowBucketManagerProperties);
        }

        /// <summary>
        /// Returns true if ComAdobeGraniteWorkflowCoreJcrWorkflowBucketManagerProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComAdobeGraniteWorkflowCoreJcrWorkflowBucketManagerProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComAdobeGraniteWorkflowCoreJcrWorkflowBucketManagerProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.BucketSize == input.BucketSize ||
                    (this.BucketSize != null &&
                    this.BucketSize.Equals(input.BucketSize))
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
                if (this.BucketSize != null)
                    hashCode = hashCode * 59 + this.BucketSize.GetHashCode();
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