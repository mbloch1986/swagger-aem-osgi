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
    /// OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties
    /// </summary>
    [DataContract]
    public partial class OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties :  IEquatable<OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties" /> class.
        /// </summary>
        /// <param name="ignorePropertyNameRegex">ignorePropertyNameRegex.</param>
        /// <param name="configCollectionPropertiesResourceNames">configCollectionPropertiesResourceNames.</param>
        public OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties(ConfigNodePropertyArray ignorePropertyNameRegex = default(ConfigNodePropertyArray), ConfigNodePropertyArray configCollectionPropertiesResourceNames = default(ConfigNodePropertyArray))
        {
            this.IgnorePropertyNameRegex = ignorePropertyNameRegex;
            this.ConfigCollectionPropertiesResourceNames = configCollectionPropertiesResourceNames;
        }
        
        /// <summary>
        /// Gets or Sets IgnorePropertyNameRegex
        /// </summary>
        [DataMember(Name="ignorePropertyNameRegex", EmitDefaultValue=false)]
        public ConfigNodePropertyArray IgnorePropertyNameRegex { get; set; }

        /// <summary>
        /// Gets or Sets ConfigCollectionPropertiesResourceNames
        /// </summary>
        [DataMember(Name="configCollectionPropertiesResourceNames", EmitDefaultValue=false)]
        public ConfigNodePropertyArray ConfigCollectionPropertiesResourceNames { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties {\n");
            sb.Append("  IgnorePropertyNameRegex: ").Append(IgnorePropertyNameRegex).Append("\n");
            sb.Append("  ConfigCollectionPropertiesResourceNames: ").Append(ConfigCollectionPropertiesResourceNames).Append("\n");
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
            return this.Equals(input as OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties);
        }

        /// <summary>
        /// Returns true if OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.IgnorePropertyNameRegex == input.IgnorePropertyNameRegex ||
                    (this.IgnorePropertyNameRegex != null &&
                    this.IgnorePropertyNameRegex.Equals(input.IgnorePropertyNameRegex))
                ) && 
                (
                    this.ConfigCollectionPropertiesResourceNames == input.ConfigCollectionPropertiesResourceNames ||
                    (this.ConfigCollectionPropertiesResourceNames != null &&
                    this.ConfigCollectionPropertiesResourceNames.Equals(input.ConfigCollectionPropertiesResourceNames))
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
                if (this.IgnorePropertyNameRegex != null)
                    hashCode = hashCode * 59 + this.IgnorePropertyNameRegex.GetHashCode();
                if (this.ConfigCollectionPropertiesResourceNames != null)
                    hashCode = hashCode * 59 + this.ConfigCollectionPropertiesResourceNames.GetHashCode();
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
