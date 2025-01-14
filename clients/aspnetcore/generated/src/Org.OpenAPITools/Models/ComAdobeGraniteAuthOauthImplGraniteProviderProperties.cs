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
    public partial class ComAdobeGraniteAuthOauthImplGraniteProviderProperties : IEquatable<ComAdobeGraniteAuthOauthImplGraniteProviderProperties>
    { 
        /// <summary>
        /// Gets or Sets OauthProviderId
        /// </summary>
        [DataMember(Name="oauth.provider.id")]
        public ConfigNodePropertyString OauthProviderId { get; set; }

        /// <summary>
        /// Gets or Sets OauthProviderGraniteAuthorizationUrl
        /// </summary>
        [DataMember(Name="oauth.provider.granite.authorization.url")]
        public ConfigNodePropertyString OauthProviderGraniteAuthorizationUrl { get; set; }

        /// <summary>
        /// Gets or Sets OauthProviderGraniteTokenUrl
        /// </summary>
        [DataMember(Name="oauth.provider.granite.token.url")]
        public ConfigNodePropertyString OauthProviderGraniteTokenUrl { get; set; }

        /// <summary>
        /// Gets or Sets OauthProviderGraniteProfileUrl
        /// </summary>
        [DataMember(Name="oauth.provider.granite.profile.url")]
        public ConfigNodePropertyString OauthProviderGraniteProfileUrl { get; set; }

        /// <summary>
        /// Gets or Sets OauthProviderGraniteExtendedDetailsUrls
        /// </summary>
        [DataMember(Name="oauth.provider.granite.extended.details.urls")]
        public ConfigNodePropertyString OauthProviderGraniteExtendedDetailsUrls { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComAdobeGraniteAuthOauthImplGraniteProviderProperties {\n");
            sb.Append("  OauthProviderId: ").Append(OauthProviderId).Append("\n");
            sb.Append("  OauthProviderGraniteAuthorizationUrl: ").Append(OauthProviderGraniteAuthorizationUrl).Append("\n");
            sb.Append("  OauthProviderGraniteTokenUrl: ").Append(OauthProviderGraniteTokenUrl).Append("\n");
            sb.Append("  OauthProviderGraniteProfileUrl: ").Append(OauthProviderGraniteProfileUrl).Append("\n");
            sb.Append("  OauthProviderGraniteExtendedDetailsUrls: ").Append(OauthProviderGraniteExtendedDetailsUrls).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ComAdobeGraniteAuthOauthImplGraniteProviderProperties)obj);
        }

        /// <summary>
        /// Returns true if ComAdobeGraniteAuthOauthImplGraniteProviderProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of ComAdobeGraniteAuthOauthImplGraniteProviderProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComAdobeGraniteAuthOauthImplGraniteProviderProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    OauthProviderId == other.OauthProviderId ||
                    OauthProviderId != null &&
                    OauthProviderId.Equals(other.OauthProviderId)
                ) && 
                (
                    OauthProviderGraniteAuthorizationUrl == other.OauthProviderGraniteAuthorizationUrl ||
                    OauthProviderGraniteAuthorizationUrl != null &&
                    OauthProviderGraniteAuthorizationUrl.Equals(other.OauthProviderGraniteAuthorizationUrl)
                ) && 
                (
                    OauthProviderGraniteTokenUrl == other.OauthProviderGraniteTokenUrl ||
                    OauthProviderGraniteTokenUrl != null &&
                    OauthProviderGraniteTokenUrl.Equals(other.OauthProviderGraniteTokenUrl)
                ) && 
                (
                    OauthProviderGraniteProfileUrl == other.OauthProviderGraniteProfileUrl ||
                    OauthProviderGraniteProfileUrl != null &&
                    OauthProviderGraniteProfileUrl.Equals(other.OauthProviderGraniteProfileUrl)
                ) && 
                (
                    OauthProviderGraniteExtendedDetailsUrls == other.OauthProviderGraniteExtendedDetailsUrls ||
                    OauthProviderGraniteExtendedDetailsUrls != null &&
                    OauthProviderGraniteExtendedDetailsUrls.Equals(other.OauthProviderGraniteExtendedDetailsUrls)
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
                    if (OauthProviderId != null)
                    hashCode = hashCode * 59 + OauthProviderId.GetHashCode();
                    if (OauthProviderGraniteAuthorizationUrl != null)
                    hashCode = hashCode * 59 + OauthProviderGraniteAuthorizationUrl.GetHashCode();
                    if (OauthProviderGraniteTokenUrl != null)
                    hashCode = hashCode * 59 + OauthProviderGraniteTokenUrl.GetHashCode();
                    if (OauthProviderGraniteProfileUrl != null)
                    hashCode = hashCode * 59 + OauthProviderGraniteProfileUrl.GetHashCode();
                    if (OauthProviderGraniteExtendedDetailsUrls != null)
                    hashCode = hashCode * 59 + OauthProviderGraniteExtendedDetailsUrls.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ComAdobeGraniteAuthOauthImplGraniteProviderProperties left, ComAdobeGraniteAuthOauthImplGraniteProviderProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ComAdobeGraniteAuthOauthImplGraniteProviderProperties left, ComAdobeGraniteAuthOauthImplGraniteProviderProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
