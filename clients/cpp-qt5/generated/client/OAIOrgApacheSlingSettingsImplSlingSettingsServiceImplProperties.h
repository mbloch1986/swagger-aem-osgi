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
 * OAIOrgApacheSlingSettingsImplSlingSettingsServiceImplProperties.h
 *
 * 
 */

#ifndef OAIOrgApacheSlingSettingsImplSlingSettingsServiceImplProperties_H_
#define OAIOrgApacheSlingSettingsImplSlingSettingsServiceImplProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrgApacheSlingSettingsImplSlingSettingsServiceImplProperties: public OAIObject {
public:
    OAIOrgApacheSlingSettingsImplSlingSettingsServiceImplProperties();
    OAIOrgApacheSlingSettingsImplSlingSettingsServiceImplProperties(QString json);
    ~OAIOrgApacheSlingSettingsImplSlingSettingsServiceImplProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIOrgApacheSlingSettingsImplSlingSettingsServiceImplProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyString* getSlingName();
    void setSlingName(OAIConfigNodePropertyString* sling_name);

    OAIConfigNodePropertyString* getSlingDescription();
    void setSlingDescription(OAIConfigNodePropertyString* sling_description);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyString* sling_name;
    bool m_sling_name_isSet;

    OAIConfigNodePropertyString* sling_description;
    bool m_sling_description_isSet;

};

}

#endif /* OAIOrgApacheSlingSettingsImplSlingSettingsServiceImplProperties_H_ */