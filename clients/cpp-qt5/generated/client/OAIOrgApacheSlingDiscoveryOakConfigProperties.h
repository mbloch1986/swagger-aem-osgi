/**
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIOrgApacheSlingDiscoveryOakConfigProperties.h
 *
 * 
 */

#ifndef OAIOrgApacheSlingDiscoveryOakConfigProperties_H_
#define OAIOrgApacheSlingDiscoveryOakConfigProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyArray.h"
#include "OAIOAIConfigNodePropertyBoolean.h"
#include "OAIOAIConfigNodePropertyInteger.h"
#include "OAIOAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrgApacheSlingDiscoveryOakConfigProperties: public OAIObject {
public:
    OAIOrgApacheSlingDiscoveryOakConfigProperties();
    OAIOrgApacheSlingDiscoveryOakConfigProperties(QString json);
    ~OAIOrgApacheSlingDiscoveryOakConfigProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIOrgApacheSlingDiscoveryOakConfigProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyInteger* getConnectorPingTimeout();
    void setConnectorPingTimeout(OAIConfigNodePropertyInteger* connector_ping_timeout);

    OAIConfigNodePropertyInteger* getConnectorPingInterval();
    void setConnectorPingInterval(OAIConfigNodePropertyInteger* connector_ping_interval);

    OAIConfigNodePropertyInteger* getDiscoveryLiteCheckInterval();
    void setDiscoveryLiteCheckInterval(OAIConfigNodePropertyInteger* discovery_lite_check_interval);

    OAIConfigNodePropertyInteger* getClusterSyncServiceTimeout();
    void setClusterSyncServiceTimeout(OAIConfigNodePropertyInteger* cluster_sync_service_timeout);

    OAIConfigNodePropertyInteger* getClusterSyncServiceInterval();
    void setClusterSyncServiceInterval(OAIConfigNodePropertyInteger* cluster_sync_service_interval);

    OAIConfigNodePropertyBoolean* getEnableSyncToken();
    void setEnableSyncToken(OAIConfigNodePropertyBoolean* enable_sync_token);

    OAIConfigNodePropertyInteger* getMinEventDelay();
    void setMinEventDelay(OAIConfigNodePropertyInteger* min_event_delay);

    OAIConfigNodePropertyInteger* getSocketConnectTimeout();
    void setSocketConnectTimeout(OAIConfigNodePropertyInteger* socket_connect_timeout);

    OAIConfigNodePropertyInteger* getSoTimeout();
    void setSoTimeout(OAIConfigNodePropertyInteger* so_timeout);

    OAIConfigNodePropertyArray* getTopologyConnectorUrls();
    void setTopologyConnectorUrls(OAIConfigNodePropertyArray* topology_connector_urls);

    OAIConfigNodePropertyArray* getTopologyConnectorWhitelist();
    void setTopologyConnectorWhitelist(OAIConfigNodePropertyArray* topology_connector_whitelist);

    OAIConfigNodePropertyBoolean* getAutoStopLocalLoopEnabled();
    void setAutoStopLocalLoopEnabled(OAIConfigNodePropertyBoolean* auto_stop_local_loop_enabled);

    OAIConfigNodePropertyBoolean* getGzipConnectorRequestsEnabled();
    void setGzipConnectorRequestsEnabled(OAIConfigNodePropertyBoolean* gzip_connector_requests_enabled);

    OAIConfigNodePropertyBoolean* getHmacEnabled();
    void setHmacEnabled(OAIConfigNodePropertyBoolean* hmac_enabled);

    OAIConfigNodePropertyBoolean* getEnableEncryption();
    void setEnableEncryption(OAIConfigNodePropertyBoolean* enable_encryption);

    OAIConfigNodePropertyString* getSharedKey();
    void setSharedKey(OAIConfigNodePropertyString* shared_key);

    OAIConfigNodePropertyInteger* getHmacSharedKeyTtl();
    void setHmacSharedKeyTtl(OAIConfigNodePropertyInteger* hmac_shared_key_ttl);

    OAIConfigNodePropertyString* getBackoffStandbyFactor();
    void setBackoffStandbyFactor(OAIConfigNodePropertyString* backoff_standby_factor);

    OAIConfigNodePropertyString* getBackoffStableFactor();
    void setBackoffStableFactor(OAIConfigNodePropertyString* backoff_stable_factor);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyInteger* connector_ping_timeout;
    bool m_connector_ping_timeout_isSet;

    OAIConfigNodePropertyInteger* connector_ping_interval;
    bool m_connector_ping_interval_isSet;

    OAIConfigNodePropertyInteger* discovery_lite_check_interval;
    bool m_discovery_lite_check_interval_isSet;

    OAIConfigNodePropertyInteger* cluster_sync_service_timeout;
    bool m_cluster_sync_service_timeout_isSet;

    OAIConfigNodePropertyInteger* cluster_sync_service_interval;
    bool m_cluster_sync_service_interval_isSet;

    OAIConfigNodePropertyBoolean* enable_sync_token;
    bool m_enable_sync_token_isSet;

    OAIConfigNodePropertyInteger* min_event_delay;
    bool m_min_event_delay_isSet;

    OAIConfigNodePropertyInteger* socket_connect_timeout;
    bool m_socket_connect_timeout_isSet;

    OAIConfigNodePropertyInteger* so_timeout;
    bool m_so_timeout_isSet;

    OAIConfigNodePropertyArray* topology_connector_urls;
    bool m_topology_connector_urls_isSet;

    OAIConfigNodePropertyArray* topology_connector_whitelist;
    bool m_topology_connector_whitelist_isSet;

    OAIConfigNodePropertyBoolean* auto_stop_local_loop_enabled;
    bool m_auto_stop_local_loop_enabled_isSet;

    OAIConfigNodePropertyBoolean* gzip_connector_requests_enabled;
    bool m_gzip_connector_requests_enabled_isSet;

    OAIConfigNodePropertyBoolean* hmac_enabled;
    bool m_hmac_enabled_isSet;

    OAIConfigNodePropertyBoolean* enable_encryption;
    bool m_enable_encryption_isSet;

    OAIConfigNodePropertyString* shared_key;
    bool m_shared_key_isSet;

    OAIConfigNodePropertyInteger* hmac_shared_key_ttl;
    bool m_hmac_shared_key_ttl_isSet;

    OAIConfigNodePropertyString* backoff_standby_factor;
    bool m_backoff_standby_factor_isSet;

    OAIConfigNodePropertyString* backoff_stable_factor;
    bool m_backoff_stable_factor_isSet;

};

}

#endif /* OAIOrgApacheSlingDiscoveryOakConfigProperties_H_ */
