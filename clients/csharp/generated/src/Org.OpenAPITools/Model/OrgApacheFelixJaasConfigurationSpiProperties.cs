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
    /// OrgApacheFelixJaasConfigurationSpiProperties
    /// </summary>
    [DataContract]
    public partial class OrgApacheFelixJaasConfigurationSpiProperties :  IEquatable<OrgApacheFelixJaasConfigurationSpiProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="OrgApacheFelixJaasConfigurationSpiProperties" /> class.
        /// </summary>
        /// <param name="jaasDefaultRealmName">jaasDefaultRealmName.</param>
        /// <param name="jaasConfigProviderName">jaasConfigProviderName.</param>
        /// <param name="jaasGlobalConfigPolicy">jaasGlobalConfigPolicy.</param>
        public OrgApacheFelixJaasConfigurationSpiProperties(ConfigNodePropertyString jaasDefaultRealmName = default(ConfigNodePropertyString), ConfigNodePropertyString jaasConfigProviderName = default(ConfigNodePropertyString), ConfigNodePropertyDropDown jaasGlobalConfigPolicy = default(ConfigNodePropertyDropDown))
        {
            this.JaasDefaultRealmName = jaasDefaultRealmName;
            this.JaasConfigProviderName = jaasConfigProviderName;
            this.JaasGlobalConfigPolicy = jaasGlobalConfigPolicy;
        }
        
        /// <summary>
        /// Gets or Sets JaasDefaultRealmName
        /// </summary>
        [DataMember(Name="jaas.defaultRealmName", EmitDefaultValue=false)]
        public ConfigNodePropertyString JaasDefaultRealmName { get; set; }

        /// <summary>
        /// Gets or Sets JaasConfigProviderName
        /// </summary>
        [DataMember(Name="jaas.configProviderName", EmitDefaultValue=false)]
        public ConfigNodePropertyString JaasConfigProviderName { get; set; }

        /// <summary>
        /// Gets or Sets JaasGlobalConfigPolicy
        /// </summary>
        [DataMember(Name="jaas.globalConfigPolicy", EmitDefaultValue=false)]
        public ConfigNodePropertyDropDown JaasGlobalConfigPolicy { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class OrgApacheFelixJaasConfigurationSpiProperties {\n");
            sb.Append("  JaasDefaultRealmName: ").Append(JaasDefaultRealmName).Append("\n");
            sb.Append("  JaasConfigProviderName: ").Append(JaasConfigProviderName).Append("\n");
            sb.Append("  JaasGlobalConfigPolicy: ").Append(JaasGlobalConfigPolicy).Append("\n");
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
            return this.Equals(input as OrgApacheFelixJaasConfigurationSpiProperties);
        }

        /// <summary>
        /// Returns true if OrgApacheFelixJaasConfigurationSpiProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of OrgApacheFelixJaasConfigurationSpiProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(OrgApacheFelixJaasConfigurationSpiProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.JaasDefaultRealmName == input.JaasDefaultRealmName ||
                    (this.JaasDefaultRealmName != null &&
                    this.JaasDefaultRealmName.Equals(input.JaasDefaultRealmName))
                ) && 
                (
                    this.JaasConfigProviderName == input.JaasConfigProviderName ||
                    (this.JaasConfigProviderName != null &&
                    this.JaasConfigProviderName.Equals(input.JaasConfigProviderName))
                ) && 
                (
                    this.JaasGlobalConfigPolicy == input.JaasGlobalConfigPolicy ||
                    (this.JaasGlobalConfigPolicy != null &&
                    this.JaasGlobalConfigPolicy.Equals(input.JaasGlobalConfigPolicy))
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
                if (this.JaasDefaultRealmName != null)
                    hashCode = hashCode * 59 + this.JaasDefaultRealmName.GetHashCode();
                if (this.JaasConfigProviderName != null)
                    hashCode = hashCode * 59 + this.JaasConfigProviderName.GetHashCode();
                if (this.JaasGlobalConfigPolicy != null)
                    hashCode = hashCode * 59 + this.JaasGlobalConfigPolicy.GetHashCode();
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
