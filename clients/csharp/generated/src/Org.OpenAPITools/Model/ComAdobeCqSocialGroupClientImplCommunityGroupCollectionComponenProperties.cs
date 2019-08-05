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
    /// ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties
    /// </summary>
    [DataContract]
    public partial class ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties :  IEquatable<ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties" /> class.
        /// </summary>
        /// <param name="groupListingPaginationEnable">groupListingPaginationEnable.</param>
        /// <param name="groupListingLazyloadingEnable">groupListingLazyloadingEnable.</param>
        /// <param name="pageSize">pageSize.</param>
        /// <param name="priority">priority.</param>
        public ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties(ConfigNodePropertyBoolean groupListingPaginationEnable = default(ConfigNodePropertyBoolean), ConfigNodePropertyBoolean groupListingLazyloadingEnable = default(ConfigNodePropertyBoolean), ConfigNodePropertyInteger pageSize = default(ConfigNodePropertyInteger), ConfigNodePropertyInteger priority = default(ConfigNodePropertyInteger))
        {
            this.GroupListingPaginationEnable = groupListingPaginationEnable;
            this.GroupListingLazyloadingEnable = groupListingLazyloadingEnable;
            this.PageSize = pageSize;
            this.Priority = priority;
        }
        
        /// <summary>
        /// Gets or Sets GroupListingPaginationEnable
        /// </summary>
        [DataMember(Name="group.listing.pagination.enable", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean GroupListingPaginationEnable { get; set; }

        /// <summary>
        /// Gets or Sets GroupListingLazyloadingEnable
        /// </summary>
        [DataMember(Name="group.listing.lazyloading.enable", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean GroupListingLazyloadingEnable { get; set; }

        /// <summary>
        /// Gets or Sets PageSize
        /// </summary>
        [DataMember(Name="page.size", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger PageSize { get; set; }

        /// <summary>
        /// Gets or Sets Priority
        /// </summary>
        [DataMember(Name="priority", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger Priority { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties {\n");
            sb.Append("  GroupListingPaginationEnable: ").Append(GroupListingPaginationEnable).Append("\n");
            sb.Append("  GroupListingLazyloadingEnable: ").Append(GroupListingLazyloadingEnable).Append("\n");
            sb.Append("  PageSize: ").Append(PageSize).Append("\n");
            sb.Append("  Priority: ").Append(Priority).Append("\n");
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
            return this.Equals(input as ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties);
        }

        /// <summary>
        /// Returns true if ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.GroupListingPaginationEnable == input.GroupListingPaginationEnable ||
                    (this.GroupListingPaginationEnable != null &&
                    this.GroupListingPaginationEnable.Equals(input.GroupListingPaginationEnable))
                ) && 
                (
                    this.GroupListingLazyloadingEnable == input.GroupListingLazyloadingEnable ||
                    (this.GroupListingLazyloadingEnable != null &&
                    this.GroupListingLazyloadingEnable.Equals(input.GroupListingLazyloadingEnable))
                ) && 
                (
                    this.PageSize == input.PageSize ||
                    (this.PageSize != null &&
                    this.PageSize.Equals(input.PageSize))
                ) && 
                (
                    this.Priority == input.Priority ||
                    (this.Priority != null &&
                    this.Priority.Equals(input.Priority))
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
                if (this.GroupListingPaginationEnable != null)
                    hashCode = hashCode * 59 + this.GroupListingPaginationEnable.GetHashCode();
                if (this.GroupListingLazyloadingEnable != null)
                    hashCode = hashCode * 59 + this.GroupListingLazyloadingEnable.GetHashCode();
                if (this.PageSize != null)
                    hashCode = hashCode * 59 + this.PageSize.GetHashCode();
                if (this.Priority != null)
                    hashCode = hashCode * 59 + this.Priority.GetHashCode();
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