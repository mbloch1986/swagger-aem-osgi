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
    public partial class ComDayCqWcmCoreImplWCMDebugFilterProperties : IEquatable<ComDayCqWcmCoreImplWCMDebugFilterProperties>
    { 
        /// <summary>
        /// Gets or Sets WcmdbgfilterEnabled
        /// </summary>
        [DataMember(Name="wcmdbgfilter.enabled")]
        public ConfigNodePropertyBoolean WcmdbgfilterEnabled { get; set; }

        /// <summary>
        /// Gets or Sets WcmdbgfilterJspDebug
        /// </summary>
        [DataMember(Name="wcmdbgfilter.jspDebug")]
        public ConfigNodePropertyBoolean WcmdbgfilterJspDebug { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqWcmCoreImplWCMDebugFilterProperties {\n");
            sb.Append("  WcmdbgfilterEnabled: ").Append(WcmdbgfilterEnabled).Append("\n");
            sb.Append("  WcmdbgfilterJspDebug: ").Append(WcmdbgfilterJspDebug).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ComDayCqWcmCoreImplWCMDebugFilterProperties)obj);
        }

        /// <summary>
        /// Returns true if ComDayCqWcmCoreImplWCMDebugFilterProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of ComDayCqWcmCoreImplWCMDebugFilterProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqWcmCoreImplWCMDebugFilterProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    WcmdbgfilterEnabled == other.WcmdbgfilterEnabled ||
                    WcmdbgfilterEnabled != null &&
                    WcmdbgfilterEnabled.Equals(other.WcmdbgfilterEnabled)
                ) && 
                (
                    WcmdbgfilterJspDebug == other.WcmdbgfilterJspDebug ||
                    WcmdbgfilterJspDebug != null &&
                    WcmdbgfilterJspDebug.Equals(other.WcmdbgfilterJspDebug)
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
                    if (WcmdbgfilterEnabled != null)
                    hashCode = hashCode * 59 + WcmdbgfilterEnabled.GetHashCode();
                    if (WcmdbgfilterJspDebug != null)
                    hashCode = hashCode * 59 + WcmdbgfilterJspDebug.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ComDayCqWcmCoreImplWCMDebugFilterProperties left, ComDayCqWcmCoreImplWCMDebugFilterProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ComDayCqWcmCoreImplWCMDebugFilterProperties left, ComDayCqWcmCoreImplWCMDebugFilterProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
