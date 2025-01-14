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
    public partial class ComAdobeGraniteInfocollectorInfoCollectorProperties : IEquatable<ComAdobeGraniteInfocollectorInfoCollectorProperties>
    { 
        /// <summary>
        /// Gets or Sets GraniteInfocollectorIncludeThreadDumps
        /// </summary>
        [DataMember(Name="granite.infocollector.includeThreadDumps")]
        public ConfigNodePropertyBoolean GraniteInfocollectorIncludeThreadDumps { get; set; }

        /// <summary>
        /// Gets or Sets GraniteInfocollectorIncludeHeapDump
        /// </summary>
        [DataMember(Name="granite.infocollector.includeHeapDump")]
        public ConfigNodePropertyBoolean GraniteInfocollectorIncludeHeapDump { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComAdobeGraniteInfocollectorInfoCollectorProperties {\n");
            sb.Append("  GraniteInfocollectorIncludeThreadDumps: ").Append(GraniteInfocollectorIncludeThreadDumps).Append("\n");
            sb.Append("  GraniteInfocollectorIncludeHeapDump: ").Append(GraniteInfocollectorIncludeHeapDump).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ComAdobeGraniteInfocollectorInfoCollectorProperties)obj);
        }

        /// <summary>
        /// Returns true if ComAdobeGraniteInfocollectorInfoCollectorProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of ComAdobeGraniteInfocollectorInfoCollectorProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComAdobeGraniteInfocollectorInfoCollectorProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    GraniteInfocollectorIncludeThreadDumps == other.GraniteInfocollectorIncludeThreadDumps ||
                    GraniteInfocollectorIncludeThreadDumps != null &&
                    GraniteInfocollectorIncludeThreadDumps.Equals(other.GraniteInfocollectorIncludeThreadDumps)
                ) && 
                (
                    GraniteInfocollectorIncludeHeapDump == other.GraniteInfocollectorIncludeHeapDump ||
                    GraniteInfocollectorIncludeHeapDump != null &&
                    GraniteInfocollectorIncludeHeapDump.Equals(other.GraniteInfocollectorIncludeHeapDump)
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
                    if (GraniteInfocollectorIncludeThreadDumps != null)
                    hashCode = hashCode * 59 + GraniteInfocollectorIncludeThreadDumps.GetHashCode();
                    if (GraniteInfocollectorIncludeHeapDump != null)
                    hashCode = hashCode * 59 + GraniteInfocollectorIncludeHeapDump.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ComAdobeGraniteInfocollectorInfoCollectorProperties left, ComAdobeGraniteInfocollectorInfoCollectorProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ComAdobeGraniteInfocollectorInfoCollectorProperties left, ComAdobeGraniteInfocollectorInfoCollectorProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
