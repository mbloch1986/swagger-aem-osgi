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
    public partial class ComDayCqDamIdsImplIDSJobProcessorProperties : IEquatable<ComDayCqDamIdsImplIDSJobProcessorProperties>
    { 
        /// <summary>
        /// Gets or Sets EnableMultisession
        /// </summary>
        [DataMember(Name="enable.multisession")]
        public ConfigNodePropertyBoolean EnableMultisession { get; set; }

        /// <summary>
        /// Gets or Sets IdsCcEnable
        /// </summary>
        [DataMember(Name="ids.cc.enable")]
        public ConfigNodePropertyBoolean IdsCcEnable { get; set; }

        /// <summary>
        /// Gets or Sets EnableRetry
        /// </summary>
        [DataMember(Name="enable.retry")]
        public ConfigNodePropertyBoolean EnableRetry { get; set; }

        /// <summary>
        /// Gets or Sets EnableRetryScripterror
        /// </summary>
        [DataMember(Name="enable.retry.scripterror")]
        public ConfigNodePropertyBoolean EnableRetryScripterror { get; set; }

        /// <summary>
        /// Gets or Sets ExternalizerDomainCqhost
        /// </summary>
        [DataMember(Name="externalizer.domain.cqhost")]
        public ConfigNodePropertyString ExternalizerDomainCqhost { get; set; }

        /// <summary>
        /// Gets or Sets ExternalizerDomainHttp
        /// </summary>
        [DataMember(Name="externalizer.domain.http")]
        public ConfigNodePropertyString ExternalizerDomainHttp { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqDamIdsImplIDSJobProcessorProperties {\n");
            sb.Append("  EnableMultisession: ").Append(EnableMultisession).Append("\n");
            sb.Append("  IdsCcEnable: ").Append(IdsCcEnable).Append("\n");
            sb.Append("  EnableRetry: ").Append(EnableRetry).Append("\n");
            sb.Append("  EnableRetryScripterror: ").Append(EnableRetryScripterror).Append("\n");
            sb.Append("  ExternalizerDomainCqhost: ").Append(ExternalizerDomainCqhost).Append("\n");
            sb.Append("  ExternalizerDomainHttp: ").Append(ExternalizerDomainHttp).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ComDayCqDamIdsImplIDSJobProcessorProperties)obj);
        }

        /// <summary>
        /// Returns true if ComDayCqDamIdsImplIDSJobProcessorProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of ComDayCqDamIdsImplIDSJobProcessorProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqDamIdsImplIDSJobProcessorProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    EnableMultisession == other.EnableMultisession ||
                    EnableMultisession != null &&
                    EnableMultisession.Equals(other.EnableMultisession)
                ) && 
                (
                    IdsCcEnable == other.IdsCcEnable ||
                    IdsCcEnable != null &&
                    IdsCcEnable.Equals(other.IdsCcEnable)
                ) && 
                (
                    EnableRetry == other.EnableRetry ||
                    EnableRetry != null &&
                    EnableRetry.Equals(other.EnableRetry)
                ) && 
                (
                    EnableRetryScripterror == other.EnableRetryScripterror ||
                    EnableRetryScripterror != null &&
                    EnableRetryScripterror.Equals(other.EnableRetryScripterror)
                ) && 
                (
                    ExternalizerDomainCqhost == other.ExternalizerDomainCqhost ||
                    ExternalizerDomainCqhost != null &&
                    ExternalizerDomainCqhost.Equals(other.ExternalizerDomainCqhost)
                ) && 
                (
                    ExternalizerDomainHttp == other.ExternalizerDomainHttp ||
                    ExternalizerDomainHttp != null &&
                    ExternalizerDomainHttp.Equals(other.ExternalizerDomainHttp)
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
                    if (EnableMultisession != null)
                    hashCode = hashCode * 59 + EnableMultisession.GetHashCode();
                    if (IdsCcEnable != null)
                    hashCode = hashCode * 59 + IdsCcEnable.GetHashCode();
                    if (EnableRetry != null)
                    hashCode = hashCode * 59 + EnableRetry.GetHashCode();
                    if (EnableRetryScripterror != null)
                    hashCode = hashCode * 59 + EnableRetryScripterror.GetHashCode();
                    if (ExternalizerDomainCqhost != null)
                    hashCode = hashCode * 59 + ExternalizerDomainCqhost.GetHashCode();
                    if (ExternalizerDomainHttp != null)
                    hashCode = hashCode * 59 + ExternalizerDomainHttp.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ComDayCqDamIdsImplIDSJobProcessorProperties left, ComDayCqDamIdsImplIDSJobProcessorProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ComDayCqDamIdsImplIDSJobProcessorProperties left, ComDayCqDamIdsImplIDSJobProcessorProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}