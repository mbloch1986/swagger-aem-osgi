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
    /// ComDayCqWidgetImplWidgetExtensionProviderImplProperties
    /// </summary>
    [DataContract]
    public partial class ComDayCqWidgetImplWidgetExtensionProviderImplProperties :  IEquatable<ComDayCqWidgetImplWidgetExtensionProviderImplProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComDayCqWidgetImplWidgetExtensionProviderImplProperties" /> class.
        /// </summary>
        /// <param name="extendableWidgets">extendableWidgets.</param>
        /// <param name="widgetextensionproviderDebug">widgetextensionproviderDebug.</param>
        public ComDayCqWidgetImplWidgetExtensionProviderImplProperties(ConfigNodePropertyArray extendableWidgets = default(ConfigNodePropertyArray), ConfigNodePropertyBoolean widgetextensionproviderDebug = default(ConfigNodePropertyBoolean))
        {
            this.ExtendableWidgets = extendableWidgets;
            this.WidgetextensionproviderDebug = widgetextensionproviderDebug;
        }
        
        /// <summary>
        /// Gets or Sets ExtendableWidgets
        /// </summary>
        [DataMember(Name="extendable.widgets", EmitDefaultValue=false)]
        public ConfigNodePropertyArray ExtendableWidgets { get; set; }

        /// <summary>
        /// Gets or Sets WidgetextensionproviderDebug
        /// </summary>
        [DataMember(Name="widgetextensionprovider.debug", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean WidgetextensionproviderDebug { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqWidgetImplWidgetExtensionProviderImplProperties {\n");
            sb.Append("  ExtendableWidgets: ").Append(ExtendableWidgets).Append("\n");
            sb.Append("  WidgetextensionproviderDebug: ").Append(WidgetextensionproviderDebug).Append("\n");
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
            return this.Equals(input as ComDayCqWidgetImplWidgetExtensionProviderImplProperties);
        }

        /// <summary>
        /// Returns true if ComDayCqWidgetImplWidgetExtensionProviderImplProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComDayCqWidgetImplWidgetExtensionProviderImplProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqWidgetImplWidgetExtensionProviderImplProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.ExtendableWidgets == input.ExtendableWidgets ||
                    (this.ExtendableWidgets != null &&
                    this.ExtendableWidgets.Equals(input.ExtendableWidgets))
                ) && 
                (
                    this.WidgetextensionproviderDebug == input.WidgetextensionproviderDebug ||
                    (this.WidgetextensionproviderDebug != null &&
                    this.WidgetextensionproviderDebug.Equals(input.WidgetextensionproviderDebug))
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
                if (this.ExtendableWidgets != null)
                    hashCode = hashCode * 59 + this.ExtendableWidgets.GetHashCode();
                if (this.WidgetextensionproviderDebug != null)
                    hashCode = hashCode * 59 + this.WidgetextensionproviderDebug.GetHashCode();
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