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



#include "ComAdobeCqSocialForumClientEndpointsImplForumOperationsServiceProperties.h"

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

ComAdobeCqSocialForumClientEndpointsImplForumOperationsServiceProperties::ComAdobeCqSocialForumClientEndpointsImplForumOperationsServiceProperties()
{
    
}

ComAdobeCqSocialForumClientEndpointsImplForumOperationsServiceProperties::~ComAdobeCqSocialForumClientEndpointsImplForumOperationsServiceProperties()
{
}

std::string ComAdobeCqSocialForumClientEndpointsImplForumOperationsServiceProperties::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	write_json(ss, pt, false);
	return ss.str();
}

void ComAdobeCqSocialForumClientEndpointsImplForumOperationsServiceProperties::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
}

std::shared_ptr<ConfigNodePropertyArray> ComAdobeCqSocialForumClientEndpointsImplForumOperationsServiceProperties::getFieldWhitelist() const
{
    return m_FieldWhitelist;
}
void ComAdobeCqSocialForumClientEndpointsImplForumOperationsServiceProperties::setFieldWhitelist(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_FieldWhitelist = value;
}
std::shared_ptr<ConfigNodePropertyArray> ComAdobeCqSocialForumClientEndpointsImplForumOperationsServiceProperties::getAttachmentTypeBlacklist() const
{
    return m_AttachmentTypeBlacklist;
}
void ComAdobeCqSocialForumClientEndpointsImplForumOperationsServiceProperties::setAttachmentTypeBlacklist(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_AttachmentTypeBlacklist = value;
}

}
}
}
}

