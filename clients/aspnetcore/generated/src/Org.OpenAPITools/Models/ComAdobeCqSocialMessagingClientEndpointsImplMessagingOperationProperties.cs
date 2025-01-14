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
    public partial class ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties : IEquatable<ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties>
    { 
        /// <summary>
        /// Gets or Sets MessageProperties
        /// </summary>
        [DataMember(Name="message.properties")]
        public ConfigNodePropertyArray MessageProperties { get; set; }

        /// <summary>
        /// Gets or Sets MessageBoxSizeLimit
        /// </summary>
        [DataMember(Name="messageBoxSizeLimit")]
        public ConfigNodePropertyInteger MessageBoxSizeLimit { get; set; }

        /// <summary>
        /// Gets or Sets MessageCountLimit
        /// </summary>
        [DataMember(Name="messageCountLimit")]
        public ConfigNodePropertyInteger MessageCountLimit { get; set; }

        /// <summary>
        /// Gets or Sets NotifyFailure
        /// </summary>
        [DataMember(Name="notifyFailure")]
        public ConfigNodePropertyBoolean NotifyFailure { get; set; }

        /// <summary>
        /// Gets or Sets FailureMessageFrom
        /// </summary>
        [DataMember(Name="failureMessageFrom")]
        public ConfigNodePropertyString FailureMessageFrom { get; set; }

        /// <summary>
        /// Gets or Sets FailureTemplatePath
        /// </summary>
        [DataMember(Name="failureTemplatePath")]
        public ConfigNodePropertyString FailureTemplatePath { get; set; }

        /// <summary>
        /// Gets or Sets MaxRetries
        /// </summary>
        [DataMember(Name="maxRetries")]
        public ConfigNodePropertyInteger MaxRetries { get; set; }

        /// <summary>
        /// Gets or Sets MinWaitBetweenRetries
        /// </summary>
        [DataMember(Name="minWaitBetweenRetries")]
        public ConfigNodePropertyInteger MinWaitBetweenRetries { get; set; }

        /// <summary>
        /// Gets or Sets CountUpdatePoolSize
        /// </summary>
        [DataMember(Name="countUpdatePoolSize")]
        public ConfigNodePropertyInteger CountUpdatePoolSize { get; set; }

        /// <summary>
        /// Gets or Sets InboxPath
        /// </summary>
        [DataMember(Name="inbox.path")]
        public ConfigNodePropertyString InboxPath { get; set; }

        /// <summary>
        /// Gets or Sets SentitemsPath
        /// </summary>
        [DataMember(Name="sentitems.path")]
        public ConfigNodePropertyString SentitemsPath { get; set; }

        /// <summary>
        /// Gets or Sets SupportAttachments
        /// </summary>
        [DataMember(Name="supportAttachments")]
        public ConfigNodePropertyBoolean SupportAttachments { get; set; }

        /// <summary>
        /// Gets or Sets SupportGroupMessaging
        /// </summary>
        [DataMember(Name="supportGroupMessaging")]
        public ConfigNodePropertyBoolean SupportGroupMessaging { get; set; }

        /// <summary>
        /// Gets or Sets MaxTotalRecipients
        /// </summary>
        [DataMember(Name="maxTotalRecipients")]
        public ConfigNodePropertyInteger MaxTotalRecipients { get; set; }

        /// <summary>
        /// Gets or Sets BatchSize
        /// </summary>
        [DataMember(Name="batchSize")]
        public ConfigNodePropertyInteger BatchSize { get; set; }

        /// <summary>
        /// Gets or Sets MaxTotalAttachmentSize
        /// </summary>
        [DataMember(Name="maxTotalAttachmentSize")]
        public ConfigNodePropertyInteger MaxTotalAttachmentSize { get; set; }

        /// <summary>
        /// Gets or Sets AttachmentTypeBlacklist
        /// </summary>
        [DataMember(Name="attachmentTypeBlacklist")]
        public ConfigNodePropertyArray AttachmentTypeBlacklist { get; set; }

        /// <summary>
        /// Gets or Sets AllowedAttachmentTypes
        /// </summary>
        [DataMember(Name="allowedAttachmentTypes")]
        public ConfigNodePropertyArray AllowedAttachmentTypes { get; set; }

        /// <summary>
        /// Gets or Sets ServiceSelector
        /// </summary>
        [DataMember(Name="serviceSelector")]
        public ConfigNodePropertyString ServiceSelector { get; set; }

        /// <summary>
        /// Gets or Sets FieldWhitelist
        /// </summary>
        [DataMember(Name="fieldWhitelist")]
        public ConfigNodePropertyArray FieldWhitelist { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties {\n");
            sb.Append("  MessageProperties: ").Append(MessageProperties).Append("\n");
            sb.Append("  MessageBoxSizeLimit: ").Append(MessageBoxSizeLimit).Append("\n");
            sb.Append("  MessageCountLimit: ").Append(MessageCountLimit).Append("\n");
            sb.Append("  NotifyFailure: ").Append(NotifyFailure).Append("\n");
            sb.Append("  FailureMessageFrom: ").Append(FailureMessageFrom).Append("\n");
            sb.Append("  FailureTemplatePath: ").Append(FailureTemplatePath).Append("\n");
            sb.Append("  MaxRetries: ").Append(MaxRetries).Append("\n");
            sb.Append("  MinWaitBetweenRetries: ").Append(MinWaitBetweenRetries).Append("\n");
            sb.Append("  CountUpdatePoolSize: ").Append(CountUpdatePoolSize).Append("\n");
            sb.Append("  InboxPath: ").Append(InboxPath).Append("\n");
            sb.Append("  SentitemsPath: ").Append(SentitemsPath).Append("\n");
            sb.Append("  SupportAttachments: ").Append(SupportAttachments).Append("\n");
            sb.Append("  SupportGroupMessaging: ").Append(SupportGroupMessaging).Append("\n");
            sb.Append("  MaxTotalRecipients: ").Append(MaxTotalRecipients).Append("\n");
            sb.Append("  BatchSize: ").Append(BatchSize).Append("\n");
            sb.Append("  MaxTotalAttachmentSize: ").Append(MaxTotalAttachmentSize).Append("\n");
            sb.Append("  AttachmentTypeBlacklist: ").Append(AttachmentTypeBlacklist).Append("\n");
            sb.Append("  AllowedAttachmentTypes: ").Append(AllowedAttachmentTypes).Append("\n");
            sb.Append("  ServiceSelector: ").Append(ServiceSelector).Append("\n");
            sb.Append("  FieldWhitelist: ").Append(FieldWhitelist).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties)obj);
        }

        /// <summary>
        /// Returns true if ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    MessageProperties == other.MessageProperties ||
                    MessageProperties != null &&
                    MessageProperties.Equals(other.MessageProperties)
                ) && 
                (
                    MessageBoxSizeLimit == other.MessageBoxSizeLimit ||
                    MessageBoxSizeLimit != null &&
                    MessageBoxSizeLimit.Equals(other.MessageBoxSizeLimit)
                ) && 
                (
                    MessageCountLimit == other.MessageCountLimit ||
                    MessageCountLimit != null &&
                    MessageCountLimit.Equals(other.MessageCountLimit)
                ) && 
                (
                    NotifyFailure == other.NotifyFailure ||
                    NotifyFailure != null &&
                    NotifyFailure.Equals(other.NotifyFailure)
                ) && 
                (
                    FailureMessageFrom == other.FailureMessageFrom ||
                    FailureMessageFrom != null &&
                    FailureMessageFrom.Equals(other.FailureMessageFrom)
                ) && 
                (
                    FailureTemplatePath == other.FailureTemplatePath ||
                    FailureTemplatePath != null &&
                    FailureTemplatePath.Equals(other.FailureTemplatePath)
                ) && 
                (
                    MaxRetries == other.MaxRetries ||
                    MaxRetries != null &&
                    MaxRetries.Equals(other.MaxRetries)
                ) && 
                (
                    MinWaitBetweenRetries == other.MinWaitBetweenRetries ||
                    MinWaitBetweenRetries != null &&
                    MinWaitBetweenRetries.Equals(other.MinWaitBetweenRetries)
                ) && 
                (
                    CountUpdatePoolSize == other.CountUpdatePoolSize ||
                    CountUpdatePoolSize != null &&
                    CountUpdatePoolSize.Equals(other.CountUpdatePoolSize)
                ) && 
                (
                    InboxPath == other.InboxPath ||
                    InboxPath != null &&
                    InboxPath.Equals(other.InboxPath)
                ) && 
                (
                    SentitemsPath == other.SentitemsPath ||
                    SentitemsPath != null &&
                    SentitemsPath.Equals(other.SentitemsPath)
                ) && 
                (
                    SupportAttachments == other.SupportAttachments ||
                    SupportAttachments != null &&
                    SupportAttachments.Equals(other.SupportAttachments)
                ) && 
                (
                    SupportGroupMessaging == other.SupportGroupMessaging ||
                    SupportGroupMessaging != null &&
                    SupportGroupMessaging.Equals(other.SupportGroupMessaging)
                ) && 
                (
                    MaxTotalRecipients == other.MaxTotalRecipients ||
                    MaxTotalRecipients != null &&
                    MaxTotalRecipients.Equals(other.MaxTotalRecipients)
                ) && 
                (
                    BatchSize == other.BatchSize ||
                    BatchSize != null &&
                    BatchSize.Equals(other.BatchSize)
                ) && 
                (
                    MaxTotalAttachmentSize == other.MaxTotalAttachmentSize ||
                    MaxTotalAttachmentSize != null &&
                    MaxTotalAttachmentSize.Equals(other.MaxTotalAttachmentSize)
                ) && 
                (
                    AttachmentTypeBlacklist == other.AttachmentTypeBlacklist ||
                    AttachmentTypeBlacklist != null &&
                    AttachmentTypeBlacklist.Equals(other.AttachmentTypeBlacklist)
                ) && 
                (
                    AllowedAttachmentTypes == other.AllowedAttachmentTypes ||
                    AllowedAttachmentTypes != null &&
                    AllowedAttachmentTypes.Equals(other.AllowedAttachmentTypes)
                ) && 
                (
                    ServiceSelector == other.ServiceSelector ||
                    ServiceSelector != null &&
                    ServiceSelector.Equals(other.ServiceSelector)
                ) && 
                (
                    FieldWhitelist == other.FieldWhitelist ||
                    FieldWhitelist != null &&
                    FieldWhitelist.Equals(other.FieldWhitelist)
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
                    if (MessageProperties != null)
                    hashCode = hashCode * 59 + MessageProperties.GetHashCode();
                    if (MessageBoxSizeLimit != null)
                    hashCode = hashCode * 59 + MessageBoxSizeLimit.GetHashCode();
                    if (MessageCountLimit != null)
                    hashCode = hashCode * 59 + MessageCountLimit.GetHashCode();
                    if (NotifyFailure != null)
                    hashCode = hashCode * 59 + NotifyFailure.GetHashCode();
                    if (FailureMessageFrom != null)
                    hashCode = hashCode * 59 + FailureMessageFrom.GetHashCode();
                    if (FailureTemplatePath != null)
                    hashCode = hashCode * 59 + FailureTemplatePath.GetHashCode();
                    if (MaxRetries != null)
                    hashCode = hashCode * 59 + MaxRetries.GetHashCode();
                    if (MinWaitBetweenRetries != null)
                    hashCode = hashCode * 59 + MinWaitBetweenRetries.GetHashCode();
                    if (CountUpdatePoolSize != null)
                    hashCode = hashCode * 59 + CountUpdatePoolSize.GetHashCode();
                    if (InboxPath != null)
                    hashCode = hashCode * 59 + InboxPath.GetHashCode();
                    if (SentitemsPath != null)
                    hashCode = hashCode * 59 + SentitemsPath.GetHashCode();
                    if (SupportAttachments != null)
                    hashCode = hashCode * 59 + SupportAttachments.GetHashCode();
                    if (SupportGroupMessaging != null)
                    hashCode = hashCode * 59 + SupportGroupMessaging.GetHashCode();
                    if (MaxTotalRecipients != null)
                    hashCode = hashCode * 59 + MaxTotalRecipients.GetHashCode();
                    if (BatchSize != null)
                    hashCode = hashCode * 59 + BatchSize.GetHashCode();
                    if (MaxTotalAttachmentSize != null)
                    hashCode = hashCode * 59 + MaxTotalAttachmentSize.GetHashCode();
                    if (AttachmentTypeBlacklist != null)
                    hashCode = hashCode * 59 + AttachmentTypeBlacklist.GetHashCode();
                    if (AllowedAttachmentTypes != null)
                    hashCode = hashCode * 59 + AllowedAttachmentTypes.GetHashCode();
                    if (ServiceSelector != null)
                    hashCode = hashCode * 59 + ServiceSelector.GetHashCode();
                    if (FieldWhitelist != null)
                    hashCode = hashCode * 59 + FieldWhitelist.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties left, ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties left, ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
