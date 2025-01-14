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
    /// ComDayCqDamCoreImplHandlerJpegHandlerProperties
    /// </summary>
    [DataContract]
    public partial class ComDayCqDamCoreImplHandlerJpegHandlerProperties :  IEquatable<ComDayCqDamCoreImplHandlerJpegHandlerProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComDayCqDamCoreImplHandlerJpegHandlerProperties" /> class.
        /// </summary>
        /// <param name="cqDamEnableExtMetaExtraction">cqDamEnableExtMetaExtraction.</param>
        /// <param name="largeFileThreshold">largeFileThreshold.</param>
        /// <param name="largeCommentThreshold">largeCommentThreshold.</param>
        public ComDayCqDamCoreImplHandlerJpegHandlerProperties(ConfigNodePropertyBoolean cqDamEnableExtMetaExtraction = default(ConfigNodePropertyBoolean), ConfigNodePropertyInteger largeFileThreshold = default(ConfigNodePropertyInteger), ConfigNodePropertyInteger largeCommentThreshold = default(ConfigNodePropertyInteger))
        {
            this.CqDamEnableExtMetaExtraction = cqDamEnableExtMetaExtraction;
            this.LargeFileThreshold = largeFileThreshold;
            this.LargeCommentThreshold = largeCommentThreshold;
        }
        
        /// <summary>
        /// Gets or Sets CqDamEnableExtMetaExtraction
        /// </summary>
        [DataMember(Name="cq.dam.enable.ext.meta.extraction", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean CqDamEnableExtMetaExtraction { get; set; }

        /// <summary>
        /// Gets or Sets LargeFileThreshold
        /// </summary>
        [DataMember(Name="large_file_threshold", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger LargeFileThreshold { get; set; }

        /// <summary>
        /// Gets or Sets LargeCommentThreshold
        /// </summary>
        [DataMember(Name="large_comment_threshold", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger LargeCommentThreshold { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqDamCoreImplHandlerJpegHandlerProperties {\n");
            sb.Append("  CqDamEnableExtMetaExtraction: ").Append(CqDamEnableExtMetaExtraction).Append("\n");
            sb.Append("  LargeFileThreshold: ").Append(LargeFileThreshold).Append("\n");
            sb.Append("  LargeCommentThreshold: ").Append(LargeCommentThreshold).Append("\n");
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
            return this.Equals(input as ComDayCqDamCoreImplHandlerJpegHandlerProperties);
        }

        /// <summary>
        /// Returns true if ComDayCqDamCoreImplHandlerJpegHandlerProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComDayCqDamCoreImplHandlerJpegHandlerProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqDamCoreImplHandlerJpegHandlerProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.CqDamEnableExtMetaExtraction == input.CqDamEnableExtMetaExtraction ||
                    (this.CqDamEnableExtMetaExtraction != null &&
                    this.CqDamEnableExtMetaExtraction.Equals(input.CqDamEnableExtMetaExtraction))
                ) && 
                (
                    this.LargeFileThreshold == input.LargeFileThreshold ||
                    (this.LargeFileThreshold != null &&
                    this.LargeFileThreshold.Equals(input.LargeFileThreshold))
                ) && 
                (
                    this.LargeCommentThreshold == input.LargeCommentThreshold ||
                    (this.LargeCommentThreshold != null &&
                    this.LargeCommentThreshold.Equals(input.LargeCommentThreshold))
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
                if (this.CqDamEnableExtMetaExtraction != null)
                    hashCode = hashCode * 59 + this.CqDamEnableExtMetaExtraction.GetHashCode();
                if (this.LargeFileThreshold != null)
                    hashCode = hashCode * 59 + this.LargeFileThreshold.GetHashCode();
                if (this.LargeCommentThreshold != null)
                    hashCode = hashCode * 59 + this.LargeCommentThreshold.GetHashCode();
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
