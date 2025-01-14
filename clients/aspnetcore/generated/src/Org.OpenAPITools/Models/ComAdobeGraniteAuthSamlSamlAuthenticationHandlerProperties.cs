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
    public partial class ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties : IEquatable<ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties>
    { 
        /// <summary>
        /// Gets or Sets Path
        /// </summary>
        [DataMember(Name="path")]
        public ConfigNodePropertyArray Path { get; set; }

        /// <summary>
        /// Gets or Sets ServiceRanking
        /// </summary>
        [DataMember(Name="service.ranking")]
        public ConfigNodePropertyInteger ServiceRanking { get; set; }

        /// <summary>
        /// Gets or Sets IdpUrl
        /// </summary>
        [DataMember(Name="idpUrl")]
        public ConfigNodePropertyString IdpUrl { get; set; }

        /// <summary>
        /// Gets or Sets IdpCertAlias
        /// </summary>
        [DataMember(Name="idpCertAlias")]
        public ConfigNodePropertyString IdpCertAlias { get; set; }

        /// <summary>
        /// Gets or Sets IdpHttpRedirect
        /// </summary>
        [DataMember(Name="idpHttpRedirect")]
        public ConfigNodePropertyBoolean IdpHttpRedirect { get; set; }

        /// <summary>
        /// Gets or Sets ServiceProviderEntityId
        /// </summary>
        [DataMember(Name="serviceProviderEntityId")]
        public ConfigNodePropertyString ServiceProviderEntityId { get; set; }

        /// <summary>
        /// Gets or Sets AssertionConsumerServiceURL
        /// </summary>
        [DataMember(Name="assertionConsumerServiceURL")]
        public ConfigNodePropertyString AssertionConsumerServiceURL { get; set; }

        /// <summary>
        /// Gets or Sets SpPrivateKeyAlias
        /// </summary>
        [DataMember(Name="spPrivateKeyAlias")]
        public ConfigNodePropertyString SpPrivateKeyAlias { get; set; }

        /// <summary>
        /// Gets or Sets KeyStorePassword
        /// </summary>
        [DataMember(Name="keyStorePassword")]
        public ConfigNodePropertyString KeyStorePassword { get; set; }

        /// <summary>
        /// Gets or Sets DefaultRedirectUrl
        /// </summary>
        [DataMember(Name="defaultRedirectUrl")]
        public ConfigNodePropertyString DefaultRedirectUrl { get; set; }

        /// <summary>
        /// Gets or Sets UserIDAttribute
        /// </summary>
        [DataMember(Name="userIDAttribute")]
        public ConfigNodePropertyString UserIDAttribute { get; set; }

        /// <summary>
        /// Gets or Sets UseEncryption
        /// </summary>
        [DataMember(Name="useEncryption")]
        public ConfigNodePropertyBoolean UseEncryption { get; set; }

        /// <summary>
        /// Gets or Sets CreateUser
        /// </summary>
        [DataMember(Name="createUser")]
        public ConfigNodePropertyBoolean CreateUser { get; set; }

        /// <summary>
        /// Gets or Sets UserIntermediatePath
        /// </summary>
        [DataMember(Name="userIntermediatePath")]
        public ConfigNodePropertyString UserIntermediatePath { get; set; }

        /// <summary>
        /// Gets or Sets AddGroupMemberships
        /// </summary>
        [DataMember(Name="addGroupMemberships")]
        public ConfigNodePropertyBoolean AddGroupMemberships { get; set; }

        /// <summary>
        /// Gets or Sets GroupMembershipAttribute
        /// </summary>
        [DataMember(Name="groupMembershipAttribute")]
        public ConfigNodePropertyString GroupMembershipAttribute { get; set; }

        /// <summary>
        /// Gets or Sets DefaultGroups
        /// </summary>
        [DataMember(Name="defaultGroups")]
        public ConfigNodePropertyArray DefaultGroups { get; set; }

        /// <summary>
        /// Gets or Sets NameIdFormat
        /// </summary>
        [DataMember(Name="nameIdFormat")]
        public ConfigNodePropertyString NameIdFormat { get; set; }

        /// <summary>
        /// Gets or Sets SynchronizeAttributes
        /// </summary>
        [DataMember(Name="synchronizeAttributes")]
        public ConfigNodePropertyArray SynchronizeAttributes { get; set; }

        /// <summary>
        /// Gets or Sets HandleLogout
        /// </summary>
        [DataMember(Name="handleLogout")]
        public ConfigNodePropertyBoolean HandleLogout { get; set; }

        /// <summary>
        /// Gets or Sets LogoutUrl
        /// </summary>
        [DataMember(Name="logoutUrl")]
        public ConfigNodePropertyString LogoutUrl { get; set; }

        /// <summary>
        /// Gets or Sets ClockTolerance
        /// </summary>
        [DataMember(Name="clockTolerance")]
        public ConfigNodePropertyInteger ClockTolerance { get; set; }

        /// <summary>
        /// Gets or Sets DigestMethod
        /// </summary>
        [DataMember(Name="digestMethod")]
        public ConfigNodePropertyString DigestMethod { get; set; }

        /// <summary>
        /// Gets or Sets SignatureMethod
        /// </summary>
        [DataMember(Name="signatureMethod")]
        public ConfigNodePropertyString SignatureMethod { get; set; }

        /// <summary>
        /// Gets or Sets IdentitySyncType
        /// </summary>
        [DataMember(Name="identitySyncType")]
        public ConfigNodePropertyDropDown IdentitySyncType { get; set; }

        /// <summary>
        /// Gets or Sets IdpIdentifier
        /// </summary>
        [DataMember(Name="idpIdentifier")]
        public ConfigNodePropertyString IdpIdentifier { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties {\n");
            sb.Append("  Path: ").Append(Path).Append("\n");
            sb.Append("  ServiceRanking: ").Append(ServiceRanking).Append("\n");
            sb.Append("  IdpUrl: ").Append(IdpUrl).Append("\n");
            sb.Append("  IdpCertAlias: ").Append(IdpCertAlias).Append("\n");
            sb.Append("  IdpHttpRedirect: ").Append(IdpHttpRedirect).Append("\n");
            sb.Append("  ServiceProviderEntityId: ").Append(ServiceProviderEntityId).Append("\n");
            sb.Append("  AssertionConsumerServiceURL: ").Append(AssertionConsumerServiceURL).Append("\n");
            sb.Append("  SpPrivateKeyAlias: ").Append(SpPrivateKeyAlias).Append("\n");
            sb.Append("  KeyStorePassword: ").Append(KeyStorePassword).Append("\n");
            sb.Append("  DefaultRedirectUrl: ").Append(DefaultRedirectUrl).Append("\n");
            sb.Append("  UserIDAttribute: ").Append(UserIDAttribute).Append("\n");
            sb.Append("  UseEncryption: ").Append(UseEncryption).Append("\n");
            sb.Append("  CreateUser: ").Append(CreateUser).Append("\n");
            sb.Append("  UserIntermediatePath: ").Append(UserIntermediatePath).Append("\n");
            sb.Append("  AddGroupMemberships: ").Append(AddGroupMemberships).Append("\n");
            sb.Append("  GroupMembershipAttribute: ").Append(GroupMembershipAttribute).Append("\n");
            sb.Append("  DefaultGroups: ").Append(DefaultGroups).Append("\n");
            sb.Append("  NameIdFormat: ").Append(NameIdFormat).Append("\n");
            sb.Append("  SynchronizeAttributes: ").Append(SynchronizeAttributes).Append("\n");
            sb.Append("  HandleLogout: ").Append(HandleLogout).Append("\n");
            sb.Append("  LogoutUrl: ").Append(LogoutUrl).Append("\n");
            sb.Append("  ClockTolerance: ").Append(ClockTolerance).Append("\n");
            sb.Append("  DigestMethod: ").Append(DigestMethod).Append("\n");
            sb.Append("  SignatureMethod: ").Append(SignatureMethod).Append("\n");
            sb.Append("  IdentitySyncType: ").Append(IdentitySyncType).Append("\n");
            sb.Append("  IdpIdentifier: ").Append(IdpIdentifier).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties)obj);
        }

        /// <summary>
        /// Returns true if ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    Path == other.Path ||
                    Path != null &&
                    Path.Equals(other.Path)
                ) && 
                (
                    ServiceRanking == other.ServiceRanking ||
                    ServiceRanking != null &&
                    ServiceRanking.Equals(other.ServiceRanking)
                ) && 
                (
                    IdpUrl == other.IdpUrl ||
                    IdpUrl != null &&
                    IdpUrl.Equals(other.IdpUrl)
                ) && 
                (
                    IdpCertAlias == other.IdpCertAlias ||
                    IdpCertAlias != null &&
                    IdpCertAlias.Equals(other.IdpCertAlias)
                ) && 
                (
                    IdpHttpRedirect == other.IdpHttpRedirect ||
                    IdpHttpRedirect != null &&
                    IdpHttpRedirect.Equals(other.IdpHttpRedirect)
                ) && 
                (
                    ServiceProviderEntityId == other.ServiceProviderEntityId ||
                    ServiceProviderEntityId != null &&
                    ServiceProviderEntityId.Equals(other.ServiceProviderEntityId)
                ) && 
                (
                    AssertionConsumerServiceURL == other.AssertionConsumerServiceURL ||
                    AssertionConsumerServiceURL != null &&
                    AssertionConsumerServiceURL.Equals(other.AssertionConsumerServiceURL)
                ) && 
                (
                    SpPrivateKeyAlias == other.SpPrivateKeyAlias ||
                    SpPrivateKeyAlias != null &&
                    SpPrivateKeyAlias.Equals(other.SpPrivateKeyAlias)
                ) && 
                (
                    KeyStorePassword == other.KeyStorePassword ||
                    KeyStorePassword != null &&
                    KeyStorePassword.Equals(other.KeyStorePassword)
                ) && 
                (
                    DefaultRedirectUrl == other.DefaultRedirectUrl ||
                    DefaultRedirectUrl != null &&
                    DefaultRedirectUrl.Equals(other.DefaultRedirectUrl)
                ) && 
                (
                    UserIDAttribute == other.UserIDAttribute ||
                    UserIDAttribute != null &&
                    UserIDAttribute.Equals(other.UserIDAttribute)
                ) && 
                (
                    UseEncryption == other.UseEncryption ||
                    UseEncryption != null &&
                    UseEncryption.Equals(other.UseEncryption)
                ) && 
                (
                    CreateUser == other.CreateUser ||
                    CreateUser != null &&
                    CreateUser.Equals(other.CreateUser)
                ) && 
                (
                    UserIntermediatePath == other.UserIntermediatePath ||
                    UserIntermediatePath != null &&
                    UserIntermediatePath.Equals(other.UserIntermediatePath)
                ) && 
                (
                    AddGroupMemberships == other.AddGroupMemberships ||
                    AddGroupMemberships != null &&
                    AddGroupMemberships.Equals(other.AddGroupMemberships)
                ) && 
                (
                    GroupMembershipAttribute == other.GroupMembershipAttribute ||
                    GroupMembershipAttribute != null &&
                    GroupMembershipAttribute.Equals(other.GroupMembershipAttribute)
                ) && 
                (
                    DefaultGroups == other.DefaultGroups ||
                    DefaultGroups != null &&
                    DefaultGroups.Equals(other.DefaultGroups)
                ) && 
                (
                    NameIdFormat == other.NameIdFormat ||
                    NameIdFormat != null &&
                    NameIdFormat.Equals(other.NameIdFormat)
                ) && 
                (
                    SynchronizeAttributes == other.SynchronizeAttributes ||
                    SynchronizeAttributes != null &&
                    SynchronizeAttributes.Equals(other.SynchronizeAttributes)
                ) && 
                (
                    HandleLogout == other.HandleLogout ||
                    HandleLogout != null &&
                    HandleLogout.Equals(other.HandleLogout)
                ) && 
                (
                    LogoutUrl == other.LogoutUrl ||
                    LogoutUrl != null &&
                    LogoutUrl.Equals(other.LogoutUrl)
                ) && 
                (
                    ClockTolerance == other.ClockTolerance ||
                    ClockTolerance != null &&
                    ClockTolerance.Equals(other.ClockTolerance)
                ) && 
                (
                    DigestMethod == other.DigestMethod ||
                    DigestMethod != null &&
                    DigestMethod.Equals(other.DigestMethod)
                ) && 
                (
                    SignatureMethod == other.SignatureMethod ||
                    SignatureMethod != null &&
                    SignatureMethod.Equals(other.SignatureMethod)
                ) && 
                (
                    IdentitySyncType == other.IdentitySyncType ||
                    IdentitySyncType != null &&
                    IdentitySyncType.Equals(other.IdentitySyncType)
                ) && 
                (
                    IdpIdentifier == other.IdpIdentifier ||
                    IdpIdentifier != null &&
                    IdpIdentifier.Equals(other.IdpIdentifier)
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
                    if (Path != null)
                    hashCode = hashCode * 59 + Path.GetHashCode();
                    if (ServiceRanking != null)
                    hashCode = hashCode * 59 + ServiceRanking.GetHashCode();
                    if (IdpUrl != null)
                    hashCode = hashCode * 59 + IdpUrl.GetHashCode();
                    if (IdpCertAlias != null)
                    hashCode = hashCode * 59 + IdpCertAlias.GetHashCode();
                    if (IdpHttpRedirect != null)
                    hashCode = hashCode * 59 + IdpHttpRedirect.GetHashCode();
                    if (ServiceProviderEntityId != null)
                    hashCode = hashCode * 59 + ServiceProviderEntityId.GetHashCode();
                    if (AssertionConsumerServiceURL != null)
                    hashCode = hashCode * 59 + AssertionConsumerServiceURL.GetHashCode();
                    if (SpPrivateKeyAlias != null)
                    hashCode = hashCode * 59 + SpPrivateKeyAlias.GetHashCode();
                    if (KeyStorePassword != null)
                    hashCode = hashCode * 59 + KeyStorePassword.GetHashCode();
                    if (DefaultRedirectUrl != null)
                    hashCode = hashCode * 59 + DefaultRedirectUrl.GetHashCode();
                    if (UserIDAttribute != null)
                    hashCode = hashCode * 59 + UserIDAttribute.GetHashCode();
                    if (UseEncryption != null)
                    hashCode = hashCode * 59 + UseEncryption.GetHashCode();
                    if (CreateUser != null)
                    hashCode = hashCode * 59 + CreateUser.GetHashCode();
                    if (UserIntermediatePath != null)
                    hashCode = hashCode * 59 + UserIntermediatePath.GetHashCode();
                    if (AddGroupMemberships != null)
                    hashCode = hashCode * 59 + AddGroupMemberships.GetHashCode();
                    if (GroupMembershipAttribute != null)
                    hashCode = hashCode * 59 + GroupMembershipAttribute.GetHashCode();
                    if (DefaultGroups != null)
                    hashCode = hashCode * 59 + DefaultGroups.GetHashCode();
                    if (NameIdFormat != null)
                    hashCode = hashCode * 59 + NameIdFormat.GetHashCode();
                    if (SynchronizeAttributes != null)
                    hashCode = hashCode * 59 + SynchronizeAttributes.GetHashCode();
                    if (HandleLogout != null)
                    hashCode = hashCode * 59 + HandleLogout.GetHashCode();
                    if (LogoutUrl != null)
                    hashCode = hashCode * 59 + LogoutUrl.GetHashCode();
                    if (ClockTolerance != null)
                    hashCode = hashCode * 59 + ClockTolerance.GetHashCode();
                    if (DigestMethod != null)
                    hashCode = hashCode * 59 + DigestMethod.GetHashCode();
                    if (SignatureMethod != null)
                    hashCode = hashCode * 59 + SignatureMethod.GetHashCode();
                    if (IdentitySyncType != null)
                    hashCode = hashCode * 59 + IdentitySyncType.GetHashCode();
                    if (IdpIdentifier != null)
                    hashCode = hashCode * 59 + IdpIdentifier.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties left, ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties left, ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
