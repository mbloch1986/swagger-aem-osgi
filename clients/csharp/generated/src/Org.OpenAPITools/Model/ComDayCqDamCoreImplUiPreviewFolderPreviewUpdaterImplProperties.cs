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
    /// ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplProperties
    /// </summary>
    [DataContract]
    public partial class ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplProperties :  IEquatable<ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplProperties" /> class.
        /// </summary>
        /// <param name="createPreviewEnabled">createPreviewEnabled.</param>
        /// <param name="updatePreviewEnabled">updatePreviewEnabled.</param>
        /// <param name="queueSize">queueSize.</param>
        /// <param name="folderPreviewRenditionRegex">folderPreviewRenditionRegex.</param>
        public ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplProperties(ConfigNodePropertyBoolean createPreviewEnabled = default(ConfigNodePropertyBoolean), ConfigNodePropertyBoolean updatePreviewEnabled = default(ConfigNodePropertyBoolean), ConfigNodePropertyInteger queueSize = default(ConfigNodePropertyInteger), ConfigNodePropertyString folderPreviewRenditionRegex = default(ConfigNodePropertyString))
        {
            this.CreatePreviewEnabled = createPreviewEnabled;
            this.UpdatePreviewEnabled = updatePreviewEnabled;
            this.QueueSize = queueSize;
            this.FolderPreviewRenditionRegex = folderPreviewRenditionRegex;
        }
        
        /// <summary>
        /// Gets or Sets CreatePreviewEnabled
        /// </summary>
        [DataMember(Name="createPreviewEnabled", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean CreatePreviewEnabled { get; set; }

        /// <summary>
        /// Gets or Sets UpdatePreviewEnabled
        /// </summary>
        [DataMember(Name="updatePreviewEnabled", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean UpdatePreviewEnabled { get; set; }

        /// <summary>
        /// Gets or Sets QueueSize
        /// </summary>
        [DataMember(Name="queueSize", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger QueueSize { get; set; }

        /// <summary>
        /// Gets or Sets FolderPreviewRenditionRegex
        /// </summary>
        [DataMember(Name="folderPreviewRenditionRegex", EmitDefaultValue=false)]
        public ConfigNodePropertyString FolderPreviewRenditionRegex { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplProperties {\n");
            sb.Append("  CreatePreviewEnabled: ").Append(CreatePreviewEnabled).Append("\n");
            sb.Append("  UpdatePreviewEnabled: ").Append(UpdatePreviewEnabled).Append("\n");
            sb.Append("  QueueSize: ").Append(QueueSize).Append("\n");
            sb.Append("  FolderPreviewRenditionRegex: ").Append(FolderPreviewRenditionRegex).Append("\n");
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
            return this.Equals(input as ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplProperties);
        }

        /// <summary>
        /// Returns true if ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.CreatePreviewEnabled == input.CreatePreviewEnabled ||
                    (this.CreatePreviewEnabled != null &&
                    this.CreatePreviewEnabled.Equals(input.CreatePreviewEnabled))
                ) && 
                (
                    this.UpdatePreviewEnabled == input.UpdatePreviewEnabled ||
                    (this.UpdatePreviewEnabled != null &&
                    this.UpdatePreviewEnabled.Equals(input.UpdatePreviewEnabled))
                ) && 
                (
                    this.QueueSize == input.QueueSize ||
                    (this.QueueSize != null &&
                    this.QueueSize.Equals(input.QueueSize))
                ) && 
                (
                    this.FolderPreviewRenditionRegex == input.FolderPreviewRenditionRegex ||
                    (this.FolderPreviewRenditionRegex != null &&
                    this.FolderPreviewRenditionRegex.Equals(input.FolderPreviewRenditionRegex))
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
                if (this.CreatePreviewEnabled != null)
                    hashCode = hashCode * 59 + this.CreatePreviewEnabled.GetHashCode();
                if (this.UpdatePreviewEnabled != null)
                    hashCode = hashCode * 59 + this.UpdatePreviewEnabled.GetHashCode();
                if (this.QueueSize != null)
                    hashCode = hashCode * 59 + this.QueueSize.GetHashCode();
                if (this.FolderPreviewRenditionRegex != null)
                    hashCode = hashCode * 59 + this.FolderPreviewRenditionRegex.GetHashCode();
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
