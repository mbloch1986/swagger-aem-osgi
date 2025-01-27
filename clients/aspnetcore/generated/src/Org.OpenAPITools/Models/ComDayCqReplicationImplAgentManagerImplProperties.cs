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
    public partial class ComDayCqReplicationImplAgentManagerImplProperties : IEquatable<ComDayCqReplicationImplAgentManagerImplProperties>
    { 
        /// <summary>
        /// Gets or Sets JobTopics
        /// </summary>
        [DataMember(Name="job.topics")]
        public ConfigNodePropertyString JobTopics { get; set; }

        /// <summary>
        /// Gets or Sets ServiceUserTarget
        /// </summary>
        [DataMember(Name="serviceUser.target")]
        public ConfigNodePropertyString ServiceUserTarget { get; set; }

        /// <summary>
        /// Gets or Sets AgentProviderTarget
        /// </summary>
        [DataMember(Name="agentProvider.target")]
        public ConfigNodePropertyString AgentProviderTarget { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqReplicationImplAgentManagerImplProperties {\n");
            sb.Append("  JobTopics: ").Append(JobTopics).Append("\n");
            sb.Append("  ServiceUserTarget: ").Append(ServiceUserTarget).Append("\n");
            sb.Append("  AgentProviderTarget: ").Append(AgentProviderTarget).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ComDayCqReplicationImplAgentManagerImplProperties)obj);
        }

        /// <summary>
        /// Returns true if ComDayCqReplicationImplAgentManagerImplProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of ComDayCqReplicationImplAgentManagerImplProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqReplicationImplAgentManagerImplProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    JobTopics == other.JobTopics ||
                    JobTopics != null &&
                    JobTopics.Equals(other.JobTopics)
                ) && 
                (
                    ServiceUserTarget == other.ServiceUserTarget ||
                    ServiceUserTarget != null &&
                    ServiceUserTarget.Equals(other.ServiceUserTarget)
                ) && 
                (
                    AgentProviderTarget == other.AgentProviderTarget ||
                    AgentProviderTarget != null &&
                    AgentProviderTarget.Equals(other.AgentProviderTarget)
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
                    if (JobTopics != null)
                    hashCode = hashCode * 59 + JobTopics.GetHashCode();
                    if (ServiceUserTarget != null)
                    hashCode = hashCode * 59 + ServiceUserTarget.GetHashCode();
                    if (AgentProviderTarget != null)
                    hashCode = hashCode * 59 + AgentProviderTarget.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ComDayCqReplicationImplAgentManagerImplProperties left, ComDayCqReplicationImplAgentManagerImplProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ComDayCqReplicationImplAgentManagerImplProperties left, ComDayCqReplicationImplAgentManagerImplProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
