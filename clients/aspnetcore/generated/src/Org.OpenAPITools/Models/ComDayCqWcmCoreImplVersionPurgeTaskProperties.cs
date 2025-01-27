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
    public partial class ComDayCqWcmCoreImplVersionPurgeTaskProperties : IEquatable<ComDayCqWcmCoreImplVersionPurgeTaskProperties>
    { 
        /// <summary>
        /// Gets or Sets VersionpurgePaths
        /// </summary>
        [DataMember(Name="versionpurge.paths")]
        public ConfigNodePropertyArray VersionpurgePaths { get; set; }

        /// <summary>
        /// Gets or Sets VersionpurgeRecursive
        /// </summary>
        [DataMember(Name="versionpurge.recursive")]
        public ConfigNodePropertyBoolean VersionpurgeRecursive { get; set; }

        /// <summary>
        /// Gets or Sets VersionpurgeMaxVersions
        /// </summary>
        [DataMember(Name="versionpurge.maxVersions")]
        public ConfigNodePropertyInteger VersionpurgeMaxVersions { get; set; }

        /// <summary>
        /// Gets or Sets VersionpurgeMinVersions
        /// </summary>
        [DataMember(Name="versionpurge.minVersions")]
        public ConfigNodePropertyInteger VersionpurgeMinVersions { get; set; }

        /// <summary>
        /// Gets or Sets VersionpurgeMaxAgeDays
        /// </summary>
        [DataMember(Name="versionpurge.maxAgeDays")]
        public ConfigNodePropertyInteger VersionpurgeMaxAgeDays { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqWcmCoreImplVersionPurgeTaskProperties {\n");
            sb.Append("  VersionpurgePaths: ").Append(VersionpurgePaths).Append("\n");
            sb.Append("  VersionpurgeRecursive: ").Append(VersionpurgeRecursive).Append("\n");
            sb.Append("  VersionpurgeMaxVersions: ").Append(VersionpurgeMaxVersions).Append("\n");
            sb.Append("  VersionpurgeMinVersions: ").Append(VersionpurgeMinVersions).Append("\n");
            sb.Append("  VersionpurgeMaxAgeDays: ").Append(VersionpurgeMaxAgeDays).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ComDayCqWcmCoreImplVersionPurgeTaskProperties)obj);
        }

        /// <summary>
        /// Returns true if ComDayCqWcmCoreImplVersionPurgeTaskProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of ComDayCqWcmCoreImplVersionPurgeTaskProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqWcmCoreImplVersionPurgeTaskProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    VersionpurgePaths == other.VersionpurgePaths ||
                    VersionpurgePaths != null &&
                    VersionpurgePaths.Equals(other.VersionpurgePaths)
                ) && 
                (
                    VersionpurgeRecursive == other.VersionpurgeRecursive ||
                    VersionpurgeRecursive != null &&
                    VersionpurgeRecursive.Equals(other.VersionpurgeRecursive)
                ) && 
                (
                    VersionpurgeMaxVersions == other.VersionpurgeMaxVersions ||
                    VersionpurgeMaxVersions != null &&
                    VersionpurgeMaxVersions.Equals(other.VersionpurgeMaxVersions)
                ) && 
                (
                    VersionpurgeMinVersions == other.VersionpurgeMinVersions ||
                    VersionpurgeMinVersions != null &&
                    VersionpurgeMinVersions.Equals(other.VersionpurgeMinVersions)
                ) && 
                (
                    VersionpurgeMaxAgeDays == other.VersionpurgeMaxAgeDays ||
                    VersionpurgeMaxAgeDays != null &&
                    VersionpurgeMaxAgeDays.Equals(other.VersionpurgeMaxAgeDays)
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
                    if (VersionpurgePaths != null)
                    hashCode = hashCode * 59 + VersionpurgePaths.GetHashCode();
                    if (VersionpurgeRecursive != null)
                    hashCode = hashCode * 59 + VersionpurgeRecursive.GetHashCode();
                    if (VersionpurgeMaxVersions != null)
                    hashCode = hashCode * 59 + VersionpurgeMaxVersions.GetHashCode();
                    if (VersionpurgeMinVersions != null)
                    hashCode = hashCode * 59 + VersionpurgeMinVersions.GetHashCode();
                    if (VersionpurgeMaxAgeDays != null)
                    hashCode = hashCode * 59 + VersionpurgeMaxAgeDays.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ComDayCqWcmCoreImplVersionPurgeTaskProperties left, ComDayCqWcmCoreImplVersionPurgeTaskProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ComDayCqWcmCoreImplVersionPurgeTaskProperties left, ComDayCqWcmCoreImplVersionPurgeTaskProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
