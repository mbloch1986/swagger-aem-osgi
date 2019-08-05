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
    public partial class ComDayCqAnalyticsSitecatalystImplExporterClassificationsExporteProperties : IEquatable<ComDayCqAnalyticsSitecatalystImplExporterClassificationsExporteProperties>
    { 
        /// <summary>
        /// Gets or Sets AllowedPaths
        /// </summary>
        [DataMember(Name="allowed.paths")]
        public ConfigNodePropertyArray AllowedPaths { get; set; }

        /// <summary>
        /// Gets or Sets CqAnalyticsSaintExporterPagesize
        /// </summary>
        [DataMember(Name="cq.analytics.saint.exporter.pagesize")]
        public ConfigNodePropertyInteger CqAnalyticsSaintExporterPagesize { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqAnalyticsSitecatalystImplExporterClassificationsExporteProperties {\n");
            sb.Append("  AllowedPaths: ").Append(AllowedPaths).Append("\n");
            sb.Append("  CqAnalyticsSaintExporterPagesize: ").Append(CqAnalyticsSaintExporterPagesize).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ComDayCqAnalyticsSitecatalystImplExporterClassificationsExporteProperties)obj);
        }

        /// <summary>
        /// Returns true if ComDayCqAnalyticsSitecatalystImplExporterClassificationsExporteProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of ComDayCqAnalyticsSitecatalystImplExporterClassificationsExporteProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqAnalyticsSitecatalystImplExporterClassificationsExporteProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    AllowedPaths == other.AllowedPaths ||
                    AllowedPaths != null &&
                    AllowedPaths.Equals(other.AllowedPaths)
                ) && 
                (
                    CqAnalyticsSaintExporterPagesize == other.CqAnalyticsSaintExporterPagesize ||
                    CqAnalyticsSaintExporterPagesize != null &&
                    CqAnalyticsSaintExporterPagesize.Equals(other.CqAnalyticsSaintExporterPagesize)
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
                    if (AllowedPaths != null)
                    hashCode = hashCode * 59 + AllowedPaths.GetHashCode();
                    if (CqAnalyticsSaintExporterPagesize != null)
                    hashCode = hashCode * 59 + CqAnalyticsSaintExporterPagesize.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ComDayCqAnalyticsSitecatalystImplExporterClassificationsExporteProperties left, ComDayCqAnalyticsSitecatalystImplExporterClassificationsExporteProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ComDayCqAnalyticsSitecatalystImplExporterClassificationsExporteProperties left, ComDayCqAnalyticsSitecatalystImplExporterClassificationsExporteProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}