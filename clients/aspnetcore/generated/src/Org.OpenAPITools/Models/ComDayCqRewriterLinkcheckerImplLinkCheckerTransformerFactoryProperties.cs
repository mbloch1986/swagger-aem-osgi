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
    public partial class ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties : IEquatable<ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties>
    { 
        /// <summary>
        /// Gets or Sets LinkcheckertransformerDisableRewriting
        /// </summary>
        [DataMember(Name="linkcheckertransformer.disableRewriting")]
        public ConfigNodePropertyBoolean LinkcheckertransformerDisableRewriting { get; set; }

        /// <summary>
        /// Gets or Sets LinkcheckertransformerDisableChecking
        /// </summary>
        [DataMember(Name="linkcheckertransformer.disableChecking")]
        public ConfigNodePropertyBoolean LinkcheckertransformerDisableChecking { get; set; }

        /// <summary>
        /// Gets or Sets LinkcheckertransformerMapCacheSize
        /// </summary>
        [DataMember(Name="linkcheckertransformer.mapCacheSize")]
        public ConfigNodePropertyInteger LinkcheckertransformerMapCacheSize { get; set; }

        /// <summary>
        /// Gets or Sets LinkcheckertransformerStrictExtensionCheck
        /// </summary>
        [DataMember(Name="linkcheckertransformer.strictExtensionCheck")]
        public ConfigNodePropertyBoolean LinkcheckertransformerStrictExtensionCheck { get; set; }

        /// <summary>
        /// Gets or Sets LinkcheckertransformerStripHtmltExtension
        /// </summary>
        [DataMember(Name="linkcheckertransformer.stripHtmltExtension")]
        public ConfigNodePropertyBoolean LinkcheckertransformerStripHtmltExtension { get; set; }

        /// <summary>
        /// Gets or Sets LinkcheckertransformerRewriteElements
        /// </summary>
        [DataMember(Name="linkcheckertransformer.rewriteElements")]
        public ConfigNodePropertyArray LinkcheckertransformerRewriteElements { get; set; }

        /// <summary>
        /// Gets or Sets LinkcheckertransformerStripExtensionPathBlacklist
        /// </summary>
        [DataMember(Name="linkcheckertransformer.stripExtensionPathBlacklist")]
        public ConfigNodePropertyArray LinkcheckertransformerStripExtensionPathBlacklist { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties {\n");
            sb.Append("  LinkcheckertransformerDisableRewriting: ").Append(LinkcheckertransformerDisableRewriting).Append("\n");
            sb.Append("  LinkcheckertransformerDisableChecking: ").Append(LinkcheckertransformerDisableChecking).Append("\n");
            sb.Append("  LinkcheckertransformerMapCacheSize: ").Append(LinkcheckertransformerMapCacheSize).Append("\n");
            sb.Append("  LinkcheckertransformerStrictExtensionCheck: ").Append(LinkcheckertransformerStrictExtensionCheck).Append("\n");
            sb.Append("  LinkcheckertransformerStripHtmltExtension: ").Append(LinkcheckertransformerStripHtmltExtension).Append("\n");
            sb.Append("  LinkcheckertransformerRewriteElements: ").Append(LinkcheckertransformerRewriteElements).Append("\n");
            sb.Append("  LinkcheckertransformerStripExtensionPathBlacklist: ").Append(LinkcheckertransformerStripExtensionPathBlacklist).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties)obj);
        }

        /// <summary>
        /// Returns true if ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    LinkcheckertransformerDisableRewriting == other.LinkcheckertransformerDisableRewriting ||
                    LinkcheckertransformerDisableRewriting != null &&
                    LinkcheckertransformerDisableRewriting.Equals(other.LinkcheckertransformerDisableRewriting)
                ) && 
                (
                    LinkcheckertransformerDisableChecking == other.LinkcheckertransformerDisableChecking ||
                    LinkcheckertransformerDisableChecking != null &&
                    LinkcheckertransformerDisableChecking.Equals(other.LinkcheckertransformerDisableChecking)
                ) && 
                (
                    LinkcheckertransformerMapCacheSize == other.LinkcheckertransformerMapCacheSize ||
                    LinkcheckertransformerMapCacheSize != null &&
                    LinkcheckertransformerMapCacheSize.Equals(other.LinkcheckertransformerMapCacheSize)
                ) && 
                (
                    LinkcheckertransformerStrictExtensionCheck == other.LinkcheckertransformerStrictExtensionCheck ||
                    LinkcheckertransformerStrictExtensionCheck != null &&
                    LinkcheckertransformerStrictExtensionCheck.Equals(other.LinkcheckertransformerStrictExtensionCheck)
                ) && 
                (
                    LinkcheckertransformerStripHtmltExtension == other.LinkcheckertransformerStripHtmltExtension ||
                    LinkcheckertransformerStripHtmltExtension != null &&
                    LinkcheckertransformerStripHtmltExtension.Equals(other.LinkcheckertransformerStripHtmltExtension)
                ) && 
                (
                    LinkcheckertransformerRewriteElements == other.LinkcheckertransformerRewriteElements ||
                    LinkcheckertransformerRewriteElements != null &&
                    LinkcheckertransformerRewriteElements.Equals(other.LinkcheckertransformerRewriteElements)
                ) && 
                (
                    LinkcheckertransformerStripExtensionPathBlacklist == other.LinkcheckertransformerStripExtensionPathBlacklist ||
                    LinkcheckertransformerStripExtensionPathBlacklist != null &&
                    LinkcheckertransformerStripExtensionPathBlacklist.Equals(other.LinkcheckertransformerStripExtensionPathBlacklist)
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
                    if (LinkcheckertransformerDisableRewriting != null)
                    hashCode = hashCode * 59 + LinkcheckertransformerDisableRewriting.GetHashCode();
                    if (LinkcheckertransformerDisableChecking != null)
                    hashCode = hashCode * 59 + LinkcheckertransformerDisableChecking.GetHashCode();
                    if (LinkcheckertransformerMapCacheSize != null)
                    hashCode = hashCode * 59 + LinkcheckertransformerMapCacheSize.GetHashCode();
                    if (LinkcheckertransformerStrictExtensionCheck != null)
                    hashCode = hashCode * 59 + LinkcheckertransformerStrictExtensionCheck.GetHashCode();
                    if (LinkcheckertransformerStripHtmltExtension != null)
                    hashCode = hashCode * 59 + LinkcheckertransformerStripHtmltExtension.GetHashCode();
                    if (LinkcheckertransformerRewriteElements != null)
                    hashCode = hashCode * 59 + LinkcheckertransformerRewriteElements.GetHashCode();
                    if (LinkcheckertransformerStripExtensionPathBlacklist != null)
                    hashCode = hashCode * 59 + LinkcheckertransformerStripExtensionPathBlacklist.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties left, ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties left, ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}