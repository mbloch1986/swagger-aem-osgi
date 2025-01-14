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
 * OAIOrgApacheSlingFeatureflagsImplConfiguredFeatureProperties.h
 *
 * 
 */

#ifndef OAIOrgApacheSlingFeatureflagsImplConfiguredFeatureProperties_H_
#define OAIOrgApacheSlingFeatureflagsImplConfiguredFeatureProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyBoolean.h"
#include "OAIOAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrgApacheSlingFeatureflagsImplConfiguredFeatureProperties: public OAIObject {
public:
    OAIOrgApacheSlingFeatureflagsImplConfiguredFeatureProperties();
    OAIOrgApacheSlingFeatureflagsImplConfiguredFeatureProperties(QString json);
    ~OAIOrgApacheSlingFeatureflagsImplConfiguredFeatureProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIOrgApacheSlingFeatureflagsImplConfiguredFeatureProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyString* getName();
    void setName(OAIConfigNodePropertyString* name);

    OAIConfigNodePropertyString* getDescription();
    void setDescription(OAIConfigNodePropertyString* description);

    OAIConfigNodePropertyBoolean* getEnabled();
    void setEnabled(OAIConfigNodePropertyBoolean* enabled);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyString* name;
    bool m_name_isSet;

    OAIConfigNodePropertyString* description;
    bool m_description_isSet;

    OAIConfigNodePropertyBoolean* enabled;
    bool m_enabled_isSet;

};

}

#endif /* OAIOrgApacheSlingFeatureflagsImplConfiguredFeatureProperties_H_ */
