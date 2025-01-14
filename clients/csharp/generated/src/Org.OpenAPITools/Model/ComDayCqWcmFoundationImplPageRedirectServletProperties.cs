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
    /// ComDayCqWcmFoundationImplPageRedirectServletProperties
    /// </summary>
    [DataContract]
    public partial class ComDayCqWcmFoundationImplPageRedirectServletProperties :  IEquatable<ComDayCqWcmFoundationImplPageRedirectServletProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComDayCqWcmFoundationImplPageRedirectServletProperties" /> class.
        /// </summary>
        /// <param name="excludedResourceTypes">excludedResourceTypes.</param>
        public ComDayCqWcmFoundationImplPageRedirectServletProperties(ConfigNodePropertyArray excludedResourceTypes = default(ConfigNodePropertyArray))
        {
            this.ExcludedResourceTypes = excludedResourceTypes;
        }
        
        /// <summary>
        /// Gets or Sets ExcludedResourceTypes
        /// </summary>
        [DataMember(Name="excluded.resource.types", EmitDefaultValue=false)]
        public ConfigNodePropertyArray ExcludedResourceTypes { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqWcmFoundationImplPageRedirectServletProperties {\n");
            sb.Append("  ExcludedResourceTypes: ").Append(ExcludedResourceTypes).Append("\n");
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
            return this.Equals(input as ComDayCqWcmFoundationImplPageRedirectServletProperties);
        }

        /// <summary>
        /// Returns true if ComDayCqWcmFoundationImplPageRedirectServletProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComDayCqWcmFoundationImplPageRedirectServletProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqWcmFoundationImplPageRedirectServletProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.ExcludedResourceTypes == input.ExcludedResourceTypes ||
                    (this.ExcludedResourceTypes != null &&
                    this.ExcludedResourceTypes.Equals(input.ExcludedResourceTypes))
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
                if (this.ExcludedResourceTypes != null)
                    hashCode = hashCode * 59 + this.ExcludedResourceTypes.GetHashCode();
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
