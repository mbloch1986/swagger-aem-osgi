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
 * OAIComDayCqDamCoreImplGfxCommonsGfxRendererProperties.h
 *
 * 
 */

#ifndef OAIComDayCqDamCoreImplGfxCommonsGfxRendererProperties_H
#define OAIComDayCqDamCoreImplGfxCommonsGfxRendererProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyBoolean.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqDamCoreImplGfxCommonsGfxRendererProperties: public OAIObject {
public:
    OAIComDayCqDamCoreImplGfxCommonsGfxRendererProperties();
    OAIComDayCqDamCoreImplGfxCommonsGfxRendererProperties(QString json);
    ~OAIComDayCqDamCoreImplGfxCommonsGfxRendererProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyBoolean getSkipBufferedcache() const;
    void setSkipBufferedcache(const OAIConfigNodePropertyBoolean &skip_bufferedcache);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyBoolean skip_bufferedcache;
    bool m_skip_bufferedcache_isSet;

};

}

#endif // OAIComDayCqDamCoreImplGfxCommonsGfxRendererProperties_H
