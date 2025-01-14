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
    /// OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExProperties
    /// </summary>
    [DataContract]
    public partial class OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExProperties :  IEquatable<OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExProperties" /> class.
        /// </summary>
        /// <param name="jaasRanking">jaasRanking.</param>
        /// <param name="jaasControlFlag">jaasControlFlag.</param>
        /// <param name="jaasRealmName">jaasRealmName.</param>
        /// <param name="idpName">idpName.</param>
        /// <param name="syncHandlerName">syncHandlerName.</param>
        public OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExProperties(ConfigNodePropertyInteger jaasRanking = default(ConfigNodePropertyInteger), ConfigNodePropertyString jaasControlFlag = default(ConfigNodePropertyString), ConfigNodePropertyString jaasRealmName = default(ConfigNodePropertyString), ConfigNodePropertyString idpName = default(ConfigNodePropertyString), ConfigNodePropertyString syncHandlerName = default(ConfigNodePropertyString))
        {
            this.JaasRanking = jaasRanking;
            this.JaasControlFlag = jaasControlFlag;
            this.JaasRealmName = jaasRealmName;
            this.IdpName = idpName;
            this.SyncHandlerName = syncHandlerName;
        }
        
        /// <summary>
        /// Gets or Sets JaasRanking
        /// </summary>
        [DataMember(Name="jaas.ranking", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger JaasRanking { get; set; }

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
        /// Gets or Sets IdpName
        /// </summary>
        [DataMember(Name="idp.name", EmitDefaultValue=false)]
        public ConfigNodePropertyString IdpName { get; set; }

        /// <summary>
        /// Gets or Sets SyncHandlerName
        /// </summary>
        [DataMember(Name="sync.handlerName", EmitDefaultValue=false)]
        public ConfigNodePropertyString SyncHandlerName { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExProperties {\n");
            sb.Append("  JaasRanking: ").Append(JaasRanking).Append("\n");
            sb.Append("  JaasControlFlag: ").Append(JaasControlFlag).Append("\n");
            sb.Append("  JaasRealmName: ").Append(JaasRealmName).Append("\n");
            sb.Append("  IdpName: ").Append(IdpName).Append("\n");
            sb.Append("  SyncHandlerName: ").Append(SyncHandlerName).Append("\n");
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
            return this.Equals(input as OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExProperties);
        }

        /// <summary>
        /// Returns true if OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.JaasRanking == input.JaasRanking ||
                    (this.JaasRanking != null &&
                    this.JaasRanking.Equals(input.JaasRanking))
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
                    this.IdpName == input.IdpName ||
                    (this.IdpName != null &&
                    this.IdpName.Equals(input.IdpName))
                ) && 
                (
                    this.SyncHandlerName == input.SyncHandlerName ||
                    (this.SyncHandlerName != null &&
                    this.SyncHandlerName.Equals(input.SyncHandlerName))
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
                if (this.JaasRanking != null)
                    hashCode = hashCode * 59 + this.JaasRanking.GetHashCode();
                if (this.JaasControlFlag != null)
                    hashCode = hashCode * 59 + this.JaasControlFlag.GetHashCode();
                if (this.JaasRealmName != null)
                    hashCode = hashCode * 59 + this.JaasRealmName.GetHashCode();
                if (this.IdpName != null)
                    hashCode = hashCode * 59 + this.IdpName.GetHashCode();
                if (this.SyncHandlerName != null)
                    hashCode = hashCode * 59 + this.SyncHandlerName.GetHashCode();
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
