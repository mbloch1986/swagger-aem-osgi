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
    /// ComAdobeCqExperiencelogImplExperienceLogConfigServletProperties
    /// </summary>
    [DataContract]
    public partial class ComAdobeCqExperiencelogImplExperienceLogConfigServletProperties :  IEquatable<ComAdobeCqExperiencelogImplExperienceLogConfigServletProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComAdobeCqExperiencelogImplExperienceLogConfigServletProperties" /> class.
        /// </summary>
        /// <param name="enabled">enabled.</param>
        /// <param name="disabledForGroups">disabledForGroups.</param>
        public ComAdobeCqExperiencelogImplExperienceLogConfigServletProperties(ConfigNodePropertyBoolean enabled = default(ConfigNodePropertyBoolean), ConfigNodePropertyArray disabledForGroups = default(ConfigNodePropertyArray))
        {
            this.Enabled = enabled;
            this.DisabledForGroups = disabledForGroups;
        }
        
        /// <summary>
        /// Gets or Sets Enabled
        /// </summary>
        [DataMember(Name="enabled", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean Enabled { get; set; }

        /// <summary>
        /// Gets or Sets DisabledForGroups
        /// </summary>
        [DataMember(Name="disabledForGroups", EmitDefaultValue=false)]
        public ConfigNodePropertyArray DisabledForGroups { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComAdobeCqExperiencelogImplExperienceLogConfigServletProperties {\n");
            sb.Append("  Enabled: ").Append(Enabled).Append("\n");
            sb.Append("  DisabledForGroups: ").Append(DisabledForGroups).Append("\n");
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
            return this.Equals(input as ComAdobeCqExperiencelogImplExperienceLogConfigServletProperties);
        }

        /// <summary>
        /// Returns true if ComAdobeCqExperiencelogImplExperienceLogConfigServletProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComAdobeCqExperiencelogImplExperienceLogConfigServletProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComAdobeCqExperiencelogImplExperienceLogConfigServletProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Enabled == input.Enabled ||
                    (this.Enabled != null &&
                    this.Enabled.Equals(input.Enabled))
                ) && 
                (
                    this.DisabledForGroups == input.DisabledForGroups ||
                    (this.DisabledForGroups != null &&
                    this.DisabledForGroups.Equals(input.DisabledForGroups))
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
                if (this.Enabled != null)
                    hashCode = hashCode * 59 + this.Enabled.GetHashCode();
                if (this.DisabledForGroups != null)
                    hashCode = hashCode * 59 + this.DisabledForGroups.GetHashCode();
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