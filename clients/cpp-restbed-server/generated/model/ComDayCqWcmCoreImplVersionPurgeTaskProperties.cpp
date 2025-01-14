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



#include "ComDayCqWcmCoreImplVersionPurgeTaskProperties.h"

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

ComDayCqWcmCoreImplVersionPurgeTaskProperties::ComDayCqWcmCoreImplVersionPurgeTaskProperties()
{
    
}

ComDayCqWcmCoreImplVersionPurgeTaskProperties::~ComDayCqWcmCoreImplVersionPurgeTaskProperties()
{
}

std::string ComDayCqWcmCoreImplVersionPurgeTaskProperties::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	write_json(ss, pt, false);
	return ss.str();
}

void ComDayCqWcmCoreImplVersionPurgeTaskProperties::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
}

std::shared_ptr<ConfigNodePropertyArray> ComDayCqWcmCoreImplVersionPurgeTaskProperties::getVersionpurgePaths() const
{
    return m_Versionpurge_paths;
}
void ComDayCqWcmCoreImplVersionPurgeTaskProperties::setVersionpurgePaths(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Versionpurge_paths = value;
}
std::shared_ptr<ConfigNodePropertyBoolean> ComDayCqWcmCoreImplVersionPurgeTaskProperties::getVersionpurgeRecursive() const
{
    return m_Versionpurge_recursive;
}
void ComDayCqWcmCoreImplVersionPurgeTaskProperties::setVersionpurgeRecursive(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Versionpurge_recursive = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComDayCqWcmCoreImplVersionPurgeTaskProperties::getVersionpurgeMaxVersions() const
{
    return m_Versionpurge_maxVersions;
}
void ComDayCqWcmCoreImplVersionPurgeTaskProperties::setVersionpurgeMaxVersions(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Versionpurge_maxVersions = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComDayCqWcmCoreImplVersionPurgeTaskProperties::getVersionpurgeMinVersions() const
{
    return m_Versionpurge_minVersions;
}
void ComDayCqWcmCoreImplVersionPurgeTaskProperties::setVersionpurgeMinVersions(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Versionpurge_minVersions = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComDayCqWcmCoreImplVersionPurgeTaskProperties::getVersionpurgeMaxAgeDays() const
{
    return m_Versionpurge_maxAgeDays;
}
void ComDayCqWcmCoreImplVersionPurgeTaskProperties::setVersionpurgeMaxAgeDays(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Versionpurge_maxAgeDays = value;
}

}
}
}
}

