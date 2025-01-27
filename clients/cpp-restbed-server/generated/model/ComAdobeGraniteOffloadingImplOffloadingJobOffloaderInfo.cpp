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



#include "ComAdobeGraniteOffloadingImplOffloadingJobOffloaderInfo.h"

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

ComAdobeGraniteOffloadingImplOffloadingJobOffloaderInfo::ComAdobeGraniteOffloadingImplOffloadingJobOffloaderInfo()
{
    m_Pid = "";
    m_Title = "";
    m_Description = "";
    m_Bundle_location = "";
    m_Service_location = "";
    
}

ComAdobeGraniteOffloadingImplOffloadingJobOffloaderInfo::~ComAdobeGraniteOffloadingImplOffloadingJobOffloaderInfo()
{
}

std::string ComAdobeGraniteOffloadingImplOffloadingJobOffloaderInfo::toJsonString()
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

void ComAdobeGraniteOffloadingImplOffloadingJobOffloaderInfo::fromJsonString(std::string const& jsonString)
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

std::string ComAdobeGraniteOffloadingImplOffloadingJobOffloaderInfo::getPid() const
{
    return m_Pid;
}
void ComAdobeGraniteOffloadingImplOffloadingJobOffloaderInfo::setPid(std::string value)
{
    m_Pid = value;
}
std::string ComAdobeGraniteOffloadingImplOffloadingJobOffloaderInfo::getTitle() const
{
    return m_Title;
}
void ComAdobeGraniteOffloadingImplOffloadingJobOffloaderInfo::setTitle(std::string value)
{
    m_Title = value;
}
std::string ComAdobeGraniteOffloadingImplOffloadingJobOffloaderInfo::getDescription() const
{
    return m_Description;
}
void ComAdobeGraniteOffloadingImplOffloadingJobOffloaderInfo::setDescription(std::string value)
{
    m_Description = value;
}
std::shared_ptr<ComAdobeGraniteOffloadingImplOffloadingJobOffloaderProperties> ComAdobeGraniteOffloadingImplOffloadingJobOffloaderInfo::getProperties() const
{
    return m_Properties;
}
void ComAdobeGraniteOffloadingImplOffloadingJobOffloaderInfo::setProperties(std::shared_ptr<ComAdobeGraniteOffloadingImplOffloadingJobOffloaderProperties> value)
{
    m_Properties = value;
}
std::string ComAdobeGraniteOffloadingImplOffloadingJobOffloaderInfo::getBundleLocation() const
{
    return m_Bundle_location;
}
void ComAdobeGraniteOffloadingImplOffloadingJobOffloaderInfo::setBundleLocation(std::string value)
{
    m_Bundle_location = value;
}
std::string ComAdobeGraniteOffloadingImplOffloadingJobOffloaderInfo::getServiceLocation() const
{
    return m_Service_location;
}
void ComAdobeGraniteOffloadingImplOffloadingJobOffloaderInfo::setServiceLocation(std::string value)
{
    m_Service_location = value;
}

}
}
}
}

