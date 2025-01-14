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
    /// OrgApacheSlingCommonsLogLogManagerProperties
    /// </summary>
    [DataContract]
    public partial class OrgApacheSlingCommonsLogLogManagerProperties :  IEquatable<OrgApacheSlingCommonsLogLogManagerProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="OrgApacheSlingCommonsLogLogManagerProperties" /> class.
        /// </summary>
        /// <param name="orgApacheSlingCommonsLogLevel">orgApacheSlingCommonsLogLevel.</param>
        /// <param name="orgApacheSlingCommonsLogFile">orgApacheSlingCommonsLogFile.</param>
        /// <param name="orgApacheSlingCommonsLogFileNumber">orgApacheSlingCommonsLogFileNumber.</param>
        /// <param name="orgApacheSlingCommonsLogFileSize">orgApacheSlingCommonsLogFileSize.</param>
        /// <param name="orgApacheSlingCommonsLogPattern">orgApacheSlingCommonsLogPattern.</param>
        /// <param name="orgApacheSlingCommonsLogConfigurationFile">orgApacheSlingCommonsLogConfigurationFile.</param>
        /// <param name="orgApacheSlingCommonsLogPackagingDataEnabled">orgApacheSlingCommonsLogPackagingDataEnabled.</param>
        /// <param name="orgApacheSlingCommonsLogMaxCallerDataDepth">orgApacheSlingCommonsLogMaxCallerDataDepth.</param>
        /// <param name="orgApacheSlingCommonsLogMaxOldFileCountInDump">orgApacheSlingCommonsLogMaxOldFileCountInDump.</param>
        /// <param name="orgApacheSlingCommonsLogNumOfLines">orgApacheSlingCommonsLogNumOfLines.</param>
        public OrgApacheSlingCommonsLogLogManagerProperties(ConfigNodePropertyDropDown orgApacheSlingCommonsLogLevel = default(ConfigNodePropertyDropDown), ConfigNodePropertyString orgApacheSlingCommonsLogFile = default(ConfigNodePropertyString), ConfigNodePropertyInteger orgApacheSlingCommonsLogFileNumber = default(ConfigNodePropertyInteger), ConfigNodePropertyString orgApacheSlingCommonsLogFileSize = default(ConfigNodePropertyString), ConfigNodePropertyString orgApacheSlingCommonsLogPattern = default(ConfigNodePropertyString), ConfigNodePropertyString orgApacheSlingCommonsLogConfigurationFile = default(ConfigNodePropertyString), ConfigNodePropertyBoolean orgApacheSlingCommonsLogPackagingDataEnabled = default(ConfigNodePropertyBoolean), ConfigNodePropertyInteger orgApacheSlingCommonsLogMaxCallerDataDepth = default(ConfigNodePropertyInteger), ConfigNodePropertyInteger orgApacheSlingCommonsLogMaxOldFileCountInDump = default(ConfigNodePropertyInteger), ConfigNodePropertyInteger orgApacheSlingCommonsLogNumOfLines = default(ConfigNodePropertyInteger))
        {
            this.OrgApacheSlingCommonsLogLevel = orgApacheSlingCommonsLogLevel;
            this.OrgApacheSlingCommonsLogFile = orgApacheSlingCommonsLogFile;
            this.OrgApacheSlingCommonsLogFileNumber = orgApacheSlingCommonsLogFileNumber;
            this.OrgApacheSlingCommonsLogFileSize = orgApacheSlingCommonsLogFileSize;
            this.OrgApacheSlingCommonsLogPattern = orgApacheSlingCommonsLogPattern;
            this.OrgApacheSlingCommonsLogConfigurationFile = orgApacheSlingCommonsLogConfigurationFile;
            this.OrgApacheSlingCommonsLogPackagingDataEnabled = orgApacheSlingCommonsLogPackagingDataEnabled;
            this.OrgApacheSlingCommonsLogMaxCallerDataDepth = orgApacheSlingCommonsLogMaxCallerDataDepth;
            this.OrgApacheSlingCommonsLogMaxOldFileCountInDump = orgApacheSlingCommonsLogMaxOldFileCountInDump;
            this.OrgApacheSlingCommonsLogNumOfLines = orgApacheSlingCommonsLogNumOfLines;
        }
        
        /// <summary>
        /// Gets or Sets OrgApacheSlingCommonsLogLevel
        /// </summary>
        [DataMember(Name="org.apache.sling.commons.log.level", EmitDefaultValue=false)]
        public ConfigNodePropertyDropDown OrgApacheSlingCommonsLogLevel { get; set; }

        /// <summary>
        /// Gets or Sets OrgApacheSlingCommonsLogFile
        /// </summary>
        [DataMember(Name="org.apache.sling.commons.log.file", EmitDefaultValue=false)]
        public ConfigNodePropertyString OrgApacheSlingCommonsLogFile { get; set; }

        /// <summary>
        /// Gets or Sets OrgApacheSlingCommonsLogFileNumber
        /// </summary>
        [DataMember(Name="org.apache.sling.commons.log.file.number", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger OrgApacheSlingCommonsLogFileNumber { get; set; }

        /// <summary>
        /// Gets or Sets OrgApacheSlingCommonsLogFileSize
        /// </summary>
        [DataMember(Name="org.apache.sling.commons.log.file.size", EmitDefaultValue=false)]
        public ConfigNodePropertyString OrgApacheSlingCommonsLogFileSize { get; set; }

        /// <summary>
        /// Gets or Sets OrgApacheSlingCommonsLogPattern
        /// </summary>
        [DataMember(Name="org.apache.sling.commons.log.pattern", EmitDefaultValue=false)]
        public ConfigNodePropertyString OrgApacheSlingCommonsLogPattern { get; set; }

        /// <summary>
        /// Gets or Sets OrgApacheSlingCommonsLogConfigurationFile
        /// </summary>
        [DataMember(Name="org.apache.sling.commons.log.configurationFile", EmitDefaultValue=false)]
        public ConfigNodePropertyString OrgApacheSlingCommonsLogConfigurationFile { get; set; }

        /// <summary>
        /// Gets or Sets OrgApacheSlingCommonsLogPackagingDataEnabled
        /// </summary>
        [DataMember(Name="org.apache.sling.commons.log.packagingDataEnabled", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean OrgApacheSlingCommonsLogPackagingDataEnabled { get; set; }

        /// <summary>
        /// Gets or Sets OrgApacheSlingCommonsLogMaxCallerDataDepth
        /// </summary>
        [DataMember(Name="org.apache.sling.commons.log.maxCallerDataDepth", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger OrgApacheSlingCommonsLogMaxCallerDataDepth { get; set; }

        /// <summary>
        /// Gets or Sets OrgApacheSlingCommonsLogMaxOldFileCountInDump
        /// </summary>
        [DataMember(Name="org.apache.sling.commons.log.maxOldFileCountInDump", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger OrgApacheSlingCommonsLogMaxOldFileCountInDump { get; set; }

        /// <summary>
        /// Gets or Sets OrgApacheSlingCommonsLogNumOfLines
        /// </summary>
        [DataMember(Name="org.apache.sling.commons.log.numOfLines", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger OrgApacheSlingCommonsLogNumOfLines { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class OrgApacheSlingCommonsLogLogManagerProperties {\n");
            sb.Append("  OrgApacheSlingCommonsLogLevel: ").Append(OrgApacheSlingCommonsLogLevel).Append("\n");
            sb.Append("  OrgApacheSlingCommonsLogFile: ").Append(OrgApacheSlingCommonsLogFile).Append("\n");
            sb.Append("  OrgApacheSlingCommonsLogFileNumber: ").Append(OrgApacheSlingCommonsLogFileNumber).Append("\n");
            sb.Append("  OrgApacheSlingCommonsLogFileSize: ").Append(OrgApacheSlingCommonsLogFileSize).Append("\n");
            sb.Append("  OrgApacheSlingCommonsLogPattern: ").Append(OrgApacheSlingCommonsLogPattern).Append("\n");
            sb.Append("  OrgApacheSlingCommonsLogConfigurationFile: ").Append(OrgApacheSlingCommonsLogConfigurationFile).Append("\n");
            sb.Append("  OrgApacheSlingCommonsLogPackagingDataEnabled: ").Append(OrgApacheSlingCommonsLogPackagingDataEnabled).Append("\n");
            sb.Append("  OrgApacheSlingCommonsLogMaxCallerDataDepth: ").Append(OrgApacheSlingCommonsLogMaxCallerDataDepth).Append("\n");
            sb.Append("  OrgApacheSlingCommonsLogMaxOldFileCountInDump: ").Append(OrgApacheSlingCommonsLogMaxOldFileCountInDump).Append("\n");
            sb.Append("  OrgApacheSlingCommonsLogNumOfLines: ").Append(OrgApacheSlingCommonsLogNumOfLines).Append("\n");
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
            return this.Equals(input as OrgApacheSlingCommonsLogLogManagerProperties);
        }

        /// <summary>
        /// Returns true if OrgApacheSlingCommonsLogLogManagerProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of OrgApacheSlingCommonsLogLogManagerProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(OrgApacheSlingCommonsLogLogManagerProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.OrgApacheSlingCommonsLogLevel == input.OrgApacheSlingCommonsLogLevel ||
                    (this.OrgApacheSlingCommonsLogLevel != null &&
                    this.OrgApacheSlingCommonsLogLevel.Equals(input.OrgApacheSlingCommonsLogLevel))
                ) && 
                (
                    this.OrgApacheSlingCommonsLogFile == input.OrgApacheSlingCommonsLogFile ||
                    (this.OrgApacheSlingCommonsLogFile != null &&
                    this.OrgApacheSlingCommonsLogFile.Equals(input.OrgApacheSlingCommonsLogFile))
                ) && 
                (
                    this.OrgApacheSlingCommonsLogFileNumber == input.OrgApacheSlingCommonsLogFileNumber ||
                    (this.OrgApacheSlingCommonsLogFileNumber != null &&
                    this.OrgApacheSlingCommonsLogFileNumber.Equals(input.OrgApacheSlingCommonsLogFileNumber))
                ) && 
                (
                    this.OrgApacheSlingCommonsLogFileSize == input.OrgApacheSlingCommonsLogFileSize ||
                    (this.OrgApacheSlingCommonsLogFileSize != null &&
                    this.OrgApacheSlingCommonsLogFileSize.Equals(input.OrgApacheSlingCommonsLogFileSize))
                ) && 
                (
                    this.OrgApacheSlingCommonsLogPattern == input.OrgApacheSlingCommonsLogPattern ||
                    (this.OrgApacheSlingCommonsLogPattern != null &&
                    this.OrgApacheSlingCommonsLogPattern.Equals(input.OrgApacheSlingCommonsLogPattern))
                ) && 
                (
                    this.OrgApacheSlingCommonsLogConfigurationFile == input.OrgApacheSlingCommonsLogConfigurationFile ||
                    (this.OrgApacheSlingCommonsLogConfigurationFile != null &&
                    this.OrgApacheSlingCommonsLogConfigurationFile.Equals(input.OrgApacheSlingCommonsLogConfigurationFile))
                ) && 
                (
                    this.OrgApacheSlingCommonsLogPackagingDataEnabled == input.OrgApacheSlingCommonsLogPackagingDataEnabled ||
                    (this.OrgApacheSlingCommonsLogPackagingDataEnabled != null &&
                    this.OrgApacheSlingCommonsLogPackagingDataEnabled.Equals(input.OrgApacheSlingCommonsLogPackagingDataEnabled))
                ) && 
                (
                    this.OrgApacheSlingCommonsLogMaxCallerDataDepth == input.OrgApacheSlingCommonsLogMaxCallerDataDepth ||
                    (this.OrgApacheSlingCommonsLogMaxCallerDataDepth != null &&
                    this.OrgApacheSlingCommonsLogMaxCallerDataDepth.Equals(input.OrgApacheSlingCommonsLogMaxCallerDataDepth))
                ) && 
                (
                    this.OrgApacheSlingCommonsLogMaxOldFileCountInDump == input.OrgApacheSlingCommonsLogMaxOldFileCountInDump ||
                    (this.OrgApacheSlingCommonsLogMaxOldFileCountInDump != null &&
                    this.OrgApacheSlingCommonsLogMaxOldFileCountInDump.Equals(input.OrgApacheSlingCommonsLogMaxOldFileCountInDump))
                ) && 
                (
                    this.OrgApacheSlingCommonsLogNumOfLines == input.OrgApacheSlingCommonsLogNumOfLines ||
                    (this.OrgApacheSlingCommonsLogNumOfLines != null &&
                    this.OrgApacheSlingCommonsLogNumOfLines.Equals(input.OrgApacheSlingCommonsLogNumOfLines))
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
                if (this.OrgApacheSlingCommonsLogLevel != null)
                    hashCode = hashCode * 59 + this.OrgApacheSlingCommonsLogLevel.GetHashCode();
                if (this.OrgApacheSlingCommonsLogFile != null)
                    hashCode = hashCode * 59 + this.OrgApacheSlingCommonsLogFile.GetHashCode();
                if (this.OrgApacheSlingCommonsLogFileNumber != null)
                    hashCode = hashCode * 59 + this.OrgApacheSlingCommonsLogFileNumber.GetHashCode();
                if (this.OrgApacheSlingCommonsLogFileSize != null)
                    hashCode = hashCode * 59 + this.OrgApacheSlingCommonsLogFileSize.GetHashCode();
                if (this.OrgApacheSlingCommonsLogPattern != null)
                    hashCode = hashCode * 59 + this.OrgApacheSlingCommonsLogPattern.GetHashCode();
                if (this.OrgApacheSlingCommonsLogConfigurationFile != null)
                    hashCode = hashCode * 59 + this.OrgApacheSlingCommonsLogConfigurationFile.GetHashCode();
                if (this.OrgApacheSlingCommonsLogPackagingDataEnabled != null)
                    hashCode = hashCode * 59 + this.OrgApacheSlingCommonsLogPackagingDataEnabled.GetHashCode();
                if (this.OrgApacheSlingCommonsLogMaxCallerDataDepth != null)
                    hashCode = hashCode * 59 + this.OrgApacheSlingCommonsLogMaxCallerDataDepth.GetHashCode();
                if (this.OrgApacheSlingCommonsLogMaxOldFileCountInDump != null)
                    hashCode = hashCode * 59 + this.OrgApacheSlingCommonsLogMaxOldFileCountInDump.GetHashCode();
                if (this.OrgApacheSlingCommonsLogNumOfLines != null)
                    hashCode = hashCode * 59 + this.OrgApacheSlingCommonsLogNumOfLines.GetHashCode();
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
