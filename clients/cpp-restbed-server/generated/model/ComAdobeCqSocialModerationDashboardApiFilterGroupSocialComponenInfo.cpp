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



#include "ComAdobeCqSocialModerationDashboardApiFilterGroupSocialComponenInfo.h"

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

ComAdobeCqSocialModerationDashboardApiFilterGroupSocialComponenInfo::ComAdobeCqSocialModerationDashboardApiFilterGroupSocialComponenInfo()
{
    m_Pid = "";
    m_Title = "";
    m_Description = "";
    
}

ComAdobeCqSocialModerationDashboardApiFilterGroupSocialComponenInfo::~ComAdobeCqSocialModerationDashboardApiFilterGroupSocialComponenInfo()
{
}

std::string ComAdobeCqSocialModerationDashboardApiFilterGroupSocialComponenInfo::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("Pid", m_Pid);
	pt.put("Title", m_Title);
	pt.put("Description", m_Description);
	write_json(ss, pt, false);
	return ss.str();
}

void ComAdobeCqSocialModerationDashboardApiFilterGroupSocialComponenInfo::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m_Pid = pt.get("Pid", "");
	m_Title = pt.get("Title", "");
	m_Description = pt.get("Description", "");
}

std::string ComAdobeCqSocialModerationDashboardApiFilterGroupSocialComponenInfo::getPid() const
{
    return m_Pid;
}
void ComAdobeCqSocialModerationDashboardApiFilterGroupSocialComponenInfo::setPid(std::string value)
{
    m_Pid = value;
}
std::string ComAdobeCqSocialModerationDashboardApiFilterGroupSocialComponenInfo::getTitle() const
{
    return m_Title;
}
void ComAdobeCqSocialModerationDashboardApiFilterGroupSocialComponenInfo::setTitle(std::string value)
{
    m_Title = value;
}
std::string ComAdobeCqSocialModerationDashboardApiFilterGroupSocialComponenInfo::getDescription() const
{
    return m_Description;
}
void ComAdobeCqSocialModerationDashboardApiFilterGroupSocialComponenInfo::setDescription(std::string value)
{
    m_Description = value;
}
std::shared_ptr<ComAdobeCqSocialModerationDashboardApiFilterGroupSocialComponenProperties> ComAdobeCqSocialModerationDashboardApiFilterGroupSocialComponenInfo::getProperties() const
{
    return m_Properties;
}
void ComAdobeCqSocialModerationDashboardApiFilterGroupSocialComponenInfo::setProperties(std::shared_ptr<ComAdobeCqSocialModerationDashboardApiFilterGroupSocialComponenProperties> value)
{
    m_Properties = value;
}

}
}
}
}
