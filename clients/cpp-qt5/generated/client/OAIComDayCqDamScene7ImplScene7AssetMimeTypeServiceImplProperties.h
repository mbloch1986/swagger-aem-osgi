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
 * OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplProperties.h
 *
 * 
 */

#ifndef OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplProperties_H_
#define OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyArray.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplProperties: public OAIObject {
public:
    OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplProperties();
    OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplProperties(QString json);
    ~OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray* getCqDamScene7AssetmimetypeserviceMapping();
    void setCqDamScene7AssetmimetypeserviceMapping(OAIConfigNodePropertyArray* cq_dam_scene7_assetmimetypeservice_mapping);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyArray* cq_dam_scene7_assetmimetypeservice_mapping;
    bool m_cq_dam_scene7_assetmimetypeservice_mapping_isSet;

};

}

#endif /* OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplProperties_H_ */
