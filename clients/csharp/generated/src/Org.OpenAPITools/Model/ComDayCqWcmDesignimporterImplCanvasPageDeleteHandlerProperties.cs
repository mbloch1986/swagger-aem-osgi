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
    /// ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerProperties
    /// </summary>
    [DataContract]
    public partial class ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerProperties :  IEquatable<ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerProperties" /> class.
        /// </summary>
        /// <param name="minThreadPoolSize">minThreadPoolSize.</param>
        /// <param name="maxThreadPoolSize">maxThreadPoolSize.</param>
        public ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerProperties(ConfigNodePropertyInteger minThreadPoolSize = default(ConfigNodePropertyInteger), ConfigNodePropertyInteger maxThreadPoolSize = default(ConfigNodePropertyInteger))
        {
            this.MinThreadPoolSize = minThreadPoolSize;
            this.MaxThreadPoolSize = maxThreadPoolSize;
        }
        
        /// <summary>
        /// Gets or Sets MinThreadPoolSize
        /// </summary>
        [DataMember(Name="minThreadPoolSize", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger MinThreadPoolSize { get; set; }

        /// <summary>
        /// Gets or Sets MaxThreadPoolSize
        /// </summary>
        [DataMember(Name="maxThreadPoolSize", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger MaxThreadPoolSize { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerProperties {\n");
            sb.Append("  MinThreadPoolSize: ").Append(MinThreadPoolSize).Append("\n");
            sb.Append("  MaxThreadPoolSize: ").Append(MaxThreadPoolSize).Append("\n");
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
            return this.Equals(input as ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerProperties);
        }

        /// <summary>
        /// Returns true if ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.MinThreadPoolSize == input.MinThreadPoolSize ||
                    (this.MinThreadPoolSize != null &&
                    this.MinThreadPoolSize.Equals(input.MinThreadPoolSize))
                ) && 
                (
                    this.MaxThreadPoolSize == input.MaxThreadPoolSize ||
                    (this.MaxThreadPoolSize != null &&
                    this.MaxThreadPoolSize.Equals(input.MaxThreadPoolSize))
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
                if (this.MinThreadPoolSize != null)
                    hashCode = hashCode * 59 + this.MinThreadPoolSize.GetHashCode();
                if (this.MaxThreadPoolSize != null)
                    hashCode = hashCode * 59 + this.MaxThreadPoolSize.GetHashCode();
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
