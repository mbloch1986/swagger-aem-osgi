/**
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

package org.openapitools.client.model;

import org.openapitools.client.model.ConfigNodePropertyArray;
import org.openapitools.client.model.ConfigNodePropertyBoolean;
import org.openapitools.client.model.ConfigNodePropertyInteger;
import org.openapitools.client.model.ConfigNodePropertyString;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties {
  
  @SerializedName("message.properties")
  private ConfigNodePropertyArray messageProperties = null;
  @SerializedName("messageBoxSizeLimit")
  private ConfigNodePropertyInteger messageBoxSizeLimit = null;
  @SerializedName("messageCountLimit")
  private ConfigNodePropertyInteger messageCountLimit = null;
  @SerializedName("notifyFailure")
  private ConfigNodePropertyBoolean notifyFailure = null;
  @SerializedName("failureMessageFrom")
  private ConfigNodePropertyString failureMessageFrom = null;
  @SerializedName("failureTemplatePath")
  private ConfigNodePropertyString failureTemplatePath = null;
  @SerializedName("maxRetries")
  private ConfigNodePropertyInteger maxRetries = null;
  @SerializedName("minWaitBetweenRetries")
  private ConfigNodePropertyInteger minWaitBetweenRetries = null;
  @SerializedName("countUpdatePoolSize")
  private ConfigNodePropertyInteger countUpdatePoolSize = null;
  @SerializedName("inbox.path")
  private ConfigNodePropertyString inboxPath = null;
  @SerializedName("sentitems.path")
  private ConfigNodePropertyString sentitemsPath = null;
  @SerializedName("supportAttachments")
  private ConfigNodePropertyBoolean supportAttachments = null;
  @SerializedName("supportGroupMessaging")
  private ConfigNodePropertyBoolean supportGroupMessaging = null;
  @SerializedName("maxTotalRecipients")
  private ConfigNodePropertyInteger maxTotalRecipients = null;
  @SerializedName("batchSize")
  private ConfigNodePropertyInteger batchSize = null;
  @SerializedName("maxTotalAttachmentSize")
  private ConfigNodePropertyInteger maxTotalAttachmentSize = null;
  @SerializedName("attachmentTypeBlacklist")
  private ConfigNodePropertyArray attachmentTypeBlacklist = null;
  @SerializedName("allowedAttachmentTypes")
  private ConfigNodePropertyArray allowedAttachmentTypes = null;
  @SerializedName("serviceSelector")
  private ConfigNodePropertyString serviceSelector = null;
  @SerializedName("fieldWhitelist")
  private ConfigNodePropertyArray fieldWhitelist = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getMessageProperties() {
    return messageProperties;
  }
  public void setMessageProperties(ConfigNodePropertyArray messageProperties) {
    this.messageProperties = messageProperties;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getMessageBoxSizeLimit() {
    return messageBoxSizeLimit;
  }
  public void setMessageBoxSizeLimit(ConfigNodePropertyInteger messageBoxSizeLimit) {
    this.messageBoxSizeLimit = messageBoxSizeLimit;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getMessageCountLimit() {
    return messageCountLimit;
  }
  public void setMessageCountLimit(ConfigNodePropertyInteger messageCountLimit) {
    this.messageCountLimit = messageCountLimit;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getNotifyFailure() {
    return notifyFailure;
  }
  public void setNotifyFailure(ConfigNodePropertyBoolean notifyFailure) {
    this.notifyFailure = notifyFailure;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getFailureMessageFrom() {
    return failureMessageFrom;
  }
  public void setFailureMessageFrom(ConfigNodePropertyString failureMessageFrom) {
    this.failureMessageFrom = failureMessageFrom;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getFailureTemplatePath() {
    return failureTemplatePath;
  }
  public void setFailureTemplatePath(ConfigNodePropertyString failureTemplatePath) {
    this.failureTemplatePath = failureTemplatePath;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getMaxRetries() {
    return maxRetries;
  }
  public void setMaxRetries(ConfigNodePropertyInteger maxRetries) {
    this.maxRetries = maxRetries;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getMinWaitBetweenRetries() {
    return minWaitBetweenRetries;
  }
  public void setMinWaitBetweenRetries(ConfigNodePropertyInteger minWaitBetweenRetries) {
    this.minWaitBetweenRetries = minWaitBetweenRetries;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getCountUpdatePoolSize() {
    return countUpdatePoolSize;
  }
  public void setCountUpdatePoolSize(ConfigNodePropertyInteger countUpdatePoolSize) {
    this.countUpdatePoolSize = countUpdatePoolSize;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getInboxPath() {
    return inboxPath;
  }
  public void setInboxPath(ConfigNodePropertyString inboxPath) {
    this.inboxPath = inboxPath;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getSentitemsPath() {
    return sentitemsPath;
  }
  public void setSentitemsPath(ConfigNodePropertyString sentitemsPath) {
    this.sentitemsPath = sentitemsPath;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getSupportAttachments() {
    return supportAttachments;
  }
  public void setSupportAttachments(ConfigNodePropertyBoolean supportAttachments) {
    this.supportAttachments = supportAttachments;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getSupportGroupMessaging() {
    return supportGroupMessaging;
  }
  public void setSupportGroupMessaging(ConfigNodePropertyBoolean supportGroupMessaging) {
    this.supportGroupMessaging = supportGroupMessaging;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getMaxTotalRecipients() {
    return maxTotalRecipients;
  }
  public void setMaxTotalRecipients(ConfigNodePropertyInteger maxTotalRecipients) {
    this.maxTotalRecipients = maxTotalRecipients;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getBatchSize() {
    return batchSize;
  }
  public void setBatchSize(ConfigNodePropertyInteger batchSize) {
    this.batchSize = batchSize;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getMaxTotalAttachmentSize() {
    return maxTotalAttachmentSize;
  }
  public void setMaxTotalAttachmentSize(ConfigNodePropertyInteger maxTotalAttachmentSize) {
    this.maxTotalAttachmentSize = maxTotalAttachmentSize;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getAttachmentTypeBlacklist() {
    return attachmentTypeBlacklist;
  }
  public void setAttachmentTypeBlacklist(ConfigNodePropertyArray attachmentTypeBlacklist) {
    this.attachmentTypeBlacklist = attachmentTypeBlacklist;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getAllowedAttachmentTypes() {
    return allowedAttachmentTypes;
  }
  public void setAllowedAttachmentTypes(ConfigNodePropertyArray allowedAttachmentTypes) {
    this.allowedAttachmentTypes = allowedAttachmentTypes;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getServiceSelector() {
    return serviceSelector;
  }
  public void setServiceSelector(ConfigNodePropertyString serviceSelector) {
    this.serviceSelector = serviceSelector;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getFieldWhitelist() {
    return fieldWhitelist;
  }
  public void setFieldWhitelist(ConfigNodePropertyArray fieldWhitelist) {
    this.fieldWhitelist = fieldWhitelist;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties comAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties = (ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties) o;
    return (this.messageProperties == null ? comAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.messageProperties == null : this.messageProperties.equals(comAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.messageProperties)) &&
        (this.messageBoxSizeLimit == null ? comAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.messageBoxSizeLimit == null : this.messageBoxSizeLimit.equals(comAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.messageBoxSizeLimit)) &&
        (this.messageCountLimit == null ? comAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.messageCountLimit == null : this.messageCountLimit.equals(comAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.messageCountLimit)) &&
        (this.notifyFailure == null ? comAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.notifyFailure == null : this.notifyFailure.equals(comAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.notifyFailure)) &&
        (this.failureMessageFrom == null ? comAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.failureMessageFrom == null : this.failureMessageFrom.equals(comAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.failureMessageFrom)) &&
        (this.failureTemplatePath == null ? comAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.failureTemplatePath == null : this.failureTemplatePath.equals(comAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.failureTemplatePath)) &&
        (this.maxRetries == null ? comAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.maxRetries == null : this.maxRetries.equals(comAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.maxRetries)) &&
        (this.minWaitBetweenRetries == null ? comAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.minWaitBetweenRetries == null : this.minWaitBetweenRetries.equals(comAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.minWaitBetweenRetries)) &&
        (this.countUpdatePoolSize == null ? comAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.countUpdatePoolSize == null : this.countUpdatePoolSize.equals(comAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.countUpdatePoolSize)) &&
        (this.inboxPath == null ? comAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.inboxPath == null : this.inboxPath.equals(comAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.inboxPath)) &&
        (this.sentitemsPath == null ? comAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.sentitemsPath == null : this.sentitemsPath.equals(comAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.sentitemsPath)) &&
        (this.supportAttachments == null ? comAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.supportAttachments == null : this.supportAttachments.equals(comAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.supportAttachments)) &&
        (this.supportGroupMessaging == null ? comAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.supportGroupMessaging == null : this.supportGroupMessaging.equals(comAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.supportGroupMessaging)) &&
        (this.maxTotalRecipients == null ? comAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.maxTotalRecipients == null : this.maxTotalRecipients.equals(comAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.maxTotalRecipients)) &&
        (this.batchSize == null ? comAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.batchSize == null : this.batchSize.equals(comAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.batchSize)) &&
        (this.maxTotalAttachmentSize == null ? comAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.maxTotalAttachmentSize == null : this.maxTotalAttachmentSize.equals(comAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.maxTotalAttachmentSize)) &&
        (this.attachmentTypeBlacklist == null ? comAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.attachmentTypeBlacklist == null : this.attachmentTypeBlacklist.equals(comAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.attachmentTypeBlacklist)) &&
        (this.allowedAttachmentTypes == null ? comAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.allowedAttachmentTypes == null : this.allowedAttachmentTypes.equals(comAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.allowedAttachmentTypes)) &&
        (this.serviceSelector == null ? comAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.serviceSelector == null : this.serviceSelector.equals(comAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.serviceSelector)) &&
        (this.fieldWhitelist == null ? comAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.fieldWhitelist == null : this.fieldWhitelist.equals(comAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.fieldWhitelist));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.messageProperties == null ? 0: this.messageProperties.hashCode());
    result = 31 * result + (this.messageBoxSizeLimit == null ? 0: this.messageBoxSizeLimit.hashCode());
    result = 31 * result + (this.messageCountLimit == null ? 0: this.messageCountLimit.hashCode());
    result = 31 * result + (this.notifyFailure == null ? 0: this.notifyFailure.hashCode());
    result = 31 * result + (this.failureMessageFrom == null ? 0: this.failureMessageFrom.hashCode());
    result = 31 * result + (this.failureTemplatePath == null ? 0: this.failureTemplatePath.hashCode());
    result = 31 * result + (this.maxRetries == null ? 0: this.maxRetries.hashCode());
    result = 31 * result + (this.minWaitBetweenRetries == null ? 0: this.minWaitBetweenRetries.hashCode());
    result = 31 * result + (this.countUpdatePoolSize == null ? 0: this.countUpdatePoolSize.hashCode());
    result = 31 * result + (this.inboxPath == null ? 0: this.inboxPath.hashCode());
    result = 31 * result + (this.sentitemsPath == null ? 0: this.sentitemsPath.hashCode());
    result = 31 * result + (this.supportAttachments == null ? 0: this.supportAttachments.hashCode());
    result = 31 * result + (this.supportGroupMessaging == null ? 0: this.supportGroupMessaging.hashCode());
    result = 31 * result + (this.maxTotalRecipients == null ? 0: this.maxTotalRecipients.hashCode());
    result = 31 * result + (this.batchSize == null ? 0: this.batchSize.hashCode());
    result = 31 * result + (this.maxTotalAttachmentSize == null ? 0: this.maxTotalAttachmentSize.hashCode());
    result = 31 * result + (this.attachmentTypeBlacklist == null ? 0: this.attachmentTypeBlacklist.hashCode());
    result = 31 * result + (this.allowedAttachmentTypes == null ? 0: this.allowedAttachmentTypes.hashCode());
    result = 31 * result + (this.serviceSelector == null ? 0: this.serviceSelector.hashCode());
    result = 31 * result + (this.fieldWhitelist == null ? 0: this.fieldWhitelist.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties {\n");
    
    sb.append("  messageProperties: ").append(messageProperties).append("\n");
    sb.append("  messageBoxSizeLimit: ").append(messageBoxSizeLimit).append("\n");
    sb.append("  messageCountLimit: ").append(messageCountLimit).append("\n");
    sb.append("  notifyFailure: ").append(notifyFailure).append("\n");
    sb.append("  failureMessageFrom: ").append(failureMessageFrom).append("\n");
    sb.append("  failureTemplatePath: ").append(failureTemplatePath).append("\n");
    sb.append("  maxRetries: ").append(maxRetries).append("\n");
    sb.append("  minWaitBetweenRetries: ").append(minWaitBetweenRetries).append("\n");
    sb.append("  countUpdatePoolSize: ").append(countUpdatePoolSize).append("\n");
    sb.append("  inboxPath: ").append(inboxPath).append("\n");
    sb.append("  sentitemsPath: ").append(sentitemsPath).append("\n");
    sb.append("  supportAttachments: ").append(supportAttachments).append("\n");
    sb.append("  supportGroupMessaging: ").append(supportGroupMessaging).append("\n");
    sb.append("  maxTotalRecipients: ").append(maxTotalRecipients).append("\n");
    sb.append("  batchSize: ").append(batchSize).append("\n");
    sb.append("  maxTotalAttachmentSize: ").append(maxTotalAttachmentSize).append("\n");
    sb.append("  attachmentTypeBlacklist: ").append(attachmentTypeBlacklist).append("\n");
    sb.append("  allowedAttachmentTypes: ").append(allowedAttachmentTypes).append("\n");
    sb.append("  serviceSelector: ").append(serviceSelector).append("\n");
    sb.append("  fieldWhitelist: ").append(fieldWhitelist).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}