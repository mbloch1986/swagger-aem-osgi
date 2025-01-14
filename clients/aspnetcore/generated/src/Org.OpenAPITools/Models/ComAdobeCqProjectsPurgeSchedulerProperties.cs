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
    public partial class ComAdobeCqProjectsPurgeSchedulerProperties : IEquatable<ComAdobeCqProjectsPurgeSchedulerProperties>
    { 
        /// <summary>
        /// Gets or Sets ScheduledpurgeName
        /// </summary>
        [DataMember(Name="scheduledpurge.name")]
        public ConfigNodePropertyString ScheduledpurgeName { get; set; }

        /// <summary>
        /// Gets or Sets ScheduledpurgePurgeActive
        /// </summary>
        [DataMember(Name="scheduledpurge.purgeActive")]
        public ConfigNodePropertyBoolean ScheduledpurgePurgeActive { get; set; }

        /// <summary>
        /// Gets or Sets ScheduledpurgeTemplates
        /// </summary>
        [DataMember(Name="scheduledpurge.templates")]
        public ConfigNodePropertyArray ScheduledpurgeTemplates { get; set; }

        /// <summary>
        /// Gets or Sets ScheduledpurgePurgeGroups
        /// </summary>
        [DataMember(Name="scheduledpurge.purgeGroups")]
        public ConfigNodePropertyBoolean ScheduledpurgePurgeGroups { get; set; }

        /// <summary>
        /// Gets or Sets ScheduledpurgePurgeAssets
        /// </summary>
        [DataMember(Name="scheduledpurge.purgeAssets")]
        public ConfigNodePropertyBoolean ScheduledpurgePurgeAssets { get; set; }

        /// <summary>
        /// Gets or Sets ScheduledpurgeTerminateRunningWorkflows
        /// </summary>
        [DataMember(Name="scheduledpurge.terminateRunningWorkflows")]
        public ConfigNodePropertyBoolean ScheduledpurgeTerminateRunningWorkflows { get; set; }

        /// <summary>
        /// Gets or Sets ScheduledpurgeDaysold
        /// </summary>
        [DataMember(Name="scheduledpurge.daysold")]
        public ConfigNodePropertyInteger ScheduledpurgeDaysold { get; set; }

        /// <summary>
        /// Gets or Sets ScheduledpurgeSaveThreshold
        /// </summary>
        [DataMember(Name="scheduledpurge.saveThreshold")]
        public ConfigNodePropertyInteger ScheduledpurgeSaveThreshold { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComAdobeCqProjectsPurgeSchedulerProperties {\n");
            sb.Append("  ScheduledpurgeName: ").Append(ScheduledpurgeName).Append("\n");
            sb.Append("  ScheduledpurgePurgeActive: ").Append(ScheduledpurgePurgeActive).Append("\n");
            sb.Append("  ScheduledpurgeTemplates: ").Append(ScheduledpurgeTemplates).Append("\n");
            sb.Append("  ScheduledpurgePurgeGroups: ").Append(ScheduledpurgePurgeGroups).Append("\n");
            sb.Append("  ScheduledpurgePurgeAssets: ").Append(ScheduledpurgePurgeAssets).Append("\n");
            sb.Append("  ScheduledpurgeTerminateRunningWorkflows: ").Append(ScheduledpurgeTerminateRunningWorkflows).Append("\n");
            sb.Append("  ScheduledpurgeDaysold: ").Append(ScheduledpurgeDaysold).Append("\n");
            sb.Append("  ScheduledpurgeSaveThreshold: ").Append(ScheduledpurgeSaveThreshold).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ComAdobeCqProjectsPurgeSchedulerProperties)obj);
        }

        /// <summary>
        /// Returns true if ComAdobeCqProjectsPurgeSchedulerProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of ComAdobeCqProjectsPurgeSchedulerProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComAdobeCqProjectsPurgeSchedulerProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    ScheduledpurgeName == other.ScheduledpurgeName ||
                    ScheduledpurgeName != null &&
                    ScheduledpurgeName.Equals(other.ScheduledpurgeName)
                ) && 
                (
                    ScheduledpurgePurgeActive == other.ScheduledpurgePurgeActive ||
                    ScheduledpurgePurgeActive != null &&
                    ScheduledpurgePurgeActive.Equals(other.ScheduledpurgePurgeActive)
                ) && 
                (
                    ScheduledpurgeTemplates == other.ScheduledpurgeTemplates ||
                    ScheduledpurgeTemplates != null &&
                    ScheduledpurgeTemplates.Equals(other.ScheduledpurgeTemplates)
                ) && 
                (
                    ScheduledpurgePurgeGroups == other.ScheduledpurgePurgeGroups ||
                    ScheduledpurgePurgeGroups != null &&
                    ScheduledpurgePurgeGroups.Equals(other.ScheduledpurgePurgeGroups)
                ) && 
                (
                    ScheduledpurgePurgeAssets == other.ScheduledpurgePurgeAssets ||
                    ScheduledpurgePurgeAssets != null &&
                    ScheduledpurgePurgeAssets.Equals(other.ScheduledpurgePurgeAssets)
                ) && 
                (
                    ScheduledpurgeTerminateRunningWorkflows == other.ScheduledpurgeTerminateRunningWorkflows ||
                    ScheduledpurgeTerminateRunningWorkflows != null &&
                    ScheduledpurgeTerminateRunningWorkflows.Equals(other.ScheduledpurgeTerminateRunningWorkflows)
                ) && 
                (
                    ScheduledpurgeDaysold == other.ScheduledpurgeDaysold ||
                    ScheduledpurgeDaysold != null &&
                    ScheduledpurgeDaysold.Equals(other.ScheduledpurgeDaysold)
                ) && 
                (
                    ScheduledpurgeSaveThreshold == other.ScheduledpurgeSaveThreshold ||
                    ScheduledpurgeSaveThreshold != null &&
                    ScheduledpurgeSaveThreshold.Equals(other.ScheduledpurgeSaveThreshold)
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
                    if (ScheduledpurgeName != null)
                    hashCode = hashCode * 59 + ScheduledpurgeName.GetHashCode();
                    if (ScheduledpurgePurgeActive != null)
                    hashCode = hashCode * 59 + ScheduledpurgePurgeActive.GetHashCode();
                    if (ScheduledpurgeTemplates != null)
                    hashCode = hashCode * 59 + ScheduledpurgeTemplates.GetHashCode();
                    if (ScheduledpurgePurgeGroups != null)
                    hashCode = hashCode * 59 + ScheduledpurgePurgeGroups.GetHashCode();
                    if (ScheduledpurgePurgeAssets != null)
                    hashCode = hashCode * 59 + ScheduledpurgePurgeAssets.GetHashCode();
                    if (ScheduledpurgeTerminateRunningWorkflows != null)
                    hashCode = hashCode * 59 + ScheduledpurgeTerminateRunningWorkflows.GetHashCode();
                    if (ScheduledpurgeDaysold != null)
                    hashCode = hashCode * 59 + ScheduledpurgeDaysold.GetHashCode();
                    if (ScheduledpurgeSaveThreshold != null)
                    hashCode = hashCode * 59 + ScheduledpurgeSaveThreshold.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ComAdobeCqProjectsPurgeSchedulerProperties left, ComAdobeCqProjectsPurgeSchedulerProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ComAdobeCqProjectsPurgeSchedulerProperties left, ComAdobeCqProjectsPurgeSchedulerProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
