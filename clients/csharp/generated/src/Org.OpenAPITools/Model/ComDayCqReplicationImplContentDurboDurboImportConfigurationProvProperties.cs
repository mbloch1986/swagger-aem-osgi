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
    /// ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties
    /// </summary>
    [DataContract]
    public partial class ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties :  IEquatable<ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties" /> class.
        /// </summary>
        /// <param name="preserveHierarchyNodes">preserveHierarchyNodes.</param>
        /// <param name="ignoreVersioning">ignoreVersioning.</param>
        /// <param name="importAcl">importAcl.</param>
        /// <param name="saveThreshold">saveThreshold.</param>
        /// <param name="preserveUserPaths">preserveUserPaths.</param>
        /// <param name="preserveUuid">preserveUuid.</param>
        /// <param name="preserveUuidNodetypes">preserveUuidNodetypes.</param>
        /// <param name="preserveUuidSubtrees">preserveUuidSubtrees.</param>
        /// <param name="autoCommit">autoCommit.</param>
        public ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties(ConfigNodePropertyBoolean preserveHierarchyNodes = default(ConfigNodePropertyBoolean), ConfigNodePropertyBoolean ignoreVersioning = default(ConfigNodePropertyBoolean), ConfigNodePropertyBoolean importAcl = default(ConfigNodePropertyBoolean), ConfigNodePropertyInteger saveThreshold = default(ConfigNodePropertyInteger), ConfigNodePropertyBoolean preserveUserPaths = default(ConfigNodePropertyBoolean), ConfigNodePropertyBoolean preserveUuid = default(ConfigNodePropertyBoolean), ConfigNodePropertyArray preserveUuidNodetypes = default(ConfigNodePropertyArray), ConfigNodePropertyArray preserveUuidSubtrees = default(ConfigNodePropertyArray), ConfigNodePropertyBoolean autoCommit = default(ConfigNodePropertyBoolean))
        {
            this.PreserveHierarchyNodes = preserveHierarchyNodes;
            this.IgnoreVersioning = ignoreVersioning;
            this.ImportAcl = importAcl;
            this.SaveThreshold = saveThreshold;
            this.PreserveUserPaths = preserveUserPaths;
            this.PreserveUuid = preserveUuid;
            this.PreserveUuidNodetypes = preserveUuidNodetypes;
            this.PreserveUuidSubtrees = preserveUuidSubtrees;
            this.AutoCommit = autoCommit;
        }
        
        /// <summary>
        /// Gets or Sets PreserveHierarchyNodes
        /// </summary>
        [DataMember(Name="preserve.hierarchy.nodes", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean PreserveHierarchyNodes { get; set; }

        /// <summary>
        /// Gets or Sets IgnoreVersioning
        /// </summary>
        [DataMember(Name="ignore.versioning", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean IgnoreVersioning { get; set; }

        /// <summary>
        /// Gets or Sets ImportAcl
        /// </summary>
        [DataMember(Name="import.acl", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean ImportAcl { get; set; }

        /// <summary>
        /// Gets or Sets SaveThreshold
        /// </summary>
        [DataMember(Name="save.threshold", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger SaveThreshold { get; set; }

        /// <summary>
        /// Gets or Sets PreserveUserPaths
        /// </summary>
        [DataMember(Name="preserve.user.paths", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean PreserveUserPaths { get; set; }

        /// <summary>
        /// Gets or Sets PreserveUuid
        /// </summary>
        [DataMember(Name="preserve.uuid", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean PreserveUuid { get; set; }

        /// <summary>
        /// Gets or Sets PreserveUuidNodetypes
        /// </summary>
        [DataMember(Name="preserve.uuid.nodetypes", EmitDefaultValue=false)]
        public ConfigNodePropertyArray PreserveUuidNodetypes { get; set; }

        /// <summary>
        /// Gets or Sets PreserveUuidSubtrees
        /// </summary>
        [DataMember(Name="preserve.uuid.subtrees", EmitDefaultValue=false)]
        public ConfigNodePropertyArray PreserveUuidSubtrees { get; set; }

        /// <summary>
        /// Gets or Sets AutoCommit
        /// </summary>
        [DataMember(Name="auto.commit", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean AutoCommit { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties {\n");
            sb.Append("  PreserveHierarchyNodes: ").Append(PreserveHierarchyNodes).Append("\n");
            sb.Append("  IgnoreVersioning: ").Append(IgnoreVersioning).Append("\n");
            sb.Append("  ImportAcl: ").Append(ImportAcl).Append("\n");
            sb.Append("  SaveThreshold: ").Append(SaveThreshold).Append("\n");
            sb.Append("  PreserveUserPaths: ").Append(PreserveUserPaths).Append("\n");
            sb.Append("  PreserveUuid: ").Append(PreserveUuid).Append("\n");
            sb.Append("  PreserveUuidNodetypes: ").Append(PreserveUuidNodetypes).Append("\n");
            sb.Append("  PreserveUuidSubtrees: ").Append(PreserveUuidSubtrees).Append("\n");
            sb.Append("  AutoCommit: ").Append(AutoCommit).Append("\n");
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
            return this.Equals(input as ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties);
        }

        /// <summary>
        /// Returns true if ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.PreserveHierarchyNodes == input.PreserveHierarchyNodes ||
                    (this.PreserveHierarchyNodes != null &&
                    this.PreserveHierarchyNodes.Equals(input.PreserveHierarchyNodes))
                ) && 
                (
                    this.IgnoreVersioning == input.IgnoreVersioning ||
                    (this.IgnoreVersioning != null &&
                    this.IgnoreVersioning.Equals(input.IgnoreVersioning))
                ) && 
                (
                    this.ImportAcl == input.ImportAcl ||
                    (this.ImportAcl != null &&
                    this.ImportAcl.Equals(input.ImportAcl))
                ) && 
                (
                    this.SaveThreshold == input.SaveThreshold ||
                    (this.SaveThreshold != null &&
                    this.SaveThreshold.Equals(input.SaveThreshold))
                ) && 
                (
                    this.PreserveUserPaths == input.PreserveUserPaths ||
                    (this.PreserveUserPaths != null &&
                    this.PreserveUserPaths.Equals(input.PreserveUserPaths))
                ) && 
                (
                    this.PreserveUuid == input.PreserveUuid ||
                    (this.PreserveUuid != null &&
                    this.PreserveUuid.Equals(input.PreserveUuid))
                ) && 
                (
                    this.PreserveUuidNodetypes == input.PreserveUuidNodetypes ||
                    (this.PreserveUuidNodetypes != null &&
                    this.PreserveUuidNodetypes.Equals(input.PreserveUuidNodetypes))
                ) && 
                (
                    this.PreserveUuidSubtrees == input.PreserveUuidSubtrees ||
                    (this.PreserveUuidSubtrees != null &&
                    this.PreserveUuidSubtrees.Equals(input.PreserveUuidSubtrees))
                ) && 
                (
                    this.AutoCommit == input.AutoCommit ||
                    (this.AutoCommit != null &&
                    this.AutoCommit.Equals(input.AutoCommit))
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
                if (this.PreserveHierarchyNodes != null)
                    hashCode = hashCode * 59 + this.PreserveHierarchyNodes.GetHashCode();
                if (this.IgnoreVersioning != null)
                    hashCode = hashCode * 59 + this.IgnoreVersioning.GetHashCode();
                if (this.ImportAcl != null)
                    hashCode = hashCode * 59 + this.ImportAcl.GetHashCode();
                if (this.SaveThreshold != null)
                    hashCode = hashCode * 59 + this.SaveThreshold.GetHashCode();
                if (this.PreserveUserPaths != null)
                    hashCode = hashCode * 59 + this.PreserveUserPaths.GetHashCode();
                if (this.PreserveUuid != null)
                    hashCode = hashCode * 59 + this.PreserveUuid.GetHashCode();
                if (this.PreserveUuidNodetypes != null)
                    hashCode = hashCode * 59 + this.PreserveUuidNodetypes.GetHashCode();
                if (this.PreserveUuidSubtrees != null)
                    hashCode = hashCode * 59 + this.PreserveUuidSubtrees.GetHashCode();
                if (this.AutoCommit != null)
                    hashCode = hashCode * 59 + this.AutoCommit.GetHashCode();
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