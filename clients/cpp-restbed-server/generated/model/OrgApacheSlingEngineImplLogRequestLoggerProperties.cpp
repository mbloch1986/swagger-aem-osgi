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



#include "OrgApacheSlingEngineImplLogRequestLoggerProperties.h"

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

OrgApacheSlingEngineImplLogRequestLoggerProperties::OrgApacheSlingEngineImplLogRequestLoggerProperties()
{
    
}

OrgApacheSlingEngineImplLogRequestLoggerProperties::~OrgApacheSlingEngineImplLogRequestLoggerProperties()
{
}

std::string OrgApacheSlingEngineImplLogRequestLoggerProperties::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	write_json(ss, pt, false);
	return ss.str();
}

void OrgApacheSlingEngineImplLogRequestLoggerProperties::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
}

std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingEngineImplLogRequestLoggerProperties::getRequestLogOutput() const
{
    return m_Request_log_output;
}
void OrgApacheSlingEngineImplLogRequestLoggerProperties::setRequestLogOutput(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Request_log_output = value;
}
std::shared_ptr<ConfigNodePropertyDropDown> OrgApacheSlingEngineImplLogRequestLoggerProperties::getRequestLogOutputtype() const
{
    return m_Request_log_outputtype;
}
void OrgApacheSlingEngineImplLogRequestLoggerProperties::setRequestLogOutputtype(std::shared_ptr<ConfigNodePropertyDropDown> value)
{
    m_Request_log_outputtype = value;
}
std::shared_ptr<ConfigNodePropertyBoolean> OrgApacheSlingEngineImplLogRequestLoggerProperties::getRequestLogEnabled() const
{
    return m_Request_log_enabled;
}
void OrgApacheSlingEngineImplLogRequestLoggerProperties::setRequestLogEnabled(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Request_log_enabled = value;
}
std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingEngineImplLogRequestLoggerProperties::getAccessLogOutput() const
{
    return m_Access_log_output;
}
void OrgApacheSlingEngineImplLogRequestLoggerProperties::setAccessLogOutput(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Access_log_output = value;
}
std::shared_ptr<ConfigNodePropertyDropDown> OrgApacheSlingEngineImplLogRequestLoggerProperties::getAccessLogOutputtype() const
{
    return m_Access_log_outputtype;
}
void OrgApacheSlingEngineImplLogRequestLoggerProperties::setAccessLogOutputtype(std::shared_ptr<ConfigNodePropertyDropDown> value)
{
    m_Access_log_outputtype = value;
}
std::shared_ptr<ConfigNodePropertyBoolean> OrgApacheSlingEngineImplLogRequestLoggerProperties::getAccessLogEnabled() const
{
    return m_Access_log_enabled;
}
void OrgApacheSlingEngineImplLogRequestLoggerProperties::setAccessLogEnabled(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Access_log_enabled = value;
}

}
}
}
}
