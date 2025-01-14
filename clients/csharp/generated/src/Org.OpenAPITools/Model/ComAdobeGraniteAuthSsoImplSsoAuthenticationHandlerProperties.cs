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
    /// ComAdobeGraniteAuthSsoImplSsoAuthenticationHandlerProperties
    /// </summary>
    [DataContract]
    public partial class ComAdobeGraniteAuthSsoImplSsoAuthenticationHandlerProperties :  IEquatable<ComAdobeGraniteAuthSsoImplSsoAuthenticationHandlerProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComAdobeGraniteAuthSsoImplSsoAuthenticationHandlerProperties" /> class.
        /// </summary>
        /// <param name="path">path.</param>
        /// <param name="serviceRanking">serviceRanking.</param>
        /// <param name="jaasControlFlag">jaasControlFlag.</param>
        /// <param name="jaasRealmName">jaasRealmName.</param>
        /// <param name="jaasRanking">jaasRanking.</param>
        /// <param name="headers">headers.</param>
        /// <param name="cookies">cookies.</param>
        /// <param name="parameters">parameters.</param>
        /// <param name="usermap">usermap.</param>
        /// <param name="format">format.</param>
        /// <param name="trustedCredentialsAttribute">trustedCredentialsAttribute.</param>
        public ComAdobeGraniteAuthSsoImplSsoAuthenticationHandlerProperties(ConfigNodePropertyString path = default(ConfigNodePropertyString), ConfigNodePropertyInteger serviceRanking = default(ConfigNodePropertyInteger), ConfigNodePropertyString jaasControlFlag = default(ConfigNodePropertyString), ConfigNodePropertyString jaasRealmName = default(ConfigNodePropertyString), ConfigNodePropertyInteger jaasRanking = default(ConfigNodePropertyInteger), ConfigNodePropertyArray headers = default(ConfigNodePropertyArray), ConfigNodePropertyArray cookies = default(ConfigNodePropertyArray), ConfigNodePropertyArray parameters = default(ConfigNodePropertyArray), ConfigNodePropertyArray usermap = default(ConfigNodePropertyArray), ConfigNodePropertyString format = default(ConfigNodePropertyString), ConfigNodePropertyString trustedCredentialsAttribute = default(ConfigNodePropertyString))
        {
            this.Path = path;
            this.ServiceRanking = serviceRanking;
            this.JaasControlFlag = jaasControlFlag;
            this.JaasRealmName = jaasRealmName;
            this.JaasRanking = jaasRanking;
            this.Headers = headers;
            this.Cookies = cookies;
            this.Parameters = parameters;
            this.Usermap = usermap;
            this.Format = format;
            this.TrustedCredentialsAttribute = trustedCredentialsAttribute;
        }
        
        /// <summary>
        /// Gets or Sets Path
        /// </summary>
        [DataMember(Name="path", EmitDefaultValue=false)]
        public ConfigNodePropertyString Path { get; set; }

        /// <summary>
        /// Gets or Sets ServiceRanking
        /// </summary>
        [DataMember(Name="service.ranking", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger ServiceRanking { get; set; }

        /// <summary>
        /// Gets or Sets JaasControlFlag
        /// </summary>
        [DataMember(Name="jaas.controlFlag", EmitDefaultValue=false)]
        public ConfigNodePropertyString JaasControlFlag { get; set; }

        /// <summary>
        /// Gets or Sets JaasRealmName
        /// </summary>
        [DataMember(Name="jaas.realmName", EmitDefaultValue=false)]
        public ConfigNodePropertyString JaasRealmName { get; set; }

        /// <summary>
        /// Gets or Sets JaasRanking
        /// </summary>
        [DataMember(Name="jaas.ranking", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger JaasRanking { get; set; }

        /// <summary>
        /// Gets or Sets Headers
        /// </summary>
        [DataMember(Name="headers", EmitDefaultValue=false)]
        public ConfigNodePropertyArray Headers { get; set; }

        /// <summary>
        /// Gets or Sets Cookies
        /// </summary>
        [DataMember(Name="cookies", EmitDefaultValue=false)]
        public ConfigNodePropertyArray Cookies { get; set; }

        /// <summary>
        /// Gets or Sets Parameters
        /// </summary>
        [DataMember(Name="parameters", EmitDefaultValue=false)]
        public ConfigNodePropertyArray Parameters { get; set; }

        /// <summary>
        /// Gets or Sets Usermap
        /// </summary>
        [DataMember(Name="usermap", EmitDefaultValue=false)]
        public ConfigNodePropertyArray Usermap { get; set; }

        /// <summary>
        /// Gets or Sets Format
        /// </summary>
        [DataMember(Name="format", EmitDefaultValue=false)]
        public ConfigNodePropertyString Format { get; set; }

        /// <summary>
        /// Gets or Sets TrustedCredentialsAttribute
        /// </summary>
        [DataMember(Name="trustedCredentialsAttribute", EmitDefaultValue=false)]
        public ConfigNodePropertyString TrustedCredentialsAttribute { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComAdobeGraniteAuthSsoImplSsoAuthenticationHandlerProperties {\n");
            sb.Append("  Path: ").Append(Path).Append("\n");
            sb.Append("  ServiceRanking: ").Append(ServiceRanking).Append("\n");
            sb.Append("  JaasControlFlag: ").Append(JaasControlFlag).Append("\n");
            sb.Append("  JaasRealmName: ").Append(JaasRealmName).Append("\n");
            sb.Append("  JaasRanking: ").Append(JaasRanking).Append("\n");
            sb.Append("  Headers: ").Append(Headers).Append("\n");
            sb.Append("  Cookies: ").Append(Cookies).Append("\n");
            sb.Append("  Parameters: ").Append(Parameters).Append("\n");
            sb.Append("  Usermap: ").Append(Usermap).Append("\n");
            sb.Append("  Format: ").Append(Format).Append("\n");
            sb.Append("  TrustedCredentialsAttribute: ").Append(TrustedCredentialsAttribute).Append("\n");
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
            return this.Equals(input as ComAdobeGraniteAuthSsoImplSsoAuthenticationHandlerProperties);
        }

        /// <summary>
        /// Returns true if ComAdobeGraniteAuthSsoImplSsoAuthenticationHandlerProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComAdobeGraniteAuthSsoImplSsoAuthenticationHandlerProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComAdobeGraniteAuthSsoImplSsoAuthenticationHandlerProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Path == input.Path ||
                    (this.Path != null &&
                    this.Path.Equals(input.Path))
                ) && 
                (
                    this.ServiceRanking == input.ServiceRanking ||
                    (this.ServiceRanking != null &&
                    this.ServiceRanking.Equals(input.ServiceRanking))
                ) && 
                (
                    this.JaasControlFlag == input.JaasControlFlag ||
                    (this.JaasControlFlag != null &&
                    this.JaasControlFlag.Equals(input.JaasControlFlag))
                ) && 
                (
                    this.JaasRealmName == input.JaasRealmName ||
                    (this.JaasRealmName != null &&
                    this.JaasRealmName.Equals(input.JaasRealmName))
                ) && 
                (
                    this.JaasRanking == input.JaasRanking ||
                    (this.JaasRanking != null &&
                    this.JaasRanking.Equals(input.JaasRanking))
                ) && 
                (
                    this.Headers == input.Headers ||
                    (this.Headers != null &&
                    this.Headers.Equals(input.Headers))
                ) && 
                (
                    this.Cookies == input.Cookies ||
                    (this.Cookies != null &&
                    this.Cookies.Equals(input.Cookies))
                ) && 
                (
                    this.Parameters == input.Parameters ||
                    (this.Parameters != null &&
                    this.Parameters.Equals(input.Parameters))
                ) && 
                (
                    this.Usermap == input.Usermap ||
                    (this.Usermap != null &&
                    this.Usermap.Equals(input.Usermap))
                ) && 
                (
                    this.Format == input.Format ||
                    (this.Format != null &&
                    this.Format.Equals(input.Format))
                ) && 
                (
                    this.TrustedCredentialsAttribute == input.TrustedCredentialsAttribute ||
                    (this.TrustedCredentialsAttribute != null &&
                    this.TrustedCredentialsAttribute.Equals(input.TrustedCredentialsAttribute))
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
                if (this.Path != null)
                    hashCode = hashCode * 59 + this.Path.GetHashCode();
                if (this.ServiceRanking != null)
                    hashCode = hashCode * 59 + this.ServiceRanking.GetHashCode();
                if (this.JaasControlFlag != null)
                    hashCode = hashCode * 59 + this.JaasControlFlag.GetHashCode();
                if (this.JaasRealmName != null)
                    hashCode = hashCode * 59 + this.JaasRealmName.GetHashCode();
                if (this.JaasRanking != null)
                    hashCode = hashCode * 59 + this.JaasRanking.GetHashCode();
                if (this.Headers != null)
                    hashCode = hashCode * 59 + this.Headers.GetHashCode();
                if (this.Cookies != null)
                    hashCode = hashCode * 59 + this.Cookies.GetHashCode();
                if (this.Parameters != null)
                    hashCode = hashCode * 59 + this.Parameters.GetHashCode();
                if (this.Usermap != null)
                    hashCode = hashCode * 59 + this.Usermap.GetHashCode();
                if (this.Format != null)
                    hashCode = hashCode * 59 + this.Format.GetHashCode();
                if (this.TrustedCredentialsAttribute != null)
                    hashCode = hashCode * 59 + this.TrustedCredentialsAttribute.GetHashCode();
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
