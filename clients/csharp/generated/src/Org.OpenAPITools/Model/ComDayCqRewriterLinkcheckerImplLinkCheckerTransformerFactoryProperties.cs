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
    /// ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties
    /// </summary>
    [DataContract]
    public partial class ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties :  IEquatable<ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties" /> class.
        /// </summary>
        /// <param name="linkcheckertransformerDisableRewriting">linkcheckertransformerDisableRewriting.</param>
        /// <param name="linkcheckertransformerDisableChecking">linkcheckertransformerDisableChecking.</param>
        /// <param name="linkcheckertransformerMapCacheSize">linkcheckertransformerMapCacheSize.</param>
        /// <param name="linkcheckertransformerStrictExtensionCheck">linkcheckertransformerStrictExtensionCheck.</param>
        /// <param name="linkcheckertransformerStripHtmltExtension">linkcheckertransformerStripHtmltExtension.</param>
        /// <param name="linkcheckertransformerRewriteElements">linkcheckertransformerRewriteElements.</param>
        /// <param name="linkcheckertransformerStripExtensionPathBlacklist">linkcheckertransformerStripExtensionPathBlacklist.</param>
        public ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties(ConfigNodePropertyBoolean linkcheckertransformerDisableRewriting = default(ConfigNodePropertyBoolean), ConfigNodePropertyBoolean linkcheckertransformerDisableChecking = default(ConfigNodePropertyBoolean), ConfigNodePropertyInteger linkcheckertransformerMapCacheSize = default(ConfigNodePropertyInteger), ConfigNodePropertyBoolean linkcheckertransformerStrictExtensionCheck = default(ConfigNodePropertyBoolean), ConfigNodePropertyBoolean linkcheckertransformerStripHtmltExtension = default(ConfigNodePropertyBoolean), ConfigNodePropertyArray linkcheckertransformerRewriteElements = default(ConfigNodePropertyArray), ConfigNodePropertyArray linkcheckertransformerStripExtensionPathBlacklist = default(ConfigNodePropertyArray))
        {
            this.LinkcheckertransformerDisableRewriting = linkcheckertransformerDisableRewriting;
            this.LinkcheckertransformerDisableChecking = linkcheckertransformerDisableChecking;
            this.LinkcheckertransformerMapCacheSize = linkcheckertransformerMapCacheSize;
            this.LinkcheckertransformerStrictExtensionCheck = linkcheckertransformerStrictExtensionCheck;
            this.LinkcheckertransformerStripHtmltExtension = linkcheckertransformerStripHtmltExtension;
            this.LinkcheckertransformerRewriteElements = linkcheckertransformerRewriteElements;
            this.LinkcheckertransformerStripExtensionPathBlacklist = linkcheckertransformerStripExtensionPathBlacklist;
        }
        
        /// <summary>
        /// Gets or Sets LinkcheckertransformerDisableRewriting
        /// </summary>
        [DataMember(Name="linkcheckertransformer.disableRewriting", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean LinkcheckertransformerDisableRewriting { get; set; }

        /// <summary>
        /// Gets or Sets LinkcheckertransformerDisableChecking
        /// </summary>
        [DataMember(Name="linkcheckertransformer.disableChecking", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean LinkcheckertransformerDisableChecking { get; set; }

        /// <summary>
        /// Gets or Sets LinkcheckertransformerMapCacheSize
        /// </summary>
        [DataMember(Name="linkcheckertransformer.mapCacheSize", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger LinkcheckertransformerMapCacheSize { get; set; }

        /// <summary>
        /// Gets or Sets LinkcheckertransformerStrictExtensionCheck
        /// </summary>
        [DataMember(Name="linkcheckertransformer.strictExtensionCheck", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean LinkcheckertransformerStrictExtensionCheck { get; set; }

        /// <summary>
        /// Gets or Sets LinkcheckertransformerStripHtmltExtension
        /// </summary>
        [DataMember(Name="linkcheckertransformer.stripHtmltExtension", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean LinkcheckertransformerStripHtmltExtension { get; set; }

        /// <summary>
        /// Gets or Sets LinkcheckertransformerRewriteElements
        /// </summary>
        [DataMember(Name="linkcheckertransformer.rewriteElements", EmitDefaultValue=false)]
        public ConfigNodePropertyArray LinkcheckertransformerRewriteElements { get; set; }

        /// <summary>
        /// Gets or Sets LinkcheckertransformerStripExtensionPathBlacklist
        /// </summary>
        [DataMember(Name="linkcheckertransformer.stripExtensionPathBlacklist", EmitDefaultValue=false)]
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
            return this.Equals(input as ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties);
        }

        /// <summary>
        /// Returns true if ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.LinkcheckertransformerDisableRewriting == input.LinkcheckertransformerDisableRewriting ||
                    (this.LinkcheckertransformerDisableRewriting != null &&
                    this.LinkcheckertransformerDisableRewriting.Equals(input.LinkcheckertransformerDisableRewriting))
                ) && 
                (
                    this.LinkcheckertransformerDisableChecking == input.LinkcheckertransformerDisableChecking ||
                    (this.LinkcheckertransformerDisableChecking != null &&
                    this.LinkcheckertransformerDisableChecking.Equals(input.LinkcheckertransformerDisableChecking))
                ) && 
                (
                    this.LinkcheckertransformerMapCacheSize == input.LinkcheckertransformerMapCacheSize ||
                    (this.LinkcheckertransformerMapCacheSize != null &&
                    this.LinkcheckertransformerMapCacheSize.Equals(input.LinkcheckertransformerMapCacheSize))
                ) && 
                (
                    this.LinkcheckertransformerStrictExtensionCheck == input.LinkcheckertransformerStrictExtensionCheck ||
                    (this.LinkcheckertransformerStrictExtensionCheck != null &&
                    this.LinkcheckertransformerStrictExtensionCheck.Equals(input.LinkcheckertransformerStrictExtensionCheck))
                ) && 
                (
                    this.LinkcheckertransformerStripHtmltExtension == input.LinkcheckertransformerStripHtmltExtension ||
                    (this.LinkcheckertransformerStripHtmltExtension != null &&
                    this.LinkcheckertransformerStripHtmltExtension.Equals(input.LinkcheckertransformerStripHtmltExtension))
                ) && 
                (
                    this.LinkcheckertransformerRewriteElements == input.LinkcheckertransformerRewriteElements ||
                    (this.LinkcheckertransformerRewriteElements != null &&
                    this.LinkcheckertransformerRewriteElements.Equals(input.LinkcheckertransformerRewriteElements))
                ) && 
                (
                    this.LinkcheckertransformerStripExtensionPathBlacklist == input.LinkcheckertransformerStripExtensionPathBlacklist ||
                    (this.LinkcheckertransformerStripExtensionPathBlacklist != null &&
                    this.LinkcheckertransformerStripExtensionPathBlacklist.Equals(input.LinkcheckertransformerStripExtensionPathBlacklist))
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
                if (this.LinkcheckertransformerDisableRewriting != null)
                    hashCode = hashCode * 59 + this.LinkcheckertransformerDisableRewriting.GetHashCode();
                if (this.LinkcheckertransformerDisableChecking != null)
                    hashCode = hashCode * 59 + this.LinkcheckertransformerDisableChecking.GetHashCode();
                if (this.LinkcheckertransformerMapCacheSize != null)
                    hashCode = hashCode * 59 + this.LinkcheckertransformerMapCacheSize.GetHashCode();
                if (this.LinkcheckertransformerStrictExtensionCheck != null)
                    hashCode = hashCode * 59 + this.LinkcheckertransformerStrictExtensionCheck.GetHashCode();
                if (this.LinkcheckertransformerStripHtmltExtension != null)
                    hashCode = hashCode * 59 + this.LinkcheckertransformerStripHtmltExtension.GetHashCode();
                if (this.LinkcheckertransformerRewriteElements != null)
                    hashCode = hashCode * 59 + this.LinkcheckertransformerRewriteElements.GetHashCode();
                if (this.LinkcheckertransformerStripExtensionPathBlacklist != null)
                    hashCode = hashCode * 59 + this.LinkcheckertransformerStripExtensionPathBlacklist.GetHashCode();
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
