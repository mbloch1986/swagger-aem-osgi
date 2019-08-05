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
 * OAIComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties.h
 *
 * 
 */

#ifndef OAIComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties_H
#define OAIComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyDropDown.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties: public OAIObject {
public:
    OAIComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties();
    OAIComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties(QString json);
    ~OAIComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyDropDown getTempStorageConfig() const;
    void setTempStorageConfig(const OAIConfigNodePropertyDropDown &temp_storage_config);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyDropDown temp_storage_config;
    bool m_temp_storage_config_isSet;

};

}

#endif // OAIComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties_H