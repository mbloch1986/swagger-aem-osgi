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



#include "ComAdobeGraniteRestImplServletDefaultGETServletProperties.h"

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

ComAdobeGraniteRestImplServletDefaultGETServletProperties::ComAdobeGraniteRestImplServletDefaultGETServletProperties()
{
    
}

ComAdobeGraniteRestImplServletDefaultGETServletProperties::~ComAdobeGraniteRestImplServletDefaultGETServletProperties()
{
}

std::string ComAdobeGraniteRestImplServletDefaultGETServletProperties::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	write_json(ss, pt, false);
	return ss.str();
}

void ComAdobeGraniteRestImplServletDefaultGETServletProperties::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
}

std::shared_ptr<ConfigNodePropertyInteger> ComAdobeGraniteRestImplServletDefaultGETServletProperties::getDefaultLimit() const
{
    return m_Default_limit;
}
void ComAdobeGraniteRestImplServletDefaultGETServletProperties::setDefaultLimit(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Default_limit = value;
}
std::shared_ptr<ConfigNodePropertyBoolean> ComAdobeGraniteRestImplServletDefaultGETServletProperties::getUseAbsoluteUri() const
{
    return m_Use_absolute_uri;
}
void ComAdobeGraniteRestImplServletDefaultGETServletProperties::setUseAbsoluteUri(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Use_absolute_uri = value;
}

}
}
}
}

