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
    /// ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties
    /// </summary>
    [DataContract]
    public partial class ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties :  IEquatable<ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties" /> class.
        /// </summary>
        /// <param name="eventFilter">eventFilter.</param>
        /// <param name="minThreadPoolSize">minThreadPoolSize.</param>
        /// <param name="maxThreadPoolSize">maxThreadPoolSize.</param>
        /// <param name="cqWcmWorkflowTerminateOnActivate">cqWcmWorkflowTerminateOnActivate.</param>
        /// <param name="cqWcmWorklfowTerminateExclusionList">cqWcmWorklfowTerminateExclusionList.</param>
        public ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties(ConfigNodePropertyString eventFilter = default(ConfigNodePropertyString), ConfigNodePropertyInteger minThreadPoolSize = default(ConfigNodePropertyInteger), ConfigNodePropertyInteger maxThreadPoolSize = default(ConfigNodePropertyInteger), ConfigNodePropertyBoolean cqWcmWorkflowTerminateOnActivate = default(ConfigNodePropertyBoolean), ConfigNodePropertyArray cqWcmWorklfowTerminateExclusionList = default(ConfigNodePropertyArray))
        {
            this.EventFilter = eventFilter;
            this.MinThreadPoolSize = minThreadPoolSize;
            this.MaxThreadPoolSize = maxThreadPoolSize;
            this.CqWcmWorkflowTerminateOnActivate = cqWcmWorkflowTerminateOnActivate;
            this.CqWcmWorklfowTerminateExclusionList = cqWcmWorklfowTerminateExclusionList;
        }
        
        /// <summary>
        /// Gets or Sets EventFilter
        /// </summary>
        [DataMember(Name="event.filter", EmitDefaultValue=false)]
        public ConfigNodePropertyString EventFilter { get; set; }

        /// <summary>
        /// Gets or Sets MinThreadPoolSize
        /// </summary>
        [DataMember(Name="minThreadPoolSize", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger MinThreadPoolSize { get; set; }

        /// <summary>
        /// Gets or Sets MaxThreadPoolSize
        /// </summary>
        [DataMember(Name="maxThreadPoolSize", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger MaxThreadPoolSize { get; set; }

        /// <summary>
        /// Gets or Sets CqWcmWorkflowTerminateOnActivate
        /// </summary>
        [DataMember(Name="cq.wcm.workflow.terminate.on.activate", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean CqWcmWorkflowTerminateOnActivate { get; set; }

        /// <summary>
        /// Gets or Sets CqWcmWorklfowTerminateExclusionList
        /// </summary>
        [DataMember(Name="cq.wcm.worklfow.terminate.exclusion.list", EmitDefaultValue=false)]
        public ConfigNodePropertyArray CqWcmWorklfowTerminateExclusionList { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties {\n");
            sb.Append("  EventFilter: ").Append(EventFilter).Append("\n");
            sb.Append("  MinThreadPoolSize: ").Append(MinThreadPoolSize).Append("\n");
            sb.Append("  MaxThreadPoolSize: ").Append(MaxThreadPoolSize).Append("\n");
            sb.Append("  CqWcmWorkflowTerminateOnActivate: ").Append(CqWcmWorkflowTerminateOnActivate).Append("\n");
            sb.Append("  CqWcmWorklfowTerminateExclusionList: ").Append(CqWcmWorklfowTerminateExclusionList).Append("\n");
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
            return this.Equals(input as ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties);
        }

        /// <summary>
        /// Returns true if ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.EventFilter == input.EventFilter ||
                    (this.EventFilter != null &&
                    this.EventFilter.Equals(input.EventFilter))
                ) && 
                (
                    this.MinThreadPoolSize == input.MinThreadPoolSize ||
                    (this.MinThreadPoolSize != null &&
                    this.MinThreadPoolSize.Equals(input.MinThreadPoolSize))
                ) && 
                (
                    this.MaxThreadPoolSize == input.MaxThreadPoolSize ||
                    (this.MaxThreadPoolSize != null &&
                    this.MaxThreadPoolSize.Equals(input.MaxThreadPoolSize))
                ) && 
                (
                    this.CqWcmWorkflowTerminateOnActivate == input.CqWcmWorkflowTerminateOnActivate ||
                    (this.CqWcmWorkflowTerminateOnActivate != null &&
                    this.CqWcmWorkflowTerminateOnActivate.Equals(input.CqWcmWorkflowTerminateOnActivate))
                ) && 
                (
                    this.CqWcmWorklfowTerminateExclusionList == input.CqWcmWorklfowTerminateExclusionList ||
                    (this.CqWcmWorklfowTerminateExclusionList != null &&
                    this.CqWcmWorklfowTerminateExclusionList.Equals(input.CqWcmWorklfowTerminateExclusionList))
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
                if (this.EventFilter != null)
                    hashCode = hashCode * 59 + this.EventFilter.GetHashCode();
                if (this.MinThreadPoolSize != null)
                    hashCode = hashCode * 59 + this.MinThreadPoolSize.GetHashCode();
                if (this.MaxThreadPoolSize != null)
                    hashCode = hashCode * 59 + this.MaxThreadPoolSize.GetHashCode();
                if (this.CqWcmWorkflowTerminateOnActivate != null)
                    hashCode = hashCode * 59 + this.CqWcmWorkflowTerminateOnActivate.GetHashCode();
                if (this.CqWcmWorklfowTerminateExclusionList != null)
                    hashCode = hashCode * 59 + this.CqWcmWorklfowTerminateExclusionList.GetHashCode();
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
