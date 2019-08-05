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
    public partial class ComDayCqWcmFoundationFormsImplMailServletProperties : IEquatable<ComDayCqWcmFoundationFormsImplMailServletProperties>
    { 
        /// <summary>
        /// Gets or Sets SlingServletResourceTypes
        /// </summary>
        [DataMember(Name="sling.servlet.resourceTypes")]
        public ConfigNodePropertyString SlingServletResourceTypes { get; set; }

        /// <summary>
        /// Gets or Sets SlingServletSelectors
        /// </summary>
        [DataMember(Name="sling.servlet.selectors")]
        public ConfigNodePropertyString SlingServletSelectors { get; set; }

        /// <summary>
        /// Gets or Sets ResourceWhitelist
        /// </summary>
        [DataMember(Name="resource.whitelist")]
        public ConfigNodePropertyArray ResourceWhitelist { get; set; }

        /// <summary>
        /// Gets or Sets ResourceBlacklist
        /// </summary>
        [DataMember(Name="resource.blacklist")]
        public ConfigNodePropertyString ResourceBlacklist { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqWcmFoundationFormsImplMailServletProperties {\n");
            sb.Append("  SlingServletResourceTypes: ").Append(SlingServletResourceTypes).Append("\n");
            sb.Append("  SlingServletSelectors: ").Append(SlingServletSelectors).Append("\n");
            sb.Append("  ResourceWhitelist: ").Append(ResourceWhitelist).Append("\n");
            sb.Append("  ResourceBlacklist: ").Append(ResourceBlacklist).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ComDayCqWcmFoundationFormsImplMailServletProperties)obj);
        }

        /// <summary>
        /// Returns true if ComDayCqWcmFoundationFormsImplMailServletProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of ComDayCqWcmFoundationFormsImplMailServletProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqWcmFoundationFormsImplMailServletProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    SlingServletResourceTypes == other.SlingServletResourceTypes ||
                    SlingServletResourceTypes != null &&
                    SlingServletResourceTypes.Equals(other.SlingServletResourceTypes)
                ) && 
                (
                    SlingServletSelectors == other.SlingServletSelectors ||
                    SlingServletSelectors != null &&
                    SlingServletSelectors.Equals(other.SlingServletSelectors)
                ) && 
                (
                    ResourceWhitelist == other.ResourceWhitelist ||
                    ResourceWhitelist != null &&
                    ResourceWhitelist.Equals(other.ResourceWhitelist)
                ) && 
                (
                    ResourceBlacklist == other.ResourceBlacklist ||
                    ResourceBlacklist != null &&
                    ResourceBlacklist.Equals(other.ResourceBlacklist)
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
                    if (SlingServletResourceTypes != null)
                    hashCode = hashCode * 59 + SlingServletResourceTypes.GetHashCode();
                    if (SlingServletSelectors != null)
                    hashCode = hashCode * 59 + SlingServletSelectors.GetHashCode();
                    if (ResourceWhitelist != null)
                    hashCode = hashCode * 59 + ResourceWhitelist.GetHashCode();
                    if (ResourceBlacklist != null)
                    hashCode = hashCode * 59 + ResourceBlacklist.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ComDayCqWcmFoundationFormsImplMailServletProperties left, ComDayCqWcmFoundationFormsImplMailServletProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ComDayCqWcmFoundationFormsImplMailServletProperties left, ComDayCqWcmFoundationFormsImplMailServletProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}