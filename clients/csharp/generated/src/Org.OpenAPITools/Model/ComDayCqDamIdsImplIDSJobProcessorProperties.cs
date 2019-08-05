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
    /// ComDayCqDamIdsImplIDSJobProcessorProperties
    /// </summary>
    [DataContract]
    public partial class ComDayCqDamIdsImplIDSJobProcessorProperties :  IEquatable<ComDayCqDamIdsImplIDSJobProcessorProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComDayCqDamIdsImplIDSJobProcessorProperties" /> class.
        /// </summary>
        /// <param name="enableMultisession">enableMultisession.</param>
        /// <param name="idsCcEnable">idsCcEnable.</param>
        /// <param name="enableRetry">enableRetry.</param>
        /// <param name="enableRetryScripterror">enableRetryScripterror.</param>
        /// <param name="externalizerDomainCqhost">externalizerDomainCqhost.</param>
        /// <param name="externalizerDomainHttp">externalizerDomainHttp.</param>
        public ComDayCqDamIdsImplIDSJobProcessorProperties(ConfigNodePropertyBoolean enableMultisession = default(ConfigNodePropertyBoolean), ConfigNodePropertyBoolean idsCcEnable = default(ConfigNodePropertyBoolean), ConfigNodePropertyBoolean enableRetry = default(ConfigNodePropertyBoolean), ConfigNodePropertyBoolean enableRetryScripterror = default(ConfigNodePropertyBoolean), ConfigNodePropertyString externalizerDomainCqhost = default(ConfigNodePropertyString), ConfigNodePropertyString externalizerDomainHttp = default(ConfigNodePropertyString))
        {
            this.EnableMultisession = enableMultisession;
            this.IdsCcEnable = idsCcEnable;
            this.EnableRetry = enableRetry;
            this.EnableRetryScripterror = enableRetryScripterror;
            this.ExternalizerDomainCqhost = externalizerDomainCqhost;
            this.ExternalizerDomainHttp = externalizerDomainHttp;
        }
        
        /// <summary>
        /// Gets or Sets EnableMultisession
        /// </summary>
        [DataMember(Name="enable.multisession", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean EnableMultisession { get; set; }

        /// <summary>
        /// Gets or Sets IdsCcEnable
        /// </summary>
        [DataMember(Name="ids.cc.enable", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean IdsCcEnable { get; set; }

        /// <summary>
        /// Gets or Sets EnableRetry
        /// </summary>
        [DataMember(Name="enable.retry", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean EnableRetry { get; set; }

        /// <summary>
        /// Gets or Sets EnableRetryScripterror
        /// </summary>
        [DataMember(Name="enable.retry.scripterror", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean EnableRetryScripterror { get; set; }

        /// <summary>
        /// Gets or Sets ExternalizerDomainCqhost
        /// </summary>
        [DataMember(Name="externalizer.domain.cqhost", EmitDefaultValue=false)]
        public ConfigNodePropertyString ExternalizerDomainCqhost { get; set; }

        /// <summary>
        /// Gets or Sets ExternalizerDomainHttp
        /// </summary>
        [DataMember(Name="externalizer.domain.http", EmitDefaultValue=false)]
        public ConfigNodePropertyString ExternalizerDomainHttp { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqDamIdsImplIDSJobProcessorProperties {\n");
            sb.Append("  EnableMultisession: ").Append(EnableMultisession).Append("\n");
            sb.Append("  IdsCcEnable: ").Append(IdsCcEnable).Append("\n");
            sb.Append("  EnableRetry: ").Append(EnableRetry).Append("\n");
            sb.Append("  EnableRetryScripterror: ").Append(EnableRetryScripterror).Append("\n");
            sb.Append("  ExternalizerDomainCqhost: ").Append(ExternalizerDomainCqhost).Append("\n");
            sb.Append("  ExternalizerDomainHttp: ").Append(ExternalizerDomainHttp).Append("\n");
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
            return this.Equals(input as ComDayCqDamIdsImplIDSJobProcessorProperties);
        }

        /// <summary>
        /// Returns true if ComDayCqDamIdsImplIDSJobProcessorProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComDayCqDamIdsImplIDSJobProcessorProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqDamIdsImplIDSJobProcessorProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.EnableMultisession == input.EnableMultisession ||
                    (this.EnableMultisession != null &&
                    this.EnableMultisession.Equals(input.EnableMultisession))
                ) && 
                (
                    this.IdsCcEnable == input.IdsCcEnable ||
                    (this.IdsCcEnable != null &&
                    this.IdsCcEnable.Equals(input.IdsCcEnable))
                ) && 
                (
                    this.EnableRetry == input.EnableRetry ||
                    (this.EnableRetry != null &&
                    this.EnableRetry.Equals(input.EnableRetry))
                ) && 
                (
                    this.EnableRetryScripterror == input.EnableRetryScripterror ||
                    (this.EnableRetryScripterror != null &&
                    this.EnableRetryScripterror.Equals(input.EnableRetryScripterror))
                ) && 
                (
                    this.ExternalizerDomainCqhost == input.ExternalizerDomainCqhost ||
                    (this.ExternalizerDomainCqhost != null &&
                    this.ExternalizerDomainCqhost.Equals(input.ExternalizerDomainCqhost))
                ) && 
                (
                    this.ExternalizerDomainHttp == input.ExternalizerDomainHttp ||
                    (this.ExternalizerDomainHttp != null &&
                    this.ExternalizerDomainHttp.Equals(input.ExternalizerDomainHttp))
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
                if (this.EnableMultisession != null)
                    hashCode = hashCode * 59 + this.EnableMultisession.GetHashCode();
                if (this.IdsCcEnable != null)
                    hashCode = hashCode * 59 + this.IdsCcEnable.GetHashCode();
                if (this.EnableRetry != null)
                    hashCode = hashCode * 59 + this.EnableRetry.GetHashCode();
                if (this.EnableRetryScripterror != null)
                    hashCode = hashCode * 59 + this.EnableRetryScripterror.GetHashCode();
                if (this.ExternalizerDomainCqhost != null)
                    hashCode = hashCode * 59 + this.ExternalizerDomainCqhost.GetHashCode();
                if (this.ExternalizerDomainHttp != null)
                    hashCode = hashCode * 59 + this.ExternalizerDomainHttp.GetHashCode();
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