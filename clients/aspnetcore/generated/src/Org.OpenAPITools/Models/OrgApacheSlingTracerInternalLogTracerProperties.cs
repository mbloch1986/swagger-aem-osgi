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
    public partial class OrgApacheSlingTracerInternalLogTracerProperties : IEquatable<OrgApacheSlingTracerInternalLogTracerProperties>
    { 
        /// <summary>
        /// Gets or Sets TracerSets
        /// </summary>
        [DataMember(Name="tracerSets")]
        public ConfigNodePropertyArray TracerSets { get; set; }

        /// <summary>
        /// Gets or Sets Enabled
        /// </summary>
        [DataMember(Name="enabled")]
        public ConfigNodePropertyBoolean Enabled { get; set; }

        /// <summary>
        /// Gets or Sets ServletEnabled
        /// </summary>
        [DataMember(Name="servletEnabled")]
        public ConfigNodePropertyBoolean ServletEnabled { get; set; }

        /// <summary>
        /// Gets or Sets RecordingCacheSizeInMB
        /// </summary>
        [DataMember(Name="recordingCacheSizeInMB")]
        public ConfigNodePropertyInteger RecordingCacheSizeInMB { get; set; }

        /// <summary>
        /// Gets or Sets RecordingCacheDurationInSecs
        /// </summary>
        [DataMember(Name="recordingCacheDurationInSecs")]
        public ConfigNodePropertyInteger RecordingCacheDurationInSecs { get; set; }

        /// <summary>
        /// Gets or Sets RecordingCompressionEnabled
        /// </summary>
        [DataMember(Name="recordingCompressionEnabled")]
        public ConfigNodePropertyBoolean RecordingCompressionEnabled { get; set; }

        /// <summary>
        /// Gets or Sets GzipResponse
        /// </summary>
        [DataMember(Name="gzipResponse")]
        public ConfigNodePropertyBoolean GzipResponse { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class OrgApacheSlingTracerInternalLogTracerProperties {\n");
            sb.Append("  TracerSets: ").Append(TracerSets).Append("\n");
            sb.Append("  Enabled: ").Append(Enabled).Append("\n");
            sb.Append("  ServletEnabled: ").Append(ServletEnabled).Append("\n");
            sb.Append("  RecordingCacheSizeInMB: ").Append(RecordingCacheSizeInMB).Append("\n");
            sb.Append("  RecordingCacheDurationInSecs: ").Append(RecordingCacheDurationInSecs).Append("\n");
            sb.Append("  RecordingCompressionEnabled: ").Append(RecordingCompressionEnabled).Append("\n");
            sb.Append("  GzipResponse: ").Append(GzipResponse).Append("\n");
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
            return obj.GetType() == GetType() && Equals((OrgApacheSlingTracerInternalLogTracerProperties)obj);
        }

        /// <summary>
        /// Returns true if OrgApacheSlingTracerInternalLogTracerProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of OrgApacheSlingTracerInternalLogTracerProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(OrgApacheSlingTracerInternalLogTracerProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    TracerSets == other.TracerSets ||
                    TracerSets != null &&
                    TracerSets.Equals(other.TracerSets)
                ) && 
                (
                    Enabled == other.Enabled ||
                    Enabled != null &&
                    Enabled.Equals(other.Enabled)
                ) && 
                (
                    ServletEnabled == other.ServletEnabled ||
                    ServletEnabled != null &&
                    ServletEnabled.Equals(other.ServletEnabled)
                ) && 
                (
                    RecordingCacheSizeInMB == other.RecordingCacheSizeInMB ||
                    RecordingCacheSizeInMB != null &&
                    RecordingCacheSizeInMB.Equals(other.RecordingCacheSizeInMB)
                ) && 
                (
                    RecordingCacheDurationInSecs == other.RecordingCacheDurationInSecs ||
                    RecordingCacheDurationInSecs != null &&
                    RecordingCacheDurationInSecs.Equals(other.RecordingCacheDurationInSecs)
                ) && 
                (
                    RecordingCompressionEnabled == other.RecordingCompressionEnabled ||
                    RecordingCompressionEnabled != null &&
                    RecordingCompressionEnabled.Equals(other.RecordingCompressionEnabled)
                ) && 
                (
                    GzipResponse == other.GzipResponse ||
                    GzipResponse != null &&
                    GzipResponse.Equals(other.GzipResponse)
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
                    if (TracerSets != null)
                    hashCode = hashCode * 59 + TracerSets.GetHashCode();
                    if (Enabled != null)
                    hashCode = hashCode * 59 + Enabled.GetHashCode();
                    if (ServletEnabled != null)
                    hashCode = hashCode * 59 + ServletEnabled.GetHashCode();
                    if (RecordingCacheSizeInMB != null)
                    hashCode = hashCode * 59 + RecordingCacheSizeInMB.GetHashCode();
                    if (RecordingCacheDurationInSecs != null)
                    hashCode = hashCode * 59 + RecordingCacheDurationInSecs.GetHashCode();
                    if (RecordingCompressionEnabled != null)
                    hashCode = hashCode * 59 + RecordingCompressionEnabled.GetHashCode();
                    if (GzipResponse != null)
                    hashCode = hashCode * 59 + GzipResponse.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(OrgApacheSlingTracerInternalLogTracerProperties left, OrgApacheSlingTracerInternalLogTracerProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(OrgApacheSlingTracerInternalLogTracerProperties left, OrgApacheSlingTracerInternalLogTracerProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}