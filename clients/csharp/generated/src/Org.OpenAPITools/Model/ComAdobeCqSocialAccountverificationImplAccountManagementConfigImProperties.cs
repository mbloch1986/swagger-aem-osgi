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
    /// ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties
    /// </summary>
    [DataContract]
    public partial class ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties :  IEquatable<ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties" /> class.
        /// </summary>
        /// <param name="enable">enable.</param>
        /// <param name="ttl1">ttl1.</param>
        /// <param name="ttl2">ttl2.</param>
        public ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties(ConfigNodePropertyBoolean enable = default(ConfigNodePropertyBoolean), ConfigNodePropertyInteger ttl1 = default(ConfigNodePropertyInteger), ConfigNodePropertyInteger ttl2 = default(ConfigNodePropertyInteger))
        {
            this.Enable = enable;
            this.Ttl1 = ttl1;
            this.Ttl2 = ttl2;
        }
        
        /// <summary>
        /// Gets or Sets Enable
        /// </summary>
        [DataMember(Name="enable", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean Enable { get; set; }

        /// <summary>
        /// Gets or Sets Ttl1
        /// </summary>
        [DataMember(Name="ttl1", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger Ttl1 { get; set; }

        /// <summary>
        /// Gets or Sets Ttl2
        /// </summary>
        [DataMember(Name="ttl2", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger Ttl2 { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties {\n");
            sb.Append("  Enable: ").Append(Enable).Append("\n");
            sb.Append("  Ttl1: ").Append(Ttl1).Append("\n");
            sb.Append("  Ttl2: ").Append(Ttl2).Append("\n");
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
            return this.Equals(input as ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties);
        }

        /// <summary>
        /// Returns true if ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Enable == input.Enable ||
                    (this.Enable != null &&
                    this.Enable.Equals(input.Enable))
                ) && 
                (
                    this.Ttl1 == input.Ttl1 ||
                    (this.Ttl1 != null &&
                    this.Ttl1.Equals(input.Ttl1))
                ) && 
                (
                    this.Ttl2 == input.Ttl2 ||
                    (this.Ttl2 != null &&
                    this.Ttl2.Equals(input.Ttl2))
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
                if (this.Enable != null)
                    hashCode = hashCode * 59 + this.Enable.GetHashCode();
                if (this.Ttl1 != null)
                    hashCode = hashCode * 59 + this.Ttl1.GetHashCode();
                if (this.Ttl2 != null)
                    hashCode = hashCode * 59 + this.Ttl2.GetHashCode();
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
