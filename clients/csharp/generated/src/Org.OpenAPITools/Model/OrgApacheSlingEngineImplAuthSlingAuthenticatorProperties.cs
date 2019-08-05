/* 
 * Adobe Experience Manager OSGI config (AEM) API
 *
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System.ComponentModel.DataAnnotations;
using OpenAPIDateConverter = Org.OpenAPITools.Client.OpenAPIDateConverter;

namespace Org.OpenAPITools.Model
{
    /// <summary>
    /// OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties
    /// </summary>
    [DataContract]
    public partial class OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties :  IEquatable<OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties" /> class.
        /// </summary>
        /// <param name="osgiHttpWhiteboardContextSelect">osgiHttpWhiteboardContextSelect.</param>
        /// <param name="osgiHttpWhiteboardListener">osgiHttpWhiteboardListener.</param>
        /// <param name="authSudoCookie">authSudoCookie.</param>
        /// <param name="authSudoParameter">authSudoParameter.</param>
        /// <param name="authAnnonymous">authAnnonymous.</param>
        /// <param name="slingAuthRequirements">slingAuthRequirements.</param>
        /// <param name="slingAuthAnonymousUser">slingAuthAnonymousUser.</param>
        /// <param name="slingAuthAnonymousPassword">slingAuthAnonymousPassword.</param>
        /// <param name="authHttp">authHttp.</param>
        /// <param name="authHttpRealm">authHttpRealm.</param>
        /// <param name="authUriSuffix">authUriSuffix.</param>
        public OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties(ConfigNodePropertyString osgiHttpWhiteboardContextSelect = default(ConfigNodePropertyString), ConfigNodePropertyString osgiHttpWhiteboardListener = default(ConfigNodePropertyString), ConfigNodePropertyString authSudoCookie = default(ConfigNodePropertyString), ConfigNodePropertyString authSudoParameter = default(ConfigNodePropertyString), ConfigNodePropertyBoolean authAnnonymous = default(ConfigNodePropertyBoolean), ConfigNodePropertyArray slingAuthRequirements = default(ConfigNodePropertyArray), ConfigNodePropertyString slingAuthAnonymousUser = default(ConfigNodePropertyString), ConfigNodePropertyString slingAuthAnonymousPassword = default(ConfigNodePropertyString), ConfigNodePropertyDropDown authHttp = default(ConfigNodePropertyDropDown), ConfigNodePropertyString authHttpRealm = default(ConfigNodePropertyString), ConfigNodePropertyArray authUriSuffix = default(ConfigNodePropertyArray))
        {
            this.OsgiHttpWhiteboardContextSelect = osgiHttpWhiteboardContextSelect;
            this.OsgiHttpWhiteboardListener = osgiHttpWhiteboardListener;
            this.AuthSudoCookie = authSudoCookie;
            this.AuthSudoParameter = authSudoParameter;
            this.AuthAnnonymous = authAnnonymous;
            this.SlingAuthRequirements = slingAuthRequirements;
            this.SlingAuthAnonymousUser = slingAuthAnonymousUser;
            this.SlingAuthAnonymousPassword = slingAuthAnonymousPassword;
            this.AuthHttp = authHttp;
            this.AuthHttpRealm = authHttpRealm;
            this.AuthUriSuffix = authUriSuffix;
        }
        
        /// <summary>
        /// Gets or Sets OsgiHttpWhiteboardContextSelect
        /// </summary>
        [DataMember(Name="osgi.http.whiteboard.context.select", EmitDefaultValue=false)]
        public ConfigNodePropertyString OsgiHttpWhiteboardContextSelect { get; set; }

        /// <summary>
        /// Gets or Sets OsgiHttpWhiteboardListener
        /// </summary>
        [DataMember(Name="osgi.http.whiteboard.listener", EmitDefaultValue=false)]
        public ConfigNodePropertyString OsgiHttpWhiteboardListener { get; set; }

        /// <summary>
        /// Gets or Sets AuthSudoCookie
        /// </summary>
        [DataMember(Name="auth.sudo.cookie", EmitDefaultValue=false)]
        public ConfigNodePropertyString AuthSudoCookie { get; set; }

        /// <summary>
        /// Gets or Sets AuthSudoParameter
        /// </summary>
        [DataMember(Name="auth.sudo.parameter", EmitDefaultValue=false)]
        public ConfigNodePropertyString AuthSudoParameter { get; set; }

        /// <summary>
        /// Gets or Sets AuthAnnonymous
        /// </summary>
        [DataMember(Name="auth.annonymous", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean AuthAnnonymous { get; set; }

        /// <summary>
        /// Gets or Sets SlingAuthRequirements
        /// </summary>
        [DataMember(Name="sling.auth.requirements", EmitDefaultValue=false)]
        public ConfigNodePropertyArray SlingAuthRequirements { get; set; }

        /// <summary>
        /// Gets or Sets SlingAuthAnonymousUser
        /// </summary>
        [DataMember(Name="sling.auth.anonymous.user", EmitDefaultValue=false)]
        public ConfigNodePropertyString SlingAuthAnonymousUser { get; set; }

        /// <summary>
        /// Gets or Sets SlingAuthAnonymousPassword
        /// </summary>
        [DataMember(Name="sling.auth.anonymous.password", EmitDefaultValue=false)]
        public ConfigNodePropertyString SlingAuthAnonymousPassword { get; set; }

        /// <summary>
        /// Gets or Sets AuthHttp
        /// </summary>
        [DataMember(Name="auth.http", EmitDefaultValue=false)]
        public ConfigNodePropertyDropDown AuthHttp { get; set; }

        /// <summary>
        /// Gets or Sets AuthHttpRealm
        /// </summary>
        [DataMember(Name="auth.http.realm", EmitDefaultValue=false)]
        public ConfigNodePropertyString AuthHttpRealm { get; set; }

        /// <summary>
        /// Gets or Sets AuthUriSuffix
        /// </summary>
        [DataMember(Name="auth.uri.suffix", EmitDefaultValue=false)]
        public ConfigNodePropertyArray AuthUriSuffix { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties {\n");
            sb.Append("  OsgiHttpWhiteboardContextSelect: ").Append(OsgiHttpWhiteboardContextSelect).Append("\n");
            sb.Append("  OsgiHttpWhiteboardListener: ").Append(OsgiHttpWhiteboardListener).Append("\n");
            sb.Append("  AuthSudoCookie: ").Append(AuthSudoCookie).Append("\n");
            sb.Append("  AuthSudoParameter: ").Append(AuthSudoParameter).Append("\n");
            sb.Append("  AuthAnnonymous: ").Append(AuthAnnonymous).Append("\n");
            sb.Append("  SlingAuthRequirements: ").Append(SlingAuthRequirements).Append("\n");
            sb.Append("  SlingAuthAnonymousUser: ").Append(SlingAuthAnonymousUser).Append("\n");
            sb.Append("  SlingAuthAnonymousPassword: ").Append(SlingAuthAnonymousPassword).Append("\n");
            sb.Append("  AuthHttp: ").Append(AuthHttp).Append("\n");
            sb.Append("  AuthHttpRealm: ").Append(AuthHttpRealm).Append("\n");
            sb.Append("  AuthUriSuffix: ").Append(AuthUriSuffix).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
  
        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public virtual string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="input">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object input)
        {
            return this.Equals(input as OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties);
        }

        /// <summary>
        /// Returns true if OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.OsgiHttpWhiteboardContextSelect == input.OsgiHttpWhiteboardContextSelect ||
                    (this.OsgiHttpWhiteboardContextSelect != null &&
                    this.OsgiHttpWhiteboardContextSelect.Equals(input.OsgiHttpWhiteboardContextSelect))
                ) && 
                (
                    this.OsgiHttpWhiteboardListener == input.OsgiHttpWhiteboardListener ||
                    (this.OsgiHttpWhiteboardListener != null &&
                    this.OsgiHttpWhiteboardListener.Equals(input.OsgiHttpWhiteboardListener))
                ) && 
                (
                    this.AuthSudoCookie == input.AuthSudoCookie ||
                    (this.AuthSudoCookie != null &&
                    this.AuthSudoCookie.Equals(input.AuthSudoCookie))
                ) && 
                (
                    this.AuthSudoParameter == input.AuthSudoParameter ||
                    (this.AuthSudoParameter != null &&
                    this.AuthSudoParameter.Equals(input.AuthSudoParameter))
                ) && 
                (
                    this.AuthAnnonymous == input.AuthAnnonymous ||
                    (this.AuthAnnonymous != null &&
                    this.AuthAnnonymous.Equals(input.AuthAnnonymous))
                ) && 
                (
                    this.SlingAuthRequirements == input.SlingAuthRequirements ||
                    (this.SlingAuthRequirements != null &&
                    this.SlingAuthRequirements.Equals(input.SlingAuthRequirements))
                ) && 
                (
                    this.SlingAuthAnonymousUser == input.SlingAuthAnonymousUser ||
                    (this.SlingAuthAnonymousUser != null &&
                    this.SlingAuthAnonymousUser.Equals(input.SlingAuthAnonymousUser))
                ) && 
                (
                    this.SlingAuthAnonymousPassword == input.SlingAuthAnonymousPassword ||
                    (this.SlingAuthAnonymousPassword != null &&
                    this.SlingAuthAnonymousPassword.Equals(input.SlingAuthAnonymousPassword))
                ) && 
                (
                    this.AuthHttp == input.AuthHttp ||
                    (this.AuthHttp != null &&
                    this.AuthHttp.Equals(input.AuthHttp))
                ) && 
                (
                    this.AuthHttpRealm == input.AuthHttpRealm ||
                    (this.AuthHttpRealm != null &&
                    this.AuthHttpRealm.Equals(input.AuthHttpRealm))
                ) && 
                (
                    this.AuthUriSuffix == input.AuthUriSuffix ||
                    (this.AuthUriSuffix != null &&
                    this.AuthUriSuffix.Equals(input.AuthUriSuffix))
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
                int hashCode = 41;
                if (this.OsgiHttpWhiteboardContextSelect != null)
                    hashCode = hashCode * 59 + this.OsgiHttpWhiteboardContextSelect.GetHashCode();
                if (this.OsgiHttpWhiteboardListener != null)
                    hashCode = hashCode * 59 + this.OsgiHttpWhiteboardListener.GetHashCode();
                if (this.AuthSudoCookie != null)
                    hashCode = hashCode * 59 + this.AuthSudoCookie.GetHashCode();
                if (this.AuthSudoParameter != null)
                    hashCode = hashCode * 59 + this.AuthSudoParameter.GetHashCode();
                if (this.AuthAnnonymous != null)
                    hashCode = hashCode * 59 + this.AuthAnnonymous.GetHashCode();
                if (this.SlingAuthRequirements != null)
                    hashCode = hashCode * 59 + this.SlingAuthRequirements.GetHashCode();
                if (this.SlingAuthAnonymousUser != null)
                    hashCode = hashCode * 59 + this.SlingAuthAnonymousUser.GetHashCode();
                if (this.SlingAuthAnonymousPassword != null)
                    hashCode = hashCode * 59 + this.SlingAuthAnonymousPassword.GetHashCode();
                if (this.AuthHttp != null)
                    hashCode = hashCode * 59 + this.AuthHttp.GetHashCode();
                if (this.AuthHttpRealm != null)
                    hashCode = hashCode * 59 + this.AuthHttpRealm.GetHashCode();
                if (this.AuthUriSuffix != null)
                    hashCode = hashCode * 59 + this.AuthUriSuffix.GetHashCode();
                return hashCode;
            }
        }

        /// <summary>
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        IEnumerable<System.ComponentModel.DataAnnotations.ValidationResult> IValidatableObject.Validate(ValidationContext validationContext)
        {
            yield break;
        }
    }

}