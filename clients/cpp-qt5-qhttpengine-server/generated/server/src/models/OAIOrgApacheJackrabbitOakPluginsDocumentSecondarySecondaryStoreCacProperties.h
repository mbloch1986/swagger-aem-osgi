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
 * OAIOrgApacheJackrabbitOakPluginsDocumentSecondarySecondaryStoreCacProperties.h
 *
 * 
 */

#ifndef OAIOrgApacheJackrabbitOakPluginsDocumentSecondarySecondaryStoreCacProperties_H
#define OAIOrgApacheJackrabbitOakPluginsDocumentSecondarySecondaryStoreCacProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyArray.h"
#include "OAIConfigNodePropertyBoolean.h"
#include "OAIConfigNodePropertyInteger.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrgApacheJackrabbitOakPluginsDocumentSecondarySecondaryStoreCacProperties: public OAIObject {
public:
    OAIOrgApacheJackrabbitOakPluginsDocumentSecondarySecondaryStoreCacProperties();
    OAIOrgApacheJackrabbitOakPluginsDocumentSecondarySecondaryStoreCacProperties(QString json);
    ~OAIOrgApacheJackrabbitOakPluginsDocumentSecondarySecondaryStoreCacProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray getIncludedPaths() const;
    void setIncludedPaths(const OAIConfigNodePropertyArray &included_paths);

    OAIConfigNodePropertyBoolean getEnableAsyncObserver() const;
    void setEnableAsyncObserver(const OAIConfigNodePropertyBoolean &enable_async_observer);

    OAIConfigNodePropertyInteger getObserverQueueSize() const;
    void setObserverQueueSize(const OAIConfigNodePropertyInteger &observer_queue_size);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyArray included_paths;
    bool m_included_paths_isSet;

    OAIConfigNodePropertyBoolean enable_async_observer;
    bool m_enable_async_observer_isSet;

    OAIConfigNodePropertyInteger observer_queue_size;
    bool m_observer_queue_size_isSet;

};

}

#endif // OAIOrgApacheJackrabbitOakPluginsDocumentSecondarySecondaryStoreCacProperties_H