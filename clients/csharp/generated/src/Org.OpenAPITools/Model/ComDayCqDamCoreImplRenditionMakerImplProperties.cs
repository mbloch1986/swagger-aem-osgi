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
    /// ComDayCqDamCoreImplRenditionMakerImplProperties
    /// </summary>
    [DataContract]
    public partial class ComDayCqDamCoreImplRenditionMakerImplProperties :  IEquatable<ComDayCqDamCoreImplRenditionMakerImplProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComDayCqDamCoreImplRenditionMakerImplProperties" /> class.
        /// </summary>
        /// <param name="xmpPropagate">xmpPropagate.</param>
        /// <param name="xmpExcludes">xmpExcludes.</param>
        public ComDayCqDamCoreImplRenditionMakerImplProperties(ConfigNodePropertyBoolean xmpPropagate = default(ConfigNodePropertyBoolean), ConfigNodePropertyArray xmpExcludes = default(ConfigNodePropertyArray))
        {
            this.XmpPropagate = xmpPropagate;
            this.XmpExcludes = xmpExcludes;
        }
        
        /// <summary>
        /// Gets or Sets XmpPropagate
        /// </summary>
        [DataMember(Name="xmp.propagate", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean XmpPropagate { get; set; }

        /// <summary>
        /// Gets or Sets XmpExcludes
        /// </summary>
        [DataMember(Name="xmp.excludes", EmitDefaultValue=false)]
        public ConfigNodePropertyArray XmpExcludes { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqDamCoreImplRenditionMakerImplProperties {\n");
            sb.Append("  XmpPropagate: ").Append(XmpPropagate).Append("\n");
            sb.Append("  XmpExcludes: ").Append(XmpExcludes).Append("\n");
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
            return this.Equals(input as ComDayCqDamCoreImplRenditionMakerImplProperties);
        }

        /// <summary>
        /// Returns true if ComDayCqDamCoreImplRenditionMakerImplProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComDayCqDamCoreImplRenditionMakerImplProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqDamCoreImplRenditionMakerImplProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.XmpPropagate == input.XmpPropagate ||
                    (this.XmpPropagate != null &&
                    this.XmpPropagate.Equals(input.XmpPropagate))
                ) && 
                (
                    this.XmpExcludes == input.XmpExcludes ||
                    (this.XmpExcludes != null &&
                    this.XmpExcludes.Equals(input.XmpExcludes))
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
                if (this.XmpPropagate != null)
                    hashCode = hashCode * 59 + this.XmpPropagate.GetHashCode();
                if (this.XmpExcludes != null)
                    hashCode = hashCode * 59 + this.XmpExcludes.GetHashCode();
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
