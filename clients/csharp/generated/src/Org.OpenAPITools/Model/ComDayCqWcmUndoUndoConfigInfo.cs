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
    /// ComDayCqWcmUndoUndoConfigInfo
    /// </summary>
    [DataContract]
    public partial class ComDayCqWcmUndoUndoConfigInfo :  IEquatable<ComDayCqWcmUndoUndoConfigInfo>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComDayCqWcmUndoUndoConfigInfo" /> class.
        /// </summary>
        /// <param name="pid">pid.</param>
        /// <param name="title">title.</param>
        /// <param name="description">description.</param>
        /// <param name="properties">properties.</param>
        /// <param name="bundleLocation">bundleLocation.</param>
        /// <param name="serviceLocation">serviceLocation.</param>
        public ComDayCqWcmUndoUndoConfigInfo(string pid = default(string), string title = default(string), string description = default(string), ComDayCqWcmUndoUndoConfigProperties properties = default(ComDayCqWcmUndoUndoConfigProperties), string bundleLocation = default(string), string serviceLocation = default(string))
        {
            this.Pid = pid;
            this.Title = title;
            this.Description = description;
            this.Properties = properties;
            this.BundleLocation = bundleLocation;
            this.ServiceLocation = serviceLocation;
        }
        
        /// <summary>
        /// Gets or Sets Pid
        /// </summary>
        [DataMember(Name="pid", EmitDefaultValue=false)]
        public string Pid { get; set; }

        /// <summary>
        /// Gets or Sets Title
        /// </summary>
        [DataMember(Name="title", EmitDefaultValue=false)]
        public string Title { get; set; }

        /// <summary>
        /// Gets or Sets Description
        /// </summary>
        [DataMember(Name="description", EmitDefaultValue=false)]
        public string Description { get; set; }

        /// <summary>
        /// Gets or Sets Properties
        /// </summary>
        [DataMember(Name="properties", EmitDefaultValue=false)]
        public ComDayCqWcmUndoUndoConfigProperties Properties { get; set; }

        /// <summary>
        /// Gets or Sets BundleLocation
        /// </summary>
        [DataMember(Name="bundle_location", EmitDefaultValue=false)]
        public string BundleLocation { get; set; }

        /// <summary>
        /// Gets or Sets ServiceLocation
        /// </summary>
        [DataMember(Name="service_location", EmitDefaultValue=false)]
        public string ServiceLocation { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqWcmUndoUndoConfigInfo {\n");
            sb.Append("  Pid: ").Append(Pid).Append("\n");
            sb.Append("  Title: ").Append(Title).Append("\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  Properties: ").Append(Properties).Append("\n");
            sb.Append("  BundleLocation: ").Append(BundleLocation).Append("\n");
            sb.Append("  ServiceLocation: ").Append(ServiceLocation).Append("\n");
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
            return this.Equals(input as ComDayCqWcmUndoUndoConfigInfo);
        }

        /// <summary>
        /// Returns true if ComDayCqWcmUndoUndoConfigInfo instances are equal
        /// </summary>
        /// <param name="input">Instance of ComDayCqWcmUndoUndoConfigInfo to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqWcmUndoUndoConfigInfo input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Pid == input.Pid ||
                    (this.Pid != null &&
                    this.Pid.Equals(input.Pid))
                ) && 
                (
                    this.Title == input.Title ||
                    (this.Title != null &&
                    this.Title.Equals(input.Title))
                ) && 
                (
                    this.Description == input.Description ||
                    (this.Description != null &&
                    this.Description.Equals(input.Description))
                ) && 
                (
                    this.Properties == input.Properties ||
                    (this.Properties != null &&
                    this.Properties.Equals(input.Properties))
                ) && 
                (
                    this.BundleLocation == input.BundleLocation ||
                    (this.BundleLocation != null &&
                    this.BundleLocation.Equals(input.BundleLocation))
                ) && 
                (
                    this.ServiceLocation == input.ServiceLocation ||
                    (this.ServiceLocation != null &&
                    this.ServiceLocation.Equals(input.ServiceLocation))
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
                if (this.Pid != null)
                    hashCode = hashCode * 59 + this.Pid.GetHashCode();
                if (this.Title != null)
                    hashCode = hashCode * 59 + this.Title.GetHashCode();
                if (this.Description != null)
                    hashCode = hashCode * 59 + this.Description.GetHashCode();
                if (this.Properties != null)
                    hashCode = hashCode * 59 + this.Properties.GetHashCode();
                if (this.BundleLocation != null)
                    hashCode = hashCode * 59 + this.BundleLocation.GetHashCode();
                if (this.ServiceLocation != null)
                    hashCode = hashCode * 59 + this.ServiceLocation.GetHashCode();
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
