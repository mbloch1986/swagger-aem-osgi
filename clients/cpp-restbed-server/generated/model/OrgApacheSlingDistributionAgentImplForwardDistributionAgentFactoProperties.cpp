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



#include "OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties.h"

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

OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties()
{
    
}

OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::~OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties()
{
}

std::string OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	write_json(ss, pt, false);
	return ss.str();
}

void OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
}

std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getName() const
{
    return m_Name;
}
void OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setName(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Name = value;
}
std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getTitle() const
{
    return m_Title;
}
void OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setTitle(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Title = value;
}
std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getDetails() const
{
    return m_Details;
}
void OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setDetails(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Details = value;
}
std::shared_ptr<ConfigNodePropertyBoolean> OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getEnabled() const
{
    return m_Enabled;
}
void OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setEnabled(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Enabled = value;
}
std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getServiceName() const
{
    return m_ServiceName;
}
void OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setServiceName(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_ServiceName = value;
}
std::shared_ptr<ConfigNodePropertyDropDown> OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getLogLevel() const
{
    return m_Log_level;
}
void OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setLogLevel(std::shared_ptr<ConfigNodePropertyDropDown> value)
{
    m_Log_level = value;
}
std::shared_ptr<ConfigNodePropertyArray> OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getAllowedRoots() const
{
    return m_Allowed_roots;
}
void OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setAllowedRoots(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Allowed_roots = value;
}
std::shared_ptr<ConfigNodePropertyBoolean> OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getQueueProcessingEnabled() const
{
    return m_Queue_processing_enabled;
}
void OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setQueueProcessingEnabled(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Queue_processing_enabled = value;
}
std::shared_ptr<ConfigNodePropertyArray> OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getPackageImporterEndpoints() const
{
    return m_PackageImporter_endpoints;
}
void OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setPackageImporterEndpoints(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_PackageImporter_endpoints = value;
}
std::shared_ptr<ConfigNodePropertyArray> OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getPassiveQueues() const
{
    return m_PassiveQueues;
}
void OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setPassiveQueues(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_PassiveQueues = value;
}
std::shared_ptr<ConfigNodePropertyArray> OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getPriorityQueues() const
{
    return m_PriorityQueues;
}
void OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setPriorityQueues(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_PriorityQueues = value;
}
std::shared_ptr<ConfigNodePropertyDropDown> OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getRetryStrategy() const
{
    return m_Retry_strategy;
}
void OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setRetryStrategy(std::shared_ptr<ConfigNodePropertyDropDown> value)
{
    m_Retry_strategy = value;
}
std::shared_ptr<ConfigNodePropertyInteger> OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getRetryAttempts() const
{
    return m_Retry_attempts;
}
void OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setRetryAttempts(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Retry_attempts = value;
}
std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getRequestAuthorizationStrategyTarget() const
{
    return m_RequestAuthorizationStrategy_target;
}
void OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setRequestAuthorizationStrategyTarget(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_RequestAuthorizationStrategy_target = value;
}
std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getTransportSecretProviderTarget() const
{
    return m_TransportSecretProvider_target;
}
void OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setTransportSecretProviderTarget(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_TransportSecretProvider_target = value;
}
std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getPackageBuilderTarget() const
{
    return m_PackageBuilder_target;
}
void OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setPackageBuilderTarget(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_PackageBuilder_target = value;
}
std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getTriggersTarget() const
{
    return m_Triggers_target;
}
void OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setTriggersTarget(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Triggers_target = value;
}
std::shared_ptr<ConfigNodePropertyDropDown> OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getQueueProvider() const
{
    return m_Queue_provider;
}
void OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setQueueProvider(std::shared_ptr<ConfigNodePropertyDropDown> value)
{
    m_Queue_provider = value;
}
std::shared_ptr<ConfigNodePropertyBoolean> OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getAsyncDelivery() const
{
    return m_Async_delivery;
}
void OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setAsyncDelivery(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Async_delivery = value;
}
std::shared_ptr<ConfigNodePropertyInteger> OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getHttpConnTimeout() const
{
    return m_Http_conn_timeout;
}
void OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setHttpConnTimeout(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Http_conn_timeout = value;
}

}
}
}
}
