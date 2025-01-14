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
    /// ComDayCqAuthImplLoginSelectorHandlerProperties
    /// </summary>
    [DataContract]
    public partial class ComDayCqAuthImplLoginSelectorHandlerProperties :  IEquatable<ComDayCqAuthImplLoginSelectorHandlerProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComDayCqAuthImplLoginSelectorHandlerProperties" /> class.
        /// </summary>
        /// <param name="path">path.</param>
        /// <param name="serviceRanking">serviceRanking.</param>
        /// <param name="authLoginselectorMappings">authLoginselectorMappings.</param>
        /// <param name="authLoginselectorChangepwMappings">authLoginselectorChangepwMappings.</param>
        /// <param name="authLoginselectorDefaultloginpage">authLoginselectorDefaultloginpage.</param>
        /// <param name="authLoginselectorDefaultchangepwpage">authLoginselectorDefaultchangepwpage.</param>
        /// <param name="authLoginselectorHandle">authLoginselectorHandle.</param>
        /// <param name="authLoginselectorHandleAllExtensions">authLoginselectorHandleAllExtensions.</param>
        public ComDayCqAuthImplLoginSelectorHandlerProperties(ConfigNodePropertyString path = default(ConfigNodePropertyString), ConfigNodePropertyInteger serviceRanking = default(ConfigNodePropertyInteger), ConfigNodePropertyArray authLoginselectorMappings = default(ConfigNodePropertyArray), ConfigNodePropertyArray authLoginselectorChangepwMappings = default(ConfigNodePropertyArray), ConfigNodePropertyString authLoginselectorDefaultloginpage = default(ConfigNodePropertyString), ConfigNodePropertyString authLoginselectorDefaultchangepwpage = default(ConfigNodePropertyString), ConfigNodePropertyArray authLoginselectorHandle = default(ConfigNodePropertyArray), ConfigNodePropertyBoolean authLoginselectorHandleAllExtensions = default(ConfigNodePropertyBoolean))
        {
            this.Path = path;
            this.ServiceRanking = serviceRanking;
            this.AuthLoginselectorMappings = authLoginselectorMappings;
            this.AuthLoginselectorChangepwMappings = authLoginselectorChangepwMappings;
            this.AuthLoginselectorDefaultloginpage = authLoginselectorDefaultloginpage;
            this.AuthLoginselectorDefaultchangepwpage = authLoginselectorDefaultchangepwpage;
            this.AuthLoginselectorHandle = authLoginselectorHandle;
            this.AuthLoginselectorHandleAllExtensions = authLoginselectorHandleAllExtensions;
        }
        
        /// <summary>
        /// Gets or Sets Path
        /// </summary>
        [DataMember(Name="path", EmitDefaultValue=false)]
        public ConfigNodePropertyString Path { get; set; }

        /// <summary>
        /// Gets or Sets ServiceRanking
        /// </summary>
        [DataMember(Name="service.ranking", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger ServiceRanking { get; set; }

        /// <summary>
        /// Gets or Sets AuthLoginselectorMappings
        /// </summary>
        [DataMember(Name="auth.loginselector.mappings", EmitDefaultValue=false)]
        public ConfigNodePropertyArray AuthLoginselectorMappings { get; set; }

        /// <summary>
        /// Gets or Sets AuthLoginselectorChangepwMappings
        /// </summary>
        [DataMember(Name="auth.loginselector.changepw.mappings", EmitDefaultValue=false)]
        public ConfigNodePropertyArray AuthLoginselectorChangepwMappings { get; set; }

        /// <summary>
        /// Gets or Sets AuthLoginselectorDefaultloginpage
        /// </summary>
        [DataMember(Name="auth.loginselector.defaultloginpage", EmitDefaultValue=false)]
        public ConfigNodePropertyString AuthLoginselectorDefaultloginpage { get; set; }

        /// <summary>
        /// Gets or Sets AuthLoginselectorDefaultchangepwpage
        /// </summary>
        [DataMember(Name="auth.loginselector.defaultchangepwpage", EmitDefaultValue=false)]
        public ConfigNodePropertyString AuthLoginselectorDefaultchangepwpage { get; set; }

        /// <summary>
        /// Gets or Sets AuthLoginselectorHandle
        /// </summary>
        [DataMember(Name="auth.loginselector.handle", EmitDefaultValue=false)]
        public ConfigNodePropertyArray AuthLoginselectorHandle { get; set; }

        /// <summary>
        /// Gets or Sets AuthLoginselectorHandleAllExtensions
        /// </summary>
        [DataMember(Name="auth.loginselector.handle.all.extensions", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean AuthLoginselectorHandleAllExtensions { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqAuthImplLoginSelectorHandlerProperties {\n");
            sb.Append("  Path: ").Append(Path).Append("\n");
            sb.Append("  ServiceRanking: ").Append(ServiceRanking).Append("\n");
            sb.Append("  AuthLoginselectorMappings: ").Append(AuthLoginselectorMappings).Append("\n");
            sb.Append("  AuthLoginselectorChangepwMappings: ").Append(AuthLoginselectorChangepwMappings).Append("\n");
            sb.Append("  AuthLoginselectorDefaultloginpage: ").Append(AuthLoginselectorDefaultloginpage).Append("\n");
            sb.Append("  AuthLoginselectorDefaultchangepwpage: ").Append(AuthLoginselectorDefaultchangepwpage).Append("\n");
            sb.Append("  AuthLoginselectorHandle: ").Append(AuthLoginselectorHandle).Append("\n");
            sb.Append("  AuthLoginselectorHandleAllExtensions: ").Append(AuthLoginselectorHandleAllExtensions).Append("\n");
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
            return this.Equals(input as ComDayCqAuthImplLoginSelectorHandlerProperties);
        }

        /// <summary>
        /// Returns true if ComDayCqAuthImplLoginSelectorHandlerProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComDayCqAuthImplLoginSelectorHandlerProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqAuthImplLoginSelectorHandlerProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Path == input.Path ||
                    (this.Path != null &&
                    this.Path.Equals(input.Path))
                ) && 
                (
                    this.ServiceRanking == input.ServiceRanking ||
                    (this.ServiceRanking != null &&
                    this.ServiceRanking.Equals(input.ServiceRanking))
                ) && 
                (
                    this.AuthLoginselectorMappings == input.AuthLoginselectorMappings ||
                    (this.AuthLoginselectorMappings != null &&
                    this.AuthLoginselectorMappings.Equals(input.AuthLoginselectorMappings))
                ) && 
                (
                    this.AuthLoginselectorChangepwMappings == input.AuthLoginselectorChangepwMappings ||
                    (this.AuthLoginselectorChangepwMappings != null &&
                    this.AuthLoginselectorChangepwMappings.Equals(input.AuthLoginselectorChangepwMappings))
                ) && 
                (
                    this.AuthLoginselectorDefaultloginpage == input.AuthLoginselectorDefaultloginpage ||
                    (this.AuthLoginselectorDefaultloginpage != null &&
                    this.AuthLoginselectorDefaultloginpage.Equals(input.AuthLoginselectorDefaultloginpage))
                ) && 
                (
                    this.AuthLoginselectorDefaultchangepwpage == input.AuthLoginselectorDefaultchangepwpage ||
                    (this.AuthLoginselectorDefaultchangepwpage != null &&
                    this.AuthLoginselectorDefaultchangepwpage.Equals(input.AuthLoginselectorDefaultchangepwpage))
                ) && 
                (
                    this.AuthLoginselectorHandle == input.AuthLoginselectorHandle ||
                    (this.AuthLoginselectorHandle != null &&
                    this.AuthLoginselectorHandle.Equals(input.AuthLoginselectorHandle))
                ) && 
                (
                    this.AuthLoginselectorHandleAllExtensions == input.AuthLoginselectorHandleAllExtensions ||
                    (this.AuthLoginselectorHandleAllExtensions != null &&
                    this.AuthLoginselectorHandleAllExtensions.Equals(input.AuthLoginselectorHandleAllExtensions))
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
                if (this.Path != null)
                    hashCode = hashCode * 59 + this.Path.GetHashCode();
                if (this.ServiceRanking != null)
                    hashCode = hashCode * 59 + this.ServiceRanking.GetHashCode();
                if (this.AuthLoginselectorMappings != null)
                    hashCode = hashCode * 59 + this.AuthLoginselectorMappings.GetHashCode();
                if (this.AuthLoginselectorChangepwMappings != null)
                    hashCode = hashCode * 59 + this.AuthLoginselectorChangepwMappings.GetHashCode();
                if (this.AuthLoginselectorDefaultloginpage != null)
                    hashCode = hashCode * 59 + this.AuthLoginselectorDefaultloginpage.GetHashCode();
                if (this.AuthLoginselectorDefaultchangepwpage != null)
                    hashCode = hashCode * 59 + this.AuthLoginselectorDefaultchangepwpage.GetHashCode();
                if (this.AuthLoginselectorHandle != null)
                    hashCode = hashCode * 59 + this.AuthLoginselectorHandle.GetHashCode();
                if (this.AuthLoginselectorHandleAllExtensions != null)
                    hashCode = hashCode * 59 + this.AuthLoginselectorHandleAllExtensions.GetHashCode();
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
