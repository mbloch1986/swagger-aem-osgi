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
 * OAIAnalyticsComponentQueryCacheServiceProperties.h
 *
 * 
 */

#ifndef OAIAnalyticsComponentQueryCacheServiceProperties_H_
#define OAIAnalyticsComponentQueryCacheServiceProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyInteger.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIAnalyticsComponentQueryCacheServiceProperties: public OAIObject {
public:
    OAIAnalyticsComponentQueryCacheServiceProperties();
    OAIAnalyticsComponentQueryCacheServiceProperties(QString json);
    ~OAIAnalyticsComponentQueryCacheServiceProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIAnalyticsComponentQueryCacheServiceProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyInteger* getCqAnalyticsComponentQueryCacheSize();
    void setCqAnalyticsComponentQueryCacheSize(OAIConfigNodePropertyInteger* cq_analytics_component_query_cache_size);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyInteger* cq_analytics_component_query_cache_size;
    bool m_cq_analytics_component_query_cache_size_isSet;

};

}

#endif /* OAIAnalyticsComponentQueryCacheServiceProperties_H_ */
