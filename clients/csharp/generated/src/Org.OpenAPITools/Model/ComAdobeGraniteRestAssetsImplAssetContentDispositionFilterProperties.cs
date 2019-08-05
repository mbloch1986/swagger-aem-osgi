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
    /// ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterProperties
    /// </summary>
    [DataContract]
    public partial class ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterProperties :  IEquatable<ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterProperties" /> class.
        /// </summary>
        /// <param name="mimeAllowEmpty">mimeAllowEmpty.</param>
        /// <param name="mimeAllowed">mimeAllowed.</param>
        public ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterProperties(ConfigNodePropertyBoolean mimeAllowEmpty = default(ConfigNodePropertyBoolean), ConfigNodePropertyArray mimeAllowed = default(ConfigNodePropertyArray))
        {
            this.MimeAllowEmpty = mimeAllowEmpty;
            this.MimeAllowed = mimeAllowed;
        }
        
        /// <summary>
        /// Gets or Sets MimeAllowEmpty
        /// </summary>
        [DataMember(Name="mime.allowEmpty", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean MimeAllowEmpty { get; set; }

        /// <summary>
        /// Gets or Sets MimeAllowed
        /// </summary>
        [DataMember(Name="mime.allowed", EmitDefaultValue=false)]
        public ConfigNodePropertyArray MimeAllowed { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterProperties {\n");
            sb.Append("  MimeAllowEmpty: ").Append(MimeAllowEmpty).Append("\n");
            sb.Append("  MimeAllowed: ").Append(MimeAllowed).Append("\n");
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
            return this.Equals(input as ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterProperties);
        }

        /// <summary>
        /// Returns true if ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.MimeAllowEmpty == input.MimeAllowEmpty ||
                    (this.MimeAllowEmpty != null &&
                    this.MimeAllowEmpty.Equals(input.MimeAllowEmpty))
                ) && 
                (
                    this.MimeAllowed == input.MimeAllowed ||
                    (this.MimeAllowed != null &&
                    this.MimeAllowed.Equals(input.MimeAllowed))
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
                if (this.MimeAllowEmpty != null)
                    hashCode = hashCode * 59 + this.MimeAllowEmpty.GetHashCode();
                if (this.MimeAllowed != null)
                    hashCode = hashCode * 59 + this.MimeAllowed.GetHashCode();
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