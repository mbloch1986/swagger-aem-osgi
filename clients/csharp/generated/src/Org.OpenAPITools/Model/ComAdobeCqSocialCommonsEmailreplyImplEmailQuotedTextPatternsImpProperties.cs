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
    /// ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties
    /// </summary>
    [DataContract]
    public partial class ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties :  IEquatable<ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties" /> class.
        /// </summary>
        /// <param name="patternTime">patternTime.</param>
        /// <param name="patternNewline">patternNewline.</param>
        /// <param name="patternDayOfMonth">patternDayOfMonth.</param>
        /// <param name="patternMonth">patternMonth.</param>
        /// <param name="patternYear">patternYear.</param>
        /// <param name="patternDate">patternDate.</param>
        /// <param name="patternDateTime">patternDateTime.</param>
        /// <param name="patternEmail">patternEmail.</param>
        public ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties(ConfigNodePropertyString patternTime = default(ConfigNodePropertyString), ConfigNodePropertyString patternNewline = default(ConfigNodePropertyString), ConfigNodePropertyString patternDayOfMonth = default(ConfigNodePropertyString), ConfigNodePropertyString patternMonth = default(ConfigNodePropertyString), ConfigNodePropertyString patternYear = default(ConfigNodePropertyString), ConfigNodePropertyString patternDate = default(ConfigNodePropertyString), ConfigNodePropertyString patternDateTime = default(ConfigNodePropertyString), ConfigNodePropertyString patternEmail = default(ConfigNodePropertyString))
        {
            this.PatternTime = patternTime;
            this.PatternNewline = patternNewline;
            this.PatternDayOfMonth = patternDayOfMonth;
            this.PatternMonth = patternMonth;
            this.PatternYear = patternYear;
            this.PatternDate = patternDate;
            this.PatternDateTime = patternDateTime;
            this.PatternEmail = patternEmail;
        }
        
        /// <summary>
        /// Gets or Sets PatternTime
        /// </summary>
        [DataMember(Name="pattern.time", EmitDefaultValue=false)]
        public ConfigNodePropertyString PatternTime { get; set; }

        /// <summary>
        /// Gets or Sets PatternNewline
        /// </summary>
        [DataMember(Name="pattern.newline", EmitDefaultValue=false)]
        public ConfigNodePropertyString PatternNewline { get; set; }

        /// <summary>
        /// Gets or Sets PatternDayOfMonth
        /// </summary>
        [DataMember(Name="pattern.dayOfMonth", EmitDefaultValue=false)]
        public ConfigNodePropertyString PatternDayOfMonth { get; set; }

        /// <summary>
        /// Gets or Sets PatternMonth
        /// </summary>
        [DataMember(Name="pattern.month", EmitDefaultValue=false)]
        public ConfigNodePropertyString PatternMonth { get; set; }

        /// <summary>
        /// Gets or Sets PatternYear
        /// </summary>
        [DataMember(Name="pattern.year", EmitDefaultValue=false)]
        public ConfigNodePropertyString PatternYear { get; set; }

        /// <summary>
        /// Gets or Sets PatternDate
        /// </summary>
        [DataMember(Name="pattern.date", EmitDefaultValue=false)]
        public ConfigNodePropertyString PatternDate { get; set; }

        /// <summary>
        /// Gets or Sets PatternDateTime
        /// </summary>
        [DataMember(Name="pattern.dateTime", EmitDefaultValue=false)]
        public ConfigNodePropertyString PatternDateTime { get; set; }

        /// <summary>
        /// Gets or Sets PatternEmail
        /// </summary>
        [DataMember(Name="pattern.email", EmitDefaultValue=false)]
        public ConfigNodePropertyString PatternEmail { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties {\n");
            sb.Append("  PatternTime: ").Append(PatternTime).Append("\n");
            sb.Append("  PatternNewline: ").Append(PatternNewline).Append("\n");
            sb.Append("  PatternDayOfMonth: ").Append(PatternDayOfMonth).Append("\n");
            sb.Append("  PatternMonth: ").Append(PatternMonth).Append("\n");
            sb.Append("  PatternYear: ").Append(PatternYear).Append("\n");
            sb.Append("  PatternDate: ").Append(PatternDate).Append("\n");
            sb.Append("  PatternDateTime: ").Append(PatternDateTime).Append("\n");
            sb.Append("  PatternEmail: ").Append(PatternEmail).Append("\n");
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
            return this.Equals(input as ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties);
        }

        /// <summary>
        /// Returns true if ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.PatternTime == input.PatternTime ||
                    (this.PatternTime != null &&
                    this.PatternTime.Equals(input.PatternTime))
                ) && 
                (
                    this.PatternNewline == input.PatternNewline ||
                    (this.PatternNewline != null &&
                    this.PatternNewline.Equals(input.PatternNewline))
                ) && 
                (
                    this.PatternDayOfMonth == input.PatternDayOfMonth ||
                    (this.PatternDayOfMonth != null &&
                    this.PatternDayOfMonth.Equals(input.PatternDayOfMonth))
                ) && 
                (
                    this.PatternMonth == input.PatternMonth ||
                    (this.PatternMonth != null &&
                    this.PatternMonth.Equals(input.PatternMonth))
                ) && 
                (
                    this.PatternYear == input.PatternYear ||
                    (this.PatternYear != null &&
                    this.PatternYear.Equals(input.PatternYear))
                ) && 
                (
                    this.PatternDate == input.PatternDate ||
                    (this.PatternDate != null &&
                    this.PatternDate.Equals(input.PatternDate))
                ) && 
                (
                    this.PatternDateTime == input.PatternDateTime ||
                    (this.PatternDateTime != null &&
                    this.PatternDateTime.Equals(input.PatternDateTime))
                ) && 
                (
                    this.PatternEmail == input.PatternEmail ||
                    (this.PatternEmail != null &&
                    this.PatternEmail.Equals(input.PatternEmail))
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
                if (this.PatternTime != null)
                    hashCode = hashCode * 59 + this.PatternTime.GetHashCode();
                if (this.PatternNewline != null)
                    hashCode = hashCode * 59 + this.PatternNewline.GetHashCode();
                if (this.PatternDayOfMonth != null)
                    hashCode = hashCode * 59 + this.PatternDayOfMonth.GetHashCode();
                if (this.PatternMonth != null)
                    hashCode = hashCode * 59 + this.PatternMonth.GetHashCode();
                if (this.PatternYear != null)
                    hashCode = hashCode * 59 + this.PatternYear.GetHashCode();
                if (this.PatternDate != null)
                    hashCode = hashCode * 59 + this.PatternDate.GetHashCode();
                if (this.PatternDateTime != null)
                    hashCode = hashCode * 59 + this.PatternDateTime.GetHashCode();
                if (this.PatternEmail != null)
                    hashCode = hashCode * 59 + this.PatternEmail.GetHashCode();
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