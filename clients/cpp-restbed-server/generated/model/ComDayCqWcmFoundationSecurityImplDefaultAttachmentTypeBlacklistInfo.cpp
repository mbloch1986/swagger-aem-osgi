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



#include "ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistInfo.h"

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

ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistInfo::ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistInfo()
{
    m_Pid = "";
    m_Title = "";
    m_Description = "";
    
}

ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistInfo::~ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistInfo()
{
}

std::string ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistInfo::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("Pid", m_Pid);
	pt.put("Title", m_Title);
	pt.put("Description", m_Description);
	write_json(ss, pt, false);
	return ss.str();
}

void ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistInfo::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m_Pid = pt.get("Pid", "");
	m_Title = pt.get("Title", "");
	m_Description = pt.get("Description", "");
}

std::string ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistInfo::getPid() const
{
    return m_Pid;
}
void ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistInfo::setPid(std::string value)
{
    m_Pid = value;
}
std::string ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistInfo::getTitle() const
{
    return m_Title;
}
void ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistInfo::setTitle(std::string value)
{
    m_Title = value;
}
std::string ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistInfo::getDescription() const
{
    return m_Description;
}
void ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistInfo::setDescription(std::string value)
{
    m_Description = value;
}
std::shared_ptr<ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistProperties> ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistInfo::getProperties() const
{
    return m_Properties;
}
void ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistInfo::setProperties(std::shared_ptr<ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistProperties> value)
{
    m_Properties = value;
}

}
}
}
}
