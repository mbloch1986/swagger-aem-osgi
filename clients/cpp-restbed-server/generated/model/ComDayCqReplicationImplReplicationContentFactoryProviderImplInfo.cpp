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



#include "ComDayCqReplicationImplReplicationContentFactoryProviderImplInfo.h"

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

ComDayCqReplicationImplReplicationContentFactoryProviderImplInfo::ComDayCqReplicationImplReplicationContentFactoryProviderImplInfo()
{
    m_Pid = "";
    m_Title = "";
    m_Description = "";
    m_Bundle_location = "";
    m_Service_location = "";
    
}

ComDayCqReplicationImplReplicationContentFactoryProviderImplInfo::~ComDayCqReplicationImplReplicationContentFactoryProviderImplInfo()
{
}

std::string ComDayCqReplicationImplReplicationContentFactoryProviderImplInfo::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("Pid", m_Pid);
	pt.put("Title", m_Title);
	pt.put("Description", m_Description);
	pt.put("Bundle_location", m_Bundle_location);
	pt.put("Service_location", m_Service_location);
	write_json(ss, pt, false);
	return ss.str();
}

void ComDayCqReplicationImplReplicationContentFactoryProviderImplInfo::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m_Pid = pt.get("Pid", "");
	m_Title = pt.get("Title", "");
	m_Description = pt.get("Description", "");
	m_Bundle_location = pt.get("Bundle_location", "");
	m_Service_location = pt.get("Service_location", "");
}

std::string ComDayCqReplicationImplReplicationContentFactoryProviderImplInfo::getPid() const
{
    return m_Pid;
}
void ComDayCqReplicationImplReplicationContentFactoryProviderImplInfo::setPid(std::string value)
{
    m_Pid = value;
}
std::string ComDayCqReplicationImplReplicationContentFactoryProviderImplInfo::getTitle() const
{
    return m_Title;
}
void ComDayCqReplicationImplReplicationContentFactoryProviderImplInfo::setTitle(std::string value)
{
    m_Title = value;
}
std::string ComDayCqReplicationImplReplicationContentFactoryProviderImplInfo::getDescription() const
{
    return m_Description;
}
void ComDayCqReplicationImplReplicationContentFactoryProviderImplInfo::setDescription(std::string value)
{
    m_Description = value;
}
std::shared_ptr<ComDayCqReplicationImplReplicationContentFactoryProviderImplProperties> ComDayCqReplicationImplReplicationContentFactoryProviderImplInfo::getProperties() const
{
    return m_Properties;
}
void ComDayCqReplicationImplReplicationContentFactoryProviderImplInfo::setProperties(std::shared_ptr<ComDayCqReplicationImplReplicationContentFactoryProviderImplProperties> value)
{
    m_Properties = value;
}
std::string ComDayCqReplicationImplReplicationContentFactoryProviderImplInfo::getBundleLocation() const
{
    return m_Bundle_location;
}
void ComDayCqReplicationImplReplicationContentFactoryProviderImplInfo::setBundleLocation(std::string value)
{
    m_Bundle_location = value;
}
std::string ComDayCqReplicationImplReplicationContentFactoryProviderImplInfo::getServiceLocation() const
{
    return m_Service_location;
}
void ComDayCqReplicationImplReplicationContentFactoryProviderImplInfo::setServiceLocation(std::string value)
{
    m_Service_location = value;
}

}
}
}
}

