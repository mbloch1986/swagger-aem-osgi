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
    /// OrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties
    /// </summary>
    [DataContract]
    public partial class OrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties :  IEquatable<OrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="OrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties" /> class.
        /// </summary>
        /// <param name="hcName">hcName.</param>
        /// <param name="hcTags">hcTags.</param>
        /// <param name="hcMbeanName">hcMbeanName.</param>
        /// <param name="mbeanName">mbeanName.</param>
        /// <param name="attributeName">attributeName.</param>
        /// <param name="attributeValueConstraint">attributeValueConstraint.</param>
        public OrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties(ConfigNodePropertyString hcName = default(ConfigNodePropertyString), ConfigNodePropertyArray hcTags = default(ConfigNodePropertyArray), ConfigNodePropertyString hcMbeanName = default(ConfigNodePropertyString), ConfigNodePropertyString mbeanName = default(ConfigNodePropertyString), ConfigNodePropertyString attributeName = default(ConfigNodePropertyString), ConfigNodePropertyString attributeValueConstraint = default(ConfigNodePropertyString))
        {
            this.HcName = hcName;
            this.HcTags = hcTags;
            this.HcMbeanName = hcMbeanName;
            this.MbeanName = mbeanName;
            this.AttributeName = attributeName;
            this.AttributeValueConstraint = attributeValueConstraint;
        }
        
        /// <summary>
        /// Gets or Sets HcName
        /// </summary>
        [DataMember(Name="hc.name", EmitDefaultValue=false)]
        public ConfigNodePropertyString HcName { get; set; }

        /// <summary>
        /// Gets or Sets HcTags
        /// </summary>
        [DataMember(Name="hc.tags", EmitDefaultValue=false)]
        public ConfigNodePropertyArray HcTags { get; set; }

        /// <summary>
        /// Gets or Sets HcMbeanName
        /// </summary>
        [DataMember(Name="hc.mbean.name", EmitDefaultValue=false)]
        public ConfigNodePropertyString HcMbeanName { get; set; }

        /// <summary>
        /// Gets or Sets MbeanName
        /// </summary>
        [DataMember(Name="mbean.name", EmitDefaultValue=false)]
        public ConfigNodePropertyString MbeanName { get; set; }

        /// <summary>
        /// Gets or Sets AttributeName
        /// </summary>
        [DataMember(Name="attribute.name", EmitDefaultValue=false)]
        public ConfigNodePropertyString AttributeName { get; set; }

        /// <summary>
        /// Gets or Sets AttributeValueConstraint
        /// </summary>
        [DataMember(Name="attribute.value.constraint", EmitDefaultValue=false)]
        public ConfigNodePropertyString AttributeValueConstraint { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class OrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties {\n");
            sb.Append("  HcName: ").Append(HcName).Append("\n");
            sb.Append("  HcTags: ").Append(HcTags).Append("\n");
            sb.Append("  HcMbeanName: ").Append(HcMbeanName).Append("\n");
            sb.Append("  MbeanName: ").Append(MbeanName).Append("\n");
            sb.Append("  AttributeName: ").Append(AttributeName).Append("\n");
            sb.Append("  AttributeValueConstraint: ").Append(AttributeValueConstraint).Append("\n");
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
            return this.Equals(input as OrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties);
        }

        /// <summary>
        /// Returns true if OrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of OrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(OrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.HcName == input.HcName ||
                    (this.HcName != null &&
                    this.HcName.Equals(input.HcName))
                ) && 
                (
                    this.HcTags == input.HcTags ||
                    (this.HcTags != null &&
                    this.HcTags.Equals(input.HcTags))
                ) && 
                (
                    this.HcMbeanName == input.HcMbeanName ||
                    (this.HcMbeanName != null &&
                    this.HcMbeanName.Equals(input.HcMbeanName))
                ) && 
                (
                    this.MbeanName == input.MbeanName ||
                    (this.MbeanName != null &&
                    this.MbeanName.Equals(input.MbeanName))
                ) && 
                (
                    this.AttributeName == input.AttributeName ||
                    (this.AttributeName != null &&
                    this.AttributeName.Equals(input.AttributeName))
                ) && 
                (
                    this.AttributeValueConstraint == input.AttributeValueConstraint ||
                    (this.AttributeValueConstraint != null &&
                    this.AttributeValueConstraint.Equals(input.AttributeValueConstraint))
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
                if (this.HcName != null)
                    hashCode = hashCode * 59 + this.HcName.GetHashCode();
                if (this.HcTags != null)
                    hashCode = hashCode * 59 + this.HcTags.GetHashCode();
                if (this.HcMbeanName != null)
                    hashCode = hashCode * 59 + this.HcMbeanName.GetHashCode();
                if (this.MbeanName != null)
                    hashCode = hashCode * 59 + this.MbeanName.GetHashCode();
                if (this.AttributeName != null)
                    hashCode = hashCode * 59 + this.AttributeName.GetHashCode();
                if (this.AttributeValueConstraint != null)
                    hashCode = hashCode * 59 + this.AttributeValueConstraint.GetHashCode();
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