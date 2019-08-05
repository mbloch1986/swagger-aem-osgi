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
 * ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpProperties.h
 *
 * 
 */

#ifndef ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpProperties_H_
#define ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpProperties_H_



#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyDropDown.h"
#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyString.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpProperties
{
public:
    ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpProperties();
    virtual ~ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getEmailName() const;
    void setEmailName(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getEmailCreatePostFromReply() const;
    void setEmailCreatePostFromReply(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyDropDown> getEmailAddCommentIdTo() const;
    void setEmailAddCommentIdTo(std::shared_ptr<ConfigNodePropertyDropDown> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getEmailSubjectMaximumLength() const;
    void setEmailSubjectMaximumLength(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getEmailReplyToAddress() const;
    void setEmailReplyToAddress(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getEmailReplyToDelimiter() const;
    void setEmailReplyToDelimiter(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getEmailTrackerIdPrefixInSubject() const;
    void setEmailTrackerIdPrefixInSubject(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getEmailTrackerIdPrefixInBody() const;
    void setEmailTrackerIdPrefixInBody(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getEmailAsHTML() const;
    void setEmailAsHTML(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getEmailDefaultUserName() const;
    void setEmailDefaultUserName(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getEmailTemplatesRootPath() const;
    void setEmailTemplatesRootPath(std::shared_ptr<ConfigNodePropertyString> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_Email_name;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Email_createPostFromReply;
    std::shared_ptr<ConfigNodePropertyDropDown> m_Email_addCommentIdTo;
    std::shared_ptr<ConfigNodePropertyInteger> m_Email_subjectMaximumLength;
    std::shared_ptr<ConfigNodePropertyString> m_Email_replyToAddress;
    std::shared_ptr<ConfigNodePropertyString> m_Email_replyToDelimiter;
    std::shared_ptr<ConfigNodePropertyString> m_Email_trackerIdPrefixInSubject;
    std::shared_ptr<ConfigNodePropertyString> m_Email_trackerIdPrefixInBody;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Email_asHTML;
    std::shared_ptr<ConfigNodePropertyString> m_Email_defaultUserName;
    std::shared_ptr<ConfigNodePropertyString> m_Email_templates_rootPath;
};

}
}
}
}

#endif /* ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpProperties_H_ */