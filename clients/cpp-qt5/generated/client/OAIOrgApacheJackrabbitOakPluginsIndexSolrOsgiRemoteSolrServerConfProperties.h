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
 * OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties.h
 *
 * 
 */

#ifndef OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties_H_
#define OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyInteger.h"
#include "OAIOAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties: public OAIObject {
public:
    OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties();
    OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties(QString json);
    ~OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyString* getSolrHttpUrl();
    void setSolrHttpUrl(OAIConfigNodePropertyString* solr_http_url);

    OAIConfigNodePropertyString* getSolrZkHost();
    void setSolrZkHost(OAIConfigNodePropertyString* solr_zk_host);

    OAIConfigNodePropertyString* getSolrCollection();
    void setSolrCollection(OAIConfigNodePropertyString* solr_collection);

    OAIConfigNodePropertyInteger* getSolrSocketTimeout();
    void setSolrSocketTimeout(OAIConfigNodePropertyInteger* solr_socket_timeout);

    OAIConfigNodePropertyInteger* getSolrConnectionTimeout();
    void setSolrConnectionTimeout(OAIConfigNodePropertyInteger* solr_connection_timeout);

    OAIConfigNodePropertyInteger* getSolrShardsNo();
    void setSolrShardsNo(OAIConfigNodePropertyInteger* solr_shards_no);

    OAIConfigNodePropertyInteger* getSolrReplicationFactor();
    void setSolrReplicationFactor(OAIConfigNodePropertyInteger* solr_replication_factor);

    OAIConfigNodePropertyString* getSolrConfDir();
    void setSolrConfDir(OAIConfigNodePropertyString* solr_conf_dir);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyString* solr_http_url;
    bool m_solr_http_url_isSet;

    OAIConfigNodePropertyString* solr_zk_host;
    bool m_solr_zk_host_isSet;

    OAIConfigNodePropertyString* solr_collection;
    bool m_solr_collection_isSet;

    OAIConfigNodePropertyInteger* solr_socket_timeout;
    bool m_solr_socket_timeout_isSet;

    OAIConfigNodePropertyInteger* solr_connection_timeout;
    bool m_solr_connection_timeout_isSet;

    OAIConfigNodePropertyInteger* solr_shards_no;
    bool m_solr_shards_no_isSet;

    OAIConfigNodePropertyInteger* solr_replication_factor;
    bool m_solr_replication_factor_isSet;

    OAIConfigNodePropertyString* solr_conf_dir;
    bool m_solr_conf_dir_isSet;

};

}

#endif /* OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties_H_ */
