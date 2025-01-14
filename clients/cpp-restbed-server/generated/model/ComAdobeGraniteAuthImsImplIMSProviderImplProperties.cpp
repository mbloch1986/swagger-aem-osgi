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



#include "ComAdobeGraniteAuthImsImplIMSProviderImplProperties.h"

#include <string>
#include <sstream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComAdobeGraniteAuthImsImplIMSProviderImplProperties::ComAdobeGraniteAuthImsImplIMSProviderImplProperties()
{
    
}

ComAdobeGraniteAuthImsImplIMSProviderImplProperties::~ComAdobeGraniteAuthImsImplIMSProviderImplProperties()
{
}

std::string ComAdobeGraniteAuthImsImplIMSProviderImplProperties::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	write_json(ss, pt, false);
	return ss.str();
}

void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteAuthImsImplIMSProviderImplProperties::getOauthProviderId() const
{
    return m_Oauth_provider_id;
}
void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::setOauthProviderId(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Oauth_provider_id = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteAuthImsImplIMSProviderImplProperties::getOauthProviderImsAuthorizationUrl() const
{
    return m_Oauth_provider_ims_authorization_url;
}
void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::setOauthProviderImsAuthorizationUrl(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Oauth_provider_ims_authorization_url = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteAuthImsImplIMSProviderImplProperties::getOauthProviderImsTokenUrl() const
{
    return m_Oauth_provider_ims_token_url;
}
void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::setOauthProviderImsTokenUrl(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Oauth_provider_ims_token_url = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteAuthImsImplIMSProviderImplProperties::getOauthProviderImsProfileUrl() const
{
    return m_Oauth_provider_ims_profile_url;
}
void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::setOauthProviderImsProfileUrl(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Oauth_provider_ims_profile_url = value;
}
std::shared_ptr<ConfigNodePropertyArray> ComAdobeGraniteAuthImsImplIMSProviderImplProperties::getOauthProviderImsExtendedDetailsUrls() const
{
    return m_Oauth_provider_ims_extended_details_urls;
}
void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::setOauthProviderImsExtendedDetailsUrls(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Oauth_provider_ims_extended_details_urls = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteAuthImsImplIMSProviderImplProperties::getOauthProviderImsValidateTokenUrl() const
{
    return m_Oauth_provider_ims_validate_token_url;
}
void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::setOauthProviderImsValidateTokenUrl(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Oauth_provider_ims_validate_token_url = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteAuthImsImplIMSProviderImplProperties::getOauthProviderImsSessionProperty() const
{
    return m_Oauth_provider_ims_session_property;
}
void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::setOauthProviderImsSessionProperty(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Oauth_provider_ims_session_property = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteAuthImsImplIMSProviderImplProperties::getOauthProviderImsServiceTokenClientId() const
{
    return m_Oauth_provider_ims_service_token_client_id;
}
void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::setOauthProviderImsServiceTokenClientId(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Oauth_provider_ims_service_token_client_id = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteAuthImsImplIMSProviderImplProperties::getOauthProviderImsServiceTokenClientSecret() const
{
    return m_Oauth_provider_ims_service_token_client_secret;
}
void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::setOauthProviderImsServiceTokenClientSecret(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Oauth_provider_ims_service_token_client_secret = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteAuthImsImplIMSProviderImplProperties::getOauthProviderImsServiceToken() const
{
    return m_Oauth_provider_ims_service_token;
}
void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::setOauthProviderImsServiceToken(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Oauth_provider_ims_service_token = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteAuthImsImplIMSProviderImplProperties::getImsOrgRef() const
{
    return m_Ims_org_ref;
}
void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::setImsOrgRef(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Ims_org_ref = value;
}
std::shared_ptr<ConfigNodePropertyArray> ComAdobeGraniteAuthImsImplIMSProviderImplProperties::getImsGroupMapping() const
{
    return m_Ims_group_mapping;
}
void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::setImsGroupMapping(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Ims_group_mapping = value;
}
std::shared_ptr<ConfigNodePropertyBoolean> ComAdobeGraniteAuthImsImplIMSProviderImplProperties::getOauthProviderImsOnlyLicenseGroup() const
{
    return m_Oauth_provider_ims_only_license_group;
}
void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::setOauthProviderImsOnlyLicenseGroup(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Oauth_provider_ims_only_license_group = value;
}

}
}
}
}

