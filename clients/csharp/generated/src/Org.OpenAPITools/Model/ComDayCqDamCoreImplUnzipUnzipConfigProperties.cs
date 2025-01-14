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
    /// ComDayCqDamCoreImplUnzipUnzipConfigProperties
    /// </summary>
    [DataContract]
    public partial class ComDayCqDamCoreImplUnzipUnzipConfigProperties :  IEquatable<ComDayCqDamCoreImplUnzipUnzipConfigProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComDayCqDamCoreImplUnzipUnzipConfigProperties" /> class.
        /// </summary>
        /// <param name="cqDamConfigUnzipMaxuncompressedsize">cqDamConfigUnzipMaxuncompressedsize.</param>
        /// <param name="cqDamConfigUnzipEncoding">cqDamConfigUnzipEncoding.</param>
        public ComDayCqDamCoreImplUnzipUnzipConfigProperties(ConfigNodePropertyInteger cqDamConfigUnzipMaxuncompressedsize = default(ConfigNodePropertyInteger), ConfigNodePropertyString cqDamConfigUnzipEncoding = default(ConfigNodePropertyString))
        {
            this.CqDamConfigUnzipMaxuncompressedsize = cqDamConfigUnzipMaxuncompressedsize;
            this.CqDamConfigUnzipEncoding = cqDamConfigUnzipEncoding;
        }
        
        /// <summary>
        /// Gets or Sets CqDamConfigUnzipMaxuncompressedsize
        /// </summary>
        [DataMember(Name="cq.dam.config.unzip.maxuncompressedsize", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger CqDamConfigUnzipMaxuncompressedsize { get; set; }

        /// <summary>
        /// Gets or Sets CqDamConfigUnzipEncoding
        /// </summary>
        [DataMember(Name="cq.dam.config.unzip.encoding", EmitDefaultValue=false)]
        public ConfigNodePropertyString CqDamConfigUnzipEncoding { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqDamCoreImplUnzipUnzipConfigProperties {\n");
            sb.Append("  CqDamConfigUnzipMaxuncompressedsize: ").Append(CqDamConfigUnzipMaxuncompressedsize).Append("\n");
            sb.Append("  CqDamConfigUnzipEncoding: ").Append(CqDamConfigUnzipEncoding).Append("\n");
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
            return this.Equals(input as ComDayCqDamCoreImplUnzipUnzipConfigProperties);
        }

        /// <summary>
        /// Returns true if ComDayCqDamCoreImplUnzipUnzipConfigProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComDayCqDamCoreImplUnzipUnzipConfigProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqDamCoreImplUnzipUnzipConfigProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.CqDamConfigUnzipMaxuncompressedsize == input.CqDamConfigUnzipMaxuncompressedsize ||
                    (this.CqDamConfigUnzipMaxuncompressedsize != null &&
                    this.CqDamConfigUnzipMaxuncompressedsize.Equals(input.CqDamConfigUnzipMaxuncompressedsize))
                ) && 
                (
                    this.CqDamConfigUnzipEncoding == input.CqDamConfigUnzipEncoding ||
                    (this.CqDamConfigUnzipEncoding != null &&
                    this.CqDamConfigUnzipEncoding.Equals(input.CqDamConfigUnzipEncoding))
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
                if (this.CqDamConfigUnzipMaxuncompressedsize != null)
                    hashCode = hashCode * 59 + this.CqDamConfigUnzipMaxuncompressedsize.GetHashCode();
                if (this.CqDamConfigUnzipEncoding != null)
                    hashCode = hashCode * 59 + this.CqDamConfigUnzipEncoding.GetHashCode();
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
