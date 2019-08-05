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
 * OAIOrgApacheSlingModelsImplModelAdapterFactoryProperties.h
 *
 * 
 */

#ifndef OAIOrgApacheSlingModelsImplModelAdapterFactoryProperties_H
#define OAIOrgApacheSlingModelsImplModelAdapterFactoryProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyInteger.h"
#include "OAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrgApacheSlingModelsImplModelAdapterFactoryProperties: public OAIObject {
public:
    OAIOrgApacheSlingModelsImplModelAdapterFactoryProperties();
    OAIOrgApacheSlingModelsImplModelAdapterFactoryProperties(QString json);
    ~OAIOrgApacheSlingModelsImplModelAdapterFactoryProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyString getOsgiHttpWhiteboardListener() const;
    void setOsgiHttpWhiteboardListener(const OAIConfigNodePropertyString &osgi_http_whiteboard_listener);

    OAIConfigNodePropertyString getOsgiHttpWhiteboardContextSelect() const;
    void setOsgiHttpWhiteboardContextSelect(const OAIConfigNodePropertyString &osgi_http_whiteboard_context_select);

    OAIConfigNodePropertyInteger getMaxRecursionDepth() const;
    void setMaxRecursionDepth(const OAIConfigNodePropertyInteger &max_recursion_depth);

    OAIConfigNodePropertyInteger getCleanupJobPeriod() const;
    void setCleanupJobPeriod(const OAIConfigNodePropertyInteger &cleanup_job_period);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyString osgi_http_whiteboard_listener;
    bool m_osgi_http_whiteboard_listener_isSet;

    OAIConfigNodePropertyString osgi_http_whiteboard_context_select;
    bool m_osgi_http_whiteboard_context_select_isSet;

    OAIConfigNodePropertyInteger max_recursion_depth;
    bool m_max_recursion_depth_isSet;

    OAIConfigNodePropertyInteger cleanup_job_period;
    bool m_cleanup_job_period_isSet;

};

}

#endif // OAIOrgApacheSlingModelsImplModelAdapterFactoryProperties_H