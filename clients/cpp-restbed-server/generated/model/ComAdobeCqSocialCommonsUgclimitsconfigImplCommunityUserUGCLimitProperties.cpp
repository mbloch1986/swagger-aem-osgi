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



#include "ComAdobeCqSocialCommonsUgclimitsconfigImplCommunityUserUGCLimitProperties.h"

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

ComAdobeCqSocialCommonsUgclimitsconfigImplCommunityUserUGCLimitProperties::ComAdobeCqSocialCommonsUgclimitsconfigImplCommunityUserUGCLimitProperties()
{
    
}

ComAdobeCqSocialCommonsUgclimitsconfigImplCommunityUserUGCLimitProperties::~ComAdobeCqSocialCommonsUgclimitsconfigImplCommunityUserUGCLimitProperties()
{
}

std::string ComAdobeCqSocialCommonsUgclimitsconfigImplCommunityUserUGCLimitProperties::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	write_json(ss, pt, false);
	return ss.str();
}

void ComAdobeCqSocialCommonsUgclimitsconfigImplCommunityUserUGCLimitProperties::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
}

std::shared_ptr<ConfigNodePropertyBoolean> ComAdobeCqSocialCommonsUgclimitsconfigImplCommunityUserUGCLimitProperties::getEnable() const
{
    return m_Enable;
}
void ComAdobeCqSocialCommonsUgclimitsconfigImplCommunityUserUGCLimitProperties::setEnable(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Enable = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqSocialCommonsUgclimitsconfigImplCommunityUserUGCLimitProperties::getUGCLimit() const
{
    return m_UGCLimit;
}
void ComAdobeCqSocialCommonsUgclimitsconfigImplCommunityUserUGCLimitProperties::setUGCLimit(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_UGCLimit = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqSocialCommonsUgclimitsconfigImplCommunityUserUGCLimitProperties::getUgcLimitDuration() const
{
    return m_UgcLimitDuration;
}
void ComAdobeCqSocialCommonsUgclimitsconfigImplCommunityUserUGCLimitProperties::setUgcLimitDuration(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_UgcLimitDuration = value;
}
std::shared_ptr<ConfigNodePropertyArray> ComAdobeCqSocialCommonsUgclimitsconfigImplCommunityUserUGCLimitProperties::getDomains() const
{
    return m_Domains;
}
void ComAdobeCqSocialCommonsUgclimitsconfigImplCommunityUserUGCLimitProperties::setDomains(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Domains = value;
}
std::shared_ptr<ConfigNodePropertyArray> ComAdobeCqSocialCommonsUgclimitsconfigImplCommunityUserUGCLimitProperties::getToList() const
{
    return m_ToList;
}
void ComAdobeCqSocialCommonsUgclimitsconfigImplCommunityUserUGCLimitProperties::setToList(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_ToList = value;
}

}
}
}
}

