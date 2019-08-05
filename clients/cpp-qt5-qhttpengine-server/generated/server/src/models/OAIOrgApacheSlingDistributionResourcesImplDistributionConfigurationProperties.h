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
 * OAIOrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties.h
 *
 * 
 */

#ifndef OAIOrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties_H
#define OAIOrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties: public OAIObject {
public:
    OAIOrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties();
    OAIOrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties(QString json);
    ~OAIOrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyString getProviderRoots() const;
    void setProviderRoots(const OAIConfigNodePropertyString &provider_roots);

    OAIConfigNodePropertyString getKind() const;
    void setKind(const OAIConfigNodePropertyString &kind);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyString provider_roots;
    bool m_provider_roots_isSet;

    OAIConfigNodePropertyString kind;
    bool m_kind_isSet;

};

}

#endif // OAIOrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties_H