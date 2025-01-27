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



#include "ComDayCqDamInddProcessINDDMediaExtractProcessProperties.h"

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

ComDayCqDamInddProcessINDDMediaExtractProcessProperties::ComDayCqDamInddProcessINDDMediaExtractProcessProperties()
{
    
}

ComDayCqDamInddProcessINDDMediaExtractProcessProperties::~ComDayCqDamInddProcessINDDMediaExtractProcessProperties()
{
}

std::string ComDayCqDamInddProcessINDDMediaExtractProcessProperties::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	write_json(ss, pt, false);
	return ss.str();
}

void ComDayCqDamInddProcessINDDMediaExtractProcessProperties::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
}

std::shared_ptr<ConfigNodePropertyString> ComDayCqDamInddProcessINDDMediaExtractProcessProperties::getProcessLabel() const
{
    return m_Process_label;
}
void ComDayCqDamInddProcessINDDMediaExtractProcessProperties::setProcessLabel(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Process_label = value;
}
std::shared_ptr<ConfigNodePropertyString> ComDayCqDamInddProcessINDDMediaExtractProcessProperties::getCqDamInddPagesRegex() const
{
    return m_Cq_dam_indd_pages_regex;
}
void ComDayCqDamInddProcessINDDMediaExtractProcessProperties::setCqDamInddPagesRegex(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Cq_dam_indd_pages_regex = value;
}
std::shared_ptr<ConfigNodePropertyBoolean> ComDayCqDamInddProcessINDDMediaExtractProcessProperties::getIdsJobDecoupled() const
{
    return m_Ids_job_decoupled;
}
void ComDayCqDamInddProcessINDDMediaExtractProcessProperties::setIdsJobDecoupled(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Ids_job_decoupled = value;
}
std::shared_ptr<ConfigNodePropertyString> ComDayCqDamInddProcessINDDMediaExtractProcessProperties::getIdsJobWorkflowModel() const
{
    return m_Ids_job_workflow_model;
}
void ComDayCqDamInddProcessINDDMediaExtractProcessProperties::setIdsJobWorkflowModel(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Ids_job_workflow_model = value;
}

}
}
}
}

