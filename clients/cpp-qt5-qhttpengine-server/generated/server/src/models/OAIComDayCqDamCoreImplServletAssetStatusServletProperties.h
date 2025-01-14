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
 * OAIComDayCqDamCoreImplServletAssetStatusServletProperties.h
 *
 * 
 */

#ifndef OAIComDayCqDamCoreImplServletAssetStatusServletProperties_H
#define OAIComDayCqDamCoreImplServletAssetStatusServletProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyInteger.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqDamCoreImplServletAssetStatusServletProperties: public OAIObject {
public:
    OAIComDayCqDamCoreImplServletAssetStatusServletProperties();
    OAIComDayCqDamCoreImplServletAssetStatusServletProperties(QString json);
    ~OAIComDayCqDamCoreImplServletAssetStatusServletProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyInteger getCqDamBatchStatusMaxassets() const;
    void setCqDamBatchStatusMaxassets(const OAIConfigNodePropertyInteger &cq_dam_batch_status_maxassets);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyInteger cq_dam_batch_status_maxassets;
    bool m_cq_dam_batch_status_maxassets_isSet;

};

}

#endif // OAIComDayCqDamCoreImplServletAssetStatusServletProperties_H
