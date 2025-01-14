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



#include "ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.h"

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

ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties()
{
    
}

ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::~ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties()
{
}

std::string ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	write_json(ss, pt, false);
	return ss.str();
}

void ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
}

std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::getServiceRanking() const
{
    return m_Service_ranking;
}
void ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::setServiceRanking(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Service_ranking = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::getGlobalSize() const
{
    return m_Global_size;
}
void ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::setGlobalSize(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Global_size = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::getMaxDiskUsage() const
{
    return m_Max_disk_usage;
}
void ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::setMaxDiskUsage(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Max_disk_usage = value;
}
std::shared_ptr<ConfigNodePropertyBoolean> ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::getPersistenceEnabled() const
{
    return m_Persistence_enabled;
}
void ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::setPersistenceEnabled(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Persistence_enabled = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::getThreadPoolMaxSize() const
{
    return m_Thread_pool_max_size;
}
void ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::setThreadPoolMaxSize(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Thread_pool_max_size = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::getScheduledThreadPoolMaxSize() const
{
    return m_Scheduled_thread_pool_max_size;
}
void ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::setScheduledThreadPoolMaxSize(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Scheduled_thread_pool_max_size = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::getGracefulShutdownTimeout() const
{
    return m_Graceful_shutdown_timeout;
}
void ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::setGracefulShutdownTimeout(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Graceful_shutdown_timeout = value;
}
std::shared_ptr<ConfigNodePropertyArray> ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::getQueues() const
{
    return m_Queues;
}
void ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::setQueues(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Queues = value;
}
std::shared_ptr<ConfigNodePropertyArray> ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::getTopics() const
{
    return m_Topics;
}
void ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::setTopics(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Topics = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::getAddressesMaxDeliveryAttempts() const
{
    return m_Addresses_max_delivery_attempts;
}
void ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::setAddressesMaxDeliveryAttempts(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Addresses_max_delivery_attempts = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::getAddressesExpiryDelay() const
{
    return m_Addresses_expiry_delay;
}
void ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::setAddressesExpiryDelay(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Addresses_expiry_delay = value;
}
std::shared_ptr<ConfigNodePropertyDropDown> ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::getAddressesAddressFullMessagePolicy() const
{
    return m_Addresses_address_full_message_policy;
}
void ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::setAddressesAddressFullMessagePolicy(std::shared_ptr<ConfigNodePropertyDropDown> value)
{
    m_Addresses_address_full_message_policy = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::getAddressesMaxSizeBytes() const
{
    return m_Addresses_max_size_bytes;
}
void ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::setAddressesMaxSizeBytes(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Addresses_max_size_bytes = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::getAddressesPageSizeBytes() const
{
    return m_Addresses_page_size_bytes;
}
void ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::setAddressesPageSizeBytes(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Addresses_page_size_bytes = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::getAddressesPageCacheMaxSize() const
{
    return m_Addresses_page_cache_max_size;
}
void ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::setAddressesPageCacheMaxSize(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Addresses_page_cache_max_size = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::getClusterUser() const
{
    return m_Cluster_user;
}
void ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::setClusterUser(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Cluster_user = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::getClusterPassword() const
{
    return m_Cluster_password;
}
void ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::setClusterPassword(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Cluster_password = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::getClusterCallTimeout() const
{
    return m_Cluster_call_timeout;
}
void ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::setClusterCallTimeout(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Cluster_call_timeout = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::getClusterCallFailoverTimeout() const
{
    return m_Cluster_call_failover_timeout;
}
void ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::setClusterCallFailoverTimeout(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Cluster_call_failover_timeout = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::getClusterClientFailureCheckPeriod() const
{
    return m_Cluster_client_failure_check_period;
}
void ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::setClusterClientFailureCheckPeriod(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Cluster_client_failure_check_period = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::getClusterNotificationAttempts() const
{
    return m_Cluster_notification_attempts;
}
void ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::setClusterNotificationAttempts(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Cluster_notification_attempts = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::getClusterNotificationInterval() const
{
    return m_Cluster_notification_interval;
}
void ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::setClusterNotificationInterval(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Cluster_notification_interval = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::getIdCacheSize() const
{
    return m_Id_cache_size;
}
void ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::setIdCacheSize(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Id_cache_size = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::getClusterConfirmationWindowSize() const
{
    return m_Cluster_confirmation_window_size;
}
void ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::setClusterConfirmationWindowSize(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Cluster_confirmation_window_size = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::getClusterConnectionTtl() const
{
    return m_Cluster_connection_ttl;
}
void ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::setClusterConnectionTtl(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Cluster_connection_ttl = value;
}
std::shared_ptr<ConfigNodePropertyBoolean> ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::getClusterDuplicateDetection() const
{
    return m_Cluster_duplicate_detection;
}
void ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::setClusterDuplicateDetection(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Cluster_duplicate_detection = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::getClusterInitialConnectAttempts() const
{
    return m_Cluster_initial_connect_attempts;
}
void ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::setClusterInitialConnectAttempts(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Cluster_initial_connect_attempts = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::getClusterMaxRetryInterval() const
{
    return m_Cluster_max_retry_interval;
}
void ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::setClusterMaxRetryInterval(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Cluster_max_retry_interval = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::getClusterMinLargeMessageSize() const
{
    return m_Cluster_min_large_message_size;
}
void ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::setClusterMinLargeMessageSize(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Cluster_min_large_message_size = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::getClusterProducerWindowSize() const
{
    return m_Cluster_producer_window_size;
}
void ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::setClusterProducerWindowSize(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Cluster_producer_window_size = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::getClusterReconnectAttempts() const
{
    return m_Cluster_reconnect_attempts;
}
void ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::setClusterReconnectAttempts(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Cluster_reconnect_attempts = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::getClusterRetryInterval() const
{
    return m_Cluster_retry_interval;
}
void ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::setClusterRetryInterval(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Cluster_retry_interval = value;
}
std::shared_ptr<ConfigNodePropertyFloat> ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::getClusterRetryIntervalMultiplier() const
{
    return m_Cluster_retry_interval_multiplier;
}
void ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties::setClusterRetryIntervalMultiplier(std::shared_ptr<ConfigNodePropertyFloat> value)
{
    m_Cluster_retry_interval_multiplier = value;
}

}
}
}
}

