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



#include "ComAdobeGraniteWorkflowCorePayloadMapCacheInfo.h"

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

ComAdobeGraniteWorkflowCorePayloadMapCacheInfo::ComAdobeGraniteWorkflowCorePayloadMapCacheInfo()
{
    m_Pid = "";
    m_Title = "";
    m_Description = "";
    
}

ComAdobeGraniteWorkflowCorePayloadMapCacheInfo::~ComAdobeGraniteWorkflowCorePayloadMapCacheInfo()
{
}

std::string ComAdobeGraniteWorkflowCorePayloadMapCacheInfo::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("Pid", m_Pid);
	pt.put("Title", m_Title);
	pt.put("Description", m_Description);
	write_json(ss, pt, false);
	return ss.str();
}

void ComAdobeGraniteWorkflowCorePayloadMapCacheInfo::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m_Pid = pt.get("Pid", "");
	m_Title = pt.get("Title", "");
	m_Description = pt.get("Description", "");
}

std::string ComAdobeGraniteWorkflowCorePayloadMapCacheInfo::getPid() const
{
    return m_Pid;
}
void ComAdobeGraniteWorkflowCorePayloadMapCacheInfo::setPid(std::string value)
{
    m_Pid = value;
}
std::string ComAdobeGraniteWorkflowCorePayloadMapCacheInfo::getTitle() const
{
    return m_Title;
}
void ComAdobeGraniteWorkflowCorePayloadMapCacheInfo::setTitle(std::string value)
{
    m_Title = value;
}
std::string ComAdobeGraniteWorkflowCorePayloadMapCacheInfo::getDescription() const
{
    return m_Description;
}
void ComAdobeGraniteWorkflowCorePayloadMapCacheInfo::setDescription(std::string value)
{
    m_Description = value;
}
std::shared_ptr<ComAdobeGraniteWorkflowCorePayloadMapCacheProperties> ComAdobeGraniteWorkflowCorePayloadMapCacheInfo::getProperties() const
{
    return m_Properties;
}
void ComAdobeGraniteWorkflowCorePayloadMapCacheInfo::setProperties(std::shared_ptr<ComAdobeGraniteWorkflowCorePayloadMapCacheProperties> value)
{
    m_Properties = value;
}

}
}
}
}

