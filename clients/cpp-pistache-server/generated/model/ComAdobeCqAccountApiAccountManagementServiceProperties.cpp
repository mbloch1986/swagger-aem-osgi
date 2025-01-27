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


#include "ComAdobeCqAccountApiAccountManagementServiceProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComAdobeCqAccountApiAccountManagementServiceProperties::ComAdobeCqAccountApiAccountManagementServiceProperties()
{
    m_Cq_accountmanager_token_validity_periodIsSet = false;
    m_Cq_accountmanager_config_requestnewaccount_mailIsSet = false;
    m_Cq_accountmanager_config_requestnewpwd_mailIsSet = false;
    
}

ComAdobeCqAccountApiAccountManagementServiceProperties::~ComAdobeCqAccountApiAccountManagementServiceProperties()
{
}

void ComAdobeCqAccountApiAccountManagementServiceProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComAdobeCqAccountApiAccountManagementServiceProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Cq_accountmanager_token_validity_periodIsSet)
    {
        val["cq.accountmanager.token.validity.period"] = ModelBase::toJson(m_Cq_accountmanager_token_validity_period);
    }
    if(m_Cq_accountmanager_config_requestnewaccount_mailIsSet)
    {
        val["cq.accountmanager.config.requestnewaccount.mail"] = ModelBase::toJson(m_Cq_accountmanager_config_requestnewaccount_mail);
    }
    if(m_Cq_accountmanager_config_requestnewpwd_mailIsSet)
    {
        val["cq.accountmanager.config.requestnewpwd.mail"] = ModelBase::toJson(m_Cq_accountmanager_config_requestnewpwd_mail);
    }
    

    return val;
}

void ComAdobeCqAccountApiAccountManagementServiceProperties::fromJson(nlohmann::json& val)
{
    if(val.find("cq.accountmanager.token.validity.period") != val.end())
    {
        if(!val["cq.accountmanager.token.validity.period"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["cq.accountmanager.token.validity.period"]);
            setCqAccountmanagerTokenValidityPeriod( newItem );
        }
        
    }
    if(val.find("cq.accountmanager.config.requestnewaccount.mail") != val.end())
    {
        if(!val["cq.accountmanager.config.requestnewaccount.mail"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["cq.accountmanager.config.requestnewaccount.mail"]);
            setCqAccountmanagerConfigRequestnewaccountMail( newItem );
        }
        
    }
    if(val.find("cq.accountmanager.config.requestnewpwd.mail") != val.end())
    {
        if(!val["cq.accountmanager.config.requestnewpwd.mail"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["cq.accountmanager.config.requestnewpwd.mail"]);
            setCqAccountmanagerConfigRequestnewpwdMail( newItem );
        }
        
    }
    
}


ConfigNodePropertyInteger ComAdobeCqAccountApiAccountManagementServiceProperties::getCqAccountmanagerTokenValidityPeriod() const
{
    return m_Cq_accountmanager_token_validity_period;
}
void ComAdobeCqAccountApiAccountManagementServiceProperties::setCqAccountmanagerTokenValidityPeriod(ConfigNodePropertyInteger const& value)
{
    m_Cq_accountmanager_token_validity_period = value;
    m_Cq_accountmanager_token_validity_periodIsSet = true;
}
bool ComAdobeCqAccountApiAccountManagementServiceProperties::cqAccountmanagerTokenValidityPeriodIsSet() const
{
    return m_Cq_accountmanager_token_validity_periodIsSet;
}
void ComAdobeCqAccountApiAccountManagementServiceProperties::unsetCq_accountmanager_token_validity_period()
{
    m_Cq_accountmanager_token_validity_periodIsSet = false;
}
ConfigNodePropertyString ComAdobeCqAccountApiAccountManagementServiceProperties::getCqAccountmanagerConfigRequestnewaccountMail() const
{
    return m_Cq_accountmanager_config_requestnewaccount_mail;
}
void ComAdobeCqAccountApiAccountManagementServiceProperties::setCqAccountmanagerConfigRequestnewaccountMail(ConfigNodePropertyString const& value)
{
    m_Cq_accountmanager_config_requestnewaccount_mail = value;
    m_Cq_accountmanager_config_requestnewaccount_mailIsSet = true;
}
bool ComAdobeCqAccountApiAccountManagementServiceProperties::cqAccountmanagerConfigRequestnewaccountMailIsSet() const
{
    return m_Cq_accountmanager_config_requestnewaccount_mailIsSet;
}
void ComAdobeCqAccountApiAccountManagementServiceProperties::unsetCq_accountmanager_config_requestnewaccount_mail()
{
    m_Cq_accountmanager_config_requestnewaccount_mailIsSet = false;
}
ConfigNodePropertyString ComAdobeCqAccountApiAccountManagementServiceProperties::getCqAccountmanagerConfigRequestnewpwdMail() const
{
    return m_Cq_accountmanager_config_requestnewpwd_mail;
}
void ComAdobeCqAccountApiAccountManagementServiceProperties::setCqAccountmanagerConfigRequestnewpwdMail(ConfigNodePropertyString const& value)
{
    m_Cq_accountmanager_config_requestnewpwd_mail = value;
    m_Cq_accountmanager_config_requestnewpwd_mailIsSet = true;
}
bool ComAdobeCqAccountApiAccountManagementServiceProperties::cqAccountmanagerConfigRequestnewpwdMailIsSet() const
{
    return m_Cq_accountmanager_config_requestnewpwd_mailIsSet;
}
void ComAdobeCqAccountApiAccountManagementServiceProperties::unsetCq_accountmanager_config_requestnewpwd_mail()
{
    m_Cq_accountmanager_config_requestnewpwd_mailIsSet = false;
}

}
}
}
}

