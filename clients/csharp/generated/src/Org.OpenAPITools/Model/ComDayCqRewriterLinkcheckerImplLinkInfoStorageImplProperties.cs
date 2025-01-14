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
    /// ComDayCqRewriterLinkcheckerImplLinkInfoStorageImplProperties
    /// </summary>
    [DataContract]
    public partial class ComDayCqRewriterLinkcheckerImplLinkInfoStorageImplProperties :  IEquatable<ComDayCqRewriterLinkcheckerImplLinkInfoStorageImplProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComDayCqRewriterLinkcheckerImplLinkInfoStorageImplProperties" /> class.
        /// </summary>
        /// <param name="serviceMaxLinksPerHost">serviceMaxLinksPerHost.</param>
        /// <param name="serviceSaveExternalLinkReferences">serviceSaveExternalLinkReferences.</param>
        public ComDayCqRewriterLinkcheckerImplLinkInfoStorageImplProperties(ConfigNodePropertyInteger serviceMaxLinksPerHost = default(ConfigNodePropertyInteger), ConfigNodePropertyBoolean serviceSaveExternalLinkReferences = default(ConfigNodePropertyBoolean))
        {
            this.ServiceMaxLinksPerHost = serviceMaxLinksPerHost;
            this.ServiceSaveExternalLinkReferences = serviceSaveExternalLinkReferences;
        }
        
        /// <summary>
        /// Gets or Sets ServiceMaxLinksPerHost
        /// </summary>
        [DataMember(Name="service.max_links_per_host", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger ServiceMaxLinksPerHost { get; set; }

        /// <summary>
        /// Gets or Sets ServiceSaveExternalLinkReferences
        /// </summary>
        [DataMember(Name="service.save_external_link_references", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean ServiceSaveExternalLinkReferences { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqRewriterLinkcheckerImplLinkInfoStorageImplProperties {\n");
            sb.Append("  ServiceMaxLinksPerHost: ").Append(ServiceMaxLinksPerHost).Append("\n");
            sb.Append("  ServiceSaveExternalLinkReferences: ").Append(ServiceSaveExternalLinkReferences).Append("\n");
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
            return this.Equals(input as ComDayCqRewriterLinkcheckerImplLinkInfoStorageImplProperties);
        }

        /// <summary>
        /// Returns true if ComDayCqRewriterLinkcheckerImplLinkInfoStorageImplProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComDayCqRewriterLinkcheckerImplLinkInfoStorageImplProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqRewriterLinkcheckerImplLinkInfoStorageImplProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.ServiceMaxLinksPerHost == input.ServiceMaxLinksPerHost ||
                    (this.ServiceMaxLinksPerHost != null &&
                    this.ServiceMaxLinksPerHost.Equals(input.ServiceMaxLinksPerHost))
                ) && 
                (
                    this.ServiceSaveExternalLinkReferences == input.ServiceSaveExternalLinkReferences ||
                    (this.ServiceSaveExternalLinkReferences != null &&
                    this.ServiceSaveExternalLinkReferences.Equals(input.ServiceSaveExternalLinkReferences))
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
                if (this.ServiceMaxLinksPerHost != null)
                    hashCode = hashCode * 59 + this.ServiceMaxLinksPerHost.GetHashCode();
                if (this.ServiceSaveExternalLinkReferences != null)
                    hashCode = hashCode * 59 + this.ServiceSaveExternalLinkReferences.GetHashCode();
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
