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
    public partial class ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerProperties : IEquatable<ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerProperties>
    { 
        /// <summary>
        /// Gets or Sets TranslateLanguage
        /// </summary>
        [DataMember(Name="translate.language")]
        public ConfigNodePropertyDropDown TranslateLanguage { get; set; }

        /// <summary>
        /// Gets or Sets TranslateDisplay
        /// </summary>
        [DataMember(Name="translate.display")]
        public ConfigNodePropertyDropDown TranslateDisplay { get; set; }

        /// <summary>
        /// Gets or Sets TranslateAttribution
        /// </summary>
        [DataMember(Name="translate.attribution")]
        public ConfigNodePropertyBoolean TranslateAttribution { get; set; }

        /// <summary>
        /// Gets or Sets TranslateCaching
        /// </summary>
        [DataMember(Name="translate.caching")]
        public ConfigNodePropertyDropDown TranslateCaching { get; set; }

        /// <summary>
        /// Gets or Sets TranslateSmartRendering
        /// </summary>
        [DataMember(Name="translate.smart.rendering")]
        public ConfigNodePropertyDropDown TranslateSmartRendering { get; set; }

        /// <summary>
        /// Gets or Sets TranslateCachingDuration
        /// </summary>
        [DataMember(Name="translate.caching.duration")]
        public ConfigNodePropertyString TranslateCachingDuration { get; set; }

        /// <summary>
        /// Gets or Sets TranslateSessionSaveInterval
        /// </summary>
        [DataMember(Name="translate.session.save.interval")]
        public ConfigNodePropertyString TranslateSessionSaveInterval { get; set; }

        /// <summary>
        /// Gets or Sets TranslateSessionSaveBatchLimit
        /// </summary>
        [DataMember(Name="translate.session.save.batchLimit")]
        public ConfigNodePropertyString TranslateSessionSaveBatchLimit { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerProperties {\n");
            sb.Append("  TranslateLanguage: ").Append(TranslateLanguage).Append("\n");
            sb.Append("  TranslateDisplay: ").Append(TranslateDisplay).Append("\n");
            sb.Append("  TranslateAttribution: ").Append(TranslateAttribution).Append("\n");
            sb.Append("  TranslateCaching: ").Append(TranslateCaching).Append("\n");
            sb.Append("  TranslateSmartRendering: ").Append(TranslateSmartRendering).Append("\n");
            sb.Append("  TranslateCachingDuration: ").Append(TranslateCachingDuration).Append("\n");
            sb.Append("  TranslateSessionSaveInterval: ").Append(TranslateSessionSaveInterval).Append("\n");
            sb.Append("  TranslateSessionSaveBatchLimit: ").Append(TranslateSessionSaveBatchLimit).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerProperties)obj);
        }

        /// <summary>
        /// Returns true if ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    TranslateLanguage == other.TranslateLanguage ||
                    TranslateLanguage != null &&
                    TranslateLanguage.Equals(other.TranslateLanguage)
                ) && 
                (
                    TranslateDisplay == other.TranslateDisplay ||
                    TranslateDisplay != null &&
                    TranslateDisplay.Equals(other.TranslateDisplay)
                ) && 
                (
                    TranslateAttribution == other.TranslateAttribution ||
                    TranslateAttribution != null &&
                    TranslateAttribution.Equals(other.TranslateAttribution)
                ) && 
                (
                    TranslateCaching == other.TranslateCaching ||
                    TranslateCaching != null &&
                    TranslateCaching.Equals(other.TranslateCaching)
                ) && 
                (
                    TranslateSmartRendering == other.TranslateSmartRendering ||
                    TranslateSmartRendering != null &&
                    TranslateSmartRendering.Equals(other.TranslateSmartRendering)
                ) && 
                (
                    TranslateCachingDuration == other.TranslateCachingDuration ||
                    TranslateCachingDuration != null &&
                    TranslateCachingDuration.Equals(other.TranslateCachingDuration)
                ) && 
                (
                    TranslateSessionSaveInterval == other.TranslateSessionSaveInterval ||
                    TranslateSessionSaveInterval != null &&
                    TranslateSessionSaveInterval.Equals(other.TranslateSessionSaveInterval)
                ) && 
                (
                    TranslateSessionSaveBatchLimit == other.TranslateSessionSaveBatchLimit ||
                    TranslateSessionSaveBatchLimit != null &&
                    TranslateSessionSaveBatchLimit.Equals(other.TranslateSessionSaveBatchLimit)
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
                    if (TranslateLanguage != null)
                    hashCode = hashCode * 59 + TranslateLanguage.GetHashCode();
                    if (TranslateDisplay != null)
                    hashCode = hashCode * 59 + TranslateDisplay.GetHashCode();
                    if (TranslateAttribution != null)
                    hashCode = hashCode * 59 + TranslateAttribution.GetHashCode();
                    if (TranslateCaching != null)
                    hashCode = hashCode * 59 + TranslateCaching.GetHashCode();
                    if (TranslateSmartRendering != null)
                    hashCode = hashCode * 59 + TranslateSmartRendering.GetHashCode();
                    if (TranslateCachingDuration != null)
                    hashCode = hashCode * 59 + TranslateCachingDuration.GetHashCode();
                    if (TranslateSessionSaveInterval != null)
                    hashCode = hashCode * 59 + TranslateSessionSaveInterval.GetHashCode();
                    if (TranslateSessionSaveBatchLimit != null)
                    hashCode = hashCode * 59 + TranslateSessionSaveBatchLimit.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerProperties left, ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerProperties left, ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}