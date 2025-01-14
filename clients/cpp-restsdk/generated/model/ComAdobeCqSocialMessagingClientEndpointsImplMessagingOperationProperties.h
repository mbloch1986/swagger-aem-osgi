/**
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.2.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyArray.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties
    : public ModelBase
{
public:
    ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties();
    virtual ~ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getMessageProperties() const;
    bool messagePropertiesIsSet() const;
    void unsetMessage_properties();
    void setMessageProperties(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getMessageBoxSizeLimit() const;
    bool messageBoxSizeLimitIsSet() const;
    void unsetMessageBoxSizeLimit();
    void setMessageBoxSizeLimit(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getMessageCountLimit() const;
    bool messageCountLimitIsSet() const;
    void unsetMessageCountLimit();
    void setMessageCountLimit(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getNotifyFailure() const;
    bool notifyFailureIsSet() const;
    void unsetNotifyFailure();
    void setNotifyFailure(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getFailureMessageFrom() const;
    bool failureMessageFromIsSet() const;
    void unsetFailureMessageFrom();
    void setFailureMessageFrom(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getFailureTemplatePath() const;
    bool failureTemplatePathIsSet() const;
    void unsetFailureTemplatePath();
    void setFailureTemplatePath(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getMaxRetries() const;
    bool maxRetriesIsSet() const;
    void unsetMaxRetries();
    void setMaxRetries(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getMinWaitBetweenRetries() const;
    bool minWaitBetweenRetriesIsSet() const;
    void unsetMinWaitBetweenRetries();
    void setMinWaitBetweenRetries(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getCountUpdatePoolSize() const;
    bool countUpdatePoolSizeIsSet() const;
    void unsetCountUpdatePoolSize();
    void setCountUpdatePoolSize(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getInboxPath() const;
    bool inboxPathIsSet() const;
    void unsetInbox_path();
    void setInboxPath(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getSentitemsPath() const;
    bool sentitemsPathIsSet() const;
    void unsetSentitems_path();
    void setSentitemsPath(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getSupportAttachments() const;
    bool supportAttachmentsIsSet() const;
    void unsetSupportAttachments();
    void setSupportAttachments(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getSupportGroupMessaging() const;
    bool supportGroupMessagingIsSet() const;
    void unsetSupportGroupMessaging();
    void setSupportGroupMessaging(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getMaxTotalRecipients() const;
    bool maxTotalRecipientsIsSet() const;
    void unsetMaxTotalRecipients();
    void setMaxTotalRecipients(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getBatchSize() const;
    bool batchSizeIsSet() const;
    void unsetBatchSize();
    void setBatchSize(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getMaxTotalAttachmentSize() const;
    bool maxTotalAttachmentSizeIsSet() const;
    void unsetMaxTotalAttachmentSize();
    void setMaxTotalAttachmentSize(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getAttachmentTypeBlacklist() const;
    bool attachmentTypeBlacklistIsSet() const;
    void unsetAttachmentTypeBlacklist();
    void setAttachmentTypeBlacklist(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getAllowedAttachmentTypes() const;
    bool allowedAttachmentTypesIsSet() const;
    void unsetAllowedAttachmentTypes();
    void setAllowedAttachmentTypes(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getServiceSelector() const;
    bool serviceSelectorIsSet() const;
    void unsetServiceSelector();
    void setServiceSelector(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getFieldWhitelist() const;
    bool fieldWhitelistIsSet() const;
    void unsetFieldWhitelist();
    void setFieldWhitelist(std::shared_ptr<ConfigNodePropertyArray> value);

protected:
    std::shared_ptr<ConfigNodePropertyArray> m_Message_properties;
    bool m_Message_propertiesIsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_MessageBoxSizeLimit;
    bool m_MessageBoxSizeLimitIsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_MessageCountLimit;
    bool m_MessageCountLimitIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_NotifyFailure;
    bool m_NotifyFailureIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_FailureMessageFrom;
    bool m_FailureMessageFromIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_FailureTemplatePath;
    bool m_FailureTemplatePathIsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_MaxRetries;
    bool m_MaxRetriesIsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_MinWaitBetweenRetries;
    bool m_MinWaitBetweenRetriesIsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_CountUpdatePoolSize;
    bool m_CountUpdatePoolSizeIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Inbox_path;
    bool m_Inbox_pathIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Sentitems_path;
    bool m_Sentitems_pathIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_SupportAttachments;
    bool m_SupportAttachmentsIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_SupportGroupMessaging;
    bool m_SupportGroupMessagingIsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_MaxTotalRecipients;
    bool m_MaxTotalRecipientsIsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_BatchSize;
    bool m_BatchSizeIsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_MaxTotalAttachmentSize;
    bool m_MaxTotalAttachmentSizeIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_AttachmentTypeBlacklist;
    bool m_AttachmentTypeBlacklistIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_AllowedAttachmentTypes;
    bool m_AllowedAttachmentTypesIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_ServiceSelector;
    bool m_ServiceSelectorIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_FieldWhitelist;
    bool m_FieldWhitelistIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties_H_ */
