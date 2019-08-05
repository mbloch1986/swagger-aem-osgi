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
    /// OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties
    /// </summary>
    [DataContract]
    public partial class OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties :  IEquatable<OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties" /> class.
        /// </summary>
        /// <param name="name">name.</param>
        /// <param name="title">title.</param>
        /// <param name="details">details.</param>
        /// <param name="enabled">enabled.</param>
        /// <param name="serviceName">serviceName.</param>
        /// <param name="logLevel">logLevel.</param>
        /// <param name="allowedRoots">allowedRoots.</param>
        /// <param name="queueProcessingEnabled">queueProcessingEnabled.</param>
        /// <param name="packageImporterEndpoints">packageImporterEndpoints.</param>
        /// <param name="passiveQueues">passiveQueues.</param>
        /// <param name="priorityQueues">priorityQueues.</param>
        /// <param name="retryStrategy">retryStrategy.</param>
        /// <param name="retryAttempts">retryAttempts.</param>
        /// <param name="requestAuthorizationStrategyTarget">requestAuthorizationStrategyTarget.</param>
        /// <param name="transportSecretProviderTarget">transportSecretProviderTarget.</param>
        /// <param name="packageBuilderTarget">packageBuilderTarget.</param>
        /// <param name="triggersTarget">triggersTarget.</param>
        /// <param name="queueProvider">queueProvider.</param>
        /// <param name="asyncDelivery">asyncDelivery.</param>
        /// <param name="httpConnTimeout">httpConnTimeout.</param>
        public OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties(ConfigNodePropertyString name = default(ConfigNodePropertyString), ConfigNodePropertyString title = default(ConfigNodePropertyString), ConfigNodePropertyString details = default(ConfigNodePropertyString), ConfigNodePropertyBoolean enabled = default(ConfigNodePropertyBoolean), ConfigNodePropertyString serviceName = default(ConfigNodePropertyString), ConfigNodePropertyDropDown logLevel = default(ConfigNodePropertyDropDown), ConfigNodePropertyArray allowedRoots = default(ConfigNodePropertyArray), ConfigNodePropertyBoolean queueProcessingEnabled = default(ConfigNodePropertyBoolean), ConfigNodePropertyArray packageImporterEndpoints = default(ConfigNodePropertyArray), ConfigNodePropertyArray passiveQueues = default(ConfigNodePropertyArray), ConfigNodePropertyArray priorityQueues = default(ConfigNodePropertyArray), ConfigNodePropertyDropDown retryStrategy = default(ConfigNodePropertyDropDown), ConfigNodePropertyInteger retryAttempts = default(ConfigNodePropertyInteger), ConfigNodePropertyString requestAuthorizationStrategyTarget = default(ConfigNodePropertyString), ConfigNodePropertyString transportSecretProviderTarget = default(ConfigNodePropertyString), ConfigNodePropertyString packageBuilderTarget = default(ConfigNodePropertyString), ConfigNodePropertyString triggersTarget = default(ConfigNodePropertyString), ConfigNodePropertyDropDown queueProvider = default(ConfigNodePropertyDropDown), ConfigNodePropertyBoolean asyncDelivery = default(ConfigNodePropertyBoolean), ConfigNodePropertyInteger httpConnTimeout = default(ConfigNodePropertyInteger))
        {
            this.Name = name;
            this.Title = title;
            this.Details = details;
            this.Enabled = enabled;
            this.ServiceName = serviceName;
            this.LogLevel = logLevel;
            this.AllowedRoots = allowedRoots;
            this.QueueProcessingEnabled = queueProcessingEnabled;
            this.PackageImporterEndpoints = packageImporterEndpoints;
            this.PassiveQueues = passiveQueues;
            this.PriorityQueues = priorityQueues;
            this.RetryStrategy = retryStrategy;
            this.RetryAttempts = retryAttempts;
            this.RequestAuthorizationStrategyTarget = requestAuthorizationStrategyTarget;
            this.TransportSecretProviderTarget = transportSecretProviderTarget;
            this.PackageBuilderTarget = packageBuilderTarget;
            this.TriggersTarget = triggersTarget;
            this.QueueProvider = queueProvider;
            this.AsyncDelivery = asyncDelivery;
            this.HttpConnTimeout = httpConnTimeout;
        }
        
        /// <summary>
        /// Gets or Sets Name
        /// </summary>
        [DataMember(Name="name", EmitDefaultValue=false)]
        public ConfigNodePropertyString Name { get; set; }

        /// <summary>
        /// Gets or Sets Title
        /// </summary>
        [DataMember(Name="title", EmitDefaultValue=false)]
        public ConfigNodePropertyString Title { get; set; }

        /// <summary>
        /// Gets or Sets Details
        /// </summary>
        [DataMember(Name="details", EmitDefaultValue=false)]
        public ConfigNodePropertyString Details { get; set; }

        /// <summary>
        /// Gets or Sets Enabled
        /// </summary>
        [DataMember(Name="enabled", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean Enabled { get; set; }

        /// <summary>
        /// Gets or Sets ServiceName
        /// </summary>
        [DataMember(Name="serviceName", EmitDefaultValue=false)]
        public ConfigNodePropertyString ServiceName { get; set; }

        /// <summary>
        /// Gets or Sets LogLevel
        /// </summary>
        [DataMember(Name="log.level", EmitDefaultValue=false)]
        public ConfigNodePropertyDropDown LogLevel { get; set; }

        /// <summary>
        /// Gets or Sets AllowedRoots
        /// </summary>
        [DataMember(Name="allowed.roots", EmitDefaultValue=false)]
        public ConfigNodePropertyArray AllowedRoots { get; set; }

        /// <summary>
        /// Gets or Sets QueueProcessingEnabled
        /// </summary>
        [DataMember(Name="queue.processing.enabled", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean QueueProcessingEnabled { get; set; }

        /// <summary>
        /// Gets or Sets PackageImporterEndpoints
        /// </summary>
        [DataMember(Name="packageImporter.endpoints", EmitDefaultValue=false)]
        public ConfigNodePropertyArray PackageImporterEndpoints { get; set; }

        /// <summary>
        /// Gets or Sets PassiveQueues
        /// </summary>
        [DataMember(Name="passiveQueues", EmitDefaultValue=false)]
        public ConfigNodePropertyArray PassiveQueues { get; set; }

        /// <summary>
        /// Gets or Sets PriorityQueues
        /// </summary>
        [DataMember(Name="priorityQueues", EmitDefaultValue=false)]
        public ConfigNodePropertyArray PriorityQueues { get; set; }

        /// <summary>
        /// Gets or Sets RetryStrategy
        /// </summary>
        [DataMember(Name="retry.strategy", EmitDefaultValue=false)]
        public ConfigNodePropertyDropDown RetryStrategy { get; set; }

        /// <summary>
        /// Gets or Sets RetryAttempts
        /// </summary>
        [DataMember(Name="retry.attempts", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger RetryAttempts { get; set; }

        /// <summary>
        /// Gets or Sets RequestAuthorizationStrategyTarget
        /// </summary>
        [DataMember(Name="requestAuthorizationStrategy.target", EmitDefaultValue=false)]
        public ConfigNodePropertyString RequestAuthorizationStrategyTarget { get; set; }

        /// <summary>
        /// Gets or Sets TransportSecretProviderTarget
        /// </summary>
        [DataMember(Name="transportSecretProvider.target", EmitDefaultValue=false)]
        public ConfigNodePropertyString TransportSecretProviderTarget { get; set; }

        /// <summary>
        /// Gets or Sets PackageBuilderTarget
        /// </summary>
        [DataMember(Name="packageBuilder.target", EmitDefaultValue=false)]
        public ConfigNodePropertyString PackageBuilderTarget { get; set; }

        /// <summary>
        /// Gets or Sets TriggersTarget
        /// </summary>
        [DataMember(Name="triggers.target", EmitDefaultValue=false)]
        public ConfigNodePropertyString TriggersTarget { get; set; }

        /// <summary>
        /// Gets or Sets QueueProvider
        /// </summary>
        [DataMember(Name="queue.provider", EmitDefaultValue=false)]
        public ConfigNodePropertyDropDown QueueProvider { get; set; }

        /// <summary>
        /// Gets or Sets AsyncDelivery
        /// </summary>
        [DataMember(Name="async.delivery", EmitDefaultValue=false)]
        public ConfigNodePropertyBoolean AsyncDelivery { get; set; }

        /// <summary>
        /// Gets or Sets HttpConnTimeout
        /// </summary>
        [DataMember(Name="http.conn.timeout", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger HttpConnTimeout { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties {\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Title: ").Append(Title).Append("\n");
            sb.Append("  Details: ").Append(Details).Append("\n");
            sb.Append("  Enabled: ").Append(Enabled).Append("\n");
            sb.Append("  ServiceName: ").Append(ServiceName).Append("\n");
            sb.Append("  LogLevel: ").Append(LogLevel).Append("\n");
            sb.Append("  AllowedRoots: ").Append(AllowedRoots).Append("\n");
            sb.Append("  QueueProcessingEnabled: ").Append(QueueProcessingEnabled).Append("\n");
            sb.Append("  PackageImporterEndpoints: ").Append(PackageImporterEndpoints).Append("\n");
            sb.Append("  PassiveQueues: ").Append(PassiveQueues).Append("\n");
            sb.Append("  PriorityQueues: ").Append(PriorityQueues).Append("\n");
            sb.Append("  RetryStrategy: ").Append(RetryStrategy).Append("\n");
            sb.Append("  RetryAttempts: ").Append(RetryAttempts).Append("\n");
            sb.Append("  RequestAuthorizationStrategyTarget: ").Append(RequestAuthorizationStrategyTarget).Append("\n");
            sb.Append("  TransportSecretProviderTarget: ").Append(TransportSecretProviderTarget).Append("\n");
            sb.Append("  PackageBuilderTarget: ").Append(PackageBuilderTarget).Append("\n");
            sb.Append("  TriggersTarget: ").Append(TriggersTarget).Append("\n");
            sb.Append("  QueueProvider: ").Append(QueueProvider).Append("\n");
            sb.Append("  AsyncDelivery: ").Append(AsyncDelivery).Append("\n");
            sb.Append("  HttpConnTimeout: ").Append(HttpConnTimeout).Append("\n");
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
            return this.Equals(input as OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties);
        }

        /// <summary>
        /// Returns true if OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Name == input.Name ||
                    (this.Name != null &&
                    this.Name.Equals(input.Name))
                ) && 
                (
                    this.Title == input.Title ||
                    (this.Title != null &&
                    this.Title.Equals(input.Title))
                ) && 
                (
                    this.Details == input.Details ||
                    (this.Details != null &&
                    this.Details.Equals(input.Details))
                ) && 
                (
                    this.Enabled == input.Enabled ||
                    (this.Enabled != null &&
                    this.Enabled.Equals(input.Enabled))
                ) && 
                (
                    this.ServiceName == input.ServiceName ||
                    (this.ServiceName != null &&
                    this.ServiceName.Equals(input.ServiceName))
                ) && 
                (
                    this.LogLevel == input.LogLevel ||
                    (this.LogLevel != null &&
                    this.LogLevel.Equals(input.LogLevel))
                ) && 
                (
                    this.AllowedRoots == input.AllowedRoots ||
                    (this.AllowedRoots != null &&
                    this.AllowedRoots.Equals(input.AllowedRoots))
                ) && 
                (
                    this.QueueProcessingEnabled == input.QueueProcessingEnabled ||
                    (this.QueueProcessingEnabled != null &&
                    this.QueueProcessingEnabled.Equals(input.QueueProcessingEnabled))
                ) && 
                (
                    this.PackageImporterEndpoints == input.PackageImporterEndpoints ||
                    (this.PackageImporterEndpoints != null &&
                    this.PackageImporterEndpoints.Equals(input.PackageImporterEndpoints))
                ) && 
                (
                    this.PassiveQueues == input.PassiveQueues ||
                    (this.PassiveQueues != null &&
                    this.PassiveQueues.Equals(input.PassiveQueues))
                ) && 
                (
                    this.PriorityQueues == input.PriorityQueues ||
                    (this.PriorityQueues != null &&
                    this.PriorityQueues.Equals(input.PriorityQueues))
                ) && 
                (
                    this.RetryStrategy == input.RetryStrategy ||
                    (this.RetryStrategy != null &&
                    this.RetryStrategy.Equals(input.RetryStrategy))
                ) && 
                (
                    this.RetryAttempts == input.RetryAttempts ||
                    (this.RetryAttempts != null &&
                    this.RetryAttempts.Equals(input.RetryAttempts))
                ) && 
                (
                    this.RequestAuthorizationStrategyTarget == input.RequestAuthorizationStrategyTarget ||
                    (this.RequestAuthorizationStrategyTarget != null &&
                    this.RequestAuthorizationStrategyTarget.Equals(input.RequestAuthorizationStrategyTarget))
                ) && 
                (
                    this.TransportSecretProviderTarget == input.TransportSecretProviderTarget ||
                    (this.TransportSecretProviderTarget != null &&
                    this.TransportSecretProviderTarget.Equals(input.TransportSecretProviderTarget))
                ) && 
                (
                    this.PackageBuilderTarget == input.PackageBuilderTarget ||
                    (this.PackageBuilderTarget != null &&
                    this.PackageBuilderTarget.Equals(input.PackageBuilderTarget))
                ) && 
                (
                    this.TriggersTarget == input.TriggersTarget ||
                    (this.TriggersTarget != null &&
                    this.TriggersTarget.Equals(input.TriggersTarget))
                ) && 
                (
                    this.QueueProvider == input.QueueProvider ||
                    (this.QueueProvider != null &&
                    this.QueueProvider.Equals(input.QueueProvider))
                ) && 
                (
                    this.AsyncDelivery == input.AsyncDelivery ||
                    (this.AsyncDelivery != null &&
                    this.AsyncDelivery.Equals(input.AsyncDelivery))
                ) && 
                (
                    this.HttpConnTimeout == input.HttpConnTimeout ||
                    (this.HttpConnTimeout != null &&
                    this.HttpConnTimeout.Equals(input.HttpConnTimeout))
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
                if (this.Name != null)
                    hashCode = hashCode * 59 + this.Name.GetHashCode();
                if (this.Title != null)
                    hashCode = hashCode * 59 + this.Title.GetHashCode();
                if (this.Details != null)
                    hashCode = hashCode * 59 + this.Details.GetHashCode();
                if (this.Enabled != null)
                    hashCode = hashCode * 59 + this.Enabled.GetHashCode();
                if (this.ServiceName != null)
                    hashCode = hashCode * 59 + this.ServiceName.GetHashCode();
                if (this.LogLevel != null)
                    hashCode = hashCode * 59 + this.LogLevel.GetHashCode();
                if (this.AllowedRoots != null)
                    hashCode = hashCode * 59 + this.AllowedRoots.GetHashCode();
                if (this.QueueProcessingEnabled != null)
                    hashCode = hashCode * 59 + this.QueueProcessingEnabled.GetHashCode();
                if (this.PackageImporterEndpoints != null)
                    hashCode = hashCode * 59 + this.PackageImporterEndpoints.GetHashCode();
                if (this.PassiveQueues != null)
                    hashCode = hashCode * 59 + this.PassiveQueues.GetHashCode();
                if (this.PriorityQueues != null)
                    hashCode = hashCode * 59 + this.PriorityQueues.GetHashCode();
                if (this.RetryStrategy != null)
                    hashCode = hashCode * 59 + this.RetryStrategy.GetHashCode();
                if (this.RetryAttempts != null)
                    hashCode = hashCode * 59 + this.RetryAttempts.GetHashCode();
                if (this.RequestAuthorizationStrategyTarget != null)
                    hashCode = hashCode * 59 + this.RequestAuthorizationStrategyTarget.GetHashCode();
                if (this.TransportSecretProviderTarget != null)
                    hashCode = hashCode * 59 + this.TransportSecretProviderTarget.GetHashCode();
                if (this.PackageBuilderTarget != null)
                    hashCode = hashCode * 59 + this.PackageBuilderTarget.GetHashCode();
                if (this.TriggersTarget != null)
                    hashCode = hashCode * 59 + this.TriggersTarget.GetHashCode();
                if (this.QueueProvider != null)
                    hashCode = hashCode * 59 + this.QueueProvider.GetHashCode();
                if (this.AsyncDelivery != null)
                    hashCode = hashCode * 59 + this.AsyncDelivery.GetHashCode();
                if (this.HttpConnTimeout != null)
                    hashCode = hashCode * 59 + this.HttpConnTimeout.GetHashCode();
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