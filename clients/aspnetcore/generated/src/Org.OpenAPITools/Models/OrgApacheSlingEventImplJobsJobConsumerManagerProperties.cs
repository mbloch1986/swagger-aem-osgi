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
    public partial class OrgApacheSlingEventImplJobsJobConsumerManagerProperties : IEquatable<OrgApacheSlingEventImplJobsJobConsumerManagerProperties>
    { 
        /// <summary>
        /// Gets or Sets OrgApacheSlingInstallerConfigurationPersist
        /// </summary>
        [DataMember(Name="org.apache.sling.installer.configuration.persist")]
        public ConfigNodePropertyBoolean OrgApacheSlingInstallerConfigurationPersist { get; set; }

        /// <summary>
        /// Gets or Sets JobConsumermanagerWhitelist
        /// </summary>
        [DataMember(Name="job.consumermanager.whitelist")]
        public ConfigNodePropertyArray JobConsumermanagerWhitelist { get; set; }

        /// <summary>
        /// Gets or Sets JobConsumermanagerBlacklist
        /// </summary>
        [DataMember(Name="job.consumermanager.blacklist")]
        public ConfigNodePropertyArray JobConsumermanagerBlacklist { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class OrgApacheSlingEventImplJobsJobConsumerManagerProperties {\n");
            sb.Append("  OrgApacheSlingInstallerConfigurationPersist: ").Append(OrgApacheSlingInstallerConfigurationPersist).Append("\n");
            sb.Append("  JobConsumermanagerWhitelist: ").Append(JobConsumermanagerWhitelist).Append("\n");
            sb.Append("  JobConsumermanagerBlacklist: ").Append(JobConsumermanagerBlacklist).Append("\n");
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
            return obj.GetType() == GetType() && Equals((OrgApacheSlingEventImplJobsJobConsumerManagerProperties)obj);
        }

        /// <summary>
        /// Returns true if OrgApacheSlingEventImplJobsJobConsumerManagerProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of OrgApacheSlingEventImplJobsJobConsumerManagerProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(OrgApacheSlingEventImplJobsJobConsumerManagerProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    OrgApacheSlingInstallerConfigurationPersist == other.OrgApacheSlingInstallerConfigurationPersist ||
                    OrgApacheSlingInstallerConfigurationPersist != null &&
                    OrgApacheSlingInstallerConfigurationPersist.Equals(other.OrgApacheSlingInstallerConfigurationPersist)
                ) && 
                (
                    JobConsumermanagerWhitelist == other.JobConsumermanagerWhitelist ||
                    JobConsumermanagerWhitelist != null &&
                    JobConsumermanagerWhitelist.Equals(other.JobConsumermanagerWhitelist)
                ) && 
                (
                    JobConsumermanagerBlacklist == other.JobConsumermanagerBlacklist ||
                    JobConsumermanagerBlacklist != null &&
                    JobConsumermanagerBlacklist.Equals(other.JobConsumermanagerBlacklist)
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
                    if (OrgApacheSlingInstallerConfigurationPersist != null)
                    hashCode = hashCode * 59 + OrgApacheSlingInstallerConfigurationPersist.GetHashCode();
                    if (JobConsumermanagerWhitelist != null)
                    hashCode = hashCode * 59 + JobConsumermanagerWhitelist.GetHashCode();
                    if (JobConsumermanagerBlacklist != null)
                    hashCode = hashCode * 59 + JobConsumermanagerBlacklist.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(OrgApacheSlingEventImplJobsJobConsumerManagerProperties left, OrgApacheSlingEventImplJobsJobConsumerManagerProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(OrgApacheSlingEventImplJobsJobConsumerManagerProperties left, OrgApacheSlingEventImplJobsJobConsumerManagerProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
