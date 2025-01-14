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
    public partial class ComDayCqDamScene7ImplScene7UploadServiceImplProperties : IEquatable<ComDayCqDamScene7ImplScene7UploadServiceImplProperties>
    { 
        /// <summary>
        /// Gets or Sets CqDamScene7UploadserviceActivejobtimeoutLabel
        /// </summary>
        [DataMember(Name="cq.dam.scene7.uploadservice.activejobtimeout.label")]
        public ConfigNodePropertyInteger CqDamScene7UploadserviceActivejobtimeoutLabel { get; set; }

        /// <summary>
        /// Gets or Sets CqDamScene7UploadserviceConnectionmaxperrouteLabel
        /// </summary>
        [DataMember(Name="cq.dam.scene7.uploadservice.connectionmaxperroute.label")]
        public ConfigNodePropertyInteger CqDamScene7UploadserviceConnectionmaxperrouteLabel { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqDamScene7ImplScene7UploadServiceImplProperties {\n");
            sb.Append("  CqDamScene7UploadserviceActivejobtimeoutLabel: ").Append(CqDamScene7UploadserviceActivejobtimeoutLabel).Append("\n");
            sb.Append("  CqDamScene7UploadserviceConnectionmaxperrouteLabel: ").Append(CqDamScene7UploadserviceConnectionmaxperrouteLabel).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ComDayCqDamScene7ImplScene7UploadServiceImplProperties)obj);
        }

        /// <summary>
        /// Returns true if ComDayCqDamScene7ImplScene7UploadServiceImplProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of ComDayCqDamScene7ImplScene7UploadServiceImplProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqDamScene7ImplScene7UploadServiceImplProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    CqDamScene7UploadserviceActivejobtimeoutLabel == other.CqDamScene7UploadserviceActivejobtimeoutLabel ||
                    CqDamScene7UploadserviceActivejobtimeoutLabel != null &&
                    CqDamScene7UploadserviceActivejobtimeoutLabel.Equals(other.CqDamScene7UploadserviceActivejobtimeoutLabel)
                ) && 
                (
                    CqDamScene7UploadserviceConnectionmaxperrouteLabel == other.CqDamScene7UploadserviceConnectionmaxperrouteLabel ||
                    CqDamScene7UploadserviceConnectionmaxperrouteLabel != null &&
                    CqDamScene7UploadserviceConnectionmaxperrouteLabel.Equals(other.CqDamScene7UploadserviceConnectionmaxperrouteLabel)
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
                    if (CqDamScene7UploadserviceActivejobtimeoutLabel != null)
                    hashCode = hashCode * 59 + CqDamScene7UploadserviceActivejobtimeoutLabel.GetHashCode();
                    if (CqDamScene7UploadserviceConnectionmaxperrouteLabel != null)
                    hashCode = hashCode * 59 + CqDamScene7UploadserviceConnectionmaxperrouteLabel.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ComDayCqDamScene7ImplScene7UploadServiceImplProperties left, ComDayCqDamScene7ImplScene7UploadServiceImplProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ComDayCqDamScene7ImplScene7UploadServiceImplProperties left, ComDayCqDamScene7ImplScene7UploadServiceImplProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
