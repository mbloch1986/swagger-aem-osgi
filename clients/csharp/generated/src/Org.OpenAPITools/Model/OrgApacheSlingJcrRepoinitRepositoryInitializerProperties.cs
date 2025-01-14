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
    /// OrgApacheSlingJcrRepoinitRepositoryInitializerProperties
    /// </summary>
    [DataContract]
    public partial class OrgApacheSlingJcrRepoinitRepositoryInitializerProperties :  IEquatable<OrgApacheSlingJcrRepoinitRepositoryInitializerProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="OrgApacheSlingJcrRepoinitRepositoryInitializerProperties" /> class.
        /// </summary>
        /// <param name="references">references.</param>
        /// <param name="scripts">scripts.</param>
        public OrgApacheSlingJcrRepoinitRepositoryInitializerProperties(ConfigNodePropertyArray references = default(ConfigNodePropertyArray), ConfigNodePropertyArray scripts = default(ConfigNodePropertyArray))
        {
            this.References = references;
            this.Scripts = scripts;
        }
        
        /// <summary>
        /// Gets or Sets References
        /// </summary>
        [DataMember(Name="references", EmitDefaultValue=false)]
        public ConfigNodePropertyArray References { get; set; }

        /// <summary>
        /// Gets or Sets Scripts
        /// </summary>
        [DataMember(Name="scripts", EmitDefaultValue=false)]
        public ConfigNodePropertyArray Scripts { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class OrgApacheSlingJcrRepoinitRepositoryInitializerProperties {\n");
            sb.Append("  References: ").Append(References).Append("\n");
            sb.Append("  Scripts: ").Append(Scripts).Append("\n");
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
            return this.Equals(input as OrgApacheSlingJcrRepoinitRepositoryInitializerProperties);
        }

        /// <summary>
        /// Returns true if OrgApacheSlingJcrRepoinitRepositoryInitializerProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of OrgApacheSlingJcrRepoinitRepositoryInitializerProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(OrgApacheSlingJcrRepoinitRepositoryInitializerProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.References == input.References ||
                    (this.References != null &&
                    this.References.Equals(input.References))
                ) && 
                (
                    this.Scripts == input.Scripts ||
                    (this.Scripts != null &&
                    this.Scripts.Equals(input.Scripts))
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
                if (this.References != null)
                    hashCode = hashCode * 59 + this.References.GetHashCode();
                if (this.Scripts != null)
                    hashCode = hashCode * 59 + this.Scripts.GetHashCode();
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
