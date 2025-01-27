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
    /// ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties
    /// </summary>
    [DataContract]
    public partial class ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties :  IEquatable<ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties" /> class.
        /// </summary>
        /// <param name="maxConnections">maxConnections.</param>
        /// <param name="maxRequests">maxRequests.</param>
        /// <param name="requestTimeout">requestTimeout.</param>
        /// <param name="logDir">logDir.</param>
        public ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties(ConfigNodePropertyString maxConnections = default(ConfigNodePropertyString), ConfigNodePropertyString maxRequests = default(ConfigNodePropertyString), ConfigNodePropertyString requestTimeout = default(ConfigNodePropertyString), ConfigNodePropertyString logDir = default(ConfigNodePropertyString))
        {
            this.MaxConnections = maxConnections;
            this.MaxRequests = maxRequests;
            this.RequestTimeout = requestTimeout;
            this.LogDir = logDir;
        }
        
        /// <summary>
        /// Gets or Sets MaxConnections
        /// </summary>
        [DataMember(Name="maxConnections", EmitDefaultValue=false)]
        public ConfigNodePropertyString MaxConnections { get; set; }

        /// <summary>
        /// Gets or Sets MaxRequests
        /// </summary>
        [DataMember(Name="maxRequests", EmitDefaultValue=false)]
        public ConfigNodePropertyString MaxRequests { get; set; }

        /// <summary>
        /// Gets or Sets RequestTimeout
        /// </summary>
        [DataMember(Name="requestTimeout", EmitDefaultValue=false)]
        public ConfigNodePropertyString RequestTimeout { get; set; }

        /// <summary>
        /// Gets or Sets LogDir
        /// </summary>
        [DataMember(Name="logDir", EmitDefaultValue=false)]
        public ConfigNodePropertyString LogDir { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties {\n");
            sb.Append("  MaxConnections: ").Append(MaxConnections).Append("\n");
            sb.Append("  MaxRequests: ").Append(MaxRequests).Append("\n");
            sb.Append("  RequestTimeout: ").Append(RequestTimeout).Append("\n");
            sb.Append("  LogDir: ").Append(LogDir).Append("\n");
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
            return this.Equals(input as ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties);
        }

        /// <summary>
        /// Returns true if ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.MaxConnections == input.MaxConnections ||
                    (this.MaxConnections != null &&
                    this.MaxConnections.Equals(input.MaxConnections))
                ) && 
                (
                    this.MaxRequests == input.MaxRequests ||
                    (this.MaxRequests != null &&
                    this.MaxRequests.Equals(input.MaxRequests))
                ) && 
                (
                    this.RequestTimeout == input.RequestTimeout ||
                    (this.RequestTimeout != null &&
                    this.RequestTimeout.Equals(input.RequestTimeout))
                ) && 
                (
                    this.LogDir == input.LogDir ||
                    (this.LogDir != null &&
                    this.LogDir.Equals(input.LogDir))
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
                if (this.MaxConnections != null)
                    hashCode = hashCode * 59 + this.MaxConnections.GetHashCode();
                if (this.MaxRequests != null)
                    hashCode = hashCode * 59 + this.MaxRequests.GetHashCode();
                if (this.RequestTimeout != null)
                    hashCode = hashCode * 59 + this.RequestTimeout.GetHashCode();
                if (this.LogDir != null)
                    hashCode = hashCode * 59 + this.LogDir.GetHashCode();
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
