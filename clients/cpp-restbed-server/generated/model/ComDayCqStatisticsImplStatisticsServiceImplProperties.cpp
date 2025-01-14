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



#include "ComDayCqStatisticsImplStatisticsServiceImplProperties.h"

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

ComDayCqStatisticsImplStatisticsServiceImplProperties::ComDayCqStatisticsImplStatisticsServiceImplProperties()
{
    
}

ComDayCqStatisticsImplStatisticsServiceImplProperties::~ComDayCqStatisticsImplStatisticsServiceImplProperties()
{
}

std::string ComDayCqStatisticsImplStatisticsServiceImplProperties::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	write_json(ss, pt, false);
	return ss.str();
}

void ComDayCqStatisticsImplStatisticsServiceImplProperties::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
}

std::shared_ptr<ConfigNodePropertyInteger> ComDayCqStatisticsImplStatisticsServiceImplProperties::getSchedulerPeriod() const
{
    return m_Scheduler_period;
}
void ComDayCqStatisticsImplStatisticsServiceImplProperties::setSchedulerPeriod(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Scheduler_period = value;
}
std::shared_ptr<ConfigNodePropertyBoolean> ComDayCqStatisticsImplStatisticsServiceImplProperties::getSchedulerConcurrent() const
{
    return m_Scheduler_concurrent;
}
void ComDayCqStatisticsImplStatisticsServiceImplProperties::setSchedulerConcurrent(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Scheduler_concurrent = value;
}
std::shared_ptr<ConfigNodePropertyString> ComDayCqStatisticsImplStatisticsServiceImplProperties::getPath() const
{
    return m_Path;
}
void ComDayCqStatisticsImplStatisticsServiceImplProperties::setPath(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Path = value;
}
std::shared_ptr<ConfigNodePropertyString> ComDayCqStatisticsImplStatisticsServiceImplProperties::getWorkspace() const
{
    return m_Workspace;
}
void ComDayCqStatisticsImplStatisticsServiceImplProperties::setWorkspace(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Workspace = value;
}
std::shared_ptr<ConfigNodePropertyString> ComDayCqStatisticsImplStatisticsServiceImplProperties::getKeywordsPath() const
{
    return m_KeywordsPath;
}
void ComDayCqStatisticsImplStatisticsServiceImplProperties::setKeywordsPath(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_KeywordsPath = value;
}
std::shared_ptr<ConfigNodePropertyBoolean> ComDayCqStatisticsImplStatisticsServiceImplProperties::getAsyncEntries() const
{
    return m_AsyncEntries;
}
void ComDayCqStatisticsImplStatisticsServiceImplProperties::setAsyncEntries(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_AsyncEntries = value;
}

}
}
}
}

