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
 * OAIComDayCqWcmCoreImplVariantsPageVariantsProviderImplProperties.h
 *
 * 
 */

#ifndef OAIComDayCqWcmCoreImplVariantsPageVariantsProviderImplProperties_H
#define OAIComDayCqWcmCoreImplVariantsPageVariantsProviderImplProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqWcmCoreImplVariantsPageVariantsProviderImplProperties: public OAIObject {
public:
    OAIComDayCqWcmCoreImplVariantsPageVariantsProviderImplProperties();
    OAIComDayCqWcmCoreImplVariantsPageVariantsProviderImplProperties(QString json);
    ~OAIComDayCqWcmCoreImplVariantsPageVariantsProviderImplProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyString getDefaultExternalizerDomain() const;
    void setDefaultExternalizerDomain(const OAIConfigNodePropertyString &default_externalizer_domain);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyString default_externalizer_domain;
    bool m_default_externalizer_domain_isSet;

};

}

#endif // OAIComDayCqWcmCoreImplVariantsPageVariantsProviderImplProperties_H
