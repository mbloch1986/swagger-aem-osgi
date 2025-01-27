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



#include "ComAdobeFdFpConfigFormsPortalDraftsandSubmissionConfigServiceProperties.h"

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

ComAdobeFdFpConfigFormsPortalDraftsandSubmissionConfigServiceProperties::ComAdobeFdFpConfigFormsPortalDraftsandSubmissionConfigServiceProperties()
{
    
}

ComAdobeFdFpConfigFormsPortalDraftsandSubmissionConfigServiceProperties::~ComAdobeFdFpConfigFormsPortalDraftsandSubmissionConfigServiceProperties()
{
}

std::string ComAdobeFdFpConfigFormsPortalDraftsandSubmissionConfigServiceProperties::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	write_json(ss, pt, false);
	return ss.str();
}

void ComAdobeFdFpConfigFormsPortalDraftsandSubmissionConfigServiceProperties::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
}

std::shared_ptr<ConfigNodePropertyArray> ComAdobeFdFpConfigFormsPortalDraftsandSubmissionConfigServiceProperties::getPortalOutboxes() const
{
    return m_Portal_outboxes;
}
void ComAdobeFdFpConfigFormsPortalDraftsandSubmissionConfigServiceProperties::setPortalOutboxes(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Portal_outboxes = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeFdFpConfigFormsPortalDraftsandSubmissionConfigServiceProperties::getDraftDataService() const
{
    return m_Draft_data_service;
}
void ComAdobeFdFpConfigFormsPortalDraftsandSubmissionConfigServiceProperties::setDraftDataService(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Draft_data_service = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeFdFpConfigFormsPortalDraftsandSubmissionConfigServiceProperties::getDraftMetadataService() const
{
    return m_Draft_metadata_service;
}
void ComAdobeFdFpConfigFormsPortalDraftsandSubmissionConfigServiceProperties::setDraftMetadataService(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Draft_metadata_service = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeFdFpConfigFormsPortalDraftsandSubmissionConfigServiceProperties::getSubmitDataService() const
{
    return m_Submit_data_service;
}
void ComAdobeFdFpConfigFormsPortalDraftsandSubmissionConfigServiceProperties::setSubmitDataService(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Submit_data_service = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeFdFpConfigFormsPortalDraftsandSubmissionConfigServiceProperties::getSubmitMetadataService() const
{
    return m_Submit_metadata_service;
}
void ComAdobeFdFpConfigFormsPortalDraftsandSubmissionConfigServiceProperties::setSubmitMetadataService(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Submit_metadata_service = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeFdFpConfigFormsPortalDraftsandSubmissionConfigServiceProperties::getPendingSignDataService() const
{
    return m_PendingSign_data_service;
}
void ComAdobeFdFpConfigFormsPortalDraftsandSubmissionConfigServiceProperties::setPendingSignDataService(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_PendingSign_data_service = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeFdFpConfigFormsPortalDraftsandSubmissionConfigServiceProperties::getPendingSignMetadataService() const
{
    return m_PendingSign_metadata_service;
}
void ComAdobeFdFpConfigFormsPortalDraftsandSubmissionConfigServiceProperties::setPendingSignMetadataService(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_PendingSign_metadata_service = value;
}

}
}
}
}

