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



#include "ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatInfo.h"

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

ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatInfo::ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatInfo()
{
    m_Pid = "";
    m_Title = "";
    m_Description = "";
    
}

ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatInfo::~ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatInfo()
{
}

std::string ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatInfo::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("Pid", m_Pid);
	pt.put("Title", m_Title);
	pt.put("Description", m_Description);
	write_json(ss, pt, false);
	return ss.str();
}

void ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatInfo::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m_Pid = pt.get("Pid", "");
	m_Title = pt.get("Title", "");
	m_Description = pt.get("Description", "");
}

std::string ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatInfo::getPid() const
{
    return m_Pid;
}
void ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatInfo::setPid(std::string value)
{
    m_Pid = value;
}
std::string ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatInfo::getTitle() const
{
    return m_Title;
}
void ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatInfo::setTitle(std::string value)
{
    m_Title = value;
}
std::string ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatInfo::getDescription() const
{
    return m_Description;
}
void ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatInfo::setDescription(std::string value)
{
    m_Description = value;
}
std::shared_ptr<ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatProperties> ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatInfo::getProperties() const
{
    return m_Properties;
}
void ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatInfo::setProperties(std::shared_ptr<ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatProperties> value)
{
    m_Properties = value;
}

}
}
}
}

