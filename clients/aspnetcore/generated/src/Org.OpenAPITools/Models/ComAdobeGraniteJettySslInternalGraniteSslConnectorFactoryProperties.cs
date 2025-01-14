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
    public partial class ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryProperties : IEquatable<ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryProperties>
    { 
        /// <summary>
        /// Gets or Sets ComAdobeGraniteJettySslPort
        /// </summary>
        [DataMember(Name="com.adobe.granite.jetty.ssl.port")]
        public ConfigNodePropertyInteger ComAdobeGraniteJettySslPort { get; set; }

        /// <summary>
        /// Gets or Sets ComAdobeGraniteJettySslKeystoreUser
        /// </summary>
        [DataMember(Name="com.adobe.granite.jetty.ssl.keystore.user")]
        public ConfigNodePropertyString ComAdobeGraniteJettySslKeystoreUser { get; set; }

        /// <summary>
        /// Gets or Sets ComAdobeGraniteJettySslKeystorePassword
        /// </summary>
        [DataMember(Name="com.adobe.granite.jetty.ssl.keystore.password")]
        public ConfigNodePropertyString ComAdobeGraniteJettySslKeystorePassword { get; set; }

        /// <summary>
        /// Gets or Sets ComAdobeGraniteJettySslCiphersuitesExcluded
        /// </summary>
        [DataMember(Name="com.adobe.granite.jetty.ssl.ciphersuites.excluded")]
        public ConfigNodePropertyArray ComAdobeGraniteJettySslCiphersuitesExcluded { get; set; }

        /// <summary>
        /// Gets or Sets ComAdobeGraniteJettySslCiphersuitesIncluded
        /// </summary>
        [DataMember(Name="com.adobe.granite.jetty.ssl.ciphersuites.included")]
        public ConfigNodePropertyArray ComAdobeGraniteJettySslCiphersuitesIncluded { get; set; }

        /// <summary>
        /// Gets or Sets ComAdobeGraniteJettySslClientCertificate
        /// </summary>
        [DataMember(Name="com.adobe.granite.jetty.ssl.client.certificate")]
        public ConfigNodePropertyDropDown ComAdobeGraniteJettySslClientCertificate { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryProperties {\n");
            sb.Append("  ComAdobeGraniteJettySslPort: ").Append(ComAdobeGraniteJettySslPort).Append("\n");
            sb.Append("  ComAdobeGraniteJettySslKeystoreUser: ").Append(ComAdobeGraniteJettySslKeystoreUser).Append("\n");
            sb.Append("  ComAdobeGraniteJettySslKeystorePassword: ").Append(ComAdobeGraniteJettySslKeystorePassword).Append("\n");
            sb.Append("  ComAdobeGraniteJettySslCiphersuitesExcluded: ").Append(ComAdobeGraniteJettySslCiphersuitesExcluded).Append("\n");
            sb.Append("  ComAdobeGraniteJettySslCiphersuitesIncluded: ").Append(ComAdobeGraniteJettySslCiphersuitesIncluded).Append("\n");
            sb.Append("  ComAdobeGraniteJettySslClientCertificate: ").Append(ComAdobeGraniteJettySslClientCertificate).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryProperties)obj);
        }

        /// <summary>
        /// Returns true if ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    ComAdobeGraniteJettySslPort == other.ComAdobeGraniteJettySslPort ||
                    ComAdobeGraniteJettySslPort != null &&
                    ComAdobeGraniteJettySslPort.Equals(other.ComAdobeGraniteJettySslPort)
                ) && 
                (
                    ComAdobeGraniteJettySslKeystoreUser == other.ComAdobeGraniteJettySslKeystoreUser ||
                    ComAdobeGraniteJettySslKeystoreUser != null &&
                    ComAdobeGraniteJettySslKeystoreUser.Equals(other.ComAdobeGraniteJettySslKeystoreUser)
                ) && 
                (
                    ComAdobeGraniteJettySslKeystorePassword == other.ComAdobeGraniteJettySslKeystorePassword ||
                    ComAdobeGraniteJettySslKeystorePassword != null &&
                    ComAdobeGraniteJettySslKeystorePassword.Equals(other.ComAdobeGraniteJettySslKeystorePassword)
                ) && 
                (
                    ComAdobeGraniteJettySslCiphersuitesExcluded == other.ComAdobeGraniteJettySslCiphersuitesExcluded ||
                    ComAdobeGraniteJettySslCiphersuitesExcluded != null &&
                    ComAdobeGraniteJettySslCiphersuitesExcluded.Equals(other.ComAdobeGraniteJettySslCiphersuitesExcluded)
                ) && 
                (
                    ComAdobeGraniteJettySslCiphersuitesIncluded == other.ComAdobeGraniteJettySslCiphersuitesIncluded ||
                    ComAdobeGraniteJettySslCiphersuitesIncluded != null &&
                    ComAdobeGraniteJettySslCiphersuitesIncluded.Equals(other.ComAdobeGraniteJettySslCiphersuitesIncluded)
                ) && 
                (
                    ComAdobeGraniteJettySslClientCertificate == other.ComAdobeGraniteJettySslClientCertificate ||
                    ComAdobeGraniteJettySslClientCertificate != null &&
                    ComAdobeGraniteJettySslClientCertificate.Equals(other.ComAdobeGraniteJettySslClientCertificate)
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
                    if (ComAdobeGraniteJettySslPort != null)
                    hashCode = hashCode * 59 + ComAdobeGraniteJettySslPort.GetHashCode();
                    if (ComAdobeGraniteJettySslKeystoreUser != null)
                    hashCode = hashCode * 59 + ComAdobeGraniteJettySslKeystoreUser.GetHashCode();
                    if (ComAdobeGraniteJettySslKeystorePassword != null)
                    hashCode = hashCode * 59 + ComAdobeGraniteJettySslKeystorePassword.GetHashCode();
                    if (ComAdobeGraniteJettySslCiphersuitesExcluded != null)
                    hashCode = hashCode * 59 + ComAdobeGraniteJettySslCiphersuitesExcluded.GetHashCode();
                    if (ComAdobeGraniteJettySslCiphersuitesIncluded != null)
                    hashCode = hashCode * 59 + ComAdobeGraniteJettySslCiphersuitesIncluded.GetHashCode();
                    if (ComAdobeGraniteJettySslClientCertificate != null)
                    hashCode = hashCode * 59 + ComAdobeGraniteJettySslClientCertificate.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryProperties left, ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryProperties left, ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
