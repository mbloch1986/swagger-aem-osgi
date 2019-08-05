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
    /// OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties
    /// </summary>
    [DataContract]
    public partial class OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties :  IEquatable<OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties" /> class.
        /// </summary>
        /// <param name="queryLimitInMemory">queryLimitInMemory.</param>
        /// <param name="queryLimitReads">queryLimitReads.</param>
        /// <param name="queryFailTraversal">queryFailTraversal.</param>
        /// <param name="fastQuerySize">fastQuerySize.</param>
        public OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties(ConfigNodePropertyInteger queryLimitInMemory = default(ConfigNodePropertyInteger), ConfigNodePropertyInteger queryLimitReads = default(ConfigNodePropertyInteger), ConfigNodePropertyBoolean queryFailTraversal = default(ConfigNodePropertyBoolean), ConfigNodePropertyBoolean fastQuerySize = default(ConfigNodePropertyBoolean))
        {
            this.QueryLimitInMemory = queryLimitInMemory;
            this.QueryLimitReads = queryLimitReads;
            this.QueryFailTraversal = queryFailTraversal;
            this.FastQuerySize = fastQuerySize;
        }
        
        /// <summary>
        /// Gets or Sets QueryLimitInMemory
        /// </summary>
        [DataMember(Name="queryLimitInMemory", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger QueryLimitInMemory { get; set; }

        /// <summary>
        /// Gets or Sets QueryLimitReads
        /// </summary>
        [DataMember(Name="queryLimitReads", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger QueryLimitReads { get; set; }

        /// <summary>
        /// Gets or Sets QueryFailTraversal
        /// </summary>
        [DataMember(Name="queryFailTraversal", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean QueryFailTraversal { get; set; }

        /// <summary>
        /// Gets or Sets FastQuerySize
        /// </summary>
        [DataMember(Name="fastQuerySize", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean FastQuerySize { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties {\n");
            sb.Append("  QueryLimitInMemory: ").Append(QueryLimitInMemory).Append("\n");
            sb.Append("  QueryLimitReads: ").Append(QueryLimitReads).Append("\n");
            sb.Append("  QueryFailTraversal: ").Append(QueryFailTraversal).Append("\n");
            sb.Append("  FastQuerySize: ").Append(FastQuerySize).Append("\n");
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
            return this.Equals(input as OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties);
        }

        /// <summary>
        /// Returns true if OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.QueryLimitInMemory == input.QueryLimitInMemory ||
                    (this.QueryLimitInMemory != null &&
                    this.QueryLimitInMemory.Equals(input.QueryLimitInMemory))
                ) && 
                (
                    this.QueryLimitReads == input.QueryLimitReads ||
                    (this.QueryLimitReads != null &&
                    this.QueryLimitReads.Equals(input.QueryLimitReads))
                ) && 
                (
                    this.QueryFailTraversal == input.QueryFailTraversal ||
                    (this.QueryFailTraversal != null &&
                    this.QueryFailTraversal.Equals(input.QueryFailTraversal))
                ) && 
                (
                    this.FastQuerySize == input.FastQuerySize ||
                    (this.FastQuerySize != null &&
                    this.FastQuerySize.Equals(input.FastQuerySize))
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
                if (this.QueryLimitInMemory != null)
                    hashCode = hashCode * 59 + this.QueryLimitInMemory.GetHashCode();
                if (this.QueryLimitReads != null)
                    hashCode = hashCode * 59 + this.QueryLimitReads.GetHashCode();
                if (this.QueryFailTraversal != null)
                    hashCode = hashCode * 59 + this.QueryFailTraversal.GetHashCode();
                if (this.FastQuerySize != null)
                    hashCode = hashCode * 59 + this.FastQuerySize.GetHashCode();
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