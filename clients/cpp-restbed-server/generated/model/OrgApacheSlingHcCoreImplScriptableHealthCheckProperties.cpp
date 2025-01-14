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



#include "OrgApacheSlingHcCoreImplScriptableHealthCheckProperties.h"

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

OrgApacheSlingHcCoreImplScriptableHealthCheckProperties::OrgApacheSlingHcCoreImplScriptableHealthCheckProperties()
{
    
}

OrgApacheSlingHcCoreImplScriptableHealthCheckProperties::~OrgApacheSlingHcCoreImplScriptableHealthCheckProperties()
{
}

std::string OrgApacheSlingHcCoreImplScriptableHealthCheckProperties::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	write_json(ss, pt, false);
	return ss.str();
}

void OrgApacheSlingHcCoreImplScriptableHealthCheckProperties::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
}

std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingHcCoreImplScriptableHealthCheckProperties::getHcName() const
{
    return m_Hc_name;
}
void OrgApacheSlingHcCoreImplScriptableHealthCheckProperties::setHcName(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Hc_name = value;
}
std::shared_ptr<ConfigNodePropertyArray> OrgApacheSlingHcCoreImplScriptableHealthCheckProperties::getHcTags() const
{
    return m_Hc_tags;
}
void OrgApacheSlingHcCoreImplScriptableHealthCheckProperties::setHcTags(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Hc_tags = value;
}
std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingHcCoreImplScriptableHealthCheckProperties::getHcMbeanName() const
{
    return m_Hc_mbean_name;
}
void OrgApacheSlingHcCoreImplScriptableHealthCheckProperties::setHcMbeanName(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Hc_mbean_name = value;
}
std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingHcCoreImplScriptableHealthCheckProperties::getExpression() const
{
    return m_Expression;
}
void OrgApacheSlingHcCoreImplScriptableHealthCheckProperties::setExpression(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Expression = value;
}
std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingHcCoreImplScriptableHealthCheckProperties::getLanguageExtension() const
{
    return m_Language_extension;
}
void OrgApacheSlingHcCoreImplScriptableHealthCheckProperties::setLanguageExtension(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Language_extension = value;
}

}
}
}
}

