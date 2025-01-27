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
    public partial class ComDayCqMcmCampaignImplIntegrationConfigImplProperties : IEquatable<ComDayCqMcmCampaignImplIntegrationConfigImplProperties>
    { 
        /// <summary>
        /// Gets or Sets AemMcmCampaignFormConstraints
        /// </summary>
        [DataMember(Name="aem.mcm.campaign.formConstraints")]
        public ConfigNodePropertyArray AemMcmCampaignFormConstraints { get; set; }

        /// <summary>
        /// Gets or Sets AemMcmCampaignPublicUrl
        /// </summary>
        [DataMember(Name="aem.mcm.campaign.publicUrl")]
        public ConfigNodePropertyString AemMcmCampaignPublicUrl { get; set; }

        /// <summary>
        /// Gets or Sets AemMcmCampaignRelaxedSSL
        /// </summary>
        [DataMember(Name="aem.mcm.campaign.relaxedSSL")]
        public ConfigNodePropertyBoolean AemMcmCampaignRelaxedSSL { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqMcmCampaignImplIntegrationConfigImplProperties {\n");
            sb.Append("  AemMcmCampaignFormConstraints: ").Append(AemMcmCampaignFormConstraints).Append("\n");
            sb.Append("  AemMcmCampaignPublicUrl: ").Append(AemMcmCampaignPublicUrl).Append("\n");
            sb.Append("  AemMcmCampaignRelaxedSSL: ").Append(AemMcmCampaignRelaxedSSL).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ComDayCqMcmCampaignImplIntegrationConfigImplProperties)obj);
        }

        /// <summary>
        /// Returns true if ComDayCqMcmCampaignImplIntegrationConfigImplProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of ComDayCqMcmCampaignImplIntegrationConfigImplProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqMcmCampaignImplIntegrationConfigImplProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    AemMcmCampaignFormConstraints == other.AemMcmCampaignFormConstraints ||
                    AemMcmCampaignFormConstraints != null &&
                    AemMcmCampaignFormConstraints.Equals(other.AemMcmCampaignFormConstraints)
                ) && 
                (
                    AemMcmCampaignPublicUrl == other.AemMcmCampaignPublicUrl ||
                    AemMcmCampaignPublicUrl != null &&
                    AemMcmCampaignPublicUrl.Equals(other.AemMcmCampaignPublicUrl)
                ) && 
                (
                    AemMcmCampaignRelaxedSSL == other.AemMcmCampaignRelaxedSSL ||
                    AemMcmCampaignRelaxedSSL != null &&
                    AemMcmCampaignRelaxedSSL.Equals(other.AemMcmCampaignRelaxedSSL)
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
                    if (AemMcmCampaignFormConstraints != null)
                    hashCode = hashCode * 59 + AemMcmCampaignFormConstraints.GetHashCode();
                    if (AemMcmCampaignPublicUrl != null)
                    hashCode = hashCode * 59 + AemMcmCampaignPublicUrl.GetHashCode();
                    if (AemMcmCampaignRelaxedSSL != null)
                    hashCode = hashCode * 59 + AemMcmCampaignRelaxedSSL.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ComDayCqMcmCampaignImplIntegrationConfigImplProperties left, ComDayCqMcmCampaignImplIntegrationConfigImplProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ComDayCqMcmCampaignImplIntegrationConfigImplProperties left, ComDayCqMcmCampaignImplIntegrationConfigImplProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
