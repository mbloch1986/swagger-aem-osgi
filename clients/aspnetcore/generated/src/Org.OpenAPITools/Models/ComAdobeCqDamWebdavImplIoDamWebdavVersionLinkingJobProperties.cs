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
    public partial class ComAdobeCqDamWebdavImplIoDamWebdavVersionLinkingJobProperties : IEquatable<ComAdobeCqDamWebdavImplIoDamWebdavVersionLinkingJobProperties>
    { 
        /// <summary>
        /// Gets or Sets CqDamWebdavVersionLinkingEnable
        /// </summary>
        [DataMember(Name="cq.dam.webdav.version.linking.enable")]
        public ConfigNodePropertyBoolean CqDamWebdavVersionLinkingEnable { get; set; }

        /// <summary>
        /// Gets or Sets CqDamWebdavVersionLinkingSchedulerPeriod
        /// </summary>
        [DataMember(Name="cq.dam.webdav.version.linking.scheduler.period")]
        public ConfigNodePropertyInteger CqDamWebdavVersionLinkingSchedulerPeriod { get; set; }

        /// <summary>
        /// Gets or Sets CqDamWebdavVersionLinkingStagingTimeout
        /// </summary>
        [DataMember(Name="cq.dam.webdav.version.linking.staging.timeout")]
        public ConfigNodePropertyInteger CqDamWebdavVersionLinkingStagingTimeout { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComAdobeCqDamWebdavImplIoDamWebdavVersionLinkingJobProperties {\n");
            sb.Append("  CqDamWebdavVersionLinkingEnable: ").Append(CqDamWebdavVersionLinkingEnable).Append("\n");
            sb.Append("  CqDamWebdavVersionLinkingSchedulerPeriod: ").Append(CqDamWebdavVersionLinkingSchedulerPeriod).Append("\n");
            sb.Append("  CqDamWebdavVersionLinkingStagingTimeout: ").Append(CqDamWebdavVersionLinkingStagingTimeout).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ComAdobeCqDamWebdavImplIoDamWebdavVersionLinkingJobProperties)obj);
        }

        /// <summary>
        /// Returns true if ComAdobeCqDamWebdavImplIoDamWebdavVersionLinkingJobProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of ComAdobeCqDamWebdavImplIoDamWebdavVersionLinkingJobProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComAdobeCqDamWebdavImplIoDamWebdavVersionLinkingJobProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    CqDamWebdavVersionLinkingEnable == other.CqDamWebdavVersionLinkingEnable ||
                    CqDamWebdavVersionLinkingEnable != null &&
                    CqDamWebdavVersionLinkingEnable.Equals(other.CqDamWebdavVersionLinkingEnable)
                ) && 
                (
                    CqDamWebdavVersionLinkingSchedulerPeriod == other.CqDamWebdavVersionLinkingSchedulerPeriod ||
                    CqDamWebdavVersionLinkingSchedulerPeriod != null &&
                    CqDamWebdavVersionLinkingSchedulerPeriod.Equals(other.CqDamWebdavVersionLinkingSchedulerPeriod)
                ) && 
                (
                    CqDamWebdavVersionLinkingStagingTimeout == other.CqDamWebdavVersionLinkingStagingTimeout ||
                    CqDamWebdavVersionLinkingStagingTimeout != null &&
                    CqDamWebdavVersionLinkingStagingTimeout.Equals(other.CqDamWebdavVersionLinkingStagingTimeout)
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
                    if (CqDamWebdavVersionLinkingEnable != null)
                    hashCode = hashCode * 59 + CqDamWebdavVersionLinkingEnable.GetHashCode();
                    if (CqDamWebdavVersionLinkingSchedulerPeriod != null)
                    hashCode = hashCode * 59 + CqDamWebdavVersionLinkingSchedulerPeriod.GetHashCode();
                    if (CqDamWebdavVersionLinkingStagingTimeout != null)
                    hashCode = hashCode * 59 + CqDamWebdavVersionLinkingStagingTimeout.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ComAdobeCqDamWebdavImplIoDamWebdavVersionLinkingJobProperties left, ComAdobeCqDamWebdavImplIoDamWebdavVersionLinkingJobProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ComAdobeCqDamWebdavImplIoDamWebdavVersionLinkingJobProperties left, ComAdobeCqDamWebdavImplIoDamWebdavVersionLinkingJobProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
