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
    public partial class ComAdobeCqSocialCommonsEmailreplyImplMacmailEmailClientProviderProperties : IEquatable<ComAdobeCqSocialCommonsEmailreplyImplMacmailEmailClientProviderProperties>
    { 
        /// <summary>
        /// Gets or Sets PriorityOrder
        /// </summary>
        [DataMember(Name="priorityOrder")]
        public ConfigNodePropertyInteger PriorityOrder { get; set; }

        /// <summary>
        /// Gets or Sets ReplyEmailPatterns
        /// </summary>
        [DataMember(Name="replyEmailPatterns")]
        public ConfigNodePropertyArray ReplyEmailPatterns { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComAdobeCqSocialCommonsEmailreplyImplMacmailEmailClientProviderProperties {\n");
            sb.Append("  PriorityOrder: ").Append(PriorityOrder).Append("\n");
            sb.Append("  ReplyEmailPatterns: ").Append(ReplyEmailPatterns).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ComAdobeCqSocialCommonsEmailreplyImplMacmailEmailClientProviderProperties)obj);
        }

        /// <summary>
        /// Returns true if ComAdobeCqSocialCommonsEmailreplyImplMacmailEmailClientProviderProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of ComAdobeCqSocialCommonsEmailreplyImplMacmailEmailClientProviderProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComAdobeCqSocialCommonsEmailreplyImplMacmailEmailClientProviderProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    PriorityOrder == other.PriorityOrder ||
                    PriorityOrder != null &&
                    PriorityOrder.Equals(other.PriorityOrder)
                ) && 
                (
                    ReplyEmailPatterns == other.ReplyEmailPatterns ||
                    ReplyEmailPatterns != null &&
                    ReplyEmailPatterns.Equals(other.ReplyEmailPatterns)
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
                    if (PriorityOrder != null)
                    hashCode = hashCode * 59 + PriorityOrder.GetHashCode();
                    if (ReplyEmailPatterns != null)
                    hashCode = hashCode * 59 + ReplyEmailPatterns.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ComAdobeCqSocialCommonsEmailreplyImplMacmailEmailClientProviderProperties left, ComAdobeCqSocialCommonsEmailreplyImplMacmailEmailClientProviderProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ComAdobeCqSocialCommonsEmailreplyImplMacmailEmailClientProviderProperties left, ComAdobeCqSocialCommonsEmailreplyImplMacmailEmailClientProviderProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}