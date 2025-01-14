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
    /// ComDayCqMcmImplMCMConfigurationProperties
    /// </summary>
    [DataContract]
    public partial class ComDayCqMcmImplMCMConfigurationProperties :  IEquatable<ComDayCqMcmImplMCMConfigurationProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComDayCqMcmImplMCMConfigurationProperties" /> class.
        /// </summary>
        /// <param name="experienceIndirection">experienceIndirection.</param>
        /// <param name="touchpointIndirection">touchpointIndirection.</param>
        public ComDayCqMcmImplMCMConfigurationProperties(ConfigNodePropertyArray experienceIndirection = default(ConfigNodePropertyArray), ConfigNodePropertyArray touchpointIndirection = default(ConfigNodePropertyArray))
        {
            this.ExperienceIndirection = experienceIndirection;
            this.TouchpointIndirection = touchpointIndirection;
        }
        
        /// <summary>
        /// Gets or Sets ExperienceIndirection
        /// </summary>
        [DataMember(Name="experience.indirection", EmitDefaultValue=false)]
        public ConfigNodePropertyArray ExperienceIndirection { get; set; }

        /// <summary>
        /// Gets or Sets TouchpointIndirection
        /// </summary>
        [DataMember(Name="touchpoint.indirection", EmitDefaultValue=false)]
        public ConfigNodePropertyArray TouchpointIndirection { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqMcmImplMCMConfigurationProperties {\n");
            sb.Append("  ExperienceIndirection: ").Append(ExperienceIndirection).Append("\n");
            sb.Append("  TouchpointIndirection: ").Append(TouchpointIndirection).Append("\n");
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
            return this.Equals(input as ComDayCqMcmImplMCMConfigurationProperties);
        }

        /// <summary>
        /// Returns true if ComDayCqMcmImplMCMConfigurationProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComDayCqMcmImplMCMConfigurationProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqMcmImplMCMConfigurationProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.ExperienceIndirection == input.ExperienceIndirection ||
                    (this.ExperienceIndirection != null &&
                    this.ExperienceIndirection.Equals(input.ExperienceIndirection))
                ) && 
                (
                    this.TouchpointIndirection == input.TouchpointIndirection ||
                    (this.TouchpointIndirection != null &&
                    this.TouchpointIndirection.Equals(input.TouchpointIndirection))
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
                if (this.ExperienceIndirection != null)
                    hashCode = hashCode * 59 + this.ExperienceIndirection.GetHashCode();
                if (this.TouchpointIndirection != null)
                    hashCode = hashCode * 59 + this.TouchpointIndirection.GetHashCode();
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
