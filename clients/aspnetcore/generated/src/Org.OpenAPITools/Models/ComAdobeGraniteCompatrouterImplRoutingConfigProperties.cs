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
    public partial class ComAdobeGraniteCompatrouterImplRoutingConfigProperties : IEquatable<ComAdobeGraniteCompatrouterImplRoutingConfigProperties>
    { 
        /// <summary>
        /// Gets or Sets Id
        /// </summary>
        [DataMember(Name="id")]
        public ConfigNodePropertyString Id { get; set; }

        /// <summary>
        /// Gets or Sets CompatPath
        /// </summary>
        [DataMember(Name="compatPath")]
        public ConfigNodePropertyString CompatPath { get; set; }

        /// <summary>
        /// Gets or Sets NewPath
        /// </summary>
        [DataMember(Name="newPath")]
        public ConfigNodePropertyString NewPath { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComAdobeGraniteCompatrouterImplRoutingConfigProperties {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  CompatPath: ").Append(CompatPath).Append("\n");
            sb.Append("  NewPath: ").Append(NewPath).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ComAdobeGraniteCompatrouterImplRoutingConfigProperties)obj);
        }

        /// <summary>
        /// Returns true if ComAdobeGraniteCompatrouterImplRoutingConfigProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of ComAdobeGraniteCompatrouterImplRoutingConfigProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComAdobeGraniteCompatrouterImplRoutingConfigProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    Id == other.Id ||
                    Id != null &&
                    Id.Equals(other.Id)
                ) && 
                (
                    CompatPath == other.CompatPath ||
                    CompatPath != null &&
                    CompatPath.Equals(other.CompatPath)
                ) && 
                (
                    NewPath == other.NewPath ||
                    NewPath != null &&
                    NewPath.Equals(other.NewPath)
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
                    if (Id != null)
                    hashCode = hashCode * 59 + Id.GetHashCode();
                    if (CompatPath != null)
                    hashCode = hashCode * 59 + CompatPath.GetHashCode();
                    if (NewPath != null)
                    hashCode = hashCode * 59 + NewPath.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ComAdobeGraniteCompatrouterImplRoutingConfigProperties left, ComAdobeGraniteCompatrouterImplRoutingConfigProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ComAdobeGraniteCompatrouterImplRoutingConfigProperties left, ComAdobeGraniteCompatrouterImplRoutingConfigProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
