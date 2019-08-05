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



#include "ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.h"

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

ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties()
{
    
}

ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::~ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties()
{
}

std::string ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	write_json(ss, pt, false);
	return ss.str();
}

void ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
}

std::shared_ptr<ConfigNodePropertyArray> ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::getPath() const
{
    return m_Path;
}
void ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::setPath(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Path = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::getServiceRanking() const
{
    return m_Service_ranking;
}
void ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::setServiceRanking(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Service_ranking = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::getIdpUrl() const
{
    return m_IdpUrl;
}
void ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::setIdpUrl(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_IdpUrl = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::getIdpCertAlias() const
{
    return m_IdpCertAlias;
}
void ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::setIdpCertAlias(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_IdpCertAlias = value;
}
std::shared_ptr<ConfigNodePropertyBoolean> ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::getIdpHttpRedirect() const
{
    return m_IdpHttpRedirect;
}
void ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::setIdpHttpRedirect(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_IdpHttpRedirect = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::getServiceProviderEntityId() const
{
    return m_ServiceProviderEntityId;
}
void ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::setServiceProviderEntityId(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_ServiceProviderEntityId = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::getAssertionConsumerServiceURL() const
{
    return m_AssertionConsumerServiceURL;
}
void ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::setAssertionConsumerServiceURL(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_AssertionConsumerServiceURL = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::getSpPrivateKeyAlias() const
{
    return m_SpPrivateKeyAlias;
}
void ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::setSpPrivateKeyAlias(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_SpPrivateKeyAlias = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::getKeyStorePassword() const
{
    return m_KeyStorePassword;
}
void ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::setKeyStorePassword(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_KeyStorePassword = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::getDefaultRedirectUrl() const
{
    return m_DefaultRedirectUrl;
}
void ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::setDefaultRedirectUrl(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_DefaultRedirectUrl = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::getUserIDAttribute() const
{
    return m_UserIDAttribute;
}
void ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::setUserIDAttribute(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_UserIDAttribute = value;
}
std::shared_ptr<ConfigNodePropertyBoolean> ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::getUseEncryption() const
{
    return m_UseEncryption;
}
void ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::setUseEncryption(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_UseEncryption = value;
}
std::shared_ptr<ConfigNodePropertyBoolean> ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::getCreateUser() const
{
    return m_CreateUser;
}
void ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::setCreateUser(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_CreateUser = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::getUserIntermediatePath() const
{
    return m_UserIntermediatePath;
}
void ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::setUserIntermediatePath(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_UserIntermediatePath = value;
}
std::shared_ptr<ConfigNodePropertyBoolean> ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::getAddGroupMemberships() const
{
    return m_AddGroupMemberships;
}
void ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::setAddGroupMemberships(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_AddGroupMemberships = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::getGroupMembershipAttribute() const
{
    return m_GroupMembershipAttribute;
}
void ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::setGroupMembershipAttribute(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_GroupMembershipAttribute = value;
}
std::shared_ptr<ConfigNodePropertyArray> ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::getDefaultGroups() const
{
    return m_DefaultGroups;
}
void ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::setDefaultGroups(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_DefaultGroups = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::getNameIdFormat() const
{
    return m_NameIdFormat;
}
void ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::setNameIdFormat(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_NameIdFormat = value;
}
std::shared_ptr<ConfigNodePropertyArray> ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::getSynchronizeAttributes() const
{
    return m_SynchronizeAttributes;
}
void ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::setSynchronizeAttributes(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_SynchronizeAttributes = value;
}
std::shared_ptr<ConfigNodePropertyBoolean> ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::getHandleLogout() const
{
    return m_HandleLogout;
}
void ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::setHandleLogout(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_HandleLogout = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::getLogoutUrl() const
{
    return m_LogoutUrl;
}
void ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::setLogoutUrl(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_LogoutUrl = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::getClockTolerance() const
{
    return m_ClockTolerance;
}
void ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::setClockTolerance(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_ClockTolerance = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::getDigestMethod() const
{
    return m_DigestMethod;
}
void ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::setDigestMethod(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_DigestMethod = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::getSignatureMethod() const
{
    return m_SignatureMethod;
}
void ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::setSignatureMethod(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_SignatureMethod = value;
}
std::shared_ptr<ConfigNodePropertyDropDown> ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::getIdentitySyncType() const
{
    return m_IdentitySyncType;
}
void ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::setIdentitySyncType(std::shared_ptr<ConfigNodePropertyDropDown> value)
{
    m_IdentitySyncType = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::getIdpIdentifier() const
{
    return m_IdpIdentifier;
}
void ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties::setIdpIdentifier(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_IdpIdentifier = value;
}

}
}
}
}
