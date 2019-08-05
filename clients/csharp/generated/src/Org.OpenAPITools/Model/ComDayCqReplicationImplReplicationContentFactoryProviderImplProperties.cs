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
    /// ComDayCqReplicationImplReplicationContentFactoryProviderImplProperties
    /// </summary>
    [DataContract]
    public partial class ComDayCqReplicationImplReplicationContentFactoryProviderImplProperties :  IEquatable<ComDayCqReplicationImplReplicationContentFactoryProviderImplProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ComDayCqReplicationImplReplicationContentFactoryProviderImplProperties" /> class.
        /// </summary>
        /// <param name="replicationContentUseFileStorage">replicationContentUseFileStorage.</param>
        /// <param name="replicationContentMaxCommitAttempts">replicationContentMaxCommitAttempts.</param>
        public ComDayCqReplicationImplReplicationContentFactoryProviderImplProperties(ConfigNodePropertyBoolean replicationContentUseFileStorage = default(ConfigNodePropertyBoolean), ConfigNodePropertyInteger replicationContentMaxCommitAttempts = default(ConfigNodePropertyInteger))
        {
            this.ReplicationContentUseFileStorage = replicationContentUseFileStorage;
            this.ReplicationContentMaxCommitAttempts = replicationContentMaxCommitAttempts;
        }
        
        /// <summary>
        /// Gets or Sets ReplicationContentUseFileStorage
        /// </summary>
        [DataMember(Name="replication.content.useFileStorage", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean ReplicationContentUseFileStorage { get; set; }

        /// <summary>
        /// Gets or Sets ReplicationContentMaxCommitAttempts
        /// </summary>
        [DataMember(Name="replication.content.maxCommitAttempts", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger ReplicationContentMaxCommitAttempts { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComDayCqReplicationImplReplicationContentFactoryProviderImplProperties {\n");
            sb.Append("  ReplicationContentUseFileStorage: ").Append(ReplicationContentUseFileStorage).Append("\n");
            sb.Append("  ReplicationContentMaxCommitAttempts: ").Append(ReplicationContentMaxCommitAttempts).Append("\n");
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
            return this.Equals(input as ComDayCqReplicationImplReplicationContentFactoryProviderImplProperties);
        }

        /// <summary>
        /// Returns true if ComDayCqReplicationImplReplicationContentFactoryProviderImplProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ComDayCqReplicationImplReplicationContentFactoryProviderImplProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComDayCqReplicationImplReplicationContentFactoryProviderImplProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.ReplicationContentUseFileStorage == input.ReplicationContentUseFileStorage ||
                    (this.ReplicationContentUseFileStorage != null &&
                    this.ReplicationContentUseFileStorage.Equals(input.ReplicationContentUseFileStorage))
                ) && 
                (
                    this.ReplicationContentMaxCommitAttempts == input.ReplicationContentMaxCommitAttempts ||
                    (this.ReplicationContentMaxCommitAttempts != null &&
                    this.ReplicationContentMaxCommitAttempts.Equals(input.ReplicationContentMaxCommitAttempts))
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
                if (this.ReplicationContentUseFileStorage != null)
                    hashCode = hashCode * 59 + this.ReplicationContentUseFileStorage.GetHashCode();
                if (this.ReplicationContentMaxCommitAttempts != null)
                    hashCode = hashCode * 59 + this.ReplicationContentMaxCommitAttempts.GetHashCode();
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