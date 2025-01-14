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
    /// ComAdobeCqWcmLaunchesImplLaunchesEventHandlerProperties
    /// </summary>
    [DataContract]
    public partial class ComAdobeCqWcmLaunchesImplLaunchesEventHandlerProperties :  IEquatable<ComAdobeCqWcmLaunchesImplLaunchesEventHandlerProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComAdobeCqWcmLaunchesImplLaunchesEventHandlerProperties" /> class.
        /// </summary>
        /// <param name="eventFilter">eventFilter.</param>
        /// <param name="launchesEventhandlerThreadpoolMaxsize">launchesEventhandlerThreadpoolMaxsize.</param>
        /// <param name="launchesEventhandlerThreadpoolPriority">launchesEventhandlerThreadpoolPriority.</param>
        /// <param name="launchesEventhandlerUpdatelastmodification">launchesEventhandlerUpdatelastmodification.</param>
        public ComAdobeCqWcmLaunchesImplLaunchesEventHandlerProperties(ConfigNodePropertyString eventFilter = default(ConfigNodePropertyString), ConfigNodePropertyInteger launchesEventhandlerThreadpoolMaxsize = default(ConfigNodePropertyInteger), ConfigNodePropertyDropDown launchesEventhandlerThreadpoolPriority = default(ConfigNodePropertyDropDown), ConfigNodePropertyBoolean launchesEventhandlerUpdatelastmodification = default(ConfigNodePropertyBoolean))
        {
            this.EventFilter = eventFilter;
            this.LaunchesEventhandlerThreadpoolMaxsize = launchesEventhandlerThreadpoolMaxsize;
            this.LaunchesEventhandlerThreadpoolPriority = launchesEventhandlerThreadpoolPriority;
            this.LaunchesEventhandlerUpdatelastmodification = launchesEventhandlerUpdatelastmodification;
        }
        
        /// <summary>
        /// Gets or Sets EventFilter
        /// </summary>
        [DataMember(Name="event.filter", EmitDefaultValue=false)]
        public ConfigNodePropertyString EventFilter { get; set; }

        /// <summary>
        /// Gets or Sets LaunchesEventhandlerThreadpoolMaxsize
        /// </summary>
        [DataMember(Name="launches.eventhandler.threadpool.maxsize", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger LaunchesEventhandlerThreadpoolMaxsize { get; set; }

        /// <summary>
        /// Gets or Sets LaunchesEventhandlerThreadpoolPriority
        /// </summary>
        [DataMember(Name="launches.eventhandler.threadpool.priority", EmitDefaultValue=false)]
        public ConfigNodePropertyDropDown LaunchesEventhandlerThreadpoolPriority { get; set; }

        /// <summary>
        /// Gets or Sets LaunchesEventhandlerUpdatelastmodification
        /// </summary>
        [DataMember(Name="launches.eventhandler.updatelastmodification", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean LaunchesEventhandlerUpdatelastmodification { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComAdobeCqWcmLaunchesImplLaunchesEventHandlerProperties {\n");
            sb.Append("  EventFilter: ").Append(EventFilter).Append("\n");
            sb.Append("  LaunchesEventhandlerThreadpoolMaxsize: ").Append(LaunchesEventhandlerThreadpoolMaxsize).Append("\n");
            sb.Append("  LaunchesEventhandlerThreadpoolPriority: ").Append(LaunchesEventhandlerThreadpoolPriority).Append("\n");
            sb.Append("  LaunchesEventhandlerUpdatelastmodification: ").Append(LaunchesEventhandlerUpdatelastmodification).Append("\n");
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
            return this.Equals(input as ComAdobeCqWcmLaunchesImplLaunchesEventHandlerProperties);
        }

        /// <summary>
        /// Returns true if ComAdobeCqWcmLaunchesImplLaunchesEventHandlerProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComAdobeCqWcmLaunchesImplLaunchesEventHandlerProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComAdobeCqWcmLaunchesImplLaunchesEventHandlerProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.EventFilter == input.EventFilter ||
                    (this.EventFilter != null &&
                    this.EventFilter.Equals(input.EventFilter))
                ) && 
                (
                    this.LaunchesEventhandlerThreadpoolMaxsize == input.LaunchesEventhandlerThreadpoolMaxsize ||
                    (this.LaunchesEventhandlerThreadpoolMaxsize != null &&
                    this.LaunchesEventhandlerThreadpoolMaxsize.Equals(input.LaunchesEventhandlerThreadpoolMaxsize))
                ) && 
                (
                    this.LaunchesEventhandlerThreadpoolPriority == input.LaunchesEventhandlerThreadpoolPriority ||
                    (this.LaunchesEventhandlerThreadpoolPriority != null &&
                    this.LaunchesEventhandlerThreadpoolPriority.Equals(input.LaunchesEventhandlerThreadpoolPriority))
                ) && 
                (
                    this.LaunchesEventhandlerUpdatelastmodification == input.LaunchesEventhandlerUpdatelastmodification ||
                    (this.LaunchesEventhandlerUpdatelastmodification != null &&
                    this.LaunchesEventhandlerUpdatelastmodification.Equals(input.LaunchesEventhandlerUpdatelastmodification))
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
                if (this.EventFilter != null)
                    hashCode = hashCode * 59 + this.EventFilter.GetHashCode();
                if (this.LaunchesEventhandlerThreadpoolMaxsize != null)
                    hashCode = hashCode * 59 + this.LaunchesEventhandlerThreadpoolMaxsize.GetHashCode();
                if (this.LaunchesEventhandlerThreadpoolPriority != null)
                    hashCode = hashCode * 59 + this.LaunchesEventhandlerThreadpoolPriority.GetHashCode();
                if (this.LaunchesEventhandlerUpdatelastmodification != null)
                    hashCode = hashCode * 59 + this.LaunchesEventhandlerUpdatelastmodification.GetHashCode();
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
