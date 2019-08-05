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



#include "OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties.h"

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

OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties::OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties()
{
    
}

OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties::~OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties()
{
}

std::string OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	write_json(ss, pt, false);
	return ss.str();
}

void OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
}

std::shared_ptr<ConfigNodePropertyInteger> OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties::getTimeout() const
{
    return m_Timeout;
}
void OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties::setTimeout(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Timeout = value;
}
std::shared_ptr<ConfigNodePropertyInteger> OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties::getTargetStartLevel() const
{
    return m_Target_start_level;
}
void OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties::setTargetStartLevel(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Target_start_level = value;
}
std::shared_ptr<ConfigNodePropertyString> OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties::getTargetStartLevelPropName() const
{
    return m_Target_start_level_prop_name;
}
void OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties::setTargetStartLevelPropName(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Target_start_level_prop_name = value;
}
std::shared_ptr<ConfigNodePropertyDropDown> OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties::getType() const
{
    return m_Type;
}
void OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties::setType(std::shared_ptr<ConfigNodePropertyDropDown> value)
{
    m_Type = value;
}

}
}
}
}
