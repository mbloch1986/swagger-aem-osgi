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



#include "ComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties.h"

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

ComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties::ComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties()
{
    
}

ComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties::~ComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties()
{
}

std::string ComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	write_json(ss, pt, false);
	return ss.str();
}

void ComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties::getCdnConfigDistributionDomain() const
{
    return m_Cdn_config_distribution_domain;
}
void ComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties::setCdnConfigDistributionDomain(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Cdn_config_distribution_domain = value;
}
std::shared_ptr<ConfigNodePropertyBoolean> ComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties::getCdnConfigEnableRewriting() const
{
    return m_Cdn_config_enable_rewriting;
}
void ComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties::setCdnConfigEnableRewriting(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Cdn_config_enable_rewriting = value;
}
std::shared_ptr<ConfigNodePropertyArray> ComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties::getCdnConfigPathPrefixes() const
{
    return m_Cdn_config_path_prefixes;
}
void ComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties::setCdnConfigPathPrefixes(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Cdn_config_path_prefixes = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties::getCdnConfigCdnttl() const
{
    return m_Cdn_config_cdnttl;
}
void ComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties::setCdnConfigCdnttl(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Cdn_config_cdnttl = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties::getCdnConfigApplicationProtocol() const
{
    return m_Cdn_config_application_protocol;
}
void ComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties::setCdnConfigApplicationProtocol(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Cdn_config_application_protocol = value;
}

}
}
}
}

