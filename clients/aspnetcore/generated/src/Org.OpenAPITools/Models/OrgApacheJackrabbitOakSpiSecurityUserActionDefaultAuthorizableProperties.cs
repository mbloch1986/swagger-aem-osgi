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
    public partial class OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableProperties : IEquatable<OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableProperties>
    { 
        /// <summary>
        /// Gets or Sets EnabledActions
        /// </summary>
        [DataMember(Name="enabledActions")]
        public ConfigNodePropertyDropDown EnabledActions { get; set; }

        /// <summary>
        /// Gets or Sets UserPrivilegeNames
        /// </summary>
        [DataMember(Name="userPrivilegeNames")]
        public ConfigNodePropertyArray UserPrivilegeNames { get; set; }

        /// <summary>
        /// Gets or Sets GroupPrivilegeNames
        /// </summary>
        [DataMember(Name="groupPrivilegeNames")]
        public ConfigNodePropertyArray GroupPrivilegeNames { get; set; }

        /// <summary>
        /// Gets or Sets Constraint
        /// </summary>
        [DataMember(Name="constraint")]
        public ConfigNodePropertyString Constraint { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableProperties {\n");
            sb.Append("  EnabledActions: ").Append(EnabledActions).Append("\n");
            sb.Append("  UserPrivilegeNames: ").Append(UserPrivilegeNames).Append("\n");
            sb.Append("  GroupPrivilegeNames: ").Append(GroupPrivilegeNames).Append("\n");
            sb.Append("  Constraint: ").Append(Constraint).Append("\n");
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
            return obj.GetType() == GetType() && Equals((OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableProperties)obj);
        }

        /// <summary>
        /// Returns true if OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    EnabledActions == other.EnabledActions ||
                    EnabledActions != null &&
                    EnabledActions.Equals(other.EnabledActions)
                ) && 
                (
                    UserPrivilegeNames == other.UserPrivilegeNames ||
                    UserPrivilegeNames != null &&
                    UserPrivilegeNames.Equals(other.UserPrivilegeNames)
                ) && 
                (
                    GroupPrivilegeNames == other.GroupPrivilegeNames ||
                    GroupPrivilegeNames != null &&
                    GroupPrivilegeNames.Equals(other.GroupPrivilegeNames)
                ) && 
                (
                    Constraint == other.Constraint ||
                    Constraint != null &&
                    Constraint.Equals(other.Constraint)
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
                    if (EnabledActions != null)
                    hashCode = hashCode * 59 + EnabledActions.GetHashCode();
                    if (UserPrivilegeNames != null)
                    hashCode = hashCode * 59 + UserPrivilegeNames.GetHashCode();
                    if (GroupPrivilegeNames != null)
                    hashCode = hashCode * 59 + GroupPrivilegeNames.GetHashCode();
                    if (Constraint != null)
                    hashCode = hashCode * 59 + Constraint.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableProperties left, OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableProperties left, OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}