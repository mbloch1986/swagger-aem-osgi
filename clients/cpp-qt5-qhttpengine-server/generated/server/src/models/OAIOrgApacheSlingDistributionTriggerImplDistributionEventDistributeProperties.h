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
 * OAIOrgApacheSlingDistributionTriggerImplDistributionEventDistributeProperties.h
 *
 * 
 */

#ifndef OAIOrgApacheSlingDistributionTriggerImplDistributionEventDistributeProperties_H
#define OAIOrgApacheSlingDistributionTriggerImplDistributionEventDistributeProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrgApacheSlingDistributionTriggerImplDistributionEventDistributeProperties: public OAIObject {
public:
    OAIOrgApacheSlingDistributionTriggerImplDistributionEventDistributeProperties();
    OAIOrgApacheSlingDistributionTriggerImplDistributionEventDistributeProperties(QString json);
    ~OAIOrgApacheSlingDistributionTriggerImplDistributionEventDistributeProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyString getName() const;
    void setName(const OAIConfigNodePropertyString &name);

    OAIConfigNodePropertyString getPath() const;
    void setPath(const OAIConfigNodePropertyString &path);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyString name;
    bool m_name_isSet;

    OAIConfigNodePropertyString path;
    bool m_path_isSet;

};

}

#endif // OAIOrgApacheSlingDistributionTriggerImplDistributionEventDistributeProperties_H
