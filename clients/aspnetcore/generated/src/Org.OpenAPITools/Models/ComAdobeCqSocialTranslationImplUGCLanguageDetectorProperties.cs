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
    public partial class ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties : IEquatable<ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties>
    { 
        /// <summary>
        /// Gets or Sets EventTopics
        /// </summary>
        [DataMember(Name="event.topics")]
        public ConfigNodePropertyString EventTopics { get; set; }

        /// <summary>
        /// Gets or Sets EventFilter
        /// </summary>
        [DataMember(Name="event.filter")]
        public ConfigNodePropertyString EventFilter { get; set; }

        /// <summary>
        /// Gets or Sets TranslateListenerType
        /// </summary>
        [DataMember(Name="translate.listener.type")]
        public ConfigNodePropertyArray TranslateListenerType { get; set; }

        /// <summary>
        /// Gets or Sets TranslatePropertyList
        /// </summary>
        [DataMember(Name="translate.property.list")]
        public ConfigNodePropertyArray TranslatePropertyList { get; set; }

        /// <summary>
        /// Gets or Sets PoolSize
        /// </summary>
        [DataMember(Name="poolSize")]
        public ConfigNodePropertyInteger PoolSize { get; set; }

        /// <summary>
        /// Gets or Sets MaxPoolSize
        /// </summary>
        [DataMember(Name="maxPoolSize")]
        public ConfigNodePropertyInteger MaxPoolSize { get; set; }

        /// <summary>
        /// Gets or Sets QueueSize
        /// </summary>
        [DataMember(Name="queueSize")]
        public ConfigNodePropertyInteger QueueSize { get; set; }

        /// <summary>
        /// Gets or Sets KeepAliveTime
        /// </summary>
        [DataMember(Name="keepAliveTime")]
        public ConfigNodePropertyInteger KeepAliveTime { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties {\n");
            sb.Append("  EventTopics: ").Append(EventTopics).Append("\n");
            sb.Append("  EventFilter: ").Append(EventFilter).Append("\n");
            sb.Append("  TranslateListenerType: ").Append(TranslateListenerType).Append("\n");
            sb.Append("  TranslatePropertyList: ").Append(TranslatePropertyList).Append("\n");
            sb.Append("  PoolSize: ").Append(PoolSize).Append("\n");
            sb.Append("  MaxPoolSize: ").Append(MaxPoolSize).Append("\n");
            sb.Append("  QueueSize: ").Append(QueueSize).Append("\n");
            sb.Append("  KeepAliveTime: ").Append(KeepAliveTime).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties)obj);
        }

        /// <summary>
        /// Returns true if ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    EventTopics == other.EventTopics ||
                    EventTopics != null &&
                    EventTopics.Equals(other.EventTopics)
                ) && 
                (
                    EventFilter == other.EventFilter ||
                    EventFilter != null &&
                    EventFilter.Equals(other.EventFilter)
                ) && 
                (
                    TranslateListenerType == other.TranslateListenerType ||
                    TranslateListenerType != null &&
                    TranslateListenerType.Equals(other.TranslateListenerType)
                ) && 
                (
                    TranslatePropertyList == other.TranslatePropertyList ||
                    TranslatePropertyList != null &&
                    TranslatePropertyList.Equals(other.TranslatePropertyList)
                ) && 
                (
                    PoolSize == other.PoolSize ||
                    PoolSize != null &&
                    PoolSize.Equals(other.PoolSize)
                ) && 
                (
                    MaxPoolSize == other.MaxPoolSize ||
                    MaxPoolSize != null &&
                    MaxPoolSize.Equals(other.MaxPoolSize)
                ) && 
                (
                    QueueSize == other.QueueSize ||
                    QueueSize != null &&
                    QueueSize.Equals(other.QueueSize)
                ) && 
                (
                    KeepAliveTime == other.KeepAliveTime ||
                    KeepAliveTime != null &&
                    KeepAliveTime.Equals(other.KeepAliveTime)
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
                    if (EventTopics != null)
                    hashCode = hashCode * 59 + EventTopics.GetHashCode();
                    if (EventFilter != null)
                    hashCode = hashCode * 59 + EventFilter.GetHashCode();
                    if (TranslateListenerType != null)
                    hashCode = hashCode * 59 + TranslateListenerType.GetHashCode();
                    if (TranslatePropertyList != null)
                    hashCode = hashCode * 59 + TranslatePropertyList.GetHashCode();
                    if (PoolSize != null)
                    hashCode = hashCode * 59 + PoolSize.GetHashCode();
                    if (MaxPoolSize != null)
                    hashCode = hashCode * 59 + MaxPoolSize.GetHashCode();
                    if (QueueSize != null)
                    hashCode = hashCode * 59 + QueueSize.GetHashCode();
                    if (KeepAliveTime != null)
                    hashCode = hashCode * 59 + KeepAliveTime.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties left, ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties left, ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}