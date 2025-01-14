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
    /// ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties
    /// </summary>
    [DataContract]
    public partial class ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties :  IEquatable<ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties" /> class.
        /// </summary>
        /// <param name="codeupgradetasks">codeupgradetasks.</param>
        /// <param name="codeupgradetaskfilters">codeupgradetaskfilters.</param>
        public ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties(ConfigNodePropertyArray codeupgradetasks = default(ConfigNodePropertyArray), ConfigNodePropertyArray codeupgradetaskfilters = default(ConfigNodePropertyArray))
        {
            this.Codeupgradetasks = codeupgradetasks;
            this.Codeupgradetaskfilters = codeupgradetaskfilters;
        }
        
        /// <summary>
        /// Gets or Sets Codeupgradetasks
        /// </summary>
        [DataMember(Name="codeupgradetasks", EmitDefaultValue=false)]
        public ConfigNodePropertyArray Codeupgradetasks { get; set; }

        /// <summary>
        /// Gets or Sets Codeupgradetaskfilters
        /// </summary>
        [DataMember(Name="codeupgradetaskfilters", EmitDefaultValue=false)]
        public ConfigNodePropertyArray Codeupgradetaskfilters { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties {\n");
            sb.Append("  Codeupgradetasks: ").Append(Codeupgradetasks).Append("\n");
            sb.Append("  Codeupgradetaskfilters: ").Append(Codeupgradetaskfilters).Append("\n");
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
            return this.Equals(input as ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties);
        }

        /// <summary>
        /// Returns true if ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Codeupgradetasks == input.Codeupgradetasks ||
                    (this.Codeupgradetasks != null &&
                    this.Codeupgradetasks.Equals(input.Codeupgradetasks))
                ) && 
                (
                    this.Codeupgradetaskfilters == input.Codeupgradetaskfilters ||
                    (this.Codeupgradetaskfilters != null &&
                    this.Codeupgradetaskfilters.Equals(input.Codeupgradetaskfilters))
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
                if (this.Codeupgradetasks != null)
                    hashCode = hashCode * 59 + this.Codeupgradetasks.GetHashCode();
                if (this.Codeupgradetaskfilters != null)
                    hashCode = hashCode * 59 + this.Codeupgradetaskfilters.GetHashCode();
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
