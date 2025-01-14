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
    public partial class OrgApacheSlingTenantInternalTenantProviderImplProperties : IEquatable<OrgApacheSlingTenantInternalTenantProviderImplProperties>
    { 
        /// <summary>
        /// Gets or Sets TenantRoot
        /// </summary>
        [DataMember(Name="tenant.root")]
        public ConfigNodePropertyString TenantRoot { get; set; }

        /// <summary>
        /// Gets or Sets TenantPathMatcher
        /// </summary>
        [DataMember(Name="tenant.path.matcher")]
        public ConfigNodePropertyArray TenantPathMatcher { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class OrgApacheSlingTenantInternalTenantProviderImplProperties {\n");
            sb.Append("  TenantRoot: ").Append(TenantRoot).Append("\n");
            sb.Append("  TenantPathMatcher: ").Append(TenantPathMatcher).Append("\n");
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
            return obj.GetType() == GetType() && Equals((OrgApacheSlingTenantInternalTenantProviderImplProperties)obj);
        }

        /// <summary>
        /// Returns true if OrgApacheSlingTenantInternalTenantProviderImplProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of OrgApacheSlingTenantInternalTenantProviderImplProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(OrgApacheSlingTenantInternalTenantProviderImplProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    TenantRoot == other.TenantRoot ||
                    TenantRoot != null &&
                    TenantRoot.Equals(other.TenantRoot)
                ) && 
                (
                    TenantPathMatcher == other.TenantPathMatcher ||
                    TenantPathMatcher != null &&
                    TenantPathMatcher.Equals(other.TenantPathMatcher)
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
                    if (TenantRoot != null)
                    hashCode = hashCode * 59 + TenantRoot.GetHashCode();
                    if (TenantPathMatcher != null)
                    hashCode = hashCode * 59 + TenantPathMatcher.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(OrgApacheSlingTenantInternalTenantProviderImplProperties left, OrgApacheSlingTenantInternalTenantProviderImplProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(OrgApacheSlingTenantInternalTenantProviderImplProperties left, OrgApacheSlingTenantInternalTenantProviderImplProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
