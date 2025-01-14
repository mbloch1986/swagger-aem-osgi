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
    /// OrgApacheSlingCaconfigResourceImplDefDefaultContextPathStrategyProperties
    /// </summary>
    [DataContract]
    public partial class OrgApacheSlingCaconfigResourceImplDefDefaultContextPathStrategyProperties :  IEquatable<OrgApacheSlingCaconfigResourceImplDefDefaultContextPathStrategyProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="OrgApacheSlingCaconfigResourceImplDefDefaultContextPathStrategyProperties" /> class.
        /// </summary>
        /// <param name="enabled">enabled.</param>
        /// <param name="configRefResourceNames">configRefResourceNames.</param>
        /// <param name="configRefPropertyNames">configRefPropertyNames.</param>
        /// <param name="serviceRanking">serviceRanking.</param>
        public OrgApacheSlingCaconfigResourceImplDefDefaultContextPathStrategyProperties(ConfigNodePropertyBoolean enabled = default(ConfigNodePropertyBoolean), ConfigNodePropertyArray configRefResourceNames = default(ConfigNodePropertyArray), ConfigNodePropertyArray configRefPropertyNames = default(ConfigNodePropertyArray), ConfigNodePropertyInteger serviceRanking = default(ConfigNodePropertyInteger))
        {
            this.Enabled = enabled;
            this.ConfigRefResourceNames = configRefResourceNames;
            this.ConfigRefPropertyNames = configRefPropertyNames;
            this.ServiceRanking = serviceRanking;
        }
        
        /// <summary>
        /// Gets or Sets Enabled
        /// </summary>
        [DataMember(Name="enabled", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean Enabled { get; set; }

        /// <summary>
        /// Gets or Sets ConfigRefResourceNames
        /// </summary>
        [DataMember(Name="configRefResourceNames", EmitDefaultValue=false)]
        public ConfigNodePropertyArray ConfigRefResourceNames { get; set; }

        /// <summary>
        /// Gets or Sets ConfigRefPropertyNames
        /// </summary>
        [DataMember(Name="configRefPropertyNames", EmitDefaultValue=false)]
        public ConfigNodePropertyArray ConfigRefPropertyNames { get; set; }

        /// <summary>
        /// Gets or Sets ServiceRanking
        /// </summary>
        [DataMember(Name="service.ranking", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger ServiceRanking { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class OrgApacheSlingCaconfigResourceImplDefDefaultContextPathStrategyProperties {\n");
            sb.Append("  Enabled: ").Append(Enabled).Append("\n");
            sb.Append("  ConfigRefResourceNames: ").Append(ConfigRefResourceNames).Append("\n");
            sb.Append("  ConfigRefPropertyNames: ").Append(ConfigRefPropertyNames).Append("\n");
            sb.Append("  ServiceRanking: ").Append(ServiceRanking).Append("\n");
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
            return this.Equals(input as OrgApacheSlingCaconfigResourceImplDefDefaultContextPathStrategyProperties);
        }

        /// <summary>
        /// Returns true if OrgApacheSlingCaconfigResourceImplDefDefaultContextPathStrategyProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of OrgApacheSlingCaconfigResourceImplDefDefaultContextPathStrategyProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(OrgApacheSlingCaconfigResourceImplDefDefaultContextPathStrategyProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Enabled == input.Enabled ||
                    (this.Enabled != null &&
                    this.Enabled.Equals(input.Enabled))
                ) && 
                (
                    this.ConfigRefResourceNames == input.ConfigRefResourceNames ||
                    (this.ConfigRefResourceNames != null &&
                    this.ConfigRefResourceNames.Equals(input.ConfigRefResourceNames))
                ) && 
                (
                    this.ConfigRefPropertyNames == input.ConfigRefPropertyNames ||
                    (this.ConfigRefPropertyNames != null &&
                    this.ConfigRefPropertyNames.Equals(input.ConfigRefPropertyNames))
                ) && 
                (
                    this.ServiceRanking == input.ServiceRanking ||
                    (this.ServiceRanking != null &&
                    this.ServiceRanking.Equals(input.ServiceRanking))
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
                if (this.Enabled != null)
                    hashCode = hashCode * 59 + this.Enabled.GetHashCode();
                if (this.ConfigRefResourceNames != null)
                    hashCode = hashCode * 59 + this.ConfigRefResourceNames.GetHashCode();
                if (this.ConfigRefPropertyNames != null)
                    hashCode = hashCode * 59 + this.ConfigRefPropertyNames.GetHashCode();
                if (this.ServiceRanking != null)
                    hashCode = hashCode * 59 + this.ServiceRanking.GetHashCode();
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
