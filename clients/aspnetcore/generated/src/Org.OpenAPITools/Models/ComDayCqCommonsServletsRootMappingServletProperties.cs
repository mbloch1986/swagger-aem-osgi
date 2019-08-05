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
    public partial class ComDayCqCommonsServletsRootMappingServletProperties : IEquatable<ComDayCqCommonsServletsRootMappingServletProperties>
    { 
        /// <summary>
        /// Gets or Sets RootmappingTarget
        /// </summary>
        [DataMember(Name="rootmapping.target")]
        public ConfigNodePropertyString RootmappingTarget { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqCommonsServletsRootMappingServletProperties {\n");
            sb.Append("  RootmappingTarget: ").Append(RootmappingTarget).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ComDayCqCommonsServletsRootMappingServletProperties)obj);
        }

        /// <summary>
        /// Returns true if ComDayCqCommonsServletsRootMappingServletProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of ComDayCqCommonsServletsRootMappingServletProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqCommonsServletsRootMappingServletProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    RootmappingTarget == other.RootmappingTarget ||
                    RootmappingTarget != null &&
                    RootmappingTarget.Equals(other.RootmappingTarget)
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
                    if (RootmappingTarget != null)
                    hashCode = hashCode * 59 + RootmappingTarget.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ComDayCqCommonsServletsRootMappingServletProperties left, ComDayCqCommonsServletsRootMappingServletProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ComDayCqCommonsServletsRootMappingServletProperties left, ComDayCqCommonsServletsRootMappingServletProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}