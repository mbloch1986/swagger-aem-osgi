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
    public partial class ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenProperties : IEquatable<ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenProperties>
    { 
        /// <summary>
        /// Gets or Sets Accepted
        /// </summary>
        [DataMember(Name="accepted")]
        public ConfigNodePropertyBoolean Accepted { get; set; }

        /// <summary>
        /// Gets or Sets Ranked
        /// </summary>
        [DataMember(Name="ranked")]
        public ConfigNodePropertyInteger Ranked { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenProperties {\n");
            sb.Append("  Accepted: ").Append(Accepted).Append("\n");
            sb.Append("  Ranked: ").Append(Ranked).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenProperties)obj);
        }

        /// <summary>
        /// Returns true if ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    Accepted == other.Accepted ||
                    Accepted != null &&
                    Accepted.Equals(other.Accepted)
                ) && 
                (
                    Ranked == other.Ranked ||
                    Ranked != null &&
                    Ranked.Equals(other.Ranked)
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
                    if (Accepted != null)
                    hashCode = hashCode * 59 + Accepted.GetHashCode();
                    if (Ranked != null)
                    hashCode = hashCode * 59 + Ranked.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenProperties left, ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenProperties left, ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}