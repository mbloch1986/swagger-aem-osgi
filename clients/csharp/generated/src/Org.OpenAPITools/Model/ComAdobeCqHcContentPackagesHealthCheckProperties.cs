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
    /// ComAdobeCqHcContentPackagesHealthCheckProperties
    /// </summary>
    [DataContract]
    public partial class ComAdobeCqHcContentPackagesHealthCheckProperties :  IEquatable<ComAdobeCqHcContentPackagesHealthCheckProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComAdobeCqHcContentPackagesHealthCheckProperties" /> class.
        /// </summary>
        /// <param name="hcName">hcName.</param>
        /// <param name="hcTags">hcTags.</param>
        /// <param name="hcMbeanName">hcMbeanName.</param>
        /// <param name="packageNames">packageNames.</param>
        public ComAdobeCqHcContentPackagesHealthCheckProperties(ConfigNodePropertyString hcName = default(ConfigNodePropertyString), ConfigNodePropertyArray hcTags = default(ConfigNodePropertyArray), ConfigNodePropertyString hcMbeanName = default(ConfigNodePropertyString), ConfigNodePropertyArray packageNames = default(ConfigNodePropertyArray))
        {
            this.HcName = hcName;
            this.HcTags = hcTags;
            this.HcMbeanName = hcMbeanName;
            this.PackageNames = packageNames;
        }
        
        /// <summary>
        /// Gets or Sets HcName
        /// </summary>
        [DataMember(Name="hc.name", EmitDefaultValue=false)]
        public ConfigNodePropertyString HcName { get; set; }

        /// <summary>
        /// Gets or Sets HcTags
        /// </summary>
        [DataMember(Name="hc.tags", EmitDefaultValue=false)]
        public ConfigNodePropertyArray HcTags { get; set; }

        /// <summary>
        /// Gets or Sets HcMbeanName
        /// </summary>
        [DataMember(Name="hc.mbean.name", EmitDefaultValue=false)]
        public ConfigNodePropertyString HcMbeanName { get; set; }

        /// <summary>
        /// Gets or Sets PackageNames
        /// </summary>
        [DataMember(Name="package.names", EmitDefaultValue=false)]
        public ConfigNodePropertyArray PackageNames { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComAdobeCqHcContentPackagesHealthCheckProperties {\n");
            sb.Append("  HcName: ").Append(HcName).Append("\n");
            sb.Append("  HcTags: ").Append(HcTags).Append("\n");
            sb.Append("  HcMbeanName: ").Append(HcMbeanName).Append("\n");
            sb.Append("  PackageNames: ").Append(PackageNames).Append("\n");
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
            return this.Equals(input as ComAdobeCqHcContentPackagesHealthCheckProperties);
        }

        /// <summary>
        /// Returns true if ComAdobeCqHcContentPackagesHealthCheckProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComAdobeCqHcContentPackagesHealthCheckProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComAdobeCqHcContentPackagesHealthCheckProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.HcName == input.HcName ||
                    (this.HcName != null &&
                    this.HcName.Equals(input.HcName))
                ) && 
                (
                    this.HcTags == input.HcTags ||
                    (this.HcTags != null &&
                    this.HcTags.Equals(input.HcTags))
                ) && 
                (
                    this.HcMbeanName == input.HcMbeanName ||
                    (this.HcMbeanName != null &&
                    this.HcMbeanName.Equals(input.HcMbeanName))
                ) && 
                (
                    this.PackageNames == input.PackageNames ||
                    (this.PackageNames != null &&
                    this.PackageNames.Equals(input.PackageNames))
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
                if (this.HcName != null)
                    hashCode = hashCode * 59 + this.HcName.GetHashCode();
                if (this.HcTags != null)
                    hashCode = hashCode * 59 + this.HcTags.GetHashCode();
                if (this.HcMbeanName != null)
                    hashCode = hashCode * 59 + this.HcMbeanName.GetHashCode();
                if (this.PackageNames != null)
                    hashCode = hashCode * 59 + this.PackageNames.GetHashCode();
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
