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
    /// ComDayCqMcmCoreNewsletterNewsletterEmailServiceImplProperties
    /// </summary>
    [DataContract]
    public partial class ComDayCqMcmCoreNewsletterNewsletterEmailServiceImplProperties :  IEquatable<ComDayCqMcmCoreNewsletterNewsletterEmailServiceImplProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComDayCqMcmCoreNewsletterNewsletterEmailServiceImplProperties" /> class.
        /// </summary>
        /// <param name="fromAddress">fromAddress.</param>
        /// <param name="senderHost">senderHost.</param>
        /// <param name="maxBounceCount">maxBounceCount.</param>
        public ComDayCqMcmCoreNewsletterNewsletterEmailServiceImplProperties(ConfigNodePropertyString fromAddress = default(ConfigNodePropertyString), ConfigNodePropertyString senderHost = default(ConfigNodePropertyString), ConfigNodePropertyString maxBounceCount = default(ConfigNodePropertyString))
        {
            this.FromAddress = fromAddress;
            this.SenderHost = senderHost;
            this.MaxBounceCount = maxBounceCount;
        }
        
        /// <summary>
        /// Gets or Sets FromAddress
        /// </summary>
        [DataMember(Name="from.address", EmitDefaultValue=false)]
        public ConfigNodePropertyString FromAddress { get; set; }

        /// <summary>
        /// Gets or Sets SenderHost
        /// </summary>
        [DataMember(Name="sender.host", EmitDefaultValue=false)]
        public ConfigNodePropertyString SenderHost { get; set; }

        /// <summary>
        /// Gets or Sets MaxBounceCount
        /// </summary>
        [DataMember(Name="max.bounce.count", EmitDefaultValue=false)]
        public ConfigNodePropertyString MaxBounceCount { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqMcmCoreNewsletterNewsletterEmailServiceImplProperties {\n");
            sb.Append("  FromAddress: ").Append(FromAddress).Append("\n");
            sb.Append("  SenderHost: ").Append(SenderHost).Append("\n");
            sb.Append("  MaxBounceCount: ").Append(MaxBounceCount).Append("\n");
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
            return this.Equals(input as ComDayCqMcmCoreNewsletterNewsletterEmailServiceImplProperties);
        }

        /// <summary>
        /// Returns true if ComDayCqMcmCoreNewsletterNewsletterEmailServiceImplProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComDayCqMcmCoreNewsletterNewsletterEmailServiceImplProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqMcmCoreNewsletterNewsletterEmailServiceImplProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.FromAddress == input.FromAddress ||
                    (this.FromAddress != null &&
                    this.FromAddress.Equals(input.FromAddress))
                ) && 
                (
                    this.SenderHost == input.SenderHost ||
                    (this.SenderHost != null &&
                    this.SenderHost.Equals(input.SenderHost))
                ) && 
                (
                    this.MaxBounceCount == input.MaxBounceCount ||
                    (this.MaxBounceCount != null &&
                    this.MaxBounceCount.Equals(input.MaxBounceCount))
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
                if (this.FromAddress != null)
                    hashCode = hashCode * 59 + this.FromAddress.GetHashCode();
                if (this.SenderHost != null)
                    hashCode = hashCode * 59 + this.SenderHost.GetHashCode();
                if (this.MaxBounceCount != null)
                    hashCode = hashCode * 59 + this.MaxBounceCount.GetHashCode();
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
