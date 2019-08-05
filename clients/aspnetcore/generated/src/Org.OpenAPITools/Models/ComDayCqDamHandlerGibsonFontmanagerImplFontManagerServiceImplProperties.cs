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
    public partial class ComDayCqDamHandlerGibsonFontmanagerImplFontManagerServiceImplProperties : IEquatable<ComDayCqDamHandlerGibsonFontmanagerImplFontManagerServiceImplProperties>
    { 
        /// <summary>
        /// Gets or Sets EventFilter
        /// </summary>
        [DataMember(Name="event.filter")]
        public ConfigNodePropertyString EventFilter { get; set; }

        /// <summary>
        /// Gets or Sets FontmgrSystemFontDir
        /// </summary>
        [DataMember(Name="fontmgr.system.font.dir")]
        public ConfigNodePropertyArray FontmgrSystemFontDir { get; set; }

        /// <summary>
        /// Gets or Sets FontmgrAdobeFontDir
        /// </summary>
        [DataMember(Name="fontmgr.adobe.font.dir")]
        public ConfigNodePropertyString FontmgrAdobeFontDir { get; set; }

        /// <summary>
        /// Gets or Sets FontmgrCustomerFontDir
        /// </summary>
        [DataMember(Name="fontmgr.customer.font.dir")]
        public ConfigNodePropertyString FontmgrCustomerFontDir { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqDamHandlerGibsonFontmanagerImplFontManagerServiceImplProperties {\n");
            sb.Append("  EventFilter: ").Append(EventFilter).Append("\n");
            sb.Append("  FontmgrSystemFontDir: ").Append(FontmgrSystemFontDir).Append("\n");
            sb.Append("  FontmgrAdobeFontDir: ").Append(FontmgrAdobeFontDir).Append("\n");
            sb.Append("  FontmgrCustomerFontDir: ").Append(FontmgrCustomerFontDir).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ComDayCqDamHandlerGibsonFontmanagerImplFontManagerServiceImplProperties)obj);
        }

        /// <summary>
        /// Returns true if ComDayCqDamHandlerGibsonFontmanagerImplFontManagerServiceImplProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of ComDayCqDamHandlerGibsonFontmanagerImplFontManagerServiceImplProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqDamHandlerGibsonFontmanagerImplFontManagerServiceImplProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    EventFilter == other.EventFilter ||
                    EventFilter != null &&
                    EventFilter.Equals(other.EventFilter)
                ) && 
                (
                    FontmgrSystemFontDir == other.FontmgrSystemFontDir ||
                    FontmgrSystemFontDir != null &&
                    FontmgrSystemFontDir.Equals(other.FontmgrSystemFontDir)
                ) && 
                (
                    FontmgrAdobeFontDir == other.FontmgrAdobeFontDir ||
                    FontmgrAdobeFontDir != null &&
                    FontmgrAdobeFontDir.Equals(other.FontmgrAdobeFontDir)
                ) && 
                (
                    FontmgrCustomerFontDir == other.FontmgrCustomerFontDir ||
                    FontmgrCustomerFontDir != null &&
                    FontmgrCustomerFontDir.Equals(other.FontmgrCustomerFontDir)
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
                    if (EventFilter != null)
                    hashCode = hashCode * 59 + EventFilter.GetHashCode();
                    if (FontmgrSystemFontDir != null)
                    hashCode = hashCode * 59 + FontmgrSystemFontDir.GetHashCode();
                    if (FontmgrAdobeFontDir != null)
                    hashCode = hashCode * 59 + FontmgrAdobeFontDir.GetHashCode();
                    if (FontmgrCustomerFontDir != null)
                    hashCode = hashCode * 59 + FontmgrCustomerFontDir.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ComDayCqDamHandlerGibsonFontmanagerImplFontManagerServiceImplProperties left, ComDayCqDamHandlerGibsonFontmanagerImplFontManagerServiceImplProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ComDayCqDamHandlerGibsonFontmanagerImplFontManagerServiceImplProperties left, ComDayCqDamHandlerGibsonFontmanagerImplFontManagerServiceImplProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}