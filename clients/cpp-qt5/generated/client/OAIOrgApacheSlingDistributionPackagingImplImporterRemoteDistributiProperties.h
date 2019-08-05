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
 * OAIOrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties.h
 *
 * 
 */

#ifndef OAIOrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties_H_
#define OAIOrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyArray.h"
#include "OAIOAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties: public OAIObject {
public:
    OAIOrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties();
    OAIOrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties(QString json);
    ~OAIOrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIOrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyString* getName();
    void setName(OAIConfigNodePropertyString* name);

    OAIConfigNodePropertyArray* getEndpoints();
    void setEndpoints(OAIConfigNodePropertyArray* endpoints);

    OAIConfigNodePropertyString* getTransportSecretProviderTarget();
    void setTransportSecretProviderTarget(OAIConfigNodePropertyString* transport_secret_provider_target);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyString* name;
    bool m_name_isSet;

    OAIConfigNodePropertyArray* endpoints;
    bool m_endpoints_isSet;

    OAIConfigNodePropertyString* transport_secret_provider_target;
    bool m_transport_secret_provider_target_isSet;

};

}

#endif /* OAIOrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties_H_ */