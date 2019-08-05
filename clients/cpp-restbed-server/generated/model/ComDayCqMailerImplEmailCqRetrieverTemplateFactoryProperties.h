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
 * ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties.h
 *
 * 
 */

#ifndef ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties_H_
#define ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties_H_



#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyString.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties
{
public:
    ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties();
    virtual ~ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getMailerEmailEmbed() const;
    void setMailerEmailEmbed(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getMailerEmailCharset() const;
    void setMailerEmailCharset(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getMailerEmailRetrieverUserID() const;
    void setMailerEmailRetrieverUserID(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getMailerEmailRetrieverUserPWD() const;
    void setMailerEmailRetrieverUserPWD(std::shared_ptr<ConfigNodePropertyString> value);

protected:
    std::shared_ptr<ConfigNodePropertyBoolean> m_Mailer_email_embed;
    std::shared_ptr<ConfigNodePropertyString> m_Mailer_email_charset;
    std::shared_ptr<ConfigNodePropertyString> m_Mailer_email_retrieverUserID;
    std::shared_ptr<ConfigNodePropertyString> m_Mailer_email_retrieverUserPWD;
};

}
}
}
}

#endif /* ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties_H_ */