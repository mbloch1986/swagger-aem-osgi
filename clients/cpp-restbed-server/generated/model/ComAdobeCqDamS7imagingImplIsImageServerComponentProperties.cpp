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



#include "ComAdobeCqDamS7imagingImplIsImageServerComponentProperties.h"

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

ComAdobeCqDamS7imagingImplIsImageServerComponentProperties::ComAdobeCqDamS7imagingImplIsImageServerComponentProperties()
{
    
}

ComAdobeCqDamS7imagingImplIsImageServerComponentProperties::~ComAdobeCqDamS7imagingImplIsImageServerComponentProperties()
{
}

std::string ComAdobeCqDamS7imagingImplIsImageServerComponentProperties::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	write_json(ss, pt, false);
	return ss.str();
}

void ComAdobeCqDamS7imagingImplIsImageServerComponentProperties::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeCqDamS7imagingImplIsImageServerComponentProperties::getTcpPort() const
{
    return m_TcpPort;
}
void ComAdobeCqDamS7imagingImplIsImageServerComponentProperties::setTcpPort(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_TcpPort = value;
}
std::shared_ptr<ConfigNodePropertyBoolean> ComAdobeCqDamS7imagingImplIsImageServerComponentProperties::getAllowRemoteAccess() const
{
    return m_AllowRemoteAccess;
}
void ComAdobeCqDamS7imagingImplIsImageServerComponentProperties::setAllowRemoteAccess(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_AllowRemoteAccess = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeCqDamS7imagingImplIsImageServerComponentProperties::getMaxRenderRgnPixels() const
{
    return m_MaxRenderRgnPixels;
}
void ComAdobeCqDamS7imagingImplIsImageServerComponentProperties::setMaxRenderRgnPixels(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_MaxRenderRgnPixels = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeCqDamS7imagingImplIsImageServerComponentProperties::getMaxMessageSize() const
{
    return m_MaxMessageSize;
}
void ComAdobeCqDamS7imagingImplIsImageServerComponentProperties::setMaxMessageSize(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_MaxMessageSize = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqDamS7imagingImplIsImageServerComponentProperties::getRandomAccessUrlTimeout() const
{
    return m_RandomAccessUrlTimeout;
}
void ComAdobeCqDamS7imagingImplIsImageServerComponentProperties::setRandomAccessUrlTimeout(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_RandomAccessUrlTimeout = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqDamS7imagingImplIsImageServerComponentProperties::getWorkerThreads() const
{
    return m_WorkerThreads;
}
void ComAdobeCqDamS7imagingImplIsImageServerComponentProperties::setWorkerThreads(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_WorkerThreads = value;
}

}
}
}
}
