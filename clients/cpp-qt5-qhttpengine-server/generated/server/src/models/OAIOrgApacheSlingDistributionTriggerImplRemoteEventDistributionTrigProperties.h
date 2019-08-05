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
 * OAIOrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties.h
 *
 * 
 */

#ifndef OAIOrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties_H
#define OAIOrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties: public OAIObject {
public:
    OAIOrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties();
    OAIOrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties(QString json);
    ~OAIOrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyString getName() const;
    void setName(const OAIConfigNodePropertyString &name);

    OAIConfigNodePropertyString getEndpoint() const;
    void setEndpoint(const OAIConfigNodePropertyString &endpoint);

    OAIConfigNodePropertyString getTransportSecretProviderTarget() const;
    void setTransportSecretProviderTarget(const OAIConfigNodePropertyString &transport_secret_provider_target);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyString name;
    bool m_name_isSet;

    OAIConfigNodePropertyString endpoint;
    bool m_endpoint_isSet;

    OAIConfigNodePropertyString transport_secret_provider_target;
    bool m_transport_secret_provider_target_isSet;

};

}

#endif // OAIOrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties_H