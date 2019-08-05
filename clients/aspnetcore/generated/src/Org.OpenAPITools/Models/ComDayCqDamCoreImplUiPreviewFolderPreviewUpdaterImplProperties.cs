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
    public partial class ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplProperties : IEquatable<ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplProperties>
    { 
        /// <summary>
        /// Gets or Sets CreatePreviewEnabled
        /// </summary>
        [DataMember(Name="createPreviewEnabled")]
        public ConfigNodePropertyBoolean CreatePreviewEnabled { get; set; }

        /// <summary>
        /// Gets or Sets UpdatePreviewEnabled
        /// </summary>
        [DataMember(Name="updatePreviewEnabled")]
        public ConfigNodePropertyBoolean UpdatePreviewEnabled { get; set; }

        /// <summary>
        /// Gets or Sets QueueSize
        /// </summary>
        [DataMember(Name="queueSize")]
        public ConfigNodePropertyInteger QueueSize { get; set; }

        /// <summary>
        /// Gets or Sets FolderPreviewRenditionRegex
        /// </summary>
        [DataMember(Name="folderPreviewRenditionRegex")]
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
            return obj.GetType() == GetType() && Equals((ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplProperties)obj);
        }

        /// <summary>
        /// Returns true if ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    CreatePreviewEnabled == other.CreatePreviewEnabled ||
                    CreatePreviewEnabled != null &&
                    CreatePreviewEnabled.Equals(other.CreatePreviewEnabled)
                ) && 
                (
                    UpdatePreviewEnabled == other.UpdatePreviewEnabled ||
                    UpdatePreviewEnabled != null &&
                    UpdatePreviewEnabled.Equals(other.UpdatePreviewEnabled)
                ) && 
                (
                    QueueSize == other.QueueSize ||
                    QueueSize != null &&
                    QueueSize.Equals(other.QueueSize)
                ) && 
                (
                    FolderPreviewRenditionRegex == other.FolderPreviewRenditionRegex ||
                    FolderPreviewRenditionRegex != null &&
                    FolderPreviewRenditionRegex.Equals(other.FolderPreviewRenditionRegex)
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
                    if (CreatePreviewEnabled != null)
                    hashCode = hashCode * 59 + CreatePreviewEnabled.GetHashCode();
                    if (UpdatePreviewEnabled != null)
                    hashCode = hashCode * 59 + UpdatePreviewEnabled.GetHashCode();
                    if (QueueSize != null)
                    hashCode = hashCode * 59 + QueueSize.GetHashCode();
                    if (FolderPreviewRenditionRegex != null)
                    hashCode = hashCode * 59 + FolderPreviewRenditionRegex.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplProperties left, ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplProperties left, ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}