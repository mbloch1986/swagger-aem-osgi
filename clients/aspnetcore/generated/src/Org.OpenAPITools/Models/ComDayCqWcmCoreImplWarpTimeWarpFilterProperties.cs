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
    public partial class ComDayCqWcmCoreImplWarpTimeWarpFilterProperties : IEquatable<ComDayCqWcmCoreImplWarpTimeWarpFilterProperties>
    { 
        /// <summary>
        /// Gets or Sets FilterOrder
        /// </summary>
        [DataMember(Name="filter.order")]
        public ConfigNodePropertyString FilterOrder { get; set; }

        /// <summary>
        /// Gets or Sets FilterScope
        /// </summary>
        [DataMember(Name="filter.scope")]
        public ConfigNodePropertyString FilterScope { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqWcmCoreImplWarpTimeWarpFilterProperties {\n");
            sb.Append("  FilterOrder: ").Append(FilterOrder).Append("\n");
            sb.Append("  FilterScope: ").Append(FilterScope).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ComDayCqWcmCoreImplWarpTimeWarpFilterProperties)obj);
        }

        /// <summary>
        /// Returns true if ComDayCqWcmCoreImplWarpTimeWarpFilterProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of ComDayCqWcmCoreImplWarpTimeWarpFilterProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqWcmCoreImplWarpTimeWarpFilterProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    FilterOrder == other.FilterOrder ||
                    FilterOrder != null &&
                    FilterOrder.Equals(other.FilterOrder)
                ) && 
                (
                    FilterScope == other.FilterScope ||
                    FilterScope != null &&
                    FilterScope.Equals(other.FilterScope)
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
                    if (FilterOrder != null)
                    hashCode = hashCode * 59 + FilterOrder.GetHashCode();
                    if (FilterScope != null)
                    hashCode = hashCode * 59 + FilterScope.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ComDayCqWcmCoreImplWarpTimeWarpFilterProperties left, ComDayCqWcmCoreImplWarpTimeWarpFilterProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ComDayCqWcmCoreImplWarpTimeWarpFilterProperties left, ComDayCqWcmCoreImplWarpTimeWarpFilterProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}