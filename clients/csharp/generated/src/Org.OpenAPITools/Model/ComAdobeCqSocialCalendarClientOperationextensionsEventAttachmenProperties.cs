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
    /// ComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenProperties
    /// </summary>
    [DataContract]
    public partial class ComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenProperties :  IEquatable<ComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenProperties" /> class.
        /// </summary>
        /// <param name="attachmentTypeBlacklist">attachmentTypeBlacklist.</param>
        /// <param name="extensionOrder">extensionOrder.</param>
        public ComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenProperties(ConfigNodePropertyString attachmentTypeBlacklist = default(ConfigNodePropertyString), ConfigNodePropertyInteger extensionOrder = default(ConfigNodePropertyInteger))
        {
            this.AttachmentTypeBlacklist = attachmentTypeBlacklist;
            this.ExtensionOrder = extensionOrder;
        }
        
        /// <summary>
        /// Gets or Sets AttachmentTypeBlacklist
        /// </summary>
        [DataMember(Name="attachmentTypeBlacklist", EmitDefaultValue=false)]
        public ConfigNodePropertyString AttachmentTypeBlacklist { get; set; }

        /// <summary>
        /// Gets or Sets ExtensionOrder
        /// </summary>
        [DataMember(Name="extension.order", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger ExtensionOrder { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenProperties {\n");
            sb.Append("  AttachmentTypeBlacklist: ").Append(AttachmentTypeBlacklist).Append("\n");
            sb.Append("  ExtensionOrder: ").Append(ExtensionOrder).Append("\n");
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
            return this.Equals(input as ComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenProperties);
        }

        /// <summary>
        /// Returns true if ComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.AttachmentTypeBlacklist == input.AttachmentTypeBlacklist ||
                    (this.AttachmentTypeBlacklist != null &&
                    this.AttachmentTypeBlacklist.Equals(input.AttachmentTypeBlacklist))
                ) && 
                (
                    this.ExtensionOrder == input.ExtensionOrder ||
                    (this.ExtensionOrder != null &&
                    this.ExtensionOrder.Equals(input.ExtensionOrder))
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
                if (this.AttachmentTypeBlacklist != null)
                    hashCode = hashCode * 59 + this.AttachmentTypeBlacklist.GetHashCode();
                if (this.ExtensionOrder != null)
                    hashCode = hashCode * 59 + this.ExtensionOrder.GetHashCode();
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