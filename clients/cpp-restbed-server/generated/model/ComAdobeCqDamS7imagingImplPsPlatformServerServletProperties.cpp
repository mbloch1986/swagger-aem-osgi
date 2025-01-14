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



#include "ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties.h"

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

ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties::ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties()
{
    
}

ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties::~ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties()
{
}

std::string ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	write_json(ss, pt, false);
	return ss.str();
}

void ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
}

std::shared_ptr<ConfigNodePropertyBoolean> ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties::getCacheEnable() const
{
    return m_Cache_enable;
}
void ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties::setCacheEnable(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Cache_enable = value;
}
std::shared_ptr<ConfigNodePropertyArray> ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties::getCacheRootPaths() const
{
    return m_Cache_rootPaths;
}
void ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties::setCacheRootPaths(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Cache_rootPaths = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties::getCacheMaxSize() const
{
    return m_Cache_maxSize;
}
void ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties::setCacheMaxSize(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Cache_maxSize = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties::getCacheMaxEntries() const
{
    return m_Cache_maxEntries;
}
void ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties::setCacheMaxEntries(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Cache_maxEntries = value;
}

}
}
}
}

