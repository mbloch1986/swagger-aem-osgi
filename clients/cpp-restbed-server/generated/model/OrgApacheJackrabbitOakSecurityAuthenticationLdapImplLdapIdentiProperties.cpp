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



#include "OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties.h"

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

OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties()
{
    
}

OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::~OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties()
{
}

std::string OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	write_json(ss, pt, false);
	return ss.str();
}

void OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
}

std::shared_ptr<ConfigNodePropertyString> OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getProviderName() const
{
    return m_Provider_name;
}
void OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setProviderName(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Provider_name = value;
}
std::shared_ptr<ConfigNodePropertyString> OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getHostName() const
{
    return m_Host_name;
}
void OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setHostName(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Host_name = value;
}
std::shared_ptr<ConfigNodePropertyInteger> OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getHostPort() const
{
    return m_Host_port;
}
void OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setHostPort(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Host_port = value;
}
std::shared_ptr<ConfigNodePropertyBoolean> OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getHostSsl() const
{
    return m_Host_ssl;
}
void OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setHostSsl(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Host_ssl = value;
}
std::shared_ptr<ConfigNodePropertyBoolean> OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getHostTls() const
{
    return m_Host_tls;
}
void OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setHostTls(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Host_tls = value;
}
std::shared_ptr<ConfigNodePropertyBoolean> OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getHostNoCertCheck() const
{
    return m_Host_noCertCheck;
}
void OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setHostNoCertCheck(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Host_noCertCheck = value;
}
std::shared_ptr<ConfigNodePropertyString> OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getBindDn() const
{
    return m_Bind_dn;
}
void OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setBindDn(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Bind_dn = value;
}
std::shared_ptr<ConfigNodePropertyString> OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getBindPassword() const
{
    return m_Bind_password;
}
void OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setBindPassword(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Bind_password = value;
}
std::shared_ptr<ConfigNodePropertyString> OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getSearchTimeout() const
{
    return m_SearchTimeout;
}
void OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setSearchTimeout(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_SearchTimeout = value;
}
std::shared_ptr<ConfigNodePropertyInteger> OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getAdminPoolMaxActive() const
{
    return m_AdminPool_maxActive;
}
void OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setAdminPoolMaxActive(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_AdminPool_maxActive = value;
}
std::shared_ptr<ConfigNodePropertyBoolean> OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getAdminPoolLookupOnValidate() const
{
    return m_AdminPool_lookupOnValidate;
}
void OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setAdminPoolLookupOnValidate(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_AdminPool_lookupOnValidate = value;
}
std::shared_ptr<ConfigNodePropertyInteger> OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getUserPoolMaxActive() const
{
    return m_UserPool_maxActive;
}
void OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setUserPoolMaxActive(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_UserPool_maxActive = value;
}
std::shared_ptr<ConfigNodePropertyBoolean> OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getUserPoolLookupOnValidate() const
{
    return m_UserPool_lookupOnValidate;
}
void OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setUserPoolLookupOnValidate(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_UserPool_lookupOnValidate = value;
}
std::shared_ptr<ConfigNodePropertyString> OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getUserBaseDN() const
{
    return m_User_baseDN;
}
void OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setUserBaseDN(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_User_baseDN = value;
}
std::shared_ptr<ConfigNodePropertyArray> OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getUserObjectclass() const
{
    return m_User_objectclass;
}
void OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setUserObjectclass(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_User_objectclass = value;
}
std::shared_ptr<ConfigNodePropertyString> OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getUserIdAttribute() const
{
    return m_User_idAttribute;
}
void OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setUserIdAttribute(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_User_idAttribute = value;
}
std::shared_ptr<ConfigNodePropertyString> OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getUserExtraFilter() const
{
    return m_User_extraFilter;
}
void OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setUserExtraFilter(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_User_extraFilter = value;
}
std::shared_ptr<ConfigNodePropertyBoolean> OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getUserMakeDnPath() const
{
    return m_User_makeDnPath;
}
void OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setUserMakeDnPath(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_User_makeDnPath = value;
}
std::shared_ptr<ConfigNodePropertyString> OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getGroupBaseDN() const
{
    return m_Group_baseDN;
}
void OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setGroupBaseDN(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Group_baseDN = value;
}
std::shared_ptr<ConfigNodePropertyArray> OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getGroupObjectclass() const
{
    return m_Group_objectclass;
}
void OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setGroupObjectclass(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Group_objectclass = value;
}
std::shared_ptr<ConfigNodePropertyString> OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getGroupNameAttribute() const
{
    return m_Group_nameAttribute;
}
void OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setGroupNameAttribute(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Group_nameAttribute = value;
}
std::shared_ptr<ConfigNodePropertyString> OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getGroupExtraFilter() const
{
    return m_Group_extraFilter;
}
void OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setGroupExtraFilter(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Group_extraFilter = value;
}
std::shared_ptr<ConfigNodePropertyBoolean> OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getGroupMakeDnPath() const
{
    return m_Group_makeDnPath;
}
void OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setGroupMakeDnPath(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Group_makeDnPath = value;
}
std::shared_ptr<ConfigNodePropertyString> OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getGroupMemberAttribute() const
{
    return m_Group_memberAttribute;
}
void OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setGroupMemberAttribute(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Group_memberAttribute = value;
}
std::shared_ptr<ConfigNodePropertyBoolean> OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getUseUidForExtId() const
{
    return m_UseUidForExtId;
}
void OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setUseUidForExtId(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_UseUidForExtId = value;
}
std::shared_ptr<ConfigNodePropertyArray> OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getCustomattributes() const
{
    return m_Customattributes;
}
void OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setCustomattributes(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Customattributes = value;
}

}
}
}
}

