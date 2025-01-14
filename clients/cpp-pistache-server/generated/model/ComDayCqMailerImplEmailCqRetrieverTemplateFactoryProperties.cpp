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


#include "ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties()
{
    m_Mailer_email_embedIsSet = false;
    m_Mailer_email_charsetIsSet = false;
    m_Mailer_email_retrieverUserIDIsSet = false;
    m_Mailer_email_retrieverUserPWDIsSet = false;
    
}

ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::~ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties()
{
}

void ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Mailer_email_embedIsSet)
    {
        val["mailer.email.embed"] = ModelBase::toJson(m_Mailer_email_embed);
    }
    if(m_Mailer_email_charsetIsSet)
    {
        val["mailer.email.charset"] = ModelBase::toJson(m_Mailer_email_charset);
    }
    if(m_Mailer_email_retrieverUserIDIsSet)
    {
        val["mailer.email.retrieverUserID"] = ModelBase::toJson(m_Mailer_email_retrieverUserID);
    }
    if(m_Mailer_email_retrieverUserPWDIsSet)
    {
        val["mailer.email.retrieverUserPWD"] = ModelBase::toJson(m_Mailer_email_retrieverUserPWD);
    }
    

    return val;
}

void ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::fromJson(nlohmann::json& val)
{
    if(val.find("mailer.email.embed") != val.end())
    {
        if(!val["mailer.email.embed"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["mailer.email.embed"]);
            setMailerEmailEmbed( newItem );
        }
        
    }
    if(val.find("mailer.email.charset") != val.end())
    {
        if(!val["mailer.email.charset"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["mailer.email.charset"]);
            setMailerEmailCharset( newItem );
        }
        
    }
    if(val.find("mailer.email.retrieverUserID") != val.end())
    {
        if(!val["mailer.email.retrieverUserID"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["mailer.email.retrieverUserID"]);
            setMailerEmailRetrieverUserID( newItem );
        }
        
    }
    if(val.find("mailer.email.retrieverUserPWD") != val.end())
    {
        if(!val["mailer.email.retrieverUserPWD"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["mailer.email.retrieverUserPWD"]);
            setMailerEmailRetrieverUserPWD( newItem );
        }
        
    }
    
}


ConfigNodePropertyBoolean ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::getMailerEmailEmbed() const
{
    return m_Mailer_email_embed;
}
void ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::setMailerEmailEmbed(ConfigNodePropertyBoolean const& value)
{
    m_Mailer_email_embed = value;
    m_Mailer_email_embedIsSet = true;
}
bool ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::mailerEmailEmbedIsSet() const
{
    return m_Mailer_email_embedIsSet;
}
void ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::unsetMailer_email_embed()
{
    m_Mailer_email_embedIsSet = false;
}
ConfigNodePropertyString ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::getMailerEmailCharset() const
{
    return m_Mailer_email_charset;
}
void ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::setMailerEmailCharset(ConfigNodePropertyString const& value)
{
    m_Mailer_email_charset = value;
    m_Mailer_email_charsetIsSet = true;
}
bool ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::mailerEmailCharsetIsSet() const
{
    return m_Mailer_email_charsetIsSet;
}
void ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::unsetMailer_email_charset()
{
    m_Mailer_email_charsetIsSet = false;
}
ConfigNodePropertyString ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::getMailerEmailRetrieverUserID() const
{
    return m_Mailer_email_retrieverUserID;
}
void ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::setMailerEmailRetrieverUserID(ConfigNodePropertyString const& value)
{
    m_Mailer_email_retrieverUserID = value;
    m_Mailer_email_retrieverUserIDIsSet = true;
}
bool ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::mailerEmailRetrieverUserIDIsSet() const
{
    return m_Mailer_email_retrieverUserIDIsSet;
}
void ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::unsetMailer_email_retrieverUserID()
{
    m_Mailer_email_retrieverUserIDIsSet = false;
}
ConfigNodePropertyString ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::getMailerEmailRetrieverUserPWD() const
{
    return m_Mailer_email_retrieverUserPWD;
}
void ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::setMailerEmailRetrieverUserPWD(ConfigNodePropertyString const& value)
{
    m_Mailer_email_retrieverUserPWD = value;
    m_Mailer_email_retrieverUserPWDIsSet = true;
}
bool ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::mailerEmailRetrieverUserPWDIsSet() const
{
    return m_Mailer_email_retrieverUserPWDIsSet;
}
void ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::unsetMailer_email_retrieverUserPWD()
{
    m_Mailer_email_retrieverUserPWDIsSet = false;
}

}
}
}
}

