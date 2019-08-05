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
    /// ComDayCqDamCoreImplServletCollectionServletProperties
    /// </summary>
    [DataContract]
    public partial class ComDayCqDamCoreImplServletCollectionServletProperties :  IEquatable<ComDayCqDamCoreImplServletCollectionServletProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComDayCqDamCoreImplServletCollectionServletProperties" /> class.
        /// </summary>
        /// <param name="cqDamBatchCollectionProperties">cqDamBatchCollectionProperties.</param>
        /// <param name="cqDamBatchCollectionMaxcollections">cqDamBatchCollectionMaxcollections.</param>
        public ComDayCqDamCoreImplServletCollectionServletProperties(ConfigNodePropertyArray cqDamBatchCollectionProperties = default(ConfigNodePropertyArray), ConfigNodePropertyInteger cqDamBatchCollectionMaxcollections = default(ConfigNodePropertyInteger))
        {
            this.CqDamBatchCollectionProperties = cqDamBatchCollectionProperties;
            this.CqDamBatchCollectionMaxcollections = cqDamBatchCollectionMaxcollections;
        }
        
        /// <summary>
        /// Gets or Sets CqDamBatchCollectionProperties
        /// </summary>
        [DataMember(Name="cq.dam.batch.collection.properties", EmitDefaultValue=false)]
        public ConfigNodePropertyArray CqDamBatchCollectionProperties { get; set; }

        /// <summary>
        /// Gets or Sets CqDamBatchCollectionMaxcollections
        /// </summary>
        [DataMember(Name="cq.dam.batch.collection.maxcollections", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger CqDamBatchCollectionMaxcollections { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqDamCoreImplServletCollectionServletProperties {\n");
            sb.Append("  CqDamBatchCollectionProperties: ").Append(CqDamBatchCollectionProperties).Append("\n");
            sb.Append("  CqDamBatchCollectionMaxcollections: ").Append(CqDamBatchCollectionMaxcollections).Append("\n");
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
            return this.Equals(input as ComDayCqDamCoreImplServletCollectionServletProperties);
        }

        /// <summary>
        /// Returns true if ComDayCqDamCoreImplServletCollectionServletProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComDayCqDamCoreImplServletCollectionServletProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqDamCoreImplServletCollectionServletProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.CqDamBatchCollectionProperties == input.CqDamBatchCollectionProperties ||
                    (this.CqDamBatchCollectionProperties != null &&
                    this.CqDamBatchCollectionProperties.Equals(input.CqDamBatchCollectionProperties))
                ) && 
                (
                    this.CqDamBatchCollectionMaxcollections == input.CqDamBatchCollectionMaxcollections ||
                    (this.CqDamBatchCollectionMaxcollections != null &&
                    this.CqDamBatchCollectionMaxcollections.Equals(input.CqDamBatchCollectionMaxcollections))
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
                if (this.CqDamBatchCollectionProperties != null)
                    hashCode = hashCode * 59 + this.CqDamBatchCollectionProperties.GetHashCode();
                if (this.CqDamBatchCollectionMaxcollections != null)
                    hashCode = hashCode * 59 + this.CqDamBatchCollectionMaxcollections.GetHashCode();
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