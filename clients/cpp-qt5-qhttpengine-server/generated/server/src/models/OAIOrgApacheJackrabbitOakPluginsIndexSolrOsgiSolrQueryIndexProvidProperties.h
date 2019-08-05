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
 * OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties.h
 *
 * 
 */

#ifndef OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties_H
#define OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyBoolean.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties: public OAIObject {
public:
    OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties();
    OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties(QString json);
    ~OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyBoolean getQueryAggregation() const;
    void setQueryAggregation(const OAIConfigNodePropertyBoolean &query_aggregation);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyBoolean query_aggregation;
    bool m_query_aggregation_isSet;

};

}

#endif // OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties_H