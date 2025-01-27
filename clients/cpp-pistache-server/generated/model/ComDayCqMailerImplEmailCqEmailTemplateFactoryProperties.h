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
/*
 * ComDayCqMailerImplEmailCqEmailTemplateFactoryProperties.h
 *
 * 
 */

#ifndef ComDayCqMailerImplEmailCqEmailTemplateFactoryProperties_H_
#define ComDayCqMailerImplEmailCqEmailTemplateFactoryProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqMailerImplEmailCqEmailTemplateFactoryProperties
    : public ModelBase
{
public:
    ComDayCqMailerImplEmailCqEmailTemplateFactoryProperties();
    virtual ~ComDayCqMailerImplEmailCqEmailTemplateFactoryProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComDayCqMailerImplEmailCqEmailTemplateFactoryProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getMailerEmailCharset() const;
    void setMailerEmailCharset(ConfigNodePropertyString const& value);
    bool mailerEmailCharsetIsSet() const;
    void unsetMailer_email_charset();

protected:
    ConfigNodePropertyString m_Mailer_email_charset;
    bool m_Mailer_email_charsetIsSet;
};

}
}
}
}

#endif /* ComDayCqMailerImplEmailCqEmailTemplateFactoryProperties_H_ */
