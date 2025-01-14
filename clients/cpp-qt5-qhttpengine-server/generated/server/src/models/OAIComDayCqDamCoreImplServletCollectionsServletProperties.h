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
 * OAIComDayCqDamCoreImplServletCollectionsServletProperties.h
 *
 * 
 */

#ifndef OAIComDayCqDamCoreImplServletCollectionsServletProperties_H
#define OAIComDayCqDamCoreImplServletCollectionsServletProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyArray.h"
#include "OAIConfigNodePropertyInteger.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqDamCoreImplServletCollectionsServletProperties: public OAIObject {
public:
    OAIComDayCqDamCoreImplServletCollectionsServletProperties();
    OAIComDayCqDamCoreImplServletCollectionsServletProperties(QString json);
    ~OAIComDayCqDamCoreImplServletCollectionsServletProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray getCqDamBatchCollectionsProperties() const;
    void setCqDamBatchCollectionsProperties(const OAIConfigNodePropertyArray &cq_dam_batch_collections_properties);

    OAIConfigNodePropertyInteger getCqDamBatchCollectionsLimit() const;
    void setCqDamBatchCollectionsLimit(const OAIConfigNodePropertyInteger &cq_dam_batch_collections_limit);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyArray cq_dam_batch_collections_properties;
    bool m_cq_dam_batch_collections_properties_isSet;

    OAIConfigNodePropertyInteger cq_dam_batch_collections_limit;
    bool m_cq_dam_batch_collections_limit_isSet;

};

}

#endif // OAIComDayCqDamCoreImplServletCollectionsServletProperties_H
