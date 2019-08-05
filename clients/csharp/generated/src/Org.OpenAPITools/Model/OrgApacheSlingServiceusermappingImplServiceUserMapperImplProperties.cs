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
    /// OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties
    /// </summary>
    [DataContract]
    public partial class OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties :  IEquatable<OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties" /> class.
        /// </summary>
        /// <param name="userMapping">userMapping.</param>
        /// <param name="userDefault">userDefault.</param>
        /// <param name="userEnableDefaultMapping">userEnableDefaultMapping.</param>
        /// <param name="requireValidation">requireValidation.</param>
        public OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties(ConfigNodePropertyArray userMapping = default(ConfigNodePropertyArray), ConfigNodePropertyString userDefault = default(ConfigNodePropertyString), ConfigNodePropertyBoolean userEnableDefaultMapping = default(ConfigNodePropertyBoolean), ConfigNodePropertyBoolean requireValidation = default(ConfigNodePropertyBoolean))
        {
            this.UserMapping = userMapping;
            this.UserDefault = userDefault;
            this.UserEnableDefaultMapping = userEnableDefaultMapping;
            this.RequireValidation = requireValidation;
        }
        
        /// <summary>
        /// Gets or Sets UserMapping
        /// </summary>
        [DataMember(Name="user.mapping", EmitDefaultValue=false)]
        public ConfigNodePropertyArray UserMapping { get; set; }

        /// <summary>
        /// Gets or Sets UserDefault
        /// </summary>
        [DataMember(Name="user.default", EmitDefaultValue=false)]
        public ConfigNodePropertyString UserDefault { get; set; }

        /// <summary>
        /// Gets or Sets UserEnableDefaultMapping
        /// </summary>
        [DataMember(Name="user.enable.default.mapping", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean UserEnableDefaultMapping { get; set; }

        /// <summary>
        /// Gets or Sets RequireValidation
        /// </summary>
        [DataMember(Name="require.validation", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean RequireValidation { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties {\n");
            sb.Append("  UserMapping: ").Append(UserMapping).Append("\n");
            sb.Append("  UserDefault: ").Append(UserDefault).Append("\n");
            sb.Append("  UserEnableDefaultMapping: ").Append(UserEnableDefaultMapping).Append("\n");
            sb.Append("  RequireValidation: ").Append(RequireValidation).Append("\n");
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
            return this.Equals(input as OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties);
        }

        /// <summary>
        /// Returns true if OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.UserMapping == input.UserMapping ||
                    (this.UserMapping != null &&
                    this.UserMapping.Equals(input.UserMapping))
                ) && 
                (
                    this.UserDefault == input.UserDefault ||
                    (this.UserDefault != null &&
                    this.UserDefault.Equals(input.UserDefault))
                ) && 
                (
                    this.UserEnableDefaultMapping == input.UserEnableDefaultMapping ||
                    (this.UserEnableDefaultMapping != null &&
                    this.UserEnableDefaultMapping.Equals(input.UserEnableDefaultMapping))
                ) && 
                (
                    this.RequireValidation == input.RequireValidation ||
                    (this.RequireValidation != null &&
                    this.RequireValidation.Equals(input.RequireValidation))
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
                if (this.UserMapping != null)
                    hashCode = hashCode * 59 + this.UserMapping.GetHashCode();
                if (this.UserDefault != null)
                    hashCode = hashCode * 59 + this.UserDefault.GetHashCode();
                if (this.UserEnableDefaultMapping != null)
                    hashCode = hashCode * 59 + this.UserEnableDefaultMapping.GetHashCode();
                if (this.RequireValidation != null)
                    hashCode = hashCode * 59 + this.RequireValidation.GetHashCode();
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