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
    /// ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties
    /// </summary>
    [DataContract]
    public partial class ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties :  IEquatable<ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties" /> class.
        /// </summary>
        /// <param name="cqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName">cqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName.</param>
        /// <param name="cqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName">cqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName.</param>
        /// <param name="cqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName">cqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName.</param>
        /// <param name="cqDamS7damVideoproxyclientserviceHttpReadtimeoutName">cqDamS7damVideoproxyclientserviceHttpReadtimeoutName.</param>
        /// <param name="cqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName">cqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName.</param>
        /// <param name="cqDamS7damVideoproxyclientserviceHttpMaxretrycountName">cqDamS7damVideoproxyclientserviceHttpMaxretrycountName.</param>
        /// <param name="cqDamS7damVideoproxyclientserviceUploadprogressIntervalName">cqDamS7damVideoproxyclientserviceUploadprogressIntervalName.</param>
        public ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties(ConfigNodePropertyInteger cqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName = default(ConfigNodePropertyInteger), ConfigNodePropertyInteger cqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName = default(ConfigNodePropertyInteger), ConfigNodePropertyInteger cqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName = default(ConfigNodePropertyInteger), ConfigNodePropertyInteger cqDamS7damVideoproxyclientserviceHttpReadtimeoutName = default(ConfigNodePropertyInteger), ConfigNodePropertyInteger cqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName = default(ConfigNodePropertyInteger), ConfigNodePropertyInteger cqDamS7damVideoproxyclientserviceHttpMaxretrycountName = default(ConfigNodePropertyInteger), ConfigNodePropertyInteger cqDamS7damVideoproxyclientserviceUploadprogressIntervalName = default(ConfigNodePropertyInteger))
        {
            this.CqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName = cqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName;
            this.CqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName = cqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName;
            this.CqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName = cqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName;
            this.CqDamS7damVideoproxyclientserviceHttpReadtimeoutName = cqDamS7damVideoproxyclientserviceHttpReadtimeoutName;
            this.CqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName = cqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName;
            this.CqDamS7damVideoproxyclientserviceHttpMaxretrycountName = cqDamS7damVideoproxyclientserviceHttpMaxretrycountName;
            this.CqDamS7damVideoproxyclientserviceUploadprogressIntervalName = cqDamS7damVideoproxyclientserviceUploadprogressIntervalName;
        }
        
        /// <summary>
        /// Gets or Sets CqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName
        /// </summary>
        [DataMember(Name="cq.dam.s7dam.videoproxyclientservice.multipartupload.minsize.name", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger CqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName { get; set; }

        /// <summary>
        /// Gets or Sets CqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName
        /// </summary>
        [DataMember(Name="cq.dam.s7dam.videoproxyclientservice.multipartupload.partsize.name", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger CqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName { get; set; }

        /// <summary>
        /// Gets or Sets CqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName
        /// </summary>
        [DataMember(Name="cq.dam.s7dam.videoproxyclientservice.multipartupload.numthread.name", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger CqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName { get; set; }

        /// <summary>
        /// Gets or Sets CqDamS7damVideoproxyclientserviceHttpReadtimeoutName
        /// </summary>
        [DataMember(Name="cq.dam.s7dam.videoproxyclientservice.http.readtimeout.name", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger CqDamS7damVideoproxyclientserviceHttpReadtimeoutName { get; set; }

        /// <summary>
        /// Gets or Sets CqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName
        /// </summary>
        [DataMember(Name="cq.dam.s7dam.videoproxyclientservice.http.connectiontimeout.name", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger CqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName { get; set; }

        /// <summary>
        /// Gets or Sets CqDamS7damVideoproxyclientserviceHttpMaxretrycountName
        /// </summary>
        [DataMember(Name="cq.dam.s7dam.videoproxyclientservice.http.maxretrycount.name", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger CqDamS7damVideoproxyclientserviceHttpMaxretrycountName { get; set; }

        /// <summary>
        /// Gets or Sets CqDamS7damVideoproxyclientserviceUploadprogressIntervalName
        /// </summary>
        [DataMember(Name="cq.dam.s7dam.videoproxyclientservice.uploadprogress.interval.name", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger CqDamS7damVideoproxyclientserviceUploadprogressIntervalName { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties {\n");
            sb.Append("  CqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName: ").Append(CqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName).Append("\n");
            sb.Append("  CqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName: ").Append(CqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName).Append("\n");
            sb.Append("  CqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName: ").Append(CqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName).Append("\n");
            sb.Append("  CqDamS7damVideoproxyclientserviceHttpReadtimeoutName: ").Append(CqDamS7damVideoproxyclientserviceHttpReadtimeoutName).Append("\n");
            sb.Append("  CqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName: ").Append(CqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName).Append("\n");
            sb.Append("  CqDamS7damVideoproxyclientserviceHttpMaxretrycountName: ").Append(CqDamS7damVideoproxyclientserviceHttpMaxretrycountName).Append("\n");
            sb.Append("  CqDamS7damVideoproxyclientserviceUploadprogressIntervalName: ").Append(CqDamS7damVideoproxyclientserviceUploadprogressIntervalName).Append("\n");
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
            return this.Equals(input as ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties);
        }

        /// <summary>
        /// Returns true if ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.CqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName == input.CqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName ||
                    (this.CqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName != null &&
                    this.CqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName.Equals(input.CqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName))
                ) && 
                (
                    this.CqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName == input.CqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName ||
                    (this.CqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName != null &&
                    this.CqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName.Equals(input.CqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName))
                ) && 
                (
                    this.CqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName == input.CqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName ||
                    (this.CqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName != null &&
                    this.CqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName.Equals(input.CqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName))
                ) && 
                (
                    this.CqDamS7damVideoproxyclientserviceHttpReadtimeoutName == input.CqDamS7damVideoproxyclientserviceHttpReadtimeoutName ||
                    (this.CqDamS7damVideoproxyclientserviceHttpReadtimeoutName != null &&
                    this.CqDamS7damVideoproxyclientserviceHttpReadtimeoutName.Equals(input.CqDamS7damVideoproxyclientserviceHttpReadtimeoutName))
                ) && 
                (
                    this.CqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName == input.CqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName ||
                    (this.CqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName != null &&
                    this.CqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName.Equals(input.CqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName))
                ) && 
                (
                    this.CqDamS7damVideoproxyclientserviceHttpMaxretrycountName == input.CqDamS7damVideoproxyclientserviceHttpMaxretrycountName ||
                    (this.CqDamS7damVideoproxyclientserviceHttpMaxretrycountName != null &&
                    this.CqDamS7damVideoproxyclientserviceHttpMaxretrycountName.Equals(input.CqDamS7damVideoproxyclientserviceHttpMaxretrycountName))
                ) && 
                (
                    this.CqDamS7damVideoproxyclientserviceUploadprogressIntervalName == input.CqDamS7damVideoproxyclientserviceUploadprogressIntervalName ||
                    (this.CqDamS7damVideoproxyclientserviceUploadprogressIntervalName != null &&
                    this.CqDamS7damVideoproxyclientserviceUploadprogressIntervalName.Equals(input.CqDamS7damVideoproxyclientserviceUploadprogressIntervalName))
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
                if (this.CqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName != null)
                    hashCode = hashCode * 59 + this.CqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName.GetHashCode();
                if (this.CqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName != null)
                    hashCode = hashCode * 59 + this.CqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName.GetHashCode();
                if (this.CqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName != null)
                    hashCode = hashCode * 59 + this.CqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName.GetHashCode();
                if (this.CqDamS7damVideoproxyclientserviceHttpReadtimeoutName != null)
                    hashCode = hashCode * 59 + this.CqDamS7damVideoproxyclientserviceHttpReadtimeoutName.GetHashCode();
                if (this.CqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName != null)
                    hashCode = hashCode * 59 + this.CqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName.GetHashCode();
                if (this.CqDamS7damVideoproxyclientserviceHttpMaxretrycountName != null)
                    hashCode = hashCode * 59 + this.CqDamS7damVideoproxyclientserviceHttpMaxretrycountName.GetHashCode();
                if (this.CqDamS7damVideoproxyclientserviceUploadprogressIntervalName != null)
                    hashCode = hashCode * 59 + this.CqDamS7damVideoproxyclientserviceUploadprogressIntervalName.GetHashCode();
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
