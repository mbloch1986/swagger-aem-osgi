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
    public partial class ComDayCqMailerDefaultMailServiceProperties : IEquatable<ComDayCqMailerDefaultMailServiceProperties>
    { 
        /// <summary>
        /// Gets or Sets SmtpHost
        /// </summary>
        [DataMember(Name="smtp.host")]
        public ConfigNodePropertyString SmtpHost { get; set; }

        /// <summary>
        /// Gets or Sets SmtpPort
        /// </summary>
        [DataMember(Name="smtp.port")]
        public ConfigNodePropertyInteger SmtpPort { get; set; }

        /// <summary>
        /// Gets or Sets SmtpUser
        /// </summary>
        [DataMember(Name="smtp.user")]
        public ConfigNodePropertyString SmtpUser { get; set; }

        /// <summary>
        /// Gets or Sets SmtpPassword
        /// </summary>
        [DataMember(Name="smtp.password")]
        public ConfigNodePropertyString SmtpPassword { get; set; }

        /// <summary>
        /// Gets or Sets FromAddress
        /// </summary>
        [DataMember(Name="from.address")]
        public ConfigNodePropertyString FromAddress { get; set; }

        /// <summary>
        /// Gets or Sets SmtpSsl
        /// </summary>
        [DataMember(Name="smtp.ssl")]
        public ConfigNodePropertyBoolean SmtpSsl { get; set; }

        /// <summary>
        /// Gets or Sets SmtpStarttls
        /// </summary>
        [DataMember(Name="smtp.starttls")]
        public ConfigNodePropertyBoolean SmtpStarttls { get; set; }

        /// <summary>
        /// Gets or Sets DebugEmail
        /// </summary>
        [DataMember(Name="debug.email")]
        public ConfigNodePropertyBoolean DebugEmail { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqMailerDefaultMailServiceProperties {\n");
            sb.Append("  SmtpHost: ").Append(SmtpHost).Append("\n");
            sb.Append("  SmtpPort: ").Append(SmtpPort).Append("\n");
            sb.Append("  SmtpUser: ").Append(SmtpUser).Append("\n");
            sb.Append("  SmtpPassword: ").Append(SmtpPassword).Append("\n");
            sb.Append("  FromAddress: ").Append(FromAddress).Append("\n");
            sb.Append("  SmtpSsl: ").Append(SmtpSsl).Append("\n");
            sb.Append("  SmtpStarttls: ").Append(SmtpStarttls).Append("\n");
            sb.Append("  DebugEmail: ").Append(DebugEmail).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ComDayCqMailerDefaultMailServiceProperties)obj);
        }

        /// <summary>
        /// Returns true if ComDayCqMailerDefaultMailServiceProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of ComDayCqMailerDefaultMailServiceProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqMailerDefaultMailServiceProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    SmtpHost == other.SmtpHost ||
                    SmtpHost != null &&
                    SmtpHost.Equals(other.SmtpHost)
                ) && 
                (
                    SmtpPort == other.SmtpPort ||
                    SmtpPort != null &&
                    SmtpPort.Equals(other.SmtpPort)
                ) && 
                (
                    SmtpUser == other.SmtpUser ||
                    SmtpUser != null &&
                    SmtpUser.Equals(other.SmtpUser)
                ) && 
                (
                    SmtpPassword == other.SmtpPassword ||
                    SmtpPassword != null &&
                    SmtpPassword.Equals(other.SmtpPassword)
                ) && 
                (
                    FromAddress == other.FromAddress ||
                    FromAddress != null &&
                    FromAddress.Equals(other.FromAddress)
                ) && 
                (
                    SmtpSsl == other.SmtpSsl ||
                    SmtpSsl != null &&
                    SmtpSsl.Equals(other.SmtpSsl)
                ) && 
                (
                    SmtpStarttls == other.SmtpStarttls ||
                    SmtpStarttls != null &&
                    SmtpStarttls.Equals(other.SmtpStarttls)
                ) && 
                (
                    DebugEmail == other.DebugEmail ||
                    DebugEmail != null &&
                    DebugEmail.Equals(other.DebugEmail)
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
                    if (SmtpHost != null)
                    hashCode = hashCode * 59 + SmtpHost.GetHashCode();
                    if (SmtpPort != null)
                    hashCode = hashCode * 59 + SmtpPort.GetHashCode();
                    if (SmtpUser != null)
                    hashCode = hashCode * 59 + SmtpUser.GetHashCode();
                    if (SmtpPassword != null)
                    hashCode = hashCode * 59 + SmtpPassword.GetHashCode();
                    if (FromAddress != null)
                    hashCode = hashCode * 59 + FromAddress.GetHashCode();
                    if (SmtpSsl != null)
                    hashCode = hashCode * 59 + SmtpSsl.GetHashCode();
                    if (SmtpStarttls != null)
                    hashCode = hashCode * 59 + SmtpStarttls.GetHashCode();
                    if (DebugEmail != null)
                    hashCode = hashCode * 59 + DebugEmail.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ComDayCqMailerDefaultMailServiceProperties left, ComDayCqMailerDefaultMailServiceProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ComDayCqMailerDefaultMailServiceProperties left, ComDayCqMailerDefaultMailServiceProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
