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



#include "OrgApacheSlingCommonsMetricsInternalLogReporterProperties.h"

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

OrgApacheSlingCommonsMetricsInternalLogReporterProperties::OrgApacheSlingCommonsMetricsInternalLogReporterProperties()
{
    
}

OrgApacheSlingCommonsMetricsInternalLogReporterProperties::~OrgApacheSlingCommonsMetricsInternalLogReporterProperties()
{
}

std::string OrgApacheSlingCommonsMetricsInternalLogReporterProperties::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	write_json(ss, pt, false);
	return ss.str();
}

void OrgApacheSlingCommonsMetricsInternalLogReporterProperties::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
}

std::shared_ptr<ConfigNodePropertyInteger> OrgApacheSlingCommonsMetricsInternalLogReporterProperties::getPeriod() const
{
    return m_Period;
}
void OrgApacheSlingCommonsMetricsInternalLogReporterProperties::setPeriod(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Period = value;
}
std::shared_ptr<ConfigNodePropertyDropDown> OrgApacheSlingCommonsMetricsInternalLogReporterProperties::getTimeUnit() const
{
    return m_TimeUnit;
}
void OrgApacheSlingCommonsMetricsInternalLogReporterProperties::setTimeUnit(std::shared_ptr<ConfigNodePropertyDropDown> value)
{
    m_TimeUnit = value;
}
std::shared_ptr<ConfigNodePropertyDropDown> OrgApacheSlingCommonsMetricsInternalLogReporterProperties::getLevel() const
{
    return m_Level;
}
void OrgApacheSlingCommonsMetricsInternalLogReporterProperties::setLevel(std::shared_ptr<ConfigNodePropertyDropDown> value)
{
    m_Level = value;
}
std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingCommonsMetricsInternalLogReporterProperties::getLoggerName() const
{
    return m_LoggerName;
}
void OrgApacheSlingCommonsMetricsInternalLogReporterProperties::setLoggerName(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_LoggerName = value;
}
std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingCommonsMetricsInternalLogReporterProperties::getPrefix() const
{
    return m_Prefix;
}
void OrgApacheSlingCommonsMetricsInternalLogReporterProperties::setPrefix(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Prefix = value;
}
std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingCommonsMetricsInternalLogReporterProperties::getPattern() const
{
    return m_Pattern;
}
void OrgApacheSlingCommonsMetricsInternalLogReporterProperties::setPattern(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Pattern = value;
}
std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingCommonsMetricsInternalLogReporterProperties::getRegistryName() const
{
    return m_RegistryName;
}
void OrgApacheSlingCommonsMetricsInternalLogReporterProperties::setRegistryName(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_RegistryName = value;
}

}
}
}
}

