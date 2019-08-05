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
    /// ComDayCqWcmMsmImplActionsContentUpdateActionFactoryProperties
    /// </summary>
    [DataContract]
    public partial class ComDayCqWcmMsmImplActionsContentUpdateActionFactoryProperties :  IEquatable<ComDayCqWcmMsmImplActionsContentUpdateActionFactoryProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComDayCqWcmMsmImplActionsContentUpdateActionFactoryProperties" /> class.
        /// </summary>
        /// <param name="cqWcmMsmActionExcludednodetypes">cqWcmMsmActionExcludednodetypes.</param>
        /// <param name="cqWcmMsmActionExcludedparagraphitems">cqWcmMsmActionExcludedparagraphitems.</param>
        /// <param name="cqWcmMsmActionExcludedprops">cqWcmMsmActionExcludedprops.</param>
        /// <param name="cqWcmMsmActionIgnoredMixin">cqWcmMsmActionIgnoredMixin.</param>
        public ComDayCqWcmMsmImplActionsContentUpdateActionFactoryProperties(ConfigNodePropertyArray cqWcmMsmActionExcludednodetypes = default(ConfigNodePropertyArray), ConfigNodePropertyArray cqWcmMsmActionExcludedparagraphitems = default(ConfigNodePropertyArray), ConfigNodePropertyArray cqWcmMsmActionExcludedprops = default(ConfigNodePropertyArray), ConfigNodePropertyArray cqWcmMsmActionIgnoredMixin = default(ConfigNodePropertyArray))
        {
            this.CqWcmMsmActionExcludednodetypes = cqWcmMsmActionExcludednodetypes;
            this.CqWcmMsmActionExcludedparagraphitems = cqWcmMsmActionExcludedparagraphitems;
            this.CqWcmMsmActionExcludedprops = cqWcmMsmActionExcludedprops;
            this.CqWcmMsmActionIgnoredMixin = cqWcmMsmActionIgnoredMixin;
        }
        
        /// <summary>
        /// Gets or Sets CqWcmMsmActionExcludednodetypes
        /// </summary>
        [DataMember(Name="cq.wcm.msm.action.excludednodetypes", EmitDefaultValue=false)]
        public ConfigNodePropertyArray CqWcmMsmActionExcludednodetypes { get; set; }

        /// <summary>
        /// Gets or Sets CqWcmMsmActionExcludedparagraphitems
        /// </summary>
        [DataMember(Name="cq.wcm.msm.action.excludedparagraphitems", EmitDefaultValue=false)]
        public ConfigNodePropertyArray CqWcmMsmActionExcludedparagraphitems { get; set; }

        /// <summary>
        /// Gets or Sets CqWcmMsmActionExcludedprops
        /// </summary>
        [DataMember(Name="cq.wcm.msm.action.excludedprops", EmitDefaultValue=false)]
        public ConfigNodePropertyArray CqWcmMsmActionExcludedprops { get; set; }

        /// <summary>
        /// Gets or Sets CqWcmMsmActionIgnoredMixin
        /// </summary>
        [DataMember(Name="cq.wcm.msm.action.ignoredMixin", EmitDefaultValue=false)]
        public ConfigNodePropertyArray CqWcmMsmActionIgnoredMixin { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqWcmMsmImplActionsContentUpdateActionFactoryProperties {\n");
            sb.Append("  CqWcmMsmActionExcludednodetypes: ").Append(CqWcmMsmActionExcludednodetypes).Append("\n");
            sb.Append("  CqWcmMsmActionExcludedparagraphitems: ").Append(CqWcmMsmActionExcludedparagraphitems).Append("\n");
            sb.Append("  CqWcmMsmActionExcludedprops: ").Append(CqWcmMsmActionExcludedprops).Append("\n");
            sb.Append("  CqWcmMsmActionIgnoredMixin: ").Append(CqWcmMsmActionIgnoredMixin).Append("\n");
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
            return this.Equals(input as ComDayCqWcmMsmImplActionsContentUpdateActionFactoryProperties);
        }

        /// <summary>
        /// Returns true if ComDayCqWcmMsmImplActionsContentUpdateActionFactoryProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComDayCqWcmMsmImplActionsContentUpdateActionFactoryProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqWcmMsmImplActionsContentUpdateActionFactoryProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.CqWcmMsmActionExcludednodetypes == input.CqWcmMsmActionExcludednodetypes ||
                    (this.CqWcmMsmActionExcludednodetypes != null &&
                    this.CqWcmMsmActionExcludednodetypes.Equals(input.CqWcmMsmActionExcludednodetypes))
                ) && 
                (
                    this.CqWcmMsmActionExcludedparagraphitems == input.CqWcmMsmActionExcludedparagraphitems ||
                    (this.CqWcmMsmActionExcludedparagraphitems != null &&
                    this.CqWcmMsmActionExcludedparagraphitems.Equals(input.CqWcmMsmActionExcludedparagraphitems))
                ) && 
                (
                    this.CqWcmMsmActionExcludedprops == input.CqWcmMsmActionExcludedprops ||
                    (this.CqWcmMsmActionExcludedprops != null &&
                    this.CqWcmMsmActionExcludedprops.Equals(input.CqWcmMsmActionExcludedprops))
                ) && 
                (
                    this.CqWcmMsmActionIgnoredMixin == input.CqWcmMsmActionIgnoredMixin ||
                    (this.CqWcmMsmActionIgnoredMixin != null &&
                    this.CqWcmMsmActionIgnoredMixin.Equals(input.CqWcmMsmActionIgnoredMixin))
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
                if (this.CqWcmMsmActionExcludednodetypes != null)
                    hashCode = hashCode * 59 + this.CqWcmMsmActionExcludednodetypes.GetHashCode();
                if (this.CqWcmMsmActionExcludedparagraphitems != null)
                    hashCode = hashCode * 59 + this.CqWcmMsmActionExcludedparagraphitems.GetHashCode();
                if (this.CqWcmMsmActionExcludedprops != null)
                    hashCode = hashCode * 59 + this.CqWcmMsmActionExcludedprops.GetHashCode();
                if (this.CqWcmMsmActionIgnoredMixin != null)
                    hashCode = hashCode * 59 + this.CqWcmMsmActionIgnoredMixin.GetHashCode();
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