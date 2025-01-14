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



#include "ComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigInfo.h"

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

ComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigInfo::ComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigInfo()
{
    m_Pid = "";
    m_Title = "";
    m_Description = "";
    
}

ComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigInfo::~ComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigInfo()
{
}

std::string ComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigInfo::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("Pid", m_Pid);
	pt.put("Title", m_Title);
	pt.put("Description", m_Description);
	write_json(ss, pt, false);
	return ss.str();
}

void ComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigInfo::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m_Pid = pt.get("Pid", "");
	m_Title = pt.get("Title", "");
	m_Description = pt.get("Description", "");
}

std::string ComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigInfo::getPid() const
{
    return m_Pid;
}
void ComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigInfo::setPid(std::string value)
{
    m_Pid = value;
}
std::string ComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigInfo::getTitle() const
{
    return m_Title;
}
void ComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigInfo::setTitle(std::string value)
{
    m_Title = value;
}
std::string ComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigInfo::getDescription() const
{
    return m_Description;
}
void ComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigInfo::setDescription(std::string value)
{
    m_Description = value;
}
std::shared_ptr<ComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties> ComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigInfo::getProperties() const
{
    return m_Properties;
}
void ComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigInfo::setProperties(std::shared_ptr<ComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties> value)
{
    m_Properties = value;
}

}
}
}
}

