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
    /// ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties
    /// </summary>
    [DataContract]
    public partial class ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties :  IEquatable<ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties" /> class.
        /// </summary>
        /// <param name="illegalCharMapping">illegalCharMapping.</param>
        /// <param name="pageSubTreeActivationCheck">pageSubTreeActivationCheck.</param>
        public ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties(ConfigNodePropertyString illegalCharMapping = default(ConfigNodePropertyString), ConfigNodePropertyBoolean pageSubTreeActivationCheck = default(ConfigNodePropertyBoolean))
        {
            this.IllegalCharMapping = illegalCharMapping;
            this.PageSubTreeActivationCheck = pageSubTreeActivationCheck;
        }
        
        /// <summary>
        /// Gets or Sets IllegalCharMapping
        /// </summary>
        [DataMember(Name="illegalCharMapping", EmitDefaultValue=false)]
        public ConfigNodePropertyString IllegalCharMapping { get; set; }

        /// <summary>
        /// Gets or Sets PageSubTreeActivationCheck
        /// </summary>
        [DataMember(Name="pageSubTreeActivationCheck", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean PageSubTreeActivationCheck { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties {\n");
            sb.Append("  IllegalCharMapping: ").Append(IllegalCharMapping).Append("\n");
            sb.Append("  PageSubTreeActivationCheck: ").Append(PageSubTreeActivationCheck).Append("\n");
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
            return this.Equals(input as ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties);
        }

        /// <summary>
        /// Returns true if ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.IllegalCharMapping == input.IllegalCharMapping ||
                    (this.IllegalCharMapping != null &&
                    this.IllegalCharMapping.Equals(input.IllegalCharMapping))
                ) && 
                (
                    this.PageSubTreeActivationCheck == input.PageSubTreeActivationCheck ||
                    (this.PageSubTreeActivationCheck != null &&
                    this.PageSubTreeActivationCheck.Equals(input.PageSubTreeActivationCheck))
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
                if (this.IllegalCharMapping != null)
                    hashCode = hashCode * 59 + this.IllegalCharMapping.GetHashCode();
                if (this.PageSubTreeActivationCheck != null)
                    hashCode = hashCode * 59 + this.PageSubTreeActivationCheck.GetHashCode();
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
