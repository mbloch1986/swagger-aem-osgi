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
    public partial class ComAdobeGraniteLoggingImplLogAnalyserImplProperties : IEquatable<ComAdobeGraniteLoggingImplLogAnalyserImplProperties>
    { 
        /// <summary>
        /// Gets or Sets MessagesQueueSize
        /// </summary>
        [DataMember(Name="messages.queue.size")]
        public ConfigNodePropertyInteger MessagesQueueSize { get; set; }

        /// <summary>
        /// Gets or Sets LoggerConfig
        /// </summary>
        [DataMember(Name="logger.config")]
        public ConfigNodePropertyArray LoggerConfig { get; set; }

        /// <summary>
        /// Gets or Sets MessagesSize
        /// </summary>
        [DataMember(Name="messages.size")]
        public ConfigNodePropertyInteger MessagesSize { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComAdobeGraniteLoggingImplLogAnalyserImplProperties {\n");
            sb.Append("  MessagesQueueSize: ").Append(MessagesQueueSize).Append("\n");
            sb.Append("  LoggerConfig: ").Append(LoggerConfig).Append("\n");
            sb.Append("  MessagesSize: ").Append(MessagesSize).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ComAdobeGraniteLoggingImplLogAnalyserImplProperties)obj);
        }

        /// <summary>
        /// Returns true if ComAdobeGraniteLoggingImplLogAnalyserImplProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of ComAdobeGraniteLoggingImplLogAnalyserImplProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComAdobeGraniteLoggingImplLogAnalyserImplProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    MessagesQueueSize == other.MessagesQueueSize ||
                    MessagesQueueSize != null &&
                    MessagesQueueSize.Equals(other.MessagesQueueSize)
                ) && 
                (
                    LoggerConfig == other.LoggerConfig ||
                    LoggerConfig != null &&
                    LoggerConfig.Equals(other.LoggerConfig)
                ) && 
                (
                    MessagesSize == other.MessagesSize ||
                    MessagesSize != null &&
                    MessagesSize.Equals(other.MessagesSize)
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
                    if (MessagesQueueSize != null)
                    hashCode = hashCode * 59 + MessagesQueueSize.GetHashCode();
                    if (LoggerConfig != null)
                    hashCode = hashCode * 59 + LoggerConfig.GetHashCode();
                    if (MessagesSize != null)
                    hashCode = hashCode * 59 + MessagesSize.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ComAdobeGraniteLoggingImplLogAnalyserImplProperties left, ComAdobeGraniteLoggingImplLogAnalyserImplProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ComAdobeGraniteLoggingImplLogAnalyserImplProperties left, ComAdobeGraniteLoggingImplLogAnalyserImplProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
