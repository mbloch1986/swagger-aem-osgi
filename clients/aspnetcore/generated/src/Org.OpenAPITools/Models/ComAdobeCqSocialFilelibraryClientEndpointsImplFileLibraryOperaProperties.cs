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
    public partial class ComAdobeCqSocialFilelibraryClientEndpointsImplFileLibraryOperaProperties : IEquatable<ComAdobeCqSocialFilelibraryClientEndpointsImplFileLibraryOperaProperties>
    { 
        /// <summary>
        /// Gets or Sets FieldWhitelist
        /// </summary>
        [DataMember(Name="fieldWhitelist")]
        public ConfigNodePropertyArray FieldWhitelist { get; set; }

        /// <summary>
        /// Gets or Sets AttachmentTypeBlacklist
        /// </summary>
        [DataMember(Name="attachmentTypeBlacklist")]
        public ConfigNodePropertyArray AttachmentTypeBlacklist { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComAdobeCqSocialFilelibraryClientEndpointsImplFileLibraryOperaProperties {\n");
            sb.Append("  FieldWhitelist: ").Append(FieldWhitelist).Append("\n");
            sb.Append("  AttachmentTypeBlacklist: ").Append(AttachmentTypeBlacklist).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ComAdobeCqSocialFilelibraryClientEndpointsImplFileLibraryOperaProperties)obj);
        }

        /// <summary>
        /// Returns true if ComAdobeCqSocialFilelibraryClientEndpointsImplFileLibraryOperaProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of ComAdobeCqSocialFilelibraryClientEndpointsImplFileLibraryOperaProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComAdobeCqSocialFilelibraryClientEndpointsImplFileLibraryOperaProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    FieldWhitelist == other.FieldWhitelist ||
                    FieldWhitelist != null &&
                    FieldWhitelist.Equals(other.FieldWhitelist)
                ) && 
                (
                    AttachmentTypeBlacklist == other.AttachmentTypeBlacklist ||
                    AttachmentTypeBlacklist != null &&
                    AttachmentTypeBlacklist.Equals(other.AttachmentTypeBlacklist)
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
                    if (FieldWhitelist != null)
                    hashCode = hashCode * 59 + FieldWhitelist.GetHashCode();
                    if (AttachmentTypeBlacklist != null)
                    hashCode = hashCode * 59 + AttachmentTypeBlacklist.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ComAdobeCqSocialFilelibraryClientEndpointsImplFileLibraryOperaProperties left, ComAdobeCqSocialFilelibraryClientEndpointsImplFileLibraryOperaProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ComAdobeCqSocialFilelibraryClientEndpointsImplFileLibraryOperaProperties left, ComAdobeCqSocialFilelibraryClientEndpointsImplFileLibraryOperaProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}