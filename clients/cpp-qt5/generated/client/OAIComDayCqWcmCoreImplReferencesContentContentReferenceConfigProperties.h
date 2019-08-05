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
 * OAIComDayCqWcmCoreImplReferencesContentContentReferenceConfigProperties.h
 *
 * 
 */

#ifndef OAIComDayCqWcmCoreImplReferencesContentContentReferenceConfigProperties_H_
#define OAIComDayCqWcmCoreImplReferencesContentContentReferenceConfigProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyArray.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqWcmCoreImplReferencesContentContentReferenceConfigProperties: public OAIObject {
public:
    OAIComDayCqWcmCoreImplReferencesContentContentReferenceConfigProperties();
    OAIComDayCqWcmCoreImplReferencesContentContentReferenceConfigProperties(QString json);
    ~OAIComDayCqWcmCoreImplReferencesContentContentReferenceConfigProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComDayCqWcmCoreImplReferencesContentContentReferenceConfigProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray* getContentReferenceConfigResourceTypes();
    void setContentReferenceConfigResourceTypes(OAIConfigNodePropertyArray* content_reference_config_resource_types);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyArray* content_reference_config_resource_types;
    bool m_content_reference_config_resource_types_isSet;

};

}

#endif /* OAIComDayCqWcmCoreImplReferencesContentContentReferenceConfigProperties_H_ */