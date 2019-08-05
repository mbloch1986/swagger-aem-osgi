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
    public partial class ComAdobeGraniteLicenseImplLicenseCheckFilterProperties : IEquatable<ComAdobeGraniteLicenseImplLicenseCheckFilterProperties>
    { 
        /// <summary>
        /// Gets or Sets CheckInternval
        /// </summary>
        [DataMember(Name="checkInternval")]
        public ConfigNodePropertyInteger CheckInternval { get; set; }

        /// <summary>
        /// Gets or Sets ExcludeIds
        /// </summary>
        [DataMember(Name="excludeIds")]
        public ConfigNodePropertyArray ExcludeIds { get; set; }

        /// <summary>
        /// Gets or Sets EncryptPing
        /// </summary>
        [DataMember(Name="encryptPing")]
        public ConfigNodePropertyBoolean EncryptPing { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComAdobeGraniteLicenseImplLicenseCheckFilterProperties {\n");
            sb.Append("  CheckInternval: ").Append(CheckInternval).Append("\n");
            sb.Append("  ExcludeIds: ").Append(ExcludeIds).Append("\n");
            sb.Append("  EncryptPing: ").Append(EncryptPing).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ComAdobeGraniteLicenseImplLicenseCheckFilterProperties)obj);
        }

        /// <summary>
        /// Returns true if ComAdobeGraniteLicenseImplLicenseCheckFilterProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of ComAdobeGraniteLicenseImplLicenseCheckFilterProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComAdobeGraniteLicenseImplLicenseCheckFilterProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    CheckInternval == other.CheckInternval ||
                    CheckInternval != null &&
                    CheckInternval.Equals(other.CheckInternval)
                ) && 
                (
                    ExcludeIds == other.ExcludeIds ||
                    ExcludeIds != null &&
                    ExcludeIds.Equals(other.ExcludeIds)
                ) && 
                (
                    EncryptPing == other.EncryptPing ||
                    EncryptPing != null &&
                    EncryptPing.Equals(other.EncryptPing)
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
                    if (CheckInternval != null)
                    hashCode = hashCode * 59 + CheckInternval.GetHashCode();
                    if (ExcludeIds != null)
                    hashCode = hashCode * 59 + ExcludeIds.GetHashCode();
                    if (EncryptPing != null)
                    hashCode = hashCode * 59 + EncryptPing.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ComAdobeGraniteLicenseImplLicenseCheckFilterProperties left, ComAdobeGraniteLicenseImplLicenseCheckFilterProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ComAdobeGraniteLicenseImplLicenseCheckFilterProperties left, ComAdobeGraniteLicenseImplLicenseCheckFilterProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}