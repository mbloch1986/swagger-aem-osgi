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


#include "ComAdobeGraniteAuthImsImplIMSAccessTokenRequestCustomizerImplProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComAdobeGraniteAuthImsImplIMSAccessTokenRequestCustomizerImplProperties::ComAdobeGraniteAuthImsImplIMSAccessTokenRequestCustomizerImplProperties()
{
    m_Auth_ims_client_secretIsSet = false;
    m_Customizer_typeIsSet = false;
    
}

ComAdobeGraniteAuthImsImplIMSAccessTokenRequestCustomizerImplProperties::~ComAdobeGraniteAuthImsImplIMSAccessTokenRequestCustomizerImplProperties()
{
}

void ComAdobeGraniteAuthImsImplIMSAccessTokenRequestCustomizerImplProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComAdobeGraniteAuthImsImplIMSAccessTokenRequestCustomizerImplProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Auth_ims_client_secretIsSet)
    {
        val["auth.ims.client.secret"] = ModelBase::toJson(m_Auth_ims_client_secret);
    }
    if(m_Customizer_typeIsSet)
    {
        val["customizer.type"] = ModelBase::toJson(m_Customizer_type);
    }
    

    return val;
}

void ComAdobeGraniteAuthImsImplIMSAccessTokenRequestCustomizerImplProperties::fromJson(nlohmann::json& val)
{
    if(val.find("auth.ims.client.secret") != val.end())
    {
        if(!val["auth.ims.client.secret"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["auth.ims.client.secret"]);
            setAuthImsClientSecret( newItem );
        }
        
    }
    if(val.find("customizer.type") != val.end())
    {
        if(!val["customizer.type"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["customizer.type"]);
            setCustomizerType( newItem );
        }
        
    }
    
}


ConfigNodePropertyString ComAdobeGraniteAuthImsImplIMSAccessTokenRequestCustomizerImplProperties::getAuthImsClientSecret() const
{
    return m_Auth_ims_client_secret;
}
void ComAdobeGraniteAuthImsImplIMSAccessTokenRequestCustomizerImplProperties::setAuthImsClientSecret(ConfigNodePropertyString const& value)
{
    m_Auth_ims_client_secret = value;
    m_Auth_ims_client_secretIsSet = true;
}
bool ComAdobeGraniteAuthImsImplIMSAccessTokenRequestCustomizerImplProperties::authImsClientSecretIsSet() const
{
    return m_Auth_ims_client_secretIsSet;
}
void ComAdobeGraniteAuthImsImplIMSAccessTokenRequestCustomizerImplProperties::unsetAuth_ims_client_secret()
{
    m_Auth_ims_client_secretIsSet = false;
}
ConfigNodePropertyString ComAdobeGraniteAuthImsImplIMSAccessTokenRequestCustomizerImplProperties::getCustomizerType() const
{
    return m_Customizer_type;
}
void ComAdobeGraniteAuthImsImplIMSAccessTokenRequestCustomizerImplProperties::setCustomizerType(ConfigNodePropertyString const& value)
{
    m_Customizer_type = value;
    m_Customizer_typeIsSet = true;
}
bool ComAdobeGraniteAuthImsImplIMSAccessTokenRequestCustomizerImplProperties::customizerTypeIsSet() const
{
    return m_Customizer_typeIsSet;
}
void ComAdobeGraniteAuthImsImplIMSAccessTokenRequestCustomizerImplProperties::unsetCustomizer_type()
{
    m_Customizer_typeIsSet = false;
}

}
}
}
}

