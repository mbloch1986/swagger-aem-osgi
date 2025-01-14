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



#include "ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties.h"

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

ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties::ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties()
{
    
}

ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties::~ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties()
{
}

std::string ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	write_json(ss, pt, false);
	return ss.str();
}

void ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties::getComAdobeCqScreensAnalyticsImplUrl() const
{
    return m_Com_adobe_cq_screens_analytics_impl_url;
}
void ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties::setComAdobeCqScreensAnalyticsImplUrl(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Com_adobe_cq_screens_analytics_impl_url = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties::getComAdobeCqScreensAnalyticsImplApikey() const
{
    return m_Com_adobe_cq_screens_analytics_impl_apikey;
}
void ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties::setComAdobeCqScreensAnalyticsImplApikey(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Com_adobe_cq_screens_analytics_impl_apikey = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties::getComAdobeCqScreensAnalyticsImplProject() const
{
    return m_Com_adobe_cq_screens_analytics_impl_project;
}
void ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties::setComAdobeCqScreensAnalyticsImplProject(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Com_adobe_cq_screens_analytics_impl_project = value;
}
std::shared_ptr<ConfigNodePropertyDropDown> ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties::getComAdobeCqScreensAnalyticsImplEnvironment() const
{
    return m_Com_adobe_cq_screens_analytics_impl_environment;
}
void ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties::setComAdobeCqScreensAnalyticsImplEnvironment(std::shared_ptr<ConfigNodePropertyDropDown> value)
{
    m_Com_adobe_cq_screens_analytics_impl_environment = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties::getComAdobeCqScreensAnalyticsImplSendFrequency() const
{
    return m_Com_adobe_cq_screens_analytics_impl_sendFrequency;
}
void ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties::setComAdobeCqScreensAnalyticsImplSendFrequency(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Com_adobe_cq_screens_analytics_impl_sendFrequency = value;
}

}
}
}
}

