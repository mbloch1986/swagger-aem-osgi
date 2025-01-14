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
    /// ComAdobeCqHistoryImplHistoryServiceImplProperties
    /// </summary>
    [DataContract]
    public partial class ComAdobeCqHistoryImplHistoryServiceImplProperties :  IEquatable<ComAdobeCqHistoryImplHistoryServiceImplProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComAdobeCqHistoryImplHistoryServiceImplProperties" /> class.
        /// </summary>
        /// <param name="historyServiceResourceTypes">historyServiceResourceTypes.</param>
        /// <param name="historyServicePathFilter">historyServicePathFilter.</param>
        public ComAdobeCqHistoryImplHistoryServiceImplProperties(ConfigNodePropertyArray historyServiceResourceTypes = default(ConfigNodePropertyArray), ConfigNodePropertyArray historyServicePathFilter = default(ConfigNodePropertyArray))
        {
            this.HistoryServiceResourceTypes = historyServiceResourceTypes;
            this.HistoryServicePathFilter = historyServicePathFilter;
        }
        
        /// <summary>
        /// Gets or Sets HistoryServiceResourceTypes
        /// </summary>
        [DataMember(Name="history.service.resourceTypes", EmitDefaultValue=false)]
        public ConfigNodePropertyArray HistoryServiceResourceTypes { get; set; }

        /// <summary>
        /// Gets or Sets HistoryServicePathFilter
        /// </summary>
        [DataMember(Name="history.service.pathFilter", EmitDefaultValue=false)]
        public ConfigNodePropertyArray HistoryServicePathFilter { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComAdobeCqHistoryImplHistoryServiceImplProperties {\n");
            sb.Append("  HistoryServiceResourceTypes: ").Append(HistoryServiceResourceTypes).Append("\n");
            sb.Append("  HistoryServicePathFilter: ").Append(HistoryServicePathFilter).Append("\n");
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
            return this.Equals(input as ComAdobeCqHistoryImplHistoryServiceImplProperties);
        }

        /// <summary>
        /// Returns true if ComAdobeCqHistoryImplHistoryServiceImplProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComAdobeCqHistoryImplHistoryServiceImplProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComAdobeCqHistoryImplHistoryServiceImplProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.HistoryServiceResourceTypes == input.HistoryServiceResourceTypes ||
                    (this.HistoryServiceResourceTypes != null &&
                    this.HistoryServiceResourceTypes.Equals(input.HistoryServiceResourceTypes))
                ) && 
                (
                    this.HistoryServicePathFilter == input.HistoryServicePathFilter ||
                    (this.HistoryServicePathFilter != null &&
                    this.HistoryServicePathFilter.Equals(input.HistoryServicePathFilter))
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
                if (this.HistoryServiceResourceTypes != null)
                    hashCode = hashCode * 59 + this.HistoryServiceResourceTypes.GetHashCode();
                if (this.HistoryServicePathFilter != null)
                    hashCode = hashCode * 59 + this.HistoryServicePathFilter.GetHashCode();
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
