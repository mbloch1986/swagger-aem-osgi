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
    /// ComAdobeCqSocialSiteImplAnalyticsComponentConfigurationServiceImProperties
    /// </summary>
    [DataContract]
    public partial class ComAdobeCqSocialSiteImplAnalyticsComponentConfigurationServiceImProperties :  IEquatable<ComAdobeCqSocialSiteImplAnalyticsComponentConfigurationServiceImProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComAdobeCqSocialSiteImplAnalyticsComponentConfigurationServiceImProperties" /> class.
        /// </summary>
        /// <param name="cqSocialConsoleAnalyticsComponents">cqSocialConsoleAnalyticsComponents.</param>
        public ComAdobeCqSocialSiteImplAnalyticsComponentConfigurationServiceImProperties(ConfigNodePropertyArray cqSocialConsoleAnalyticsComponents = default(ConfigNodePropertyArray))
        {
            this.CqSocialConsoleAnalyticsComponents = cqSocialConsoleAnalyticsComponents;
        }
        
        /// <summary>
        /// Gets or Sets CqSocialConsoleAnalyticsComponents
        /// </summary>
        [DataMember(Name="cq.social.console.analytics.components", EmitDefaultValue=false)]
        public ConfigNodePropertyArray CqSocialConsoleAnalyticsComponents { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComAdobeCqSocialSiteImplAnalyticsComponentConfigurationServiceImProperties {\n");
            sb.Append("  CqSocialConsoleAnalyticsComponents: ").Append(CqSocialConsoleAnalyticsComponents).Append("\n");
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
            return this.Equals(input as ComAdobeCqSocialSiteImplAnalyticsComponentConfigurationServiceImProperties);
        }

        /// <summary>
        /// Returns true if ComAdobeCqSocialSiteImplAnalyticsComponentConfigurationServiceImProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComAdobeCqSocialSiteImplAnalyticsComponentConfigurationServiceImProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComAdobeCqSocialSiteImplAnalyticsComponentConfigurationServiceImProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.CqSocialConsoleAnalyticsComponents == input.CqSocialConsoleAnalyticsComponents ||
                    (this.CqSocialConsoleAnalyticsComponents != null &&
                    this.CqSocialConsoleAnalyticsComponents.Equals(input.CqSocialConsoleAnalyticsComponents))
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
                if (this.CqSocialConsoleAnalyticsComponents != null)
                    hashCode = hashCode * 59 + this.CqSocialConsoleAnalyticsComponents.GetHashCode();
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
