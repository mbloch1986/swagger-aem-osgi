/*
 * Adobe Experience Manager OSGI config (AEM) API
 *
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 * Generated by: https://openapi-generator.tech
 */

using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace Org.OpenAPITools.Models
{ 
    /// <summary>
    /// 
    /// </summary>
    [DataContract]
    public partial class OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugConfiProperties : IEquatable<OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugConfiProperties>
    { 
        /// <summary>
        /// Gets or Sets CugSupportedPaths
        /// </summary>
        [DataMember(Name="cugSupportedPaths")]
        public ConfigNodePropertyArray CugSupportedPaths { get; set; }

        /// <summary>
        /// Gets or Sets CugEnabled
        /// </summary>
        [DataMember(Name="cugEnabled")]
        public ConfigNodePropertyBoolean CugEnabled { get; set; }

        /// <summary>
        /// Gets or Sets ConfigurationRanking
        /// </summary>
        [DataMember(Name="configurationRanking")]
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
        public string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="obj">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object obj)
        {
            if (obj is null) return false;
            if (ReferenceEquals(this, obj)) return true;
            return obj.GetType() == GetType() && Equals((OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugConfiProperties)obj);
        }

        /// <summary>
        /// Returns true if OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugConfiProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugConfiProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugConfiProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    CugSupportedPaths == other.CugSupportedPaths ||
                    CugSupportedPaths != null &&
                    CugSupportedPaths.Equals(other.CugSupportedPaths)
                ) && 
                (
                    CugEnabled == other.CugEnabled ||
                    CugEnabled != null &&
                    CugEnabled.Equals(other.CugEnabled)
                ) && 
                (
                    ConfigurationRanking == other.ConfigurationRanking ||
                    ConfigurationRanking != null &&
                    ConfigurationRanking.Equals(other.ConfigurationRanking)
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
                var hashCode = 41;
                // Suitable nullity checks etc, of course :)
                    if (CugSupportedPaths != null)
                    hashCode = hashCode * 59 + CugSupportedPaths.GetHashCode();
                    if (CugEnabled != null)
                    hashCode = hashCode * 59 + CugEnabled.GetHashCode();
                    if (ConfigurationRanking != null)
                    hashCode = hashCode * 59 + ConfigurationRanking.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugConfiProperties left, OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugConfiProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugConfiProperties left, OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugConfiProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
