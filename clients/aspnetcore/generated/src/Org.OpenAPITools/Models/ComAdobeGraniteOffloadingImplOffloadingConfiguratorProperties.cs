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
    public partial class ComAdobeGraniteOffloadingImplOffloadingConfiguratorProperties : IEquatable<ComAdobeGraniteOffloadingImplOffloadingConfiguratorProperties>
    { 
        /// <summary>
        /// Gets or Sets OffloadingTransporter
        /// </summary>
        [DataMember(Name="offloading.transporter")]
        public ConfigNodePropertyString OffloadingTransporter { get; set; }

        /// <summary>
        /// Gets or Sets OffloadingCleanupPayload
        /// </summary>
        [DataMember(Name="offloading.cleanup.payload")]
        public ConfigNodePropertyBoolean OffloadingCleanupPayload { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComAdobeGraniteOffloadingImplOffloadingConfiguratorProperties {\n");
            sb.Append("  OffloadingTransporter: ").Append(OffloadingTransporter).Append("\n");
            sb.Append("  OffloadingCleanupPayload: ").Append(OffloadingCleanupPayload).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ComAdobeGraniteOffloadingImplOffloadingConfiguratorProperties)obj);
        }

        /// <summary>
        /// Returns true if ComAdobeGraniteOffloadingImplOffloadingConfiguratorProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of ComAdobeGraniteOffloadingImplOffloadingConfiguratorProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComAdobeGraniteOffloadingImplOffloadingConfiguratorProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    OffloadingTransporter == other.OffloadingTransporter ||
                    OffloadingTransporter != null &&
                    OffloadingTransporter.Equals(other.OffloadingTransporter)
                ) && 
                (
                    OffloadingCleanupPayload == other.OffloadingCleanupPayload ||
                    OffloadingCleanupPayload != null &&
                    OffloadingCleanupPayload.Equals(other.OffloadingCleanupPayload)
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
                    if (OffloadingTransporter != null)
                    hashCode = hashCode * 59 + OffloadingTransporter.GetHashCode();
                    if (OffloadingCleanupPayload != null)
                    hashCode = hashCode * 59 + OffloadingCleanupPayload.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ComAdobeGraniteOffloadingImplOffloadingConfiguratorProperties left, ComAdobeGraniteOffloadingImplOffloadingConfiguratorProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ComAdobeGraniteOffloadingImplOffloadingConfiguratorProperties left, ComAdobeGraniteOffloadingImplOffloadingConfiguratorProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
