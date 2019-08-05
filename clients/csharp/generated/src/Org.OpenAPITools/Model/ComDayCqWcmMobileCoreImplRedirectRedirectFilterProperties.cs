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
    /// ComDayCqWcmMobileCoreImplRedirectRedirectFilterProperties
    /// </summary>
    [DataContract]
    public partial class ComDayCqWcmMobileCoreImplRedirectRedirectFilterProperties :  IEquatable<ComDayCqWcmMobileCoreImplRedirectRedirectFilterProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComDayCqWcmMobileCoreImplRedirectRedirectFilterProperties" /> class.
        /// </summary>
        /// <param name="redirectEnabled">redirectEnabled.</param>
        /// <param name="redirectStatsEnabled">redirectStatsEnabled.</param>
        /// <param name="redirectExtensions">redirectExtensions.</param>
        /// <param name="redirectPaths">redirectPaths.</param>
        public ComDayCqWcmMobileCoreImplRedirectRedirectFilterProperties(ConfigNodePropertyBoolean redirectEnabled = default(ConfigNodePropertyBoolean), ConfigNodePropertyBoolean redirectStatsEnabled = default(ConfigNodePropertyBoolean), ConfigNodePropertyArray redirectExtensions = default(ConfigNodePropertyArray), ConfigNodePropertyArray redirectPaths = default(ConfigNodePropertyArray))
        {
            this.RedirectEnabled = redirectEnabled;
            this.RedirectStatsEnabled = redirectStatsEnabled;
            this.RedirectExtensions = redirectExtensions;
            this.RedirectPaths = redirectPaths;
        }
        
        /// <summary>
        /// Gets or Sets RedirectEnabled
        /// </summary>
        [DataMember(Name="redirect.enabled", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean RedirectEnabled { get; set; }

        /// <summary>
        /// Gets or Sets RedirectStatsEnabled
        /// </summary>
        [DataMember(Name="redirect.stats.enabled", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean RedirectStatsEnabled { get; set; }

        /// <summary>
        /// Gets or Sets RedirectExtensions
        /// </summary>
        [DataMember(Name="redirect.extensions", EmitDefaultValue=false)]
        public ConfigNodePropertyArray RedirectExtensions { get; set; }

        /// <summary>
        /// Gets or Sets RedirectPaths
        /// </summary>
        [DataMember(Name="redirect.paths", EmitDefaultValue=false)]
        public ConfigNodePropertyArray RedirectPaths { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqWcmMobileCoreImplRedirectRedirectFilterProperties {\n");
            sb.Append("  RedirectEnabled: ").Append(RedirectEnabled).Append("\n");
            sb.Append("  RedirectStatsEnabled: ").Append(RedirectStatsEnabled).Append("\n");
            sb.Append("  RedirectExtensions: ").Append(RedirectExtensions).Append("\n");
            sb.Append("  RedirectPaths: ").Append(RedirectPaths).Append("\n");
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
            return this.Equals(input as ComDayCqWcmMobileCoreImplRedirectRedirectFilterProperties);
        }

        /// <summary>
        /// Returns true if ComDayCqWcmMobileCoreImplRedirectRedirectFilterProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComDayCqWcmMobileCoreImplRedirectRedirectFilterProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqWcmMobileCoreImplRedirectRedirectFilterProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.RedirectEnabled == input.RedirectEnabled ||
                    (this.RedirectEnabled != null &&
                    this.RedirectEnabled.Equals(input.RedirectEnabled))
                ) && 
                (
                    this.RedirectStatsEnabled == input.RedirectStatsEnabled ||
                    (this.RedirectStatsEnabled != null &&
                    this.RedirectStatsEnabled.Equals(input.RedirectStatsEnabled))
                ) && 
                (
                    this.RedirectExtensions == input.RedirectExtensions ||
                    (this.RedirectExtensions != null &&
                    this.RedirectExtensions.Equals(input.RedirectExtensions))
                ) && 
                (
                    this.RedirectPaths == input.RedirectPaths ||
                    (this.RedirectPaths != null &&
                    this.RedirectPaths.Equals(input.RedirectPaths))
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
                if (this.RedirectEnabled != null)
                    hashCode = hashCode * 59 + this.RedirectEnabled.GetHashCode();
                if (this.RedirectStatsEnabled != null)
                    hashCode = hashCode * 59 + this.RedirectStatsEnabled.GetHashCode();
                if (this.RedirectExtensions != null)
                    hashCode = hashCode * 59 + this.RedirectExtensions.GetHashCode();
                if (this.RedirectPaths != null)
                    hashCode = hashCode * 59 + this.RedirectPaths.GetHashCode();
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