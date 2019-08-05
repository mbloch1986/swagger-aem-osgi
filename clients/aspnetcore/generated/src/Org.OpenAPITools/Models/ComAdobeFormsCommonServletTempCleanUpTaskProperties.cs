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
    public partial class ComAdobeFormsCommonServletTempCleanUpTaskProperties : IEquatable<ComAdobeFormsCommonServletTempCleanUpTaskProperties>
    { 
        /// <summary>
        /// Gets or Sets SchedulerExpression
        /// </summary>
        [DataMember(Name="scheduler.expression")]
        public ConfigNodePropertyString SchedulerExpression { get; set; }

        /// <summary>
        /// Gets or Sets DurationForTemporaryStorage
        /// </summary>
        [DataMember(Name="Duration for Temporary Storage")]
        public ConfigNodePropertyString DurationForTemporaryStorage { get; set; }

        /// <summary>
        /// Gets or Sets DurationForAnonymousStorage
        /// </summary>
        [DataMember(Name="Duration for Anonymous Storage")]
        public ConfigNodePropertyString DurationForAnonymousStorage { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComAdobeFormsCommonServletTempCleanUpTaskProperties {\n");
            sb.Append("  SchedulerExpression: ").Append(SchedulerExpression).Append("\n");
            sb.Append("  DurationForTemporaryStorage: ").Append(DurationForTemporaryStorage).Append("\n");
            sb.Append("  DurationForAnonymousStorage: ").Append(DurationForAnonymousStorage).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ComAdobeFormsCommonServletTempCleanUpTaskProperties)obj);
        }

        /// <summary>
        /// Returns true if ComAdobeFormsCommonServletTempCleanUpTaskProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of ComAdobeFormsCommonServletTempCleanUpTaskProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComAdobeFormsCommonServletTempCleanUpTaskProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    SchedulerExpression == other.SchedulerExpression ||
                    SchedulerExpression != null &&
                    SchedulerExpression.Equals(other.SchedulerExpression)
                ) && 
                (
                    DurationForTemporaryStorage == other.DurationForTemporaryStorage ||
                    DurationForTemporaryStorage != null &&
                    DurationForTemporaryStorage.Equals(other.DurationForTemporaryStorage)
                ) && 
                (
                    DurationForAnonymousStorage == other.DurationForAnonymousStorage ||
                    DurationForAnonymousStorage != null &&
                    DurationForAnonymousStorage.Equals(other.DurationForAnonymousStorage)
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
                    if (SchedulerExpression != null)
                    hashCode = hashCode * 59 + SchedulerExpression.GetHashCode();
                    if (DurationForTemporaryStorage != null)
                    hashCode = hashCode * 59 + DurationForTemporaryStorage.GetHashCode();
                    if (DurationForAnonymousStorage != null)
                    hashCode = hashCode * 59 + DurationForAnonymousStorage.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ComAdobeFormsCommonServletTempCleanUpTaskProperties left, ComAdobeFormsCommonServletTempCleanUpTaskProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ComAdobeFormsCommonServletTempCleanUpTaskProperties left, ComAdobeFormsCommonServletTempCleanUpTaskProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}