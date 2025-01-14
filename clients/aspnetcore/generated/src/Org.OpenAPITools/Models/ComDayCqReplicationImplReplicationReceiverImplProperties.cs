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
    public partial class ComDayCqReplicationImplReplicationReceiverImplProperties : IEquatable<ComDayCqReplicationImplReplicationReceiverImplProperties>
    { 
        /// <summary>
        /// Gets or Sets ReceiverTmpfileThreshold
        /// </summary>
        [DataMember(Name="receiver.tmpfile.threshold")]
        public ConfigNodePropertyInteger ReceiverTmpfileThreshold { get; set; }

        /// <summary>
        /// Gets or Sets ReceiverPackagesUseInstall
        /// </summary>
        [DataMember(Name="receiver.packages.use.install")]
        public ConfigNodePropertyBoolean ReceiverPackagesUseInstall { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqReplicationImplReplicationReceiverImplProperties {\n");
            sb.Append("  ReceiverTmpfileThreshold: ").Append(ReceiverTmpfileThreshold).Append("\n");
            sb.Append("  ReceiverPackagesUseInstall: ").Append(ReceiverPackagesUseInstall).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ComDayCqReplicationImplReplicationReceiverImplProperties)obj);
        }

        /// <summary>
        /// Returns true if ComDayCqReplicationImplReplicationReceiverImplProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of ComDayCqReplicationImplReplicationReceiverImplProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqReplicationImplReplicationReceiverImplProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    ReceiverTmpfileThreshold == other.ReceiverTmpfileThreshold ||
                    ReceiverTmpfileThreshold != null &&
                    ReceiverTmpfileThreshold.Equals(other.ReceiverTmpfileThreshold)
                ) && 
                (
                    ReceiverPackagesUseInstall == other.ReceiverPackagesUseInstall ||
                    ReceiverPackagesUseInstall != null &&
                    ReceiverPackagesUseInstall.Equals(other.ReceiverPackagesUseInstall)
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
                    if (ReceiverTmpfileThreshold != null)
                    hashCode = hashCode * 59 + ReceiverTmpfileThreshold.GetHashCode();
                    if (ReceiverPackagesUseInstall != null)
                    hashCode = hashCode * 59 + ReceiverPackagesUseInstall.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ComDayCqReplicationImplReplicationReceiverImplProperties left, ComDayCqReplicationImplReplicationReceiverImplProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ComDayCqReplicationImplReplicationReceiverImplProperties left, ComDayCqReplicationImplReplicationReceiverImplProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
