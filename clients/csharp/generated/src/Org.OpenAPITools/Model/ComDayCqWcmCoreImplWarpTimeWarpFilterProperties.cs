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
    /// ComDayCqWcmCoreImplWarpTimeWarpFilterProperties
    /// </summary>
    [DataContract]
    public partial class ComDayCqWcmCoreImplWarpTimeWarpFilterProperties :  IEquatable<ComDayCqWcmCoreImplWarpTimeWarpFilterProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComDayCqWcmCoreImplWarpTimeWarpFilterProperties" /> class.
        /// </summary>
        /// <param name="filterOrder">filterOrder.</param>
        /// <param name="filterScope">filterScope.</param>
        public ComDayCqWcmCoreImplWarpTimeWarpFilterProperties(ConfigNodePropertyString filterOrder = default(ConfigNodePropertyString), ConfigNodePropertyString filterScope = default(ConfigNodePropertyString))
        {
            this.FilterOrder = filterOrder;
            this.FilterScope = filterScope;
        }
        
        /// <summary>
        /// Gets or Sets FilterOrder
        /// </summary>
        [DataMember(Name="filter.order", EmitDefaultValue=false)]
        public ConfigNodePropertyString FilterOrder { get; set; }

        /// <summary>
        /// Gets or Sets FilterScope
        /// </summary>
        [DataMember(Name="filter.scope", EmitDefaultValue=false)]
        public ConfigNodePropertyString FilterScope { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqWcmCoreImplWarpTimeWarpFilterProperties {\n");
            sb.Append("  FilterOrder: ").Append(FilterOrder).Append("\n");
            sb.Append("  FilterScope: ").Append(FilterScope).Append("\n");
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
            return this.Equals(input as ComDayCqWcmCoreImplWarpTimeWarpFilterProperties);
        }

        /// <summary>
        /// Returns true if ComDayCqWcmCoreImplWarpTimeWarpFilterProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComDayCqWcmCoreImplWarpTimeWarpFilterProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqWcmCoreImplWarpTimeWarpFilterProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.FilterOrder == input.FilterOrder ||
                    (this.FilterOrder != null &&
                    this.FilterOrder.Equals(input.FilterOrder))
                ) && 
                (
                    this.FilterScope == input.FilterScope ||
                    (this.FilterScope != null &&
                    this.FilterScope.Equals(input.FilterScope))
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
                if (this.FilterOrder != null)
                    hashCode = hashCode * 59 + this.FilterOrder.GetHashCode();
                if (this.FilterScope != null)
                    hashCode = hashCode * 59 + this.FilterScope.GetHashCode();
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