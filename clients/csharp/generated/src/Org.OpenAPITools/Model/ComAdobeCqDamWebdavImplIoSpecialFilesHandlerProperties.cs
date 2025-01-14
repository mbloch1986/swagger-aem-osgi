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
    /// ComAdobeCqDamWebdavImplIoSpecialFilesHandlerProperties
    /// </summary>
    [DataContract]
    public partial class ComAdobeCqDamWebdavImplIoSpecialFilesHandlerProperties :  IEquatable<ComAdobeCqDamWebdavImplIoSpecialFilesHandlerProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComAdobeCqDamWebdavImplIoSpecialFilesHandlerProperties" /> class.
        /// </summary>
        /// <param name="comDayCqDamCoreImplIoSpecialFilesHandlerFilepatters">comDayCqDamCoreImplIoSpecialFilesHandlerFilepatters.</param>
        public ComAdobeCqDamWebdavImplIoSpecialFilesHandlerProperties(ConfigNodePropertyArray comDayCqDamCoreImplIoSpecialFilesHandlerFilepatters = default(ConfigNodePropertyArray))
        {
            this.ComDayCqDamCoreImplIoSpecialFilesHandlerFilepatters = comDayCqDamCoreImplIoSpecialFilesHandlerFilepatters;
        }
        
        /// <summary>
        /// Gets or Sets ComDayCqDamCoreImplIoSpecialFilesHandlerFilepatters
        /// </summary>
        [DataMember(Name="com.day.cq.dam.core.impl.io.SpecialFilesHandler.filepatters", EmitDefaultValue=false)]
        public ConfigNodePropertyArray ComDayCqDamCoreImplIoSpecialFilesHandlerFilepatters { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComAdobeCqDamWebdavImplIoSpecialFilesHandlerProperties {\n");
            sb.Append("  ComDayCqDamCoreImplIoSpecialFilesHandlerFilepatters: ").Append(ComDayCqDamCoreImplIoSpecialFilesHandlerFilepatters).Append("\n");
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
            return this.Equals(input as ComAdobeCqDamWebdavImplIoSpecialFilesHandlerProperties);
        }

        /// <summary>
        /// Returns true if ComAdobeCqDamWebdavImplIoSpecialFilesHandlerProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComAdobeCqDamWebdavImplIoSpecialFilesHandlerProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComAdobeCqDamWebdavImplIoSpecialFilesHandlerProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.ComDayCqDamCoreImplIoSpecialFilesHandlerFilepatters == input.ComDayCqDamCoreImplIoSpecialFilesHandlerFilepatters ||
                    (this.ComDayCqDamCoreImplIoSpecialFilesHandlerFilepatters != null &&
                    this.ComDayCqDamCoreImplIoSpecialFilesHandlerFilepatters.Equals(input.ComDayCqDamCoreImplIoSpecialFilesHandlerFilepatters))
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
                if (this.ComDayCqDamCoreImplIoSpecialFilesHandlerFilepatters != null)
                    hashCode = hashCode * 59 + this.ComDayCqDamCoreImplIoSpecialFilesHandlerFilepatters.GetHashCode();
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
