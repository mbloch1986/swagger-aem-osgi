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



#include "ComDayCqWidgetImplHtmlLibraryManagerImplProperties.h"

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

ComDayCqWidgetImplHtmlLibraryManagerImplProperties::ComDayCqWidgetImplHtmlLibraryManagerImplProperties()
{
    
}

ComDayCqWidgetImplHtmlLibraryManagerImplProperties::~ComDayCqWidgetImplHtmlLibraryManagerImplProperties()
{
}

std::string ComDayCqWidgetImplHtmlLibraryManagerImplProperties::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	write_json(ss, pt, false);
	return ss.str();
}

void ComDayCqWidgetImplHtmlLibraryManagerImplProperties::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
}

std::shared_ptr<ConfigNodePropertyString> ComDayCqWidgetImplHtmlLibraryManagerImplProperties::getHtmllibmanagerClientmanager() const
{
    return m_Htmllibmanager_clientmanager;
}
void ComDayCqWidgetImplHtmlLibraryManagerImplProperties::setHtmllibmanagerClientmanager(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Htmllibmanager_clientmanager = value;
}
std::shared_ptr<ConfigNodePropertyBoolean> ComDayCqWidgetImplHtmlLibraryManagerImplProperties::getHtmllibmanagerDebug() const
{
    return m_Htmllibmanager_debug;
}
void ComDayCqWidgetImplHtmlLibraryManagerImplProperties::setHtmllibmanagerDebug(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Htmllibmanager_debug = value;
}
std::shared_ptr<ConfigNodePropertyBoolean> ComDayCqWidgetImplHtmlLibraryManagerImplProperties::getHtmllibmanagerDebugConsole() const
{
    return m_Htmllibmanager_debug_console;
}
void ComDayCqWidgetImplHtmlLibraryManagerImplProperties::setHtmllibmanagerDebugConsole(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Htmllibmanager_debug_console = value;
}
std::shared_ptr<ConfigNodePropertyString> ComDayCqWidgetImplHtmlLibraryManagerImplProperties::getHtmllibmanagerDebugInitJs() const
{
    return m_Htmllibmanager_debug_init_js;
}
void ComDayCqWidgetImplHtmlLibraryManagerImplProperties::setHtmllibmanagerDebugInitJs(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Htmllibmanager_debug_init_js = value;
}
std::shared_ptr<ConfigNodePropertyString> ComDayCqWidgetImplHtmlLibraryManagerImplProperties::getHtmllibmanagerDefaultthemename() const
{
    return m_Htmllibmanager_defaultthemename;
}
void ComDayCqWidgetImplHtmlLibraryManagerImplProperties::setHtmllibmanagerDefaultthemename(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Htmllibmanager_defaultthemename = value;
}
std::shared_ptr<ConfigNodePropertyString> ComDayCqWidgetImplHtmlLibraryManagerImplProperties::getHtmllibmanagerDefaultuserthemename() const
{
    return m_Htmllibmanager_defaultuserthemename;
}
void ComDayCqWidgetImplHtmlLibraryManagerImplProperties::setHtmllibmanagerDefaultuserthemename(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Htmllibmanager_defaultuserthemename = value;
}
std::shared_ptr<ConfigNodePropertyString> ComDayCqWidgetImplHtmlLibraryManagerImplProperties::getHtmllibmanagerFirebuglitePath() const
{
    return m_Htmllibmanager_firebuglite_path;
}
void ComDayCqWidgetImplHtmlLibraryManagerImplProperties::setHtmllibmanagerFirebuglitePath(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Htmllibmanager_firebuglite_path = value;
}
std::shared_ptr<ConfigNodePropertyBoolean> ComDayCqWidgetImplHtmlLibraryManagerImplProperties::getHtmllibmanagerForceCQUrlInfo() const
{
    return m_Htmllibmanager_forceCQUrlInfo;
}
void ComDayCqWidgetImplHtmlLibraryManagerImplProperties::setHtmllibmanagerForceCQUrlInfo(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Htmllibmanager_forceCQUrlInfo = value;
}
std::shared_ptr<ConfigNodePropertyBoolean> ComDayCqWidgetImplHtmlLibraryManagerImplProperties::getHtmllibmanagerGzip() const
{
    return m_Htmllibmanager_gzip;
}
void ComDayCqWidgetImplHtmlLibraryManagerImplProperties::setHtmllibmanagerGzip(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Htmllibmanager_gzip = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComDayCqWidgetImplHtmlLibraryManagerImplProperties::getHtmllibmanagerMaxage() const
{
    return m_Htmllibmanager_maxage;
}
void ComDayCqWidgetImplHtmlLibraryManagerImplProperties::setHtmllibmanagerMaxage(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Htmllibmanager_maxage = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComDayCqWidgetImplHtmlLibraryManagerImplProperties::getHtmllibmanagerMaxDataUriSize() const
{
    return m_Htmllibmanager_maxDataUriSize;
}
void ComDayCqWidgetImplHtmlLibraryManagerImplProperties::setHtmllibmanagerMaxDataUriSize(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Htmllibmanager_maxDataUriSize = value;
}
std::shared_ptr<ConfigNodePropertyBoolean> ComDayCqWidgetImplHtmlLibraryManagerImplProperties::getHtmllibmanagerMinify() const
{
    return m_Htmllibmanager_minify;
}
void ComDayCqWidgetImplHtmlLibraryManagerImplProperties::setHtmllibmanagerMinify(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Htmllibmanager_minify = value;
}
std::shared_ptr<ConfigNodePropertyArray> ComDayCqWidgetImplHtmlLibraryManagerImplProperties::getHtmllibmanagerPathList() const
{
    return m_Htmllibmanager_path_list;
}
void ComDayCqWidgetImplHtmlLibraryManagerImplProperties::setHtmllibmanagerPathList(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Htmllibmanager_path_list = value;
}
std::shared_ptr<ConfigNodePropertyBoolean> ComDayCqWidgetImplHtmlLibraryManagerImplProperties::getHtmllibmanagerTiming() const
{
    return m_Htmllibmanager_timing;
}
void ComDayCqWidgetImplHtmlLibraryManagerImplProperties::setHtmllibmanagerTiming(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Htmllibmanager_timing = value;
}

}
}
}
}

