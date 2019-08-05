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
 * OAIOrgApacheSlingFeatureflagsFeatureProperties.h
 *
 * 
 */

#ifndef OAIOrgApacheSlingFeatureflagsFeatureProperties_H
#define OAIOrgApacheSlingFeatureflagsFeatureProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyBoolean.h"
#include "OAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrgApacheSlingFeatureflagsFeatureProperties: public OAIObject {
public:
    OAIOrgApacheSlingFeatureflagsFeatureProperties();
    OAIOrgApacheSlingFeatureflagsFeatureProperties(QString json);
    ~OAIOrgApacheSlingFeatureflagsFeatureProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyString getName() const;
    void setName(const OAIConfigNodePropertyString &name);

    OAIConfigNodePropertyString getDescription() const;
    void setDescription(const OAIConfigNodePropertyString &description);

    OAIConfigNodePropertyBoolean getEnabled() const;
    void setEnabled(const OAIConfigNodePropertyBoolean &enabled);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyString name;
    bool m_name_isSet;

    OAIConfigNodePropertyString description;
    bool m_description_isSet;

    OAIConfigNodePropertyBoolean enabled;
    bool m_enabled_isSet;

};

}

#endif // OAIOrgApacheSlingFeatureflagsFeatureProperties_H