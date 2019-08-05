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
    /// ComDayCqDamScene7ImplScene7DamChangeEventListenerProperties
    /// </summary>
    [DataContract]
    public partial class ComDayCqDamScene7ImplScene7DamChangeEventListenerProperties :  IEquatable<ComDayCqDamScene7ImplScene7DamChangeEventListenerProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComDayCqDamScene7ImplScene7DamChangeEventListenerProperties" /> class.
        /// </summary>
        /// <param name="cqDamScene7DamchangeeventlistenerEnabled">cqDamScene7DamchangeeventlistenerEnabled.</param>
        /// <param name="cqDamScene7DamchangeeventlistenerObservedPaths">cqDamScene7DamchangeeventlistenerObservedPaths.</param>
        public ComDayCqDamScene7ImplScene7DamChangeEventListenerProperties(ConfigNodePropertyBoolean cqDamScene7DamchangeeventlistenerEnabled = default(ConfigNodePropertyBoolean), ConfigNodePropertyArray cqDamScene7DamchangeeventlistenerObservedPaths = default(ConfigNodePropertyArray))
        {
            this.CqDamScene7DamchangeeventlistenerEnabled = cqDamScene7DamchangeeventlistenerEnabled;
            this.CqDamScene7DamchangeeventlistenerObservedPaths = cqDamScene7DamchangeeventlistenerObservedPaths;
        }
        
        /// <summary>
        /// Gets or Sets CqDamScene7DamchangeeventlistenerEnabled
        /// </summary>
        [DataMember(Name="cq.dam.scene7.damchangeeventlistener.enabled", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean CqDamScene7DamchangeeventlistenerEnabled { get; set; }

        /// <summary>
        /// Gets or Sets CqDamScene7DamchangeeventlistenerObservedPaths
        /// </summary>
        [DataMember(Name="cq.dam.scene7.damchangeeventlistener.observed.paths", EmitDefaultValue=false)]
        public ConfigNodePropertyArray CqDamScene7DamchangeeventlistenerObservedPaths { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqDamScene7ImplScene7DamChangeEventListenerProperties {\n");
            sb.Append("  CqDamScene7DamchangeeventlistenerEnabled: ").Append(CqDamScene7DamchangeeventlistenerEnabled).Append("\n");
            sb.Append("  CqDamScene7DamchangeeventlistenerObservedPaths: ").Append(CqDamScene7DamchangeeventlistenerObservedPaths).Append("\n");
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
            return this.Equals(input as ComDayCqDamScene7ImplScene7DamChangeEventListenerProperties);
        }

        /// <summary>
        /// Returns true if ComDayCqDamScene7ImplScene7DamChangeEventListenerProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComDayCqDamScene7ImplScene7DamChangeEventListenerProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqDamScene7ImplScene7DamChangeEventListenerProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.CqDamScene7DamchangeeventlistenerEnabled == input.CqDamScene7DamchangeeventlistenerEnabled ||
                    (this.CqDamScene7DamchangeeventlistenerEnabled != null &&
                    this.CqDamScene7DamchangeeventlistenerEnabled.Equals(input.CqDamScene7DamchangeeventlistenerEnabled))
                ) && 
                (
                    this.CqDamScene7DamchangeeventlistenerObservedPaths == input.CqDamScene7DamchangeeventlistenerObservedPaths ||
                    (this.CqDamScene7DamchangeeventlistenerObservedPaths != null &&
                    this.CqDamScene7DamchangeeventlistenerObservedPaths.Equals(input.CqDamScene7DamchangeeventlistenerObservedPaths))
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
                if (this.CqDamScene7DamchangeeventlistenerEnabled != null)
                    hashCode = hashCode * 59 + this.CqDamScene7DamchangeeventlistenerEnabled.GetHashCode();
                if (this.CqDamScene7DamchangeeventlistenerObservedPaths != null)
                    hashCode = hashCode * 59 + this.CqDamScene7DamchangeeventlistenerObservedPaths.GetHashCode();
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