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
    /// ComDayCqDamCoreImplMimeTypeAssetUploadRestrictionHelperProperties
    /// </summary>
    [DataContract]
    public partial class ComDayCqDamCoreImplMimeTypeAssetUploadRestrictionHelperProperties :  IEquatable<ComDayCqDamCoreImplMimeTypeAssetUploadRestrictionHelperProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComDayCqDamCoreImplMimeTypeAssetUploadRestrictionHelperProperties" /> class.
        /// </summary>
        /// <param name="cqDamAllowAllMime">cqDamAllowAllMime.</param>
        /// <param name="cqDamAllowedAssetMimes">cqDamAllowedAssetMimes.</param>
        public ComDayCqDamCoreImplMimeTypeAssetUploadRestrictionHelperProperties(ConfigNodePropertyBoolean cqDamAllowAllMime = default(ConfigNodePropertyBoolean), ConfigNodePropertyArray cqDamAllowedAssetMimes = default(ConfigNodePropertyArray))
        {
            this.CqDamAllowAllMime = cqDamAllowAllMime;
            this.CqDamAllowedAssetMimes = cqDamAllowedAssetMimes;
        }
        
        /// <summary>
        /// Gets or Sets CqDamAllowAllMime
        /// </summary>
        [DataMember(Name="cq.dam.allow.all.mime", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean CqDamAllowAllMime { get; set; }

        /// <summary>
        /// Gets or Sets CqDamAllowedAssetMimes
        /// </summary>
        [DataMember(Name="cq.dam.allowed.asset.mimes", EmitDefaultValue=false)]
        public ConfigNodePropertyArray CqDamAllowedAssetMimes { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqDamCoreImplMimeTypeAssetUploadRestrictionHelperProperties {\n");
            sb.Append("  CqDamAllowAllMime: ").Append(CqDamAllowAllMime).Append("\n");
            sb.Append("  CqDamAllowedAssetMimes: ").Append(CqDamAllowedAssetMimes).Append("\n");
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
            return this.Equals(input as ComDayCqDamCoreImplMimeTypeAssetUploadRestrictionHelperProperties);
        }

        /// <summary>
        /// Returns true if ComDayCqDamCoreImplMimeTypeAssetUploadRestrictionHelperProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComDayCqDamCoreImplMimeTypeAssetUploadRestrictionHelperProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqDamCoreImplMimeTypeAssetUploadRestrictionHelperProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.CqDamAllowAllMime == input.CqDamAllowAllMime ||
                    (this.CqDamAllowAllMime != null &&
                    this.CqDamAllowAllMime.Equals(input.CqDamAllowAllMime))
                ) && 
                (
                    this.CqDamAllowedAssetMimes == input.CqDamAllowedAssetMimes ||
                    (this.CqDamAllowedAssetMimes != null &&
                    this.CqDamAllowedAssetMimes.Equals(input.CqDamAllowedAssetMimes))
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
                if (this.CqDamAllowAllMime != null)
                    hashCode = hashCode * 59 + this.CqDamAllowAllMime.GetHashCode();
                if (this.CqDamAllowedAssetMimes != null)
                    hashCode = hashCode * 59 + this.CqDamAllowedAssetMimes.GetHashCode();
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
