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
    public partial class ComDayCqMcmImplMCMConfigurationProperties : IEquatable<ComDayCqMcmImplMCMConfigurationProperties>
    { 
        /// <summary>
        /// Gets or Sets ExperienceIndirection
        /// </summary>
        [DataMember(Name="experience.indirection")]
        public ConfigNodePropertyArray ExperienceIndirection { get; set; }

        /// <summary>
        /// Gets or Sets TouchpointIndirection
        /// </summary>
        [DataMember(Name="touchpoint.indirection")]
        public ConfigNodePropertyArray TouchpointIndirection { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqMcmImplMCMConfigurationProperties {\n");
            sb.Append("  ExperienceIndirection: ").Append(ExperienceIndirection).Append("\n");
            sb.Append("  TouchpointIndirection: ").Append(TouchpointIndirection).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ComDayCqMcmImplMCMConfigurationProperties)obj);
        }

        /// <summary>
        /// Returns true if ComDayCqMcmImplMCMConfigurationProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of ComDayCqMcmImplMCMConfigurationProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqMcmImplMCMConfigurationProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    ExperienceIndirection == other.ExperienceIndirection ||
                    ExperienceIndirection != null &&
                    ExperienceIndirection.Equals(other.ExperienceIndirection)
                ) && 
                (
                    TouchpointIndirection == other.TouchpointIndirection ||
                    TouchpointIndirection != null &&
                    TouchpointIndirection.Equals(other.TouchpointIndirection)
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
                    if (ExperienceIndirection != null)
                    hashCode = hashCode * 59 + ExperienceIndirection.GetHashCode();
                    if (TouchpointIndirection != null)
                    hashCode = hashCode * 59 + TouchpointIndirection.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ComDayCqMcmImplMCMConfigurationProperties left, ComDayCqMcmImplMCMConfigurationProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ComDayCqMcmImplMCMConfigurationProperties left, ComDayCqMcmImplMCMConfigurationProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
