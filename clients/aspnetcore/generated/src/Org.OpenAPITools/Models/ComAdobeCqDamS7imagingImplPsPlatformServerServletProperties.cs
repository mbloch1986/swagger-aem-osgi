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
    public partial class ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties : IEquatable<ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties>
    { 
        /// <summary>
        /// Gets or Sets CacheEnable
        /// </summary>
        [DataMember(Name="cache.enable")]
        public ConfigNodePropertyBoolean CacheEnable { get; set; }

        /// <summary>
        /// Gets or Sets CacheRootPaths
        /// </summary>
        [DataMember(Name="cache.rootPaths")]
        public ConfigNodePropertyArray CacheRootPaths { get; set; }

        /// <summary>
        /// Gets or Sets CacheMaxSize
        /// </summary>
        [DataMember(Name="cache.maxSize")]
        public ConfigNodePropertyInteger CacheMaxSize { get; set; }

        /// <summary>
        /// Gets or Sets CacheMaxEntries
        /// </summary>
        [DataMember(Name="cache.maxEntries")]
        public ConfigNodePropertyInteger CacheMaxEntries { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties {\n");
            sb.Append("  CacheEnable: ").Append(CacheEnable).Append("\n");
            sb.Append("  CacheRootPaths: ").Append(CacheRootPaths).Append("\n");
            sb.Append("  CacheMaxSize: ").Append(CacheMaxSize).Append("\n");
            sb.Append("  CacheMaxEntries: ").Append(CacheMaxEntries).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties)obj);
        }

        /// <summary>
        /// Returns true if ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    CacheEnable == other.CacheEnable ||
                    CacheEnable != null &&
                    CacheEnable.Equals(other.CacheEnable)
                ) && 
                (
                    CacheRootPaths == other.CacheRootPaths ||
                    CacheRootPaths != null &&
                    CacheRootPaths.Equals(other.CacheRootPaths)
                ) && 
                (
                    CacheMaxSize == other.CacheMaxSize ||
                    CacheMaxSize != null &&
                    CacheMaxSize.Equals(other.CacheMaxSize)
                ) && 
                (
                    CacheMaxEntries == other.CacheMaxEntries ||
                    CacheMaxEntries != null &&
                    CacheMaxEntries.Equals(other.CacheMaxEntries)
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
                    if (CacheEnable != null)
                    hashCode = hashCode * 59 + CacheEnable.GetHashCode();
                    if (CacheRootPaths != null)
                    hashCode = hashCode * 59 + CacheRootPaths.GetHashCode();
                    if (CacheMaxSize != null)
                    hashCode = hashCode * 59 + CacheMaxSize.GetHashCode();
                    if (CacheMaxEntries != null)
                    hashCode = hashCode * 59 + CacheMaxEntries.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties left, ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties left, ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
