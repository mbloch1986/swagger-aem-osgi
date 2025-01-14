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
 * OAIComDayCqDamCoreImplServletBatchMetadataServletProperties.h
 *
 * 
 */

#ifndef OAIComDayCqDamCoreImplServletBatchMetadataServletProperties_H
#define OAIComDayCqDamCoreImplServletBatchMetadataServletProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyArray.h"
#include "OAIConfigNodePropertyInteger.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqDamCoreImplServletBatchMetadataServletProperties: public OAIObject {
public:
    OAIComDayCqDamCoreImplServletBatchMetadataServletProperties();
    OAIComDayCqDamCoreImplServletBatchMetadataServletProperties(QString json);
    ~OAIComDayCqDamCoreImplServletBatchMetadataServletProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray getCqDamBatchMetadataAssetDefault() const;
    void setCqDamBatchMetadataAssetDefault(const OAIConfigNodePropertyArray &cq_dam_batch_metadata_asset_default);

    OAIConfigNodePropertyArray getCqDamBatchMetadataCollectionDefault() const;
    void setCqDamBatchMetadataCollectionDefault(const OAIConfigNodePropertyArray &cq_dam_batch_metadata_collection_default);

    OAIConfigNodePropertyInteger getCqDamBatchMetadataMaxresources() const;
    void setCqDamBatchMetadataMaxresources(const OAIConfigNodePropertyInteger &cq_dam_batch_metadata_maxresources);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyArray cq_dam_batch_metadata_asset_default;
    bool m_cq_dam_batch_metadata_asset_default_isSet;

    OAIConfigNodePropertyArray cq_dam_batch_metadata_collection_default;
    bool m_cq_dam_batch_metadata_collection_default_isSet;

    OAIConfigNodePropertyInteger cq_dam_batch_metadata_maxresources;
    bool m_cq_dam_batch_metadata_maxresources_isSet;

};

}

#endif // OAIComDayCqDamCoreImplServletBatchMetadataServletProperties_H
