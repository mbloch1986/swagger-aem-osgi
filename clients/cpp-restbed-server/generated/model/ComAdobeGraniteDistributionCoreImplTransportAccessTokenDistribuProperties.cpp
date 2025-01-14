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



#include "ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties.h"

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

ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties::ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties()
{
    
}

ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties::~ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties()
{
}

std::string ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	write_json(ss, pt, false);
	return ss.str();
}

void ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties::getName() const
{
    return m_Name;
}
void ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties::setName(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Name = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties::getServiceName() const
{
    return m_ServiceName;
}
void ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties::setServiceName(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_ServiceName = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties::getUserId() const
{
    return m_UserId;
}
void ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties::setUserId(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_UserId = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties::getAccessTokenProviderTarget() const
{
    return m_AccessTokenProvider_target;
}
void ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties::setAccessTokenProviderTarget(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_AccessTokenProvider_target = value;
}

}
}
}
}

