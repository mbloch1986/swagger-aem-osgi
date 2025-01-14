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
    /// ComDayCqDamCoreImplJobsMetadataimportAsyncMetadataImportConfigProperties
    /// </summary>
    [DataContract]
    public partial class ComDayCqDamCoreImplJobsMetadataimportAsyncMetadataImportConfigProperties :  IEquatable<ComDayCqDamCoreImplJobsMetadataimportAsyncMetadataImportConfigProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComDayCqDamCoreImplJobsMetadataimportAsyncMetadataImportConfigProperties" /> class.
        /// </summary>
        /// <param name="operation">operation.</param>
        /// <param name="operationIcon">operationIcon.</param>
        /// <param name="topicName">topicName.</param>
        /// <param name="emailEnabled">emailEnabled.</param>
        public ComDayCqDamCoreImplJobsMetadataimportAsyncMetadataImportConfigProperties(ConfigNodePropertyString operation = default(ConfigNodePropertyString), ConfigNodePropertyString operationIcon = default(ConfigNodePropertyString), ConfigNodePropertyString topicName = default(ConfigNodePropertyString), ConfigNodePropertyBoolean emailEnabled = default(ConfigNodePropertyBoolean))
        {
            this.Operation = operation;
            this.OperationIcon = operationIcon;
            this.TopicName = topicName;
            this.EmailEnabled = emailEnabled;
        }
        
        /// <summary>
        /// Gets or Sets Operation
        /// </summary>
        [DataMember(Name="operation", EmitDefaultValue=false)]
        public ConfigNodePropertyString Operation { get; set; }

        /// <summary>
        /// Gets or Sets OperationIcon
        /// </summary>
        [DataMember(Name="operationIcon", EmitDefaultValue=false)]
        public ConfigNodePropertyString OperationIcon { get; set; }

        /// <summary>
        /// Gets or Sets TopicName
        /// </summary>
        [DataMember(Name="topicName", EmitDefaultValue=false)]
        public ConfigNodePropertyString TopicName { get; set; }

        /// <summary>
        /// Gets or Sets EmailEnabled
        /// </summary>
        [DataMember(Name="emailEnabled", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean EmailEnabled { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqDamCoreImplJobsMetadataimportAsyncMetadataImportConfigProperties {\n");
            sb.Append("  Operation: ").Append(Operation).Append("\n");
            sb.Append("  OperationIcon: ").Append(OperationIcon).Append("\n");
            sb.Append("  TopicName: ").Append(TopicName).Append("\n");
            sb.Append("  EmailEnabled: ").Append(EmailEnabled).Append("\n");
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
            return this.Equals(input as ComDayCqDamCoreImplJobsMetadataimportAsyncMetadataImportConfigProperties);
        }

        /// <summary>
        /// Returns true if ComDayCqDamCoreImplJobsMetadataimportAsyncMetadataImportConfigProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComDayCqDamCoreImplJobsMetadataimportAsyncMetadataImportConfigProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqDamCoreImplJobsMetadataimportAsyncMetadataImportConfigProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Operation == input.Operation ||
                    (this.Operation != null &&
                    this.Operation.Equals(input.Operation))
                ) && 
                (
                    this.OperationIcon == input.OperationIcon ||
                    (this.OperationIcon != null &&
                    this.OperationIcon.Equals(input.OperationIcon))
                ) && 
                (
                    this.TopicName == input.TopicName ||
                    (this.TopicName != null &&
                    this.TopicName.Equals(input.TopicName))
                ) && 
                (
                    this.EmailEnabled == input.EmailEnabled ||
                    (this.EmailEnabled != null &&
                    this.EmailEnabled.Equals(input.EmailEnabled))
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
                if (this.Operation != null)
                    hashCode = hashCode * 59 + this.Operation.GetHashCode();
                if (this.OperationIcon != null)
                    hashCode = hashCode * 59 + this.OperationIcon.GetHashCode();
                if (this.TopicName != null)
                    hashCode = hashCode * 59 + this.TopicName.GetHashCode();
                if (this.EmailEnabled != null)
                    hashCode = hashCode * 59 + this.EmailEnabled.GetHashCode();
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
