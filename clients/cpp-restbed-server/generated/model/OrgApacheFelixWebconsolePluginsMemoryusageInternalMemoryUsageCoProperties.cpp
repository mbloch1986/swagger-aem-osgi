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



#include "OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoProperties.h"

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

OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoProperties::OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoProperties()
{
    
}

OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoProperties::~OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoProperties()
{
}

std::string OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoProperties::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	write_json(ss, pt, false);
	return ss.str();
}

void OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoProperties::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
}

std::shared_ptr<ConfigNodePropertyInteger> OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoProperties::getFelixMemoryusageDumpThreshold() const
{
    return m_Felix_memoryusage_dump_threshold;
}
void OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoProperties::setFelixMemoryusageDumpThreshold(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Felix_memoryusage_dump_threshold = value;
}
std::shared_ptr<ConfigNodePropertyInteger> OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoProperties::getFelixMemoryusageDumpInterval() const
{
    return m_Felix_memoryusage_dump_interval;
}
void OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoProperties::setFelixMemoryusageDumpInterval(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Felix_memoryusage_dump_interval = value;
}
std::shared_ptr<ConfigNodePropertyString> OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoProperties::getFelixMemoryusageDumpLocation() const
{
    return m_Felix_memoryusage_dump_location;
}
void OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoProperties::setFelixMemoryusageDumpLocation(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Felix_memoryusage_dump_location = value;
}

}
}
}
}

