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
    /// OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugConfiProperties
    /// </summary>
    [DataContract]
    public partial class OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugConfiProperties :  IEquatable<OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugConfiProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugConfiProperties" /> class.
        /// </summary>
        /// <param name="cugSupportedPaths">cugSupportedPaths.</param>
        /// <param name="cugEnabled">cugEnabled.</param>
        /// <param name="configurationRanking">configurationRanking.</param>
        public OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugConfiProperties(ConfigNodePropertyArray cugSupportedPaths = default(ConfigNodePropertyArray), ConfigNodePropertyBoolean cugEnabled = default(ConfigNodePropertyBoolean), ConfigNodePropertyInteger configurationRanking = default(ConfigNodePropertyInteger))
        {
            this.CugSupportedPaths = cugSupportedPaths;
            this.CugEnabled = cugEnabled;
            this.ConfigurationRanking = configurationRanking;
        }
        
        /// <summary>
        /// Gets or Sets CugSupportedPaths
        /// </summary>
        [DataMember(Name="cugSupportedPaths", EmitDefaultValue=false)]
        public ConfigNodePropertyArray CugSupportedPaths { get; set; }

        /// <summary>
        /// Gets or Sets CugEnabled
        /// </summary>
        [DataMember(Name="cugEnabled", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean CugEnabled { get; set; }

        /// <summary>
        /// Gets or Sets ConfigurationRanking
        /// </summary>
        [DataMember(Name="configurationRanking", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger ConfigurationRanking { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugConfiProperties {\n");
            sb.Append("  CugSupportedPaths: ").Append(CugSupportedPaths).Append("\n");
            sb.Append("  CugEnabled: ").Append(CugEnabled).Append("\n");
            sb.Append("  ConfigurationRanking: ").Append(ConfigurationRanking).Append("\n");
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
            return this.Equals(input as OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugConfiProperties);
        }

        /// <summary>
        /// Returns true if OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugConfiProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugConfiProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugConfiProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.CugSupportedPaths == input.CugSupportedPaths ||
                    (this.CugSupportedPaths != null &&
                    this.CugSupportedPaths.Equals(input.CugSupportedPaths))
                ) && 
                (
                    this.CugEnabled == input.CugEnabled ||
                    (this.CugEnabled != null &&
                    this.CugEnabled.Equals(input.CugEnabled))
                ) && 
                (
                    this.ConfigurationRanking == input.ConfigurationRanking ||
                    (this.ConfigurationRanking != null &&
                    this.ConfigurationRanking.Equals(input.ConfigurationRanking))
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
                if (this.CugSupportedPaths != null)
                    hashCode = hashCode * 59 + this.CugSupportedPaths.GetHashCode();
                if (this.CugEnabled != null)
                    hashCode = hashCode * 59 + this.CugEnabled.GetHashCode();
                if (this.ConfigurationRanking != null)
                    hashCode = hashCode * 59 + this.ConfigurationRanking.GetHashCode();
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
