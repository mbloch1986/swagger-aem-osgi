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
    public partial class ComDayCqWcmFoundationImplAdaptiveImageComponentServletProperties : IEquatable<ComDayCqWcmFoundationImplAdaptiveImageComponentServletProperties>
    { 
        /// <summary>
        /// Gets or Sets AdaptSupportedWidths
        /// </summary>
        [DataMember(Name="adapt.supported.widths")]
        public ConfigNodePropertyArray AdaptSupportedWidths { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqWcmFoundationImplAdaptiveImageComponentServletProperties {\n");
            sb.Append("  AdaptSupportedWidths: ").Append(AdaptSupportedWidths).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ComDayCqWcmFoundationImplAdaptiveImageComponentServletProperties)obj);
        }

        /// <summary>
        /// Returns true if ComDayCqWcmFoundationImplAdaptiveImageComponentServletProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of ComDayCqWcmFoundationImplAdaptiveImageComponentServletProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqWcmFoundationImplAdaptiveImageComponentServletProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    AdaptSupportedWidths == other.AdaptSupportedWidths ||
                    AdaptSupportedWidths != null &&
                    AdaptSupportedWidths.Equals(other.AdaptSupportedWidths)
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
                    if (AdaptSupportedWidths != null)
                    hashCode = hashCode * 59 + AdaptSupportedWidths.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ComDayCqWcmFoundationImplAdaptiveImageComponentServletProperties left, ComDayCqWcmFoundationImplAdaptiveImageComponentServletProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ComDayCqWcmFoundationImplAdaptiveImageComponentServletProperties left, ComDayCqWcmFoundationImplAdaptiveImageComponentServletProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
