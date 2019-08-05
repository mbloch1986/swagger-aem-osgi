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



#include "ComAdobeFormsCommonServletTempCleanUpTaskProperties.h"

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

ComAdobeFormsCommonServletTempCleanUpTaskProperties::ComAdobeFormsCommonServletTempCleanUpTaskProperties()
{
    
}

ComAdobeFormsCommonServletTempCleanUpTaskProperties::~ComAdobeFormsCommonServletTempCleanUpTaskProperties()
{
}

std::string ComAdobeFormsCommonServletTempCleanUpTaskProperties::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	write_json(ss, pt, false);
	return ss.str();
}

void ComAdobeFormsCommonServletTempCleanUpTaskProperties::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeFormsCommonServletTempCleanUpTaskProperties::getSchedulerExpression() const
{
    return m_Scheduler_expression;
}
void ComAdobeFormsCommonServletTempCleanUpTaskProperties::setSchedulerExpression(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Scheduler_expression = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeFormsCommonServletTempCleanUpTaskProperties::getDurationForTemporaryStorage() const
{
    return m_Duration_for_Temporary_Storage;
}
void ComAdobeFormsCommonServletTempCleanUpTaskProperties::setDurationForTemporaryStorage(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Duration_for_Temporary_Storage = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeFormsCommonServletTempCleanUpTaskProperties::getDurationForAnonymousStorage() const
{
    return m_Duration_for_Anonymous_Storage;
}
void ComAdobeFormsCommonServletTempCleanUpTaskProperties::setDurationForAnonymousStorage(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Duration_for_Anonymous_Storage = value;
}

}
}
}
}
