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
    public partial class ComDayCqWorkflowImplEmailEMailNotificationServiceProperties : IEquatable<ComDayCqWorkflowImplEmailEMailNotificationServiceProperties>
    { 
        /// <summary>
        /// Gets or Sets FromAddress
        /// </summary>
        [DataMember(Name="from.address")]
        public ConfigNodePropertyString FromAddress { get; set; }

        /// <summary>
        /// Gets or Sets HostPrefix
        /// </summary>
        [DataMember(Name="host.prefix")]
        public ConfigNodePropertyString HostPrefix { get; set; }

        /// <summary>
        /// Gets or Sets NotifyOnabort
        /// </summary>
        [DataMember(Name="notify.onabort")]
        public ConfigNodePropertyBoolean NotifyOnabort { get; set; }

        /// <summary>
        /// Gets or Sets NotifyOncomplete
        /// </summary>
        [DataMember(Name="notify.oncomplete")]
        public ConfigNodePropertyBoolean NotifyOncomplete { get; set; }

        /// <summary>
        /// Gets or Sets NotifyOncontainercomplete
        /// </summary>
        [DataMember(Name="notify.oncontainercomplete")]
        public ConfigNodePropertyBoolean NotifyOncontainercomplete { get; set; }

        /// <summary>
        /// Gets or Sets NotifyUseronly
        /// </summary>
        [DataMember(Name="notify.useronly")]
        public ConfigNodePropertyBoolean NotifyUseronly { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqWorkflowImplEmailEMailNotificationServiceProperties {\n");
            sb.Append("  FromAddress: ").Append(FromAddress).Append("\n");
            sb.Append("  HostPrefix: ").Append(HostPrefix).Append("\n");
            sb.Append("  NotifyOnabort: ").Append(NotifyOnabort).Append("\n");
            sb.Append("  NotifyOncomplete: ").Append(NotifyOncomplete).Append("\n");
            sb.Append("  NotifyOncontainercomplete: ").Append(NotifyOncontainercomplete).Append("\n");
            sb.Append("  NotifyUseronly: ").Append(NotifyUseronly).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ComDayCqWorkflowImplEmailEMailNotificationServiceProperties)obj);
        }

        /// <summary>
        /// Returns true if ComDayCqWorkflowImplEmailEMailNotificationServiceProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of ComDayCqWorkflowImplEmailEMailNotificationServiceProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqWorkflowImplEmailEMailNotificationServiceProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    FromAddress == other.FromAddress ||
                    FromAddress != null &&
                    FromAddress.Equals(other.FromAddress)
                ) && 
                (
                    HostPrefix == other.HostPrefix ||
                    HostPrefix != null &&
                    HostPrefix.Equals(other.HostPrefix)
                ) && 
                (
                    NotifyOnabort == other.NotifyOnabort ||
                    NotifyOnabort != null &&
                    NotifyOnabort.Equals(other.NotifyOnabort)
                ) && 
                (
                    NotifyOncomplete == other.NotifyOncomplete ||
                    NotifyOncomplete != null &&
                    NotifyOncomplete.Equals(other.NotifyOncomplete)
                ) && 
                (
                    NotifyOncontainercomplete == other.NotifyOncontainercomplete ||
                    NotifyOncontainercomplete != null &&
                    NotifyOncontainercomplete.Equals(other.NotifyOncontainercomplete)
                ) && 
                (
                    NotifyUseronly == other.NotifyUseronly ||
                    NotifyUseronly != null &&
                    NotifyUseronly.Equals(other.NotifyUseronly)
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
                    if (FromAddress != null)
                    hashCode = hashCode * 59 + FromAddress.GetHashCode();
                    if (HostPrefix != null)
                    hashCode = hashCode * 59 + HostPrefix.GetHashCode();
                    if (NotifyOnabort != null)
                    hashCode = hashCode * 59 + NotifyOnabort.GetHashCode();
                    if (NotifyOncomplete != null)
                    hashCode = hashCode * 59 + NotifyOncomplete.GetHashCode();
                    if (NotifyOncontainercomplete != null)
                    hashCode = hashCode * 59 + NotifyOncontainercomplete.GetHashCode();
                    if (NotifyUseronly != null)
                    hashCode = hashCode * 59 + NotifyUseronly.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ComDayCqWorkflowImplEmailEMailNotificationServiceProperties left, ComDayCqWorkflowImplEmailEMailNotificationServiceProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ComDayCqWorkflowImplEmailEMailNotificationServiceProperties left, ComDayCqWorkflowImplEmailEMailNotificationServiceProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}