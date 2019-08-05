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



#include "OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties.h"

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

OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties::OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties()
{
    
}

OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties::~OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties()
{
}

std::string OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	write_json(ss, pt, false);
	return ss.str();
}

void OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
}

std::shared_ptr<ConfigNodePropertyString> OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties::getTokenExpiration() const
{
    return m_TokenExpiration;
}
void OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties::setTokenExpiration(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_TokenExpiration = value;
}
std::shared_ptr<ConfigNodePropertyString> OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties::getTokenLength() const
{
    return m_TokenLength;
}
void OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties::setTokenLength(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_TokenLength = value;
}
std::shared_ptr<ConfigNodePropertyBoolean> OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties::getTokenRefresh() const
{
    return m_TokenRefresh;
}
void OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties::setTokenRefresh(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_TokenRefresh = value;
}
std::shared_ptr<ConfigNodePropertyInteger> OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties::getTokenCleanupThreshold() const
{
    return m_TokenCleanupThreshold;
}
void OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties::setTokenCleanupThreshold(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_TokenCleanupThreshold = value;
}
std::shared_ptr<ConfigNodePropertyString> OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties::getPasswordHashAlgorithm() const
{
    return m_PasswordHashAlgorithm;
}
void OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties::setPasswordHashAlgorithm(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_PasswordHashAlgorithm = value;
}
std::shared_ptr<ConfigNodePropertyInteger> OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties::getPasswordHashIterations() const
{
    return m_PasswordHashIterations;
}
void OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties::setPasswordHashIterations(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_PasswordHashIterations = value;
}
std::shared_ptr<ConfigNodePropertyInteger> OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties::getPasswordSaltSize() const
{
    return m_PasswordSaltSize;
}
void OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties::setPasswordSaltSize(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_PasswordSaltSize = value;
}

}
}
}
}
