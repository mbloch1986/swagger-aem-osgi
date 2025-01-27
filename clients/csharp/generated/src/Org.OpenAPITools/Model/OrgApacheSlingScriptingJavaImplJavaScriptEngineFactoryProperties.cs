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
    /// OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryProperties
    /// </summary>
    [DataContract]
    public partial class OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryProperties :  IEquatable<OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryProperties" /> class.
        /// </summary>
        /// <param name="javaClassdebuginfo">javaClassdebuginfo.</param>
        /// <param name="javaJavaEncoding">javaJavaEncoding.</param>
        /// <param name="javaCompilerSourceVM">javaCompilerSourceVM.</param>
        /// <param name="javaCompilerTargetVM">javaCompilerTargetVM.</param>
        public OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryProperties(ConfigNodePropertyBoolean javaClassdebuginfo = default(ConfigNodePropertyBoolean), ConfigNodePropertyString javaJavaEncoding = default(ConfigNodePropertyString), ConfigNodePropertyString javaCompilerSourceVM = default(ConfigNodePropertyString), ConfigNodePropertyString javaCompilerTargetVM = default(ConfigNodePropertyString))
        {
            this.JavaClassdebuginfo = javaClassdebuginfo;
            this.JavaJavaEncoding = javaJavaEncoding;
            this.JavaCompilerSourceVM = javaCompilerSourceVM;
            this.JavaCompilerTargetVM = javaCompilerTargetVM;
        }
        
        /// <summary>
        /// Gets or Sets JavaClassdebuginfo
        /// </summary>
        [DataMember(Name="java.classdebuginfo", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean JavaClassdebuginfo { get; set; }

        /// <summary>
        /// Gets or Sets JavaJavaEncoding
        /// </summary>
        [DataMember(Name="java.javaEncoding", EmitDefaultValue=false)]
        public ConfigNodePropertyString JavaJavaEncoding { get; set; }

        /// <summary>
        /// Gets or Sets JavaCompilerSourceVM
        /// </summary>
        [DataMember(Name="java.compilerSourceVM", EmitDefaultValue=false)]
        public ConfigNodePropertyString JavaCompilerSourceVM { get; set; }

        /// <summary>
        /// Gets or Sets JavaCompilerTargetVM
        /// </summary>
        [DataMember(Name="java.compilerTargetVM", EmitDefaultValue=false)]
        public ConfigNodePropertyString JavaCompilerTargetVM { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryProperties {\n");
            sb.Append("  JavaClassdebuginfo: ").Append(JavaClassdebuginfo).Append("\n");
            sb.Append("  JavaJavaEncoding: ").Append(JavaJavaEncoding).Append("\n");
            sb.Append("  JavaCompilerSourceVM: ").Append(JavaCompilerSourceVM).Append("\n");
            sb.Append("  JavaCompilerTargetVM: ").Append(JavaCompilerTargetVM).Append("\n");
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
            return this.Equals(input as OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryProperties);
        }

        /// <summary>
        /// Returns true if OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.JavaClassdebuginfo == input.JavaClassdebuginfo ||
                    (this.JavaClassdebuginfo != null &&
                    this.JavaClassdebuginfo.Equals(input.JavaClassdebuginfo))
                ) && 
                (
                    this.JavaJavaEncoding == input.JavaJavaEncoding ||
                    (this.JavaJavaEncoding != null &&
                    this.JavaJavaEncoding.Equals(input.JavaJavaEncoding))
                ) && 
                (
                    this.JavaCompilerSourceVM == input.JavaCompilerSourceVM ||
                    (this.JavaCompilerSourceVM != null &&
                    this.JavaCompilerSourceVM.Equals(input.JavaCompilerSourceVM))
                ) && 
                (
                    this.JavaCompilerTargetVM == input.JavaCompilerTargetVM ||
                    (this.JavaCompilerTargetVM != null &&
                    this.JavaCompilerTargetVM.Equals(input.JavaCompilerTargetVM))
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
                if (this.JavaClassdebuginfo != null)
                    hashCode = hashCode * 59 + this.JavaClassdebuginfo.GetHashCode();
                if (this.JavaJavaEncoding != null)
                    hashCode = hashCode * 59 + this.JavaJavaEncoding.GetHashCode();
                if (this.JavaCompilerSourceVM != null)
                    hashCode = hashCode * 59 + this.JavaCompilerSourceVM.GetHashCode();
                if (this.JavaCompilerTargetVM != null)
                    hashCode = hashCode * 59 + this.JavaCompilerTargetVM.GetHashCode();
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
