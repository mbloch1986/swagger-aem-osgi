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
    /// ComAdobeCqDamCfmImplComponentComponentConfigImplProperties
    /// </summary>
    [DataContract]
    public partial class ComAdobeCqDamCfmImplComponentComponentConfigImplProperties :  IEquatable<ComAdobeCqDamCfmImplComponentComponentConfigImplProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComAdobeCqDamCfmImplComponentComponentConfigImplProperties" /> class.
        /// </summary>
        /// <param name="damCfmComponentResourceType">damCfmComponentResourceType.</param>
        /// <param name="damCfmComponentFileReferenceProp">damCfmComponentFileReferenceProp.</param>
        /// <param name="damCfmComponentElementsProp">damCfmComponentElementsProp.</param>
        /// <param name="damCfmComponentVariationProp">damCfmComponentVariationProp.</param>
        public ComAdobeCqDamCfmImplComponentComponentConfigImplProperties(ConfigNodePropertyString damCfmComponentResourceType = default(ConfigNodePropertyString), ConfigNodePropertyString damCfmComponentFileReferenceProp = default(ConfigNodePropertyString), ConfigNodePropertyString damCfmComponentElementsProp = default(ConfigNodePropertyString), ConfigNodePropertyString damCfmComponentVariationProp = default(ConfigNodePropertyString))
        {
            this.DamCfmComponentResourceType = damCfmComponentResourceType;
            this.DamCfmComponentFileReferenceProp = damCfmComponentFileReferenceProp;
            this.DamCfmComponentElementsProp = damCfmComponentElementsProp;
            this.DamCfmComponentVariationProp = damCfmComponentVariationProp;
        }
        
        /// <summary>
        /// Gets or Sets DamCfmComponentResourceType
        /// </summary>
        [DataMember(Name="dam.cfm.component.resourceType", EmitDefaultValue=false)]
        public ConfigNodePropertyString DamCfmComponentResourceType { get; set; }

        /// <summary>
        /// Gets or Sets DamCfmComponentFileReferenceProp
        /// </summary>
        [DataMember(Name="dam.cfm.component.fileReferenceProp", EmitDefaultValue=false)]
        public ConfigNodePropertyString DamCfmComponentFileReferenceProp { get; set; }

        /// <summary>
        /// Gets or Sets DamCfmComponentElementsProp
        /// </summary>
        [DataMember(Name="dam.cfm.component.elementsProp", EmitDefaultValue=false)]
        public ConfigNodePropertyString DamCfmComponentElementsProp { get; set; }

        /// <summary>
        /// Gets or Sets DamCfmComponentVariationProp
        /// </summary>
        [DataMember(Name="dam.cfm.component.variationProp", EmitDefaultValue=false)]
        public ConfigNodePropertyString DamCfmComponentVariationProp { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComAdobeCqDamCfmImplComponentComponentConfigImplProperties {\n");
            sb.Append("  DamCfmComponentResourceType: ").Append(DamCfmComponentResourceType).Append("\n");
            sb.Append("  DamCfmComponentFileReferenceProp: ").Append(DamCfmComponentFileReferenceProp).Append("\n");
            sb.Append("  DamCfmComponentElementsProp: ").Append(DamCfmComponentElementsProp).Append("\n");
            sb.Append("  DamCfmComponentVariationProp: ").Append(DamCfmComponentVariationProp).Append("\n");
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
            return this.Equals(input as ComAdobeCqDamCfmImplComponentComponentConfigImplProperties);
        }

        /// <summary>
        /// Returns true if ComAdobeCqDamCfmImplComponentComponentConfigImplProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComAdobeCqDamCfmImplComponentComponentConfigImplProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComAdobeCqDamCfmImplComponentComponentConfigImplProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.DamCfmComponentResourceType == input.DamCfmComponentResourceType ||
                    (this.DamCfmComponentResourceType != null &&
                    this.DamCfmComponentResourceType.Equals(input.DamCfmComponentResourceType))
                ) && 
                (
                    this.DamCfmComponentFileReferenceProp == input.DamCfmComponentFileReferenceProp ||
                    (this.DamCfmComponentFileReferenceProp != null &&
                    this.DamCfmComponentFileReferenceProp.Equals(input.DamCfmComponentFileReferenceProp))
                ) && 
                (
                    this.DamCfmComponentElementsProp == input.DamCfmComponentElementsProp ||
                    (this.DamCfmComponentElementsProp != null &&
                    this.DamCfmComponentElementsProp.Equals(input.DamCfmComponentElementsProp))
                ) && 
                (
                    this.DamCfmComponentVariationProp == input.DamCfmComponentVariationProp ||
                    (this.DamCfmComponentVariationProp != null &&
                    this.DamCfmComponentVariationProp.Equals(input.DamCfmComponentVariationProp))
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
                if (this.DamCfmComponentResourceType != null)
                    hashCode = hashCode * 59 + this.DamCfmComponentResourceType.GetHashCode();
                if (this.DamCfmComponentFileReferenceProp != null)
                    hashCode = hashCode * 59 + this.DamCfmComponentFileReferenceProp.GetHashCode();
                if (this.DamCfmComponentElementsProp != null)
                    hashCode = hashCode * 59 + this.DamCfmComponentElementsProp.GetHashCode();
                if (this.DamCfmComponentVariationProp != null)
                    hashCode = hashCode * 59 + this.DamCfmComponentVariationProp.GetHashCode();
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
