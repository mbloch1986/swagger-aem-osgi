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
    public partial class OrgApacheSlingScriptingCoreImplScriptCacheImplProperties : IEquatable<OrgApacheSlingScriptingCoreImplScriptCacheImplProperties>
    { 
        /// <summary>
        /// Gets or Sets OrgApacheSlingScriptingCacheSize
        /// </summary>
        [DataMember(Name="org.apache.sling.scripting.cache.size")]
        public ConfigNodePropertyInteger OrgApacheSlingScriptingCacheSize { get; set; }

        /// <summary>
        /// Gets or Sets OrgApacheSlingScriptingCacheAdditionalExtensions
        /// </summary>
        [DataMember(Name="org.apache.sling.scripting.cache.additional_extensions")]
        public ConfigNodePropertyArray OrgApacheSlingScriptingCacheAdditionalExtensions { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class OrgApacheSlingScriptingCoreImplScriptCacheImplProperties {\n");
            sb.Append("  OrgApacheSlingScriptingCacheSize: ").Append(OrgApacheSlingScriptingCacheSize).Append("\n");
            sb.Append("  OrgApacheSlingScriptingCacheAdditionalExtensions: ").Append(OrgApacheSlingScriptingCacheAdditionalExtensions).Append("\n");
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
            return obj.GetType() == GetType() && Equals((OrgApacheSlingScriptingCoreImplScriptCacheImplProperties)obj);
        }

        /// <summary>
        /// Returns true if OrgApacheSlingScriptingCoreImplScriptCacheImplProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of OrgApacheSlingScriptingCoreImplScriptCacheImplProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(OrgApacheSlingScriptingCoreImplScriptCacheImplProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    OrgApacheSlingScriptingCacheSize == other.OrgApacheSlingScriptingCacheSize ||
                    OrgApacheSlingScriptingCacheSize != null &&
                    OrgApacheSlingScriptingCacheSize.Equals(other.OrgApacheSlingScriptingCacheSize)
                ) && 
                (
                    OrgApacheSlingScriptingCacheAdditionalExtensions == other.OrgApacheSlingScriptingCacheAdditionalExtensions ||
                    OrgApacheSlingScriptingCacheAdditionalExtensions != null &&
                    OrgApacheSlingScriptingCacheAdditionalExtensions.Equals(other.OrgApacheSlingScriptingCacheAdditionalExtensions)
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
                    if (OrgApacheSlingScriptingCacheSize != null)
                    hashCode = hashCode * 59 + OrgApacheSlingScriptingCacheSize.GetHashCode();
                    if (OrgApacheSlingScriptingCacheAdditionalExtensions != null)
                    hashCode = hashCode * 59 + OrgApacheSlingScriptingCacheAdditionalExtensions.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(OrgApacheSlingScriptingCoreImplScriptCacheImplProperties left, OrgApacheSlingScriptingCoreImplScriptCacheImplProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(OrgApacheSlingScriptingCoreImplScriptCacheImplProperties left, OrgApacheSlingScriptingCoreImplScriptCacheImplProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}