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
    public partial class ComDayCqAuthImplCugCugSupportImplProperties : IEquatable<ComDayCqAuthImplCugCugSupportImplProperties>
    { 
        /// <summary>
        /// Gets or Sets CugExemptedPrincipals
        /// </summary>
        [DataMember(Name="cug.exempted.principals")]
        public ConfigNodePropertyArray CugExemptedPrincipals { get; set; }

        /// <summary>
        /// Gets or Sets CugEnabled
        /// </summary>
        [DataMember(Name="cug.enabled")]
        public ConfigNodePropertyBoolean CugEnabled { get; set; }

        /// <summary>
        /// Gets or Sets CugPrincipalsRegex
        /// </summary>
        [DataMember(Name="cug.principals.regex")]
        public ConfigNodePropertyString CugPrincipalsRegex { get; set; }

        /// <summary>
        /// Gets or Sets CugPrincipalsReplacement
        /// </summary>
        [DataMember(Name="cug.principals.replacement")]
        public ConfigNodePropertyString CugPrincipalsReplacement { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqAuthImplCugCugSupportImplProperties {\n");
            sb.Append("  CugExemptedPrincipals: ").Append(CugExemptedPrincipals).Append("\n");
            sb.Append("  CugEnabled: ").Append(CugEnabled).Append("\n");
            sb.Append("  CugPrincipalsRegex: ").Append(CugPrincipalsRegex).Append("\n");
            sb.Append("  CugPrincipalsReplacement: ").Append(CugPrincipalsReplacement).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ComDayCqAuthImplCugCugSupportImplProperties)obj);
        }

        /// <summary>
        /// Returns true if ComDayCqAuthImplCugCugSupportImplProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of ComDayCqAuthImplCugCugSupportImplProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqAuthImplCugCugSupportImplProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    CugExemptedPrincipals == other.CugExemptedPrincipals ||
                    CugExemptedPrincipals != null &&
                    CugExemptedPrincipals.Equals(other.CugExemptedPrincipals)
                ) && 
                (
                    CugEnabled == other.CugEnabled ||
                    CugEnabled != null &&
                    CugEnabled.Equals(other.CugEnabled)
                ) && 
                (
                    CugPrincipalsRegex == other.CugPrincipalsRegex ||
                    CugPrincipalsRegex != null &&
                    CugPrincipalsRegex.Equals(other.CugPrincipalsRegex)
                ) && 
                (
                    CugPrincipalsReplacement == other.CugPrincipalsReplacement ||
                    CugPrincipalsReplacement != null &&
                    CugPrincipalsReplacement.Equals(other.CugPrincipalsReplacement)
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
                    if (CugExemptedPrincipals != null)
                    hashCode = hashCode * 59 + CugExemptedPrincipals.GetHashCode();
                    if (CugEnabled != null)
                    hashCode = hashCode * 59 + CugEnabled.GetHashCode();
                    if (CugPrincipalsRegex != null)
                    hashCode = hashCode * 59 + CugPrincipalsRegex.GetHashCode();
                    if (CugPrincipalsReplacement != null)
                    hashCode = hashCode * 59 + CugPrincipalsReplacement.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ComDayCqAuthImplCugCugSupportImplProperties left, ComDayCqAuthImplCugCugSupportImplProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ComDayCqAuthImplCugCugSupportImplProperties left, ComDayCqAuthImplCugCugSupportImplProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
