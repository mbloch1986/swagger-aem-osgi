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



#include "ComDayCqDamS7damCommonProcessVideoThumbnailDownloadProcessInfo.h"

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

ComDayCqDamS7damCommonProcessVideoThumbnailDownloadProcessInfo::ComDayCqDamS7damCommonProcessVideoThumbnailDownloadProcessInfo()
{
    m_Pid = "";
    m_Title = "";
    m_Description = "";
    
}

ComDayCqDamS7damCommonProcessVideoThumbnailDownloadProcessInfo::~ComDayCqDamS7damCommonProcessVideoThumbnailDownloadProcessInfo()
{
}

std::string ComDayCqDamS7damCommonProcessVideoThumbnailDownloadProcessInfo::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("Pid", m_Pid);
	pt.put("Title", m_Title);
	pt.put("Description", m_Description);
	write_json(ss, pt, false);
	return ss.str();
}

void ComDayCqDamS7damCommonProcessVideoThumbnailDownloadProcessInfo::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m_Pid = pt.get("Pid", "");
	m_Title = pt.get("Title", "");
	m_Description = pt.get("Description", "");
}

std::string ComDayCqDamS7damCommonProcessVideoThumbnailDownloadProcessInfo::getPid() const
{
    return m_Pid;
}
void ComDayCqDamS7damCommonProcessVideoThumbnailDownloadProcessInfo::setPid(std::string value)
{
    m_Pid = value;
}
std::string ComDayCqDamS7damCommonProcessVideoThumbnailDownloadProcessInfo::getTitle() const
{
    return m_Title;
}
void ComDayCqDamS7damCommonProcessVideoThumbnailDownloadProcessInfo::setTitle(std::string value)
{
    m_Title = value;
}
std::string ComDayCqDamS7damCommonProcessVideoThumbnailDownloadProcessInfo::getDescription() const
{
    return m_Description;
}
void ComDayCqDamS7damCommonProcessVideoThumbnailDownloadProcessInfo::setDescription(std::string value)
{
    m_Description = value;
}
std::shared_ptr<ComDayCqDamS7damCommonProcessVideoThumbnailDownloadProcessProperties> ComDayCqDamS7damCommonProcessVideoThumbnailDownloadProcessInfo::getProperties() const
{
    return m_Properties;
}
void ComDayCqDamS7damCommonProcessVideoThumbnailDownloadProcessInfo::setProperties(std::shared_ptr<ComDayCqDamS7damCommonProcessVideoThumbnailDownloadProcessProperties> value)
{
    m_Properties = value;
}

}
}
}
}

