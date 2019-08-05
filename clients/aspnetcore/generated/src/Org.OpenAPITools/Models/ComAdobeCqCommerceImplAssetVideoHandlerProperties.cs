/*
 * Adobe Experience Manager OSGI config (AEM) API
 *
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 * Generated by: https://openapi-generator.tech
 */

using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace Org.OpenAPITools.Models
{ 
    /// <summary>
    /// 
    /// </summary>
    [DataContract]
    public partial class ComAdobeCqCommerceImplAssetVideoHandlerProperties : IEquatable<ComAdobeCqCommerceImplAssetVideoHandlerProperties>
    { 
        /// <summary>
        /// Gets or Sets CqCommerceAssetHandlerActive
        /// </summary>
        [DataMember(Name="cq.commerce.asset.handler.active")]
        public ConfigNodePropertyBoolean CqCommerceAssetHandlerActive { get; set; }

        /// <summary>
        /// Gets or Sets CqCommerceAssetHandlerName
        /// </summary>
        [DataMember(Name="cq.commerce.asset.handler.name")]
        public ConfigNodePropertyString CqCommerceAssetHandlerName { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComAdobeCqCommerceImplAssetVideoHandlerProperties {\n");
            sb.Append("  CqCommerceAssetHandlerActive: ").Append(CqCommerceAssetHandlerActive).Append("\n");
            sb.Append("  CqCommerceAssetHandlerName: ").Append(CqCommerceAssetHandlerName).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }

        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="obj">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object obj)
        {
            if (obj is null) return false;
            if (ReferenceEquals(this, obj)) return true;
            return obj.GetType() == GetType() && Equals((ComAdobeCqCommerceImplAssetVideoHandlerProperties)obj);
        }

        /// <summary>
        /// Returns true if ComAdobeCqCommerceImplAssetVideoHandlerProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of ComAdobeCqCommerceImplAssetVideoHandlerProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComAdobeCqCommerceImplAssetVideoHandlerProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    CqCommerceAssetHandlerActive == other.CqCommerceAssetHandlerActive ||
                    CqCommerceAssetHandlerActive != null &&
                    CqCommerceAssetHandlerActive.Equals(other.CqCommerceAssetHandlerActive)
                ) && 
                (
                    CqCommerceAssetHandlerName == other.CqCommerceAssetHandlerName ||
                    CqCommerceAssetHandlerName != null &&
                    CqCommerceAssetHandlerName.Equals(other.CqCommerceAssetHandlerName)
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
                var hashCode = 41;
                // Suitable nullity checks etc, of course :)
                    if (CqCommerceAssetHandlerActive != null)
                    hashCode = hashCode * 59 + CqCommerceAssetHandlerActive.GetHashCode();
                    if (CqCommerceAssetHandlerName != null)
                    hashCode = hashCode * 59 + CqCommerceAssetHandlerName.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ComAdobeCqCommerceImplAssetVideoHandlerProperties left, ComAdobeCqCommerceImplAssetVideoHandlerProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ComAdobeCqCommerceImplAssetVideoHandlerProperties left, ComAdobeCqCommerceImplAssetVideoHandlerProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}