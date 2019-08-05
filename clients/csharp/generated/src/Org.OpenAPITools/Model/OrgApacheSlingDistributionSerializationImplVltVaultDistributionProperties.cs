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
    /// OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties
    /// </summary>
    [DataContract]
    public partial class OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties :  IEquatable<OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties" /> class.
        /// </summary>
        /// <param name="name">name.</param>
        /// <param name="type">type.</param>
        /// <param name="importMode">importMode.</param>
        /// <param name="aclHandling">aclHandling.</param>
        /// <param name="packageRoots">packageRoots.</param>
        /// <param name="packageFilters">packageFilters.</param>
        /// <param name="propertyFilters">propertyFilters.</param>
        /// <param name="tempFsFolder">tempFsFolder.</param>
        /// <param name="useBinaryReferences">useBinaryReferences.</param>
        /// <param name="autoSaveThreshold">autoSaveThreshold.</param>
        /// <param name="cleanupDelay">cleanupDelay.</param>
        /// <param name="fileThreshold">fileThreshold.</param>
        /// <param name="mEGABYTES">mEGABYTES.</param>
        /// <param name="useOffHeapMemory">useOffHeapMemory.</param>
        /// <param name="digestAlgorithm">digestAlgorithm.</param>
        /// <param name="monitoringQueueSize">monitoringQueueSize.</param>
        /// <param name="pathsMapping">pathsMapping.</param>
        /// <param name="strictImport">strictImport.</param>
        public OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties(ConfigNodePropertyString name = default(ConfigNodePropertyString), ConfigNodePropertyDropDown type = default(ConfigNodePropertyDropDown), ConfigNodePropertyString importMode = default(ConfigNodePropertyString), ConfigNodePropertyString aclHandling = default(ConfigNodePropertyString), ConfigNodePropertyString packageRoots = default(ConfigNodePropertyString), ConfigNodePropertyArray packageFilters = default(ConfigNodePropertyArray), ConfigNodePropertyArray propertyFilters = default(ConfigNodePropertyArray), ConfigNodePropertyString tempFsFolder = default(ConfigNodePropertyString), ConfigNodePropertyBoolean useBinaryReferences = default(ConfigNodePropertyBoolean), ConfigNodePropertyInteger autoSaveThreshold = default(ConfigNodePropertyInteger), ConfigNodePropertyInteger cleanupDelay = default(ConfigNodePropertyInteger), ConfigNodePropertyInteger fileThreshold = default(ConfigNodePropertyInteger), ConfigNodePropertyDropDown mEGABYTES = default(ConfigNodePropertyDropDown), ConfigNodePropertyBoolean useOffHeapMemory = default(ConfigNodePropertyBoolean), ConfigNodePropertyDropDown digestAlgorithm = default(ConfigNodePropertyDropDown), ConfigNodePropertyInteger monitoringQueueSize = default(ConfigNodePropertyInteger), ConfigNodePropertyArray pathsMapping = default(ConfigNodePropertyArray), ConfigNodePropertyBoolean strictImport = default(ConfigNodePropertyBoolean))
        {
            this.Name = name;
            this.Type = type;
            this.ImportMode = importMode;
            this.AclHandling = aclHandling;
            this.PackageRoots = packageRoots;
            this.PackageFilters = packageFilters;
            this.PropertyFilters = propertyFilters;
            this.TempFsFolder = tempFsFolder;
            this.UseBinaryReferences = useBinaryReferences;
            this.AutoSaveThreshold = autoSaveThreshold;
            this.CleanupDelay = cleanupDelay;
            this.FileThreshold = fileThreshold;
            this.MEGA_BYTES = mEGABYTES;
            this.UseOffHeapMemory = useOffHeapMemory;
            this.DigestAlgorithm = digestAlgorithm;
            this.MonitoringQueueSize = monitoringQueueSize;
            this.PathsMapping = pathsMapping;
            this.StrictImport = strictImport;
        }
        
        /// <summary>
        /// Gets or Sets Name
        /// </summary>
        [DataMember(Name="name", EmitDefaultValue=false)]
        public ConfigNodePropertyString Name { get; set; }

        /// <summary>
        /// Gets or Sets Type
        /// </summary>
        [DataMember(Name="type", EmitDefaultValue=false)]
        public ConfigNodePropertyDropDown Type { get; set; }

        /// <summary>
        /// Gets or Sets ImportMode
        /// </summary>
        [DataMember(Name="importMode", EmitDefaultValue=false)]
        public ConfigNodePropertyString ImportMode { get; set; }

        /// <summary>
        /// Gets or Sets AclHandling
        /// </summary>
        [DataMember(Name="aclHandling", EmitDefaultValue=false)]
        public ConfigNodePropertyString AclHandling { get; set; }

        /// <summary>
        /// Gets or Sets PackageRoots
        /// </summary>
        [DataMember(Name="package.roots", EmitDefaultValue=false)]
        public ConfigNodePropertyString PackageRoots { get; set; }

        /// <summary>
        /// Gets or Sets PackageFilters
        /// </summary>
        [DataMember(Name="package.filters", EmitDefaultValue=false)]
        public ConfigNodePropertyArray PackageFilters { get; set; }

        /// <summary>
        /// Gets or Sets PropertyFilters
        /// </summary>
        [DataMember(Name="property.filters", EmitDefaultValue=false)]
        public ConfigNodePropertyArray PropertyFilters { get; set; }

        /// <summary>
        /// Gets or Sets TempFsFolder
        /// </summary>
        [DataMember(Name="tempFsFolder", EmitDefaultValue=false)]
        public ConfigNodePropertyString TempFsFolder { get; set; }

        /// <summary>
        /// Gets or Sets UseBinaryReferences
        /// </summary>
        [DataMember(Name="useBinaryReferences", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean UseBinaryReferences { get; set; }

        /// <summary>
        /// Gets or Sets AutoSaveThreshold
        /// </summary>
        [DataMember(Name="autoSaveThreshold", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger AutoSaveThreshold { get; set; }

        /// <summary>
        /// Gets or Sets CleanupDelay
        /// </summary>
        [DataMember(Name="cleanupDelay", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger CleanupDelay { get; set; }

        /// <summary>
        /// Gets or Sets FileThreshold
        /// </summary>
        [DataMember(Name="fileThreshold", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger FileThreshold { get; set; }

        /// <summary>
        /// Gets or Sets MEGA_BYTES
        /// </summary>
        [DataMember(Name="MEGA_BYTES", EmitDefaultValue=false)]
        public ConfigNodePropertyDropDown MEGA_BYTES { get; set; }

        /// <summary>
        /// Gets or Sets UseOffHeapMemory
        /// </summary>
        [DataMember(Name="useOffHeapMemory", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean UseOffHeapMemory { get; set; }

        /// <summary>
        /// Gets or Sets DigestAlgorithm
        /// </summary>
        [DataMember(Name="digestAlgorithm", EmitDefaultValue=false)]
        public ConfigNodePropertyDropDown DigestAlgorithm { get; set; }

        /// <summary>
        /// Gets or Sets MonitoringQueueSize
        /// </summary>
        [DataMember(Name="monitoringQueueSize", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger MonitoringQueueSize { get; set; }

        /// <summary>
        /// Gets or Sets PathsMapping
        /// </summary>
        [DataMember(Name="pathsMapping", EmitDefaultValue=false)]
        public ConfigNodePropertyArray PathsMapping { get; set; }

        /// <summary>
        /// Gets or Sets StrictImport
        /// </summary>
        [DataMember(Name="strictImport", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean StrictImport { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties {\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  ImportMode: ").Append(ImportMode).Append("\n");
            sb.Append("  AclHandling: ").Append(AclHandling).Append("\n");
            sb.Append("  PackageRoots: ").Append(PackageRoots).Append("\n");
            sb.Append("  PackageFilters: ").Append(PackageFilters).Append("\n");
            sb.Append("  PropertyFilters: ").Append(PropertyFilters).Append("\n");
            sb.Append("  TempFsFolder: ").Append(TempFsFolder).Append("\n");
            sb.Append("  UseBinaryReferences: ").Append(UseBinaryReferences).Append("\n");
            sb.Append("  AutoSaveThreshold: ").Append(AutoSaveThreshold).Append("\n");
            sb.Append("  CleanupDelay: ").Append(CleanupDelay).Append("\n");
            sb.Append("  FileThreshold: ").Append(FileThreshold).Append("\n");
            sb.Append("  MEGA_BYTES: ").Append(MEGA_BYTES).Append("\n");
            sb.Append("  UseOffHeapMemory: ").Append(UseOffHeapMemory).Append("\n");
            sb.Append("  DigestAlgorithm: ").Append(DigestAlgorithm).Append("\n");
            sb.Append("  MonitoringQueueSize: ").Append(MonitoringQueueSize).Append("\n");
            sb.Append("  PathsMapping: ").Append(PathsMapping).Append("\n");
            sb.Append("  StrictImport: ").Append(StrictImport).Append("\n");
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
            return this.Equals(input as OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties);
        }

        /// <summary>
        /// Returns true if OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Name == input.Name ||
                    (this.Name != null &&
                    this.Name.Equals(input.Name))
                ) && 
                (
                    this.Type == input.Type ||
                    (this.Type != null &&
                    this.Type.Equals(input.Type))
                ) && 
                (
                    this.ImportMode == input.ImportMode ||
                    (this.ImportMode != null &&
                    this.ImportMode.Equals(input.ImportMode))
                ) && 
                (
                    this.AclHandling == input.AclHandling ||
                    (this.AclHandling != null &&
                    this.AclHandling.Equals(input.AclHandling))
                ) && 
                (
                    this.PackageRoots == input.PackageRoots ||
                    (this.PackageRoots != null &&
                    this.PackageRoots.Equals(input.PackageRoots))
                ) && 
                (
                    this.PackageFilters == input.PackageFilters ||
                    (this.PackageFilters != null &&
                    this.PackageFilters.Equals(input.PackageFilters))
                ) && 
                (
                    this.PropertyFilters == input.PropertyFilters ||
                    (this.PropertyFilters != null &&
                    this.PropertyFilters.Equals(input.PropertyFilters))
                ) && 
                (
                    this.TempFsFolder == input.TempFsFolder ||
                    (this.TempFsFolder != null &&
                    this.TempFsFolder.Equals(input.TempFsFolder))
                ) && 
                (
                    this.UseBinaryReferences == input.UseBinaryReferences ||
                    (this.UseBinaryReferences != null &&
                    this.UseBinaryReferences.Equals(input.UseBinaryReferences))
                ) && 
                (
                    this.AutoSaveThreshold == input.AutoSaveThreshold ||
                    (this.AutoSaveThreshold != null &&
                    this.AutoSaveThreshold.Equals(input.AutoSaveThreshold))
                ) && 
                (
                    this.CleanupDelay == input.CleanupDelay ||
                    (this.CleanupDelay != null &&
                    this.CleanupDelay.Equals(input.CleanupDelay))
                ) && 
                (
                    this.FileThreshold == input.FileThreshold ||
                    (this.FileThreshold != null &&
                    this.FileThreshold.Equals(input.FileThreshold))
                ) && 
                (
                    this.MEGA_BYTES == input.MEGA_BYTES ||
                    (this.MEGA_BYTES != null &&
                    this.MEGA_BYTES.Equals(input.MEGA_BYTES))
                ) && 
                (
                    this.UseOffHeapMemory == input.UseOffHeapMemory ||
                    (this.UseOffHeapMemory != null &&
                    this.UseOffHeapMemory.Equals(input.UseOffHeapMemory))
                ) && 
                (
                    this.DigestAlgorithm == input.DigestAlgorithm ||
                    (this.DigestAlgorithm != null &&
                    this.DigestAlgorithm.Equals(input.DigestAlgorithm))
                ) && 
                (
                    this.MonitoringQueueSize == input.MonitoringQueueSize ||
                    (this.MonitoringQueueSize != null &&
                    this.MonitoringQueueSize.Equals(input.MonitoringQueueSize))
                ) && 
                (
                    this.PathsMapping == input.PathsMapping ||
                    (this.PathsMapping != null &&
                    this.PathsMapping.Equals(input.PathsMapping))
                ) && 
                (
                    this.StrictImport == input.StrictImport ||
                    (this.StrictImport != null &&
                    this.StrictImport.Equals(input.StrictImport))
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
                if (this.Name != null)
                    hashCode = hashCode * 59 + this.Name.GetHashCode();
                if (this.Type != null)
                    hashCode = hashCode * 59 + this.Type.GetHashCode();
                if (this.ImportMode != null)
                    hashCode = hashCode * 59 + this.ImportMode.GetHashCode();
                if (this.AclHandling != null)
                    hashCode = hashCode * 59 + this.AclHandling.GetHashCode();
                if (this.PackageRoots != null)
                    hashCode = hashCode * 59 + this.PackageRoots.GetHashCode();
                if (this.PackageFilters != null)
                    hashCode = hashCode * 59 + this.PackageFilters.GetHashCode();
                if (this.PropertyFilters != null)
                    hashCode = hashCode * 59 + this.PropertyFilters.GetHashCode();
                if (this.TempFsFolder != null)
                    hashCode = hashCode * 59 + this.TempFsFolder.GetHashCode();
                if (this.UseBinaryReferences != null)
                    hashCode = hashCode * 59 + this.UseBinaryReferences.GetHashCode();
                if (this.AutoSaveThreshold != null)
                    hashCode = hashCode * 59 + this.AutoSaveThreshold.GetHashCode();
                if (this.CleanupDelay != null)
                    hashCode = hashCode * 59 + this.CleanupDelay.GetHashCode();
                if (this.FileThreshold != null)
                    hashCode = hashCode * 59 + this.FileThreshold.GetHashCode();
                if (this.MEGA_BYTES != null)
                    hashCode = hashCode * 59 + this.MEGA_BYTES.GetHashCode();
                if (this.UseOffHeapMemory != null)
                    hashCode = hashCode * 59 + this.UseOffHeapMemory.GetHashCode();
                if (this.DigestAlgorithm != null)
                    hashCode = hashCode * 59 + this.DigestAlgorithm.GetHashCode();
                if (this.MonitoringQueueSize != null)
                    hashCode = hashCode * 59 + this.MonitoringQueueSize.GetHashCode();
                if (this.PathsMapping != null)
                    hashCode = hashCode * 59 + this.PathsMapping.GetHashCode();
                if (this.StrictImport != null)
                    hashCode = hashCode * 59 + this.StrictImport.GetHashCode();
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