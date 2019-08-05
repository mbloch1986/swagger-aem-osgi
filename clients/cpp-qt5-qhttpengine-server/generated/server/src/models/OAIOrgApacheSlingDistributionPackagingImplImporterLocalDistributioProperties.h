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
 * OAIOrgApacheSlingDistributionPackagingImplImporterLocalDistributioProperties.h
 *
 * 
 */

#ifndef OAIOrgApacheSlingDistributionPackagingImplImporterLocalDistributioProperties_H
#define OAIOrgApacheSlingDistributionPackagingImplImporterLocalDistributioProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrgApacheSlingDistributionPackagingImplImporterLocalDistributioProperties: public OAIObject {
public:
    OAIOrgApacheSlingDistributionPackagingImplImporterLocalDistributioProperties();
    OAIOrgApacheSlingDistributionPackagingImplImporterLocalDistributioProperties(QString json);
    ~OAIOrgApacheSlingDistributionPackagingImplImporterLocalDistributioProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyString getName() const;
    void setName(const OAIConfigNodePropertyString &name);

    OAIConfigNodePropertyString getPackageBuilderTarget() const;
    void setPackageBuilderTarget(const OAIConfigNodePropertyString &package_builder_target);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyString name;
    bool m_name_isSet;

    OAIConfigNodePropertyString package_builder_target;
    bool m_package_builder_target_isSet;

};

}

#endif // OAIOrgApacheSlingDistributionPackagingImplImporterLocalDistributioProperties_H