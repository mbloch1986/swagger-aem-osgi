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



#include "ComAdobeCqScreensDeviceImplDeviceServiceProperties.h"

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

ComAdobeCqScreensDeviceImplDeviceServiceProperties::ComAdobeCqScreensDeviceImplDeviceServiceProperties()
{
    
}

ComAdobeCqScreensDeviceImplDeviceServiceProperties::~ComAdobeCqScreensDeviceImplDeviceServiceProperties()
{
}

std::string ComAdobeCqScreensDeviceImplDeviceServiceProperties::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	write_json(ss, pt, false);
	return ss.str();
}

void ComAdobeCqScreensDeviceImplDeviceServiceProperties::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
}

std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqScreensDeviceImplDeviceServiceProperties::getComAdobeAemScreensPlayerPingfrequency() const
{
    return m_Com_adobe_aem_screens_player_pingfrequency;
}
void ComAdobeCqScreensDeviceImplDeviceServiceProperties::setComAdobeAemScreensPlayerPingfrequency(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Com_adobe_aem_screens_player_pingfrequency = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeCqScreensDeviceImplDeviceServiceProperties::getComAdobeAemScreensDevicePaswordSpecialchars() const
{
    return m_Com_adobe_aem_screens_device_pasword_specialchars;
}
void ComAdobeCqScreensDeviceImplDeviceServiceProperties::setComAdobeAemScreensDevicePaswordSpecialchars(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Com_adobe_aem_screens_device_pasword_specialchars = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqScreensDeviceImplDeviceServiceProperties::getComAdobeAemScreensDevicePaswordMinlowercasechars() const
{
    return m_Com_adobe_aem_screens_device_pasword_minlowercasechars;
}
void ComAdobeCqScreensDeviceImplDeviceServiceProperties::setComAdobeAemScreensDevicePaswordMinlowercasechars(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Com_adobe_aem_screens_device_pasword_minlowercasechars = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqScreensDeviceImplDeviceServiceProperties::getComAdobeAemScreensDevicePaswordMinuppercasechars() const
{
    return m_Com_adobe_aem_screens_device_pasword_minuppercasechars;
}
void ComAdobeCqScreensDeviceImplDeviceServiceProperties::setComAdobeAemScreensDevicePaswordMinuppercasechars(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Com_adobe_aem_screens_device_pasword_minuppercasechars = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqScreensDeviceImplDeviceServiceProperties::getComAdobeAemScreensDevicePaswordMinnumberchars() const
{
    return m_Com_adobe_aem_screens_device_pasword_minnumberchars;
}
void ComAdobeCqScreensDeviceImplDeviceServiceProperties::setComAdobeAemScreensDevicePaswordMinnumberchars(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Com_adobe_aem_screens_device_pasword_minnumberchars = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqScreensDeviceImplDeviceServiceProperties::getComAdobeAemScreensDevicePaswordMinspecialchars() const
{
    return m_Com_adobe_aem_screens_device_pasword_minspecialchars;
}
void ComAdobeCqScreensDeviceImplDeviceServiceProperties::setComAdobeAemScreensDevicePaswordMinspecialchars(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Com_adobe_aem_screens_device_pasword_minspecialchars = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqScreensDeviceImplDeviceServiceProperties::getComAdobeAemScreensDevicePaswordMinlength() const
{
    return m_Com_adobe_aem_screens_device_pasword_minlength;
}
void ComAdobeCqScreensDeviceImplDeviceServiceProperties::setComAdobeAemScreensDevicePaswordMinlength(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Com_adobe_aem_screens_device_pasword_minlength = value;
}

}
}
}
}

