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
    /// ComDayCqAnalyticsTestandtargetImplDeleteAuthorActivityListenerProperties
    /// </summary>
    [DataContract]
    public partial class ComDayCqAnalyticsTestandtargetImplDeleteAuthorActivityListenerProperties :  IEquatable<ComDayCqAnalyticsTestandtargetImplDeleteAuthorActivityListenerProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComDayCqAnalyticsTestandtargetImplDeleteAuthorActivityListenerProperties" /> class.
        /// </summary>
        /// <param name="cqAnalyticsTestandtargetDeleteauthoractivitylistenerEnabled">cqAnalyticsTestandtargetDeleteauthoractivitylistenerEnabled.</param>
        public ComDayCqAnalyticsTestandtargetImplDeleteAuthorActivityListenerProperties(ConfigNodePropertyBoolean cqAnalyticsTestandtargetDeleteauthoractivitylistenerEnabled = default(ConfigNodePropertyBoolean))
        {
            this.CqAnalyticsTestandtargetDeleteauthoractivitylistenerEnabled = cqAnalyticsTestandtargetDeleteauthoractivitylistenerEnabled;
        }
        
        /// <summary>
        /// Gets or Sets CqAnalyticsTestandtargetDeleteauthoractivitylistenerEnabled
        /// </summary>
        [DataMember(Name="cq.analytics.testandtarget.deleteauthoractivitylistener.enabled", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean CqAnalyticsTestandtargetDeleteauthoractivitylistenerEnabled { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqAnalyticsTestandtargetImplDeleteAuthorActivityListenerProperties {\n");
            sb.Append("  CqAnalyticsTestandtargetDeleteauthoractivitylistenerEnabled: ").Append(CqAnalyticsTestandtargetDeleteauthoractivitylistenerEnabled).Append("\n");
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
            return this.Equals(input as ComDayCqAnalyticsTestandtargetImplDeleteAuthorActivityListenerProperties);
        }

        /// <summary>
        /// Returns true if ComDayCqAnalyticsTestandtargetImplDeleteAuthorActivityListenerProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComDayCqAnalyticsTestandtargetImplDeleteAuthorActivityListenerProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqAnalyticsTestandtargetImplDeleteAuthorActivityListenerProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.CqAnalyticsTestandtargetDeleteauthoractivitylistenerEnabled == input.CqAnalyticsTestandtargetDeleteauthoractivitylistenerEnabled ||
                    (this.CqAnalyticsTestandtargetDeleteauthoractivitylistenerEnabled != null &&
                    this.CqAnalyticsTestandtargetDeleteauthoractivitylistenerEnabled.Equals(input.CqAnalyticsTestandtargetDeleteauthoractivitylistenerEnabled))
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
                if (this.CqAnalyticsTestandtargetDeleteauthoractivitylistenerEnabled != null)
                    hashCode = hashCode * 59 + this.CqAnalyticsTestandtargetDeleteauthoractivitylistenerEnabled.GetHashCode();
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
