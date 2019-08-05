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



#include "ComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties.h"

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

ComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties::ComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties()
{
    
}

ComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties::~ComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties()
{
}

std::string ComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	write_json(ss, pt, false);
	return ss.str();
}

void ComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
}

std::shared_ptr<ConfigNodePropertyString> ComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties::getCqAnalyticsTestandtargetApiUrl() const
{
    return m_Cq_analytics_testandtarget_api_url;
}
void ComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties::setCqAnalyticsTestandtargetApiUrl(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Cq_analytics_testandtarget_api_url = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties::getCqAnalyticsTestandtargetTimeout() const
{
    return m_Cq_analytics_testandtarget_timeout;
}
void ComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties::setCqAnalyticsTestandtargetTimeout(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Cq_analytics_testandtarget_timeout = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties::getCqAnalyticsTestandtargetSockettimeout() const
{
    return m_Cq_analytics_testandtarget_sockettimeout;
}
void ComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties::setCqAnalyticsTestandtargetSockettimeout(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Cq_analytics_testandtarget_sockettimeout = value;
}
std::shared_ptr<ConfigNodePropertyString> ComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties::getCqAnalyticsTestandtargetRecommendationsUrlReplace() const
{
    return m_Cq_analytics_testandtarget_recommendations_url_replace;
}
void ComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties::setCqAnalyticsTestandtargetRecommendationsUrlReplace(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Cq_analytics_testandtarget_recommendations_url_replace = value;
}
std::shared_ptr<ConfigNodePropertyString> ComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties::getCqAnalyticsTestandtargetRecommendationsUrlReplacewith() const
{
    return m_Cq_analytics_testandtarget_recommendations_url_replacewith;
}
void ComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties::setCqAnalyticsTestandtargetRecommendationsUrlReplacewith(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Cq_analytics_testandtarget_recommendations_url_replacewith = value;
}

}
}
}
}
