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
    /// ComAdobeGraniteAuthCertImplClientCertAuthHandlerProperties
    /// </summary>
    [DataContract]
    public partial class ComAdobeGraniteAuthCertImplClientCertAuthHandlerProperties :  IEquatable<ComAdobeGraniteAuthCertImplClientCertAuthHandlerProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComAdobeGraniteAuthCertImplClientCertAuthHandlerProperties" /> class.
        /// </summary>
        /// <param name="path">path.</param>
        /// <param name="serviceRanking">serviceRanking.</param>
        public ComAdobeGraniteAuthCertImplClientCertAuthHandlerProperties(ConfigNodePropertyString path = default(ConfigNodePropertyString), ConfigNodePropertyInteger serviceRanking = default(ConfigNodePropertyInteger))
        {
            this.Path = path;
            this.ServiceRanking = serviceRanking;
        }
        
        /// <summary>
        /// Gets or Sets Path
        /// </summary>
        [DataMember(Name="path", EmitDefaultValue=false)]
        public ConfigNodePropertyString Path { get; set; }

        /// <summary>
        /// Gets or Sets ServiceRanking
        /// </summary>
        [DataMember(Name="service.ranking", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger ServiceRanking { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComAdobeGraniteAuthCertImplClientCertAuthHandlerProperties {\n");
            sb.Append("  Path: ").Append(Path).Append("\n");
            sb.Append("  ServiceRanking: ").Append(ServiceRanking).Append("\n");
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
            return this.Equals(input as ComAdobeGraniteAuthCertImplClientCertAuthHandlerProperties);
        }

        /// <summary>
        /// Returns true if ComAdobeGraniteAuthCertImplClientCertAuthHandlerProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComAdobeGraniteAuthCertImplClientCertAuthHandlerProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComAdobeGraniteAuthCertImplClientCertAuthHandlerProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Path == input.Path ||
                    (this.Path != null &&
                    this.Path.Equals(input.Path))
                ) && 
                (
                    this.ServiceRanking == input.ServiceRanking ||
                    (this.ServiceRanking != null &&
                    this.ServiceRanking.Equals(input.ServiceRanking))
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
                if (this.Path != null)
                    hashCode = hashCode * 59 + this.Path.GetHashCode();
                if (this.ServiceRanking != null)
                    hashCode = hashCode * 59 + this.ServiceRanking.GetHashCode();
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
