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
    /// ComDayCqPersonalizationImplServletsTargetingConfigurationServletProperties
    /// </summary>
    [DataContract]
    public partial class ComDayCqPersonalizationImplServletsTargetingConfigurationServletProperties :  IEquatable<ComDayCqPersonalizationImplServletsTargetingConfigurationServletProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComDayCqPersonalizationImplServletsTargetingConfigurationServletProperties" /> class.
        /// </summary>
        /// <param name="forcelocation">forcelocation.</param>
        public ComDayCqPersonalizationImplServletsTargetingConfigurationServletProperties(ConfigNodePropertyBoolean forcelocation = default(ConfigNodePropertyBoolean))
        {
            this.Forcelocation = forcelocation;
        }
        
        /// <summary>
        /// Gets or Sets Forcelocation
        /// </summary>
        [DataMember(Name="forcelocation", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean Forcelocation { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqPersonalizationImplServletsTargetingConfigurationServletProperties {\n");
            sb.Append("  Forcelocation: ").Append(Forcelocation).Append("\n");
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
            return this.Equals(input as ComDayCqPersonalizationImplServletsTargetingConfigurationServletProperties);
        }

        /// <summary>
        /// Returns true if ComDayCqPersonalizationImplServletsTargetingConfigurationServletProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComDayCqPersonalizationImplServletsTargetingConfigurationServletProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqPersonalizationImplServletsTargetingConfigurationServletProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Forcelocation == input.Forcelocation ||
                    (this.Forcelocation != null &&
                    this.Forcelocation.Equals(input.Forcelocation))
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
                if (this.Forcelocation != null)
                    hashCode = hashCode * 59 + this.Forcelocation.GetHashCode();
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
