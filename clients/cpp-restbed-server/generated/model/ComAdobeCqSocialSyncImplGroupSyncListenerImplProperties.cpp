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



#include "ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties.h"

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

ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties::ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties()
{
    
}

ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties::~ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties()
{
}

std::string ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	write_json(ss, pt, false);
	return ss.str();
}

void ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
}

std::shared_ptr<ConfigNodePropertyArray> ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties::getNodetypes() const
{
    return m_Nodetypes;
}
void ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties::setNodetypes(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Nodetypes = value;
}
std::shared_ptr<ConfigNodePropertyArray> ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties::getIgnorableprops() const
{
    return m_Ignorableprops;
}
void ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties::setIgnorableprops(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Ignorableprops = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties::getIgnorablenodes() const
{
    return m_Ignorablenodes;
}
void ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties::setIgnorablenodes(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Ignorablenodes = value;
}
std::shared_ptr<ConfigNodePropertyBoolean> ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties::getEnabled() const
{
    return m_Enabled;
}
void ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties::setEnabled(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Enabled = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties::getDistfolders() const
{
    return m_Distfolders;
}
void ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties::setDistfolders(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Distfolders = value;
}

}
}
}
}

