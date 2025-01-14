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
    /// ComAdobeGraniteThreaddumpThreadDumpCollectorProperties
    /// </summary>
    [DataContract]
    public partial class ComAdobeGraniteThreaddumpThreadDumpCollectorProperties :  IEquatable<ComAdobeGraniteThreaddumpThreadDumpCollectorProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComAdobeGraniteThreaddumpThreadDumpCollectorProperties" /> class.
        /// </summary>
        /// <param name="schedulerPeriod">schedulerPeriod.</param>
        /// <param name="schedulerRunOn">schedulerRunOn.</param>
        /// <param name="graniteThreaddumpEnabled">graniteThreaddumpEnabled.</param>
        /// <param name="graniteThreaddumpDumpsPerFile">graniteThreaddumpDumpsPerFile.</param>
        /// <param name="graniteThreaddumpEnableGzipCompression">graniteThreaddumpEnableGzipCompression.</param>
        /// <param name="graniteThreaddumpEnableDirectoriesCompression">graniteThreaddumpEnableDirectoriesCompression.</param>
        /// <param name="graniteThreaddumpEnableJStack">graniteThreaddumpEnableJStack.</param>
        /// <param name="graniteThreaddumpMaxBackupDays">graniteThreaddumpMaxBackupDays.</param>
        /// <param name="graniteThreaddumpBackupCleanTrigger">graniteThreaddumpBackupCleanTrigger.</param>
        public ComAdobeGraniteThreaddumpThreadDumpCollectorProperties(ConfigNodePropertyInteger schedulerPeriod = default(ConfigNodePropertyInteger), ConfigNodePropertyDropDown schedulerRunOn = default(ConfigNodePropertyDropDown), ConfigNodePropertyBoolean graniteThreaddumpEnabled = default(ConfigNodePropertyBoolean), ConfigNodePropertyInteger graniteThreaddumpDumpsPerFile = default(ConfigNodePropertyInteger), ConfigNodePropertyBoolean graniteThreaddumpEnableGzipCompression = default(ConfigNodePropertyBoolean), ConfigNodePropertyBoolean graniteThreaddumpEnableDirectoriesCompression = default(ConfigNodePropertyBoolean), ConfigNodePropertyBoolean graniteThreaddumpEnableJStack = default(ConfigNodePropertyBoolean), ConfigNodePropertyInteger graniteThreaddumpMaxBackupDays = default(ConfigNodePropertyInteger), ConfigNodePropertyString graniteThreaddumpBackupCleanTrigger = default(ConfigNodePropertyString))
        {
            this.SchedulerPeriod = schedulerPeriod;
            this.SchedulerRunOn = schedulerRunOn;
            this.GraniteThreaddumpEnabled = graniteThreaddumpEnabled;
            this.GraniteThreaddumpDumpsPerFile = graniteThreaddumpDumpsPerFile;
            this.GraniteThreaddumpEnableGzipCompression = graniteThreaddumpEnableGzipCompression;
            this.GraniteThreaddumpEnableDirectoriesCompression = graniteThreaddumpEnableDirectoriesCompression;
            this.GraniteThreaddumpEnableJStack = graniteThreaddumpEnableJStack;
            this.GraniteThreaddumpMaxBackupDays = graniteThreaddumpMaxBackupDays;
            this.GraniteThreaddumpBackupCleanTrigger = graniteThreaddumpBackupCleanTrigger;
        }
        
        /// <summary>
        /// Gets or Sets SchedulerPeriod
        /// </summary>
        [DataMember(Name="scheduler.period", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger SchedulerPeriod { get; set; }

        /// <summary>
        /// Gets or Sets SchedulerRunOn
        /// </summary>
        [DataMember(Name="scheduler.runOn", EmitDefaultValue=false)]
        public ConfigNodePropertyDropDown SchedulerRunOn { get; set; }

        /// <summary>
        /// Gets or Sets GraniteThreaddumpEnabled
        /// </summary>
        [DataMember(Name="granite.threaddump.enabled", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean GraniteThreaddumpEnabled { get; set; }

        /// <summary>
        /// Gets or Sets GraniteThreaddumpDumpsPerFile
        /// </summary>
        [DataMember(Name="granite.threaddump.dumpsPerFile", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger GraniteThreaddumpDumpsPerFile { get; set; }

        /// <summary>
        /// Gets or Sets GraniteThreaddumpEnableGzipCompression
        /// </summary>
        [DataMember(Name="granite.threaddump.enableGzipCompression", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean GraniteThreaddumpEnableGzipCompression { get; set; }

        /// <summary>
        /// Gets or Sets GraniteThreaddumpEnableDirectoriesCompression
        /// </summary>
        [DataMember(Name="granite.threaddump.enableDirectoriesCompression", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean GraniteThreaddumpEnableDirectoriesCompression { get; set; }

        /// <summary>
        /// Gets or Sets GraniteThreaddumpEnableJStack
        /// </summary>
        [DataMember(Name="granite.threaddump.enableJStack", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean GraniteThreaddumpEnableJStack { get; set; }

        /// <summary>
        /// Gets or Sets GraniteThreaddumpMaxBackupDays
        /// </summary>
        [DataMember(Name="granite.threaddump.maxBackupDays", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger GraniteThreaddumpMaxBackupDays { get; set; }

        /// <summary>
        /// Gets or Sets GraniteThreaddumpBackupCleanTrigger
        /// </summary>
        [DataMember(Name="granite.threaddump.backupCleanTrigger", EmitDefaultValue=false)]
        public ConfigNodePropertyString GraniteThreaddumpBackupCleanTrigger { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComAdobeGraniteThreaddumpThreadDumpCollectorProperties {\n");
            sb.Append("  SchedulerPeriod: ").Append(SchedulerPeriod).Append("\n");
            sb.Append("  SchedulerRunOn: ").Append(SchedulerRunOn).Append("\n");
            sb.Append("  GraniteThreaddumpEnabled: ").Append(GraniteThreaddumpEnabled).Append("\n");
            sb.Append("  GraniteThreaddumpDumpsPerFile: ").Append(GraniteThreaddumpDumpsPerFile).Append("\n");
            sb.Append("  GraniteThreaddumpEnableGzipCompression: ").Append(GraniteThreaddumpEnableGzipCompression).Append("\n");
            sb.Append("  GraniteThreaddumpEnableDirectoriesCompression: ").Append(GraniteThreaddumpEnableDirectoriesCompression).Append("\n");
            sb.Append("  GraniteThreaddumpEnableJStack: ").Append(GraniteThreaddumpEnableJStack).Append("\n");
            sb.Append("  GraniteThreaddumpMaxBackupDays: ").Append(GraniteThreaddumpMaxBackupDays).Append("\n");
            sb.Append("  GraniteThreaddumpBackupCleanTrigger: ").Append(GraniteThreaddumpBackupCleanTrigger).Append("\n");
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
            return this.Equals(input as ComAdobeGraniteThreaddumpThreadDumpCollectorProperties);
        }

        /// <summary>
        /// Returns true if ComAdobeGraniteThreaddumpThreadDumpCollectorProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComAdobeGraniteThreaddumpThreadDumpCollectorProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComAdobeGraniteThreaddumpThreadDumpCollectorProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.SchedulerPeriod == input.SchedulerPeriod ||
                    (this.SchedulerPeriod != null &&
                    this.SchedulerPeriod.Equals(input.SchedulerPeriod))
                ) && 
                (
                    this.SchedulerRunOn == input.SchedulerRunOn ||
                    (this.SchedulerRunOn != null &&
                    this.SchedulerRunOn.Equals(input.SchedulerRunOn))
                ) && 
                (
                    this.GraniteThreaddumpEnabled == input.GraniteThreaddumpEnabled ||
                    (this.GraniteThreaddumpEnabled != null &&
                    this.GraniteThreaddumpEnabled.Equals(input.GraniteThreaddumpEnabled))
                ) && 
                (
                    this.GraniteThreaddumpDumpsPerFile == input.GraniteThreaddumpDumpsPerFile ||
                    (this.GraniteThreaddumpDumpsPerFile != null &&
                    this.GraniteThreaddumpDumpsPerFile.Equals(input.GraniteThreaddumpDumpsPerFile))
                ) && 
                (
                    this.GraniteThreaddumpEnableGzipCompression == input.GraniteThreaddumpEnableGzipCompression ||
                    (this.GraniteThreaddumpEnableGzipCompression != null &&
                    this.GraniteThreaddumpEnableGzipCompression.Equals(input.GraniteThreaddumpEnableGzipCompression))
                ) && 
                (
                    this.GraniteThreaddumpEnableDirectoriesCompression == input.GraniteThreaddumpEnableDirectoriesCompression ||
                    (this.GraniteThreaddumpEnableDirectoriesCompression != null &&
                    this.GraniteThreaddumpEnableDirectoriesCompression.Equals(input.GraniteThreaddumpEnableDirectoriesCompression))
                ) && 
                (
                    this.GraniteThreaddumpEnableJStack == input.GraniteThreaddumpEnableJStack ||
                    (this.GraniteThreaddumpEnableJStack != null &&
                    this.GraniteThreaddumpEnableJStack.Equals(input.GraniteThreaddumpEnableJStack))
                ) && 
                (
                    this.GraniteThreaddumpMaxBackupDays == input.GraniteThreaddumpMaxBackupDays ||
                    (this.GraniteThreaddumpMaxBackupDays != null &&
                    this.GraniteThreaddumpMaxBackupDays.Equals(input.GraniteThreaddumpMaxBackupDays))
                ) && 
                (
                    this.GraniteThreaddumpBackupCleanTrigger == input.GraniteThreaddumpBackupCleanTrigger ||
                    (this.GraniteThreaddumpBackupCleanTrigger != null &&
                    this.GraniteThreaddumpBackupCleanTrigger.Equals(input.GraniteThreaddumpBackupCleanTrigger))
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
                if (this.SchedulerPeriod != null)
                    hashCode = hashCode * 59 + this.SchedulerPeriod.GetHashCode();
                if (this.SchedulerRunOn != null)
                    hashCode = hashCode * 59 + this.SchedulerRunOn.GetHashCode();
                if (this.GraniteThreaddumpEnabled != null)
                    hashCode = hashCode * 59 + this.GraniteThreaddumpEnabled.GetHashCode();
                if (this.GraniteThreaddumpDumpsPerFile != null)
                    hashCode = hashCode * 59 + this.GraniteThreaddumpDumpsPerFile.GetHashCode();
                if (this.GraniteThreaddumpEnableGzipCompression != null)
                    hashCode = hashCode * 59 + this.GraniteThreaddumpEnableGzipCompression.GetHashCode();
                if (this.GraniteThreaddumpEnableDirectoriesCompression != null)
                    hashCode = hashCode * 59 + this.GraniteThreaddumpEnableDirectoriesCompression.GetHashCode();
                if (this.GraniteThreaddumpEnableJStack != null)
                    hashCode = hashCode * 59 + this.GraniteThreaddumpEnableJStack.GetHashCode();
                if (this.GraniteThreaddumpMaxBackupDays != null)
                    hashCode = hashCode * 59 + this.GraniteThreaddumpMaxBackupDays.GetHashCode();
                if (this.GraniteThreaddumpBackupCleanTrigger != null)
                    hashCode = hashCode * 59 + this.GraniteThreaddumpBackupCleanTrigger.GetHashCode();
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
