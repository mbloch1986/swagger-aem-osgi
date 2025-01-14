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
    /// OrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties
    /// </summary>
    [DataContract]
    public partial class OrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties :  IEquatable<OrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="OrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties" /> class.
        /// </summary>
        /// <param name="repositoryHome">repositoryHome.</param>
        /// <param name="tarmkMode">tarmkMode.</param>
        /// <param name="tarmkSize">tarmkSize.</param>
        /// <param name="segmentCacheSize">segmentCacheSize.</param>
        /// <param name="stringCacheSize">stringCacheSize.</param>
        /// <param name="templateCacheSize">templateCacheSize.</param>
        /// <param name="stringDeduplicationCacheSize">stringDeduplicationCacheSize.</param>
        /// <param name="templateDeduplicationCacheSize">templateDeduplicationCacheSize.</param>
        /// <param name="nodeDeduplicationCacheSize">nodeDeduplicationCacheSize.</param>
        /// <param name="pauseCompaction">pauseCompaction.</param>
        /// <param name="compactionRetryCount">compactionRetryCount.</param>
        /// <param name="compactionForceTimeout">compactionForceTimeout.</param>
        /// <param name="compactionSizeDeltaEstimation">compactionSizeDeltaEstimation.</param>
        /// <param name="compactionDisableEstimation">compactionDisableEstimation.</param>
        /// <param name="compactionRetainedGenerations">compactionRetainedGenerations.</param>
        /// <param name="compactionMemoryThreshold">compactionMemoryThreshold.</param>
        /// <param name="compactionProgressLog">compactionProgressLog.</param>
        /// <param name="standby">standby.</param>
        /// <param name="customBlobStore">customBlobStore.</param>
        /// <param name="customSegmentStore">customSegmentStore.</param>
        /// <param name="splitPersistence">splitPersistence.</param>
        /// <param name="repositoryBackupDir">repositoryBackupDir.</param>
        /// <param name="blobGcMaxAgeInSecs">blobGcMaxAgeInSecs.</param>
        /// <param name="blobTrackSnapshotIntervalInSecs">blobTrackSnapshotIntervalInSecs.</param>
        /// <param name="role">role.</param>
        /// <param name="registerDescriptors">registerDescriptors.</param>
        /// <param name="dispatchChanges">dispatchChanges.</param>
        public OrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties(ConfigNodePropertyString repositoryHome = default(ConfigNodePropertyString), ConfigNodePropertyString tarmkMode = default(ConfigNodePropertyString), ConfigNodePropertyInteger tarmkSize = default(ConfigNodePropertyInteger), ConfigNodePropertyInteger segmentCacheSize = default(ConfigNodePropertyInteger), ConfigNodePropertyInteger stringCacheSize = default(ConfigNodePropertyInteger), ConfigNodePropertyInteger templateCacheSize = default(ConfigNodePropertyInteger), ConfigNodePropertyInteger stringDeduplicationCacheSize = default(ConfigNodePropertyInteger), ConfigNodePropertyInteger templateDeduplicationCacheSize = default(ConfigNodePropertyInteger), ConfigNodePropertyInteger nodeDeduplicationCacheSize = default(ConfigNodePropertyInteger), ConfigNodePropertyBoolean pauseCompaction = default(ConfigNodePropertyBoolean), ConfigNodePropertyInteger compactionRetryCount = default(ConfigNodePropertyInteger), ConfigNodePropertyInteger compactionForceTimeout = default(ConfigNodePropertyInteger), ConfigNodePropertyInteger compactionSizeDeltaEstimation = default(ConfigNodePropertyInteger), ConfigNodePropertyBoolean compactionDisableEstimation = default(ConfigNodePropertyBoolean), ConfigNodePropertyInteger compactionRetainedGenerations = default(ConfigNodePropertyInteger), ConfigNodePropertyInteger compactionMemoryThreshold = default(ConfigNodePropertyInteger), ConfigNodePropertyInteger compactionProgressLog = default(ConfigNodePropertyInteger), ConfigNodePropertyBoolean standby = default(ConfigNodePropertyBoolean), ConfigNodePropertyBoolean customBlobStore = default(ConfigNodePropertyBoolean), ConfigNodePropertyBoolean customSegmentStore = default(ConfigNodePropertyBoolean), ConfigNodePropertyBoolean splitPersistence = default(ConfigNodePropertyBoolean), ConfigNodePropertyString repositoryBackupDir = default(ConfigNodePropertyString), ConfigNodePropertyInteger blobGcMaxAgeInSecs = default(ConfigNodePropertyInteger), ConfigNodePropertyInteger blobTrackSnapshotIntervalInSecs = default(ConfigNodePropertyInteger), ConfigNodePropertyString role = default(ConfigNodePropertyString), ConfigNodePropertyBoolean registerDescriptors = default(ConfigNodePropertyBoolean), ConfigNodePropertyBoolean dispatchChanges = default(ConfigNodePropertyBoolean))
        {
            this.RepositoryHome = repositoryHome;
            this.TarmkMode = tarmkMode;
            this.TarmkSize = tarmkSize;
            this.SegmentCacheSize = segmentCacheSize;
            this.StringCacheSize = stringCacheSize;
            this.TemplateCacheSize = templateCacheSize;
            this.StringDeduplicationCacheSize = stringDeduplicationCacheSize;
            this.TemplateDeduplicationCacheSize = templateDeduplicationCacheSize;
            this.NodeDeduplicationCacheSize = nodeDeduplicationCacheSize;
            this.PauseCompaction = pauseCompaction;
            this.CompactionRetryCount = compactionRetryCount;
            this.CompactionForceTimeout = compactionForceTimeout;
            this.CompactionSizeDeltaEstimation = compactionSizeDeltaEstimation;
            this.CompactionDisableEstimation = compactionDisableEstimation;
            this.CompactionRetainedGenerations = compactionRetainedGenerations;
            this.CompactionMemoryThreshold = compactionMemoryThreshold;
            this.CompactionProgressLog = compactionProgressLog;
            this.Standby = standby;
            this.CustomBlobStore = customBlobStore;
            this.CustomSegmentStore = customSegmentStore;
            this.SplitPersistence = splitPersistence;
            this.RepositoryBackupDir = repositoryBackupDir;
            this.BlobGcMaxAgeInSecs = blobGcMaxAgeInSecs;
            this.BlobTrackSnapshotIntervalInSecs = blobTrackSnapshotIntervalInSecs;
            this.Role = role;
            this.RegisterDescriptors = registerDescriptors;
            this.DispatchChanges = dispatchChanges;
        }
        
        /// <summary>
        /// Gets or Sets RepositoryHome
        /// </summary>
        [DataMember(Name="repository.home", EmitDefaultValue=false)]
        public ConfigNodePropertyString RepositoryHome { get; set; }

        /// <summary>
        /// Gets or Sets TarmkMode
        /// </summary>
        [DataMember(Name="tarmk.mode", EmitDefaultValue=false)]
        public ConfigNodePropertyString TarmkMode { get; set; }

        /// <summary>
        /// Gets or Sets TarmkSize
        /// </summary>
        [DataMember(Name="tarmk.size", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger TarmkSize { get; set; }

        /// <summary>
        /// Gets or Sets SegmentCacheSize
        /// </summary>
        [DataMember(Name="segmentCache.size", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger SegmentCacheSize { get; set; }

        /// <summary>
        /// Gets or Sets StringCacheSize
        /// </summary>
        [DataMember(Name="stringCache.size", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger StringCacheSize { get; set; }

        /// <summary>
        /// Gets or Sets TemplateCacheSize
        /// </summary>
        [DataMember(Name="templateCache.size", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger TemplateCacheSize { get; set; }

        /// <summary>
        /// Gets or Sets StringDeduplicationCacheSize
        /// </summary>
        [DataMember(Name="stringDeduplicationCache.size", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger StringDeduplicationCacheSize { get; set; }

        /// <summary>
        /// Gets or Sets TemplateDeduplicationCacheSize
        /// </summary>
        [DataMember(Name="templateDeduplicationCache.size", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger TemplateDeduplicationCacheSize { get; set; }

        /// <summary>
        /// Gets or Sets NodeDeduplicationCacheSize
        /// </summary>
        [DataMember(Name="nodeDeduplicationCache.size", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger NodeDeduplicationCacheSize { get; set; }

        /// <summary>
        /// Gets or Sets PauseCompaction
        /// </summary>
        [DataMember(Name="pauseCompaction", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean PauseCompaction { get; set; }

        /// <summary>
        /// Gets or Sets CompactionRetryCount
        /// </summary>
        [DataMember(Name="compaction.retryCount", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger CompactionRetryCount { get; set; }

        /// <summary>
        /// Gets or Sets CompactionForceTimeout
        /// </summary>
        [DataMember(Name="compaction.force.timeout", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger CompactionForceTimeout { get; set; }

        /// <summary>
        /// Gets or Sets CompactionSizeDeltaEstimation
        /// </summary>
        [DataMember(Name="compaction.sizeDeltaEstimation", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger CompactionSizeDeltaEstimation { get; set; }

        /// <summary>
        /// Gets or Sets CompactionDisableEstimation
        /// </summary>
        [DataMember(Name="compaction.disableEstimation", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean CompactionDisableEstimation { get; set; }

        /// <summary>
        /// Gets or Sets CompactionRetainedGenerations
        /// </summary>
        [DataMember(Name="compaction.retainedGenerations", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger CompactionRetainedGenerations { get; set; }

        /// <summary>
        /// Gets or Sets CompactionMemoryThreshold
        /// </summary>
        [DataMember(Name="compaction.memoryThreshold", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger CompactionMemoryThreshold { get; set; }

        /// <summary>
        /// Gets or Sets CompactionProgressLog
        /// </summary>
        [DataMember(Name="compaction.progressLog", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger CompactionProgressLog { get; set; }

        /// <summary>
        /// Gets or Sets Standby
        /// </summary>
        [DataMember(Name="standby", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean Standby { get; set; }

        /// <summary>
        /// Gets or Sets CustomBlobStore
        /// </summary>
        [DataMember(Name="customBlobStore", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean CustomBlobStore { get; set; }

        /// <summary>
        /// Gets or Sets CustomSegmentStore
        /// </summary>
        [DataMember(Name="customSegmentStore", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean CustomSegmentStore { get; set; }

        /// <summary>
        /// Gets or Sets SplitPersistence
        /// </summary>
        [DataMember(Name="splitPersistence", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean SplitPersistence { get; set; }

        /// <summary>
        /// Gets or Sets RepositoryBackupDir
        /// </summary>
        [DataMember(Name="repository.backup.dir", EmitDefaultValue=false)]
        public ConfigNodePropertyString RepositoryBackupDir { get; set; }

        /// <summary>
        /// Gets or Sets BlobGcMaxAgeInSecs
        /// </summary>
        [DataMember(Name="blobGcMaxAgeInSecs", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger BlobGcMaxAgeInSecs { get; set; }

        /// <summary>
        /// Gets or Sets BlobTrackSnapshotIntervalInSecs
        /// </summary>
        [DataMember(Name="blobTrackSnapshotIntervalInSecs", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger BlobTrackSnapshotIntervalInSecs { get; set; }

        /// <summary>
        /// Gets or Sets Role
        /// </summary>
        [DataMember(Name="role", EmitDefaultValue=false)]
        public ConfigNodePropertyString Role { get; set; }

        /// <summary>
        /// Gets or Sets RegisterDescriptors
        /// </summary>
        [DataMember(Name="registerDescriptors", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean RegisterDescriptors { get; set; }

        /// <summary>
        /// Gets or Sets DispatchChanges
        /// </summary>
        [DataMember(Name="dispatchChanges", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean DispatchChanges { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class OrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties {\n");
            sb.Append("  RepositoryHome: ").Append(RepositoryHome).Append("\n");
            sb.Append("  TarmkMode: ").Append(TarmkMode).Append("\n");
            sb.Append("  TarmkSize: ").Append(TarmkSize).Append("\n");
            sb.Append("  SegmentCacheSize: ").Append(SegmentCacheSize).Append("\n");
            sb.Append("  StringCacheSize: ").Append(StringCacheSize).Append("\n");
            sb.Append("  TemplateCacheSize: ").Append(TemplateCacheSize).Append("\n");
            sb.Append("  StringDeduplicationCacheSize: ").Append(StringDeduplicationCacheSize).Append("\n");
            sb.Append("  TemplateDeduplicationCacheSize: ").Append(TemplateDeduplicationCacheSize).Append("\n");
            sb.Append("  NodeDeduplicationCacheSize: ").Append(NodeDeduplicationCacheSize).Append("\n");
            sb.Append("  PauseCompaction: ").Append(PauseCompaction).Append("\n");
            sb.Append("  CompactionRetryCount: ").Append(CompactionRetryCount).Append("\n");
            sb.Append("  CompactionForceTimeout: ").Append(CompactionForceTimeout).Append("\n");
            sb.Append("  CompactionSizeDeltaEstimation: ").Append(CompactionSizeDeltaEstimation).Append("\n");
            sb.Append("  CompactionDisableEstimation: ").Append(CompactionDisableEstimation).Append("\n");
            sb.Append("  CompactionRetainedGenerations: ").Append(CompactionRetainedGenerations).Append("\n");
            sb.Append("  CompactionMemoryThreshold: ").Append(CompactionMemoryThreshold).Append("\n");
            sb.Append("  CompactionProgressLog: ").Append(CompactionProgressLog).Append("\n");
            sb.Append("  Standby: ").Append(Standby).Append("\n");
            sb.Append("  CustomBlobStore: ").Append(CustomBlobStore).Append("\n");
            sb.Append("  CustomSegmentStore: ").Append(CustomSegmentStore).Append("\n");
            sb.Append("  SplitPersistence: ").Append(SplitPersistence).Append("\n");
            sb.Append("  RepositoryBackupDir: ").Append(RepositoryBackupDir).Append("\n");
            sb.Append("  BlobGcMaxAgeInSecs: ").Append(BlobGcMaxAgeInSecs).Append("\n");
            sb.Append("  BlobTrackSnapshotIntervalInSecs: ").Append(BlobTrackSnapshotIntervalInSecs).Append("\n");
            sb.Append("  Role: ").Append(Role).Append("\n");
            sb.Append("  RegisterDescriptors: ").Append(RegisterDescriptors).Append("\n");
            sb.Append("  DispatchChanges: ").Append(DispatchChanges).Append("\n");
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
            return this.Equals(input as OrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties);
        }

        /// <summary>
        /// Returns true if OrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of OrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(OrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.RepositoryHome == input.RepositoryHome ||
                    (this.RepositoryHome != null &&
                    this.RepositoryHome.Equals(input.RepositoryHome))
                ) && 
                (
                    this.TarmkMode == input.TarmkMode ||
                    (this.TarmkMode != null &&
                    this.TarmkMode.Equals(input.TarmkMode))
                ) && 
                (
                    this.TarmkSize == input.TarmkSize ||
                    (this.TarmkSize != null &&
                    this.TarmkSize.Equals(input.TarmkSize))
                ) && 
                (
                    this.SegmentCacheSize == input.SegmentCacheSize ||
                    (this.SegmentCacheSize != null &&
                    this.SegmentCacheSize.Equals(input.SegmentCacheSize))
                ) && 
                (
                    this.StringCacheSize == input.StringCacheSize ||
                    (this.StringCacheSize != null &&
                    this.StringCacheSize.Equals(input.StringCacheSize))
                ) && 
                (
                    this.TemplateCacheSize == input.TemplateCacheSize ||
                    (this.TemplateCacheSize != null &&
                    this.TemplateCacheSize.Equals(input.TemplateCacheSize))
                ) && 
                (
                    this.StringDeduplicationCacheSize == input.StringDeduplicationCacheSize ||
                    (this.StringDeduplicationCacheSize != null &&
                    this.StringDeduplicationCacheSize.Equals(input.StringDeduplicationCacheSize))
                ) && 
                (
                    this.TemplateDeduplicationCacheSize == input.TemplateDeduplicationCacheSize ||
                    (this.TemplateDeduplicationCacheSize != null &&
                    this.TemplateDeduplicationCacheSize.Equals(input.TemplateDeduplicationCacheSize))
                ) && 
                (
                    this.NodeDeduplicationCacheSize == input.NodeDeduplicationCacheSize ||
                    (this.NodeDeduplicationCacheSize != null &&
                    this.NodeDeduplicationCacheSize.Equals(input.NodeDeduplicationCacheSize))
                ) && 
                (
                    this.PauseCompaction == input.PauseCompaction ||
                    (this.PauseCompaction != null &&
                    this.PauseCompaction.Equals(input.PauseCompaction))
                ) && 
                (
                    this.CompactionRetryCount == input.CompactionRetryCount ||
                    (this.CompactionRetryCount != null &&
                    this.CompactionRetryCount.Equals(input.CompactionRetryCount))
                ) && 
                (
                    this.CompactionForceTimeout == input.CompactionForceTimeout ||
                    (this.CompactionForceTimeout != null &&
                    this.CompactionForceTimeout.Equals(input.CompactionForceTimeout))
                ) && 
                (
                    this.CompactionSizeDeltaEstimation == input.CompactionSizeDeltaEstimation ||
                    (this.CompactionSizeDeltaEstimation != null &&
                    this.CompactionSizeDeltaEstimation.Equals(input.CompactionSizeDeltaEstimation))
                ) && 
                (
                    this.CompactionDisableEstimation == input.CompactionDisableEstimation ||
                    (this.CompactionDisableEstimation != null &&
                    this.CompactionDisableEstimation.Equals(input.CompactionDisableEstimation))
                ) && 
                (
                    this.CompactionRetainedGenerations == input.CompactionRetainedGenerations ||
                    (this.CompactionRetainedGenerations != null &&
                    this.CompactionRetainedGenerations.Equals(input.CompactionRetainedGenerations))
                ) && 
                (
                    this.CompactionMemoryThreshold == input.CompactionMemoryThreshold ||
                    (this.CompactionMemoryThreshold != null &&
                    this.CompactionMemoryThreshold.Equals(input.CompactionMemoryThreshold))
                ) && 
                (
                    this.CompactionProgressLog == input.CompactionProgressLog ||
                    (this.CompactionProgressLog != null &&
                    this.CompactionProgressLog.Equals(input.CompactionProgressLog))
                ) && 
                (
                    this.Standby == input.Standby ||
                    (this.Standby != null &&
                    this.Standby.Equals(input.Standby))
                ) && 
                (
                    this.CustomBlobStore == input.CustomBlobStore ||
                    (this.CustomBlobStore != null &&
                    this.CustomBlobStore.Equals(input.CustomBlobStore))
                ) && 
                (
                    this.CustomSegmentStore == input.CustomSegmentStore ||
                    (this.CustomSegmentStore != null &&
                    this.CustomSegmentStore.Equals(input.CustomSegmentStore))
                ) && 
                (
                    this.SplitPersistence == input.SplitPersistence ||
                    (this.SplitPersistence != null &&
                    this.SplitPersistence.Equals(input.SplitPersistence))
                ) && 
                (
                    this.RepositoryBackupDir == input.RepositoryBackupDir ||
                    (this.RepositoryBackupDir != null &&
                    this.RepositoryBackupDir.Equals(input.RepositoryBackupDir))
                ) && 
                (
                    this.BlobGcMaxAgeInSecs == input.BlobGcMaxAgeInSecs ||
                    (this.BlobGcMaxAgeInSecs != null &&
                    this.BlobGcMaxAgeInSecs.Equals(input.BlobGcMaxAgeInSecs))
                ) && 
                (
                    this.BlobTrackSnapshotIntervalInSecs == input.BlobTrackSnapshotIntervalInSecs ||
                    (this.BlobTrackSnapshotIntervalInSecs != null &&
                    this.BlobTrackSnapshotIntervalInSecs.Equals(input.BlobTrackSnapshotIntervalInSecs))
                ) && 
                (
                    this.Role == input.Role ||
                    (this.Role != null &&
                    this.Role.Equals(input.Role))
                ) && 
                (
                    this.RegisterDescriptors == input.RegisterDescriptors ||
                    (this.RegisterDescriptors != null &&
                    this.RegisterDescriptors.Equals(input.RegisterDescriptors))
                ) && 
                (
                    this.DispatchChanges == input.DispatchChanges ||
                    (this.DispatchChanges != null &&
                    this.DispatchChanges.Equals(input.DispatchChanges))
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
                if (this.RepositoryHome != null)
                    hashCode = hashCode * 59 + this.RepositoryHome.GetHashCode();
                if (this.TarmkMode != null)
                    hashCode = hashCode * 59 + this.TarmkMode.GetHashCode();
                if (this.TarmkSize != null)
                    hashCode = hashCode * 59 + this.TarmkSize.GetHashCode();
                if (this.SegmentCacheSize != null)
                    hashCode = hashCode * 59 + this.SegmentCacheSize.GetHashCode();
                if (this.StringCacheSize != null)
                    hashCode = hashCode * 59 + this.StringCacheSize.GetHashCode();
                if (this.TemplateCacheSize != null)
                    hashCode = hashCode * 59 + this.TemplateCacheSize.GetHashCode();
                if (this.StringDeduplicationCacheSize != null)
                    hashCode = hashCode * 59 + this.StringDeduplicationCacheSize.GetHashCode();
                if (this.TemplateDeduplicationCacheSize != null)
                    hashCode = hashCode * 59 + this.TemplateDeduplicationCacheSize.GetHashCode();
                if (this.NodeDeduplicationCacheSize != null)
                    hashCode = hashCode * 59 + this.NodeDeduplicationCacheSize.GetHashCode();
                if (this.PauseCompaction != null)
                    hashCode = hashCode * 59 + this.PauseCompaction.GetHashCode();
                if (this.CompactionRetryCount != null)
                    hashCode = hashCode * 59 + this.CompactionRetryCount.GetHashCode();
                if (this.CompactionForceTimeout != null)
                    hashCode = hashCode * 59 + this.CompactionForceTimeout.GetHashCode();
                if (this.CompactionSizeDeltaEstimation != null)
                    hashCode = hashCode * 59 + this.CompactionSizeDeltaEstimation.GetHashCode();
                if (this.CompactionDisableEstimation != null)
                    hashCode = hashCode * 59 + this.CompactionDisableEstimation.GetHashCode();
                if (this.CompactionRetainedGenerations != null)
                    hashCode = hashCode * 59 + this.CompactionRetainedGenerations.GetHashCode();
                if (this.CompactionMemoryThreshold != null)
                    hashCode = hashCode * 59 + this.CompactionMemoryThreshold.GetHashCode();
                if (this.CompactionProgressLog != null)
                    hashCode = hashCode * 59 + this.CompactionProgressLog.GetHashCode();
                if (this.Standby != null)
                    hashCode = hashCode * 59 + this.Standby.GetHashCode();
                if (this.CustomBlobStore != null)
                    hashCode = hashCode * 59 + this.CustomBlobStore.GetHashCode();
                if (this.CustomSegmentStore != null)
                    hashCode = hashCode * 59 + this.CustomSegmentStore.GetHashCode();
                if (this.SplitPersistence != null)
                    hashCode = hashCode * 59 + this.SplitPersistence.GetHashCode();
                if (this.RepositoryBackupDir != null)
                    hashCode = hashCode * 59 + this.RepositoryBackupDir.GetHashCode();
                if (this.BlobGcMaxAgeInSecs != null)
                    hashCode = hashCode * 59 + this.BlobGcMaxAgeInSecs.GetHashCode();
                if (this.BlobTrackSnapshotIntervalInSecs != null)
                    hashCode = hashCode * 59 + this.BlobTrackSnapshotIntervalInSecs.GetHashCode();
                if (this.Role != null)
                    hashCode = hashCode * 59 + this.Role.GetHashCode();
                if (this.RegisterDescriptors != null)
                    hashCode = hashCode * 59 + this.RegisterDescriptors.GetHashCode();
                if (this.DispatchChanges != null)
                    hashCode = hashCode * 59 + this.DispatchChanges.GetHashCode();
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
