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
 * OAIComAdobeCqDamCfmImplConfFeatureConfigImplProperties.h
 *
 * 
 */

#ifndef OAIComAdobeCqDamCfmImplConfFeatureConfigImplProperties_H
#define OAIComAdobeCqDamCfmImplConfFeatureConfigImplProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyArray.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqDamCfmImplConfFeatureConfigImplProperties: public OAIObject {
public:
    OAIComAdobeCqDamCfmImplConfFeatureConfigImplProperties();
    OAIComAdobeCqDamCfmImplConfFeatureConfigImplProperties(QString json);
    ~OAIComAdobeCqDamCfmImplConfFeatureConfigImplProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray getDamCfmResourceTypes() const;
    void setDamCfmResourceTypes(const OAIConfigNodePropertyArray &dam_cfm_resource_types);

    OAIConfigNodePropertyArray getDamCfmReferenceProperties() const;
    void setDamCfmReferenceProperties(const OAIConfigNodePropertyArray &dam_cfm_reference_properties);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyArray dam_cfm_resource_types;
    bool m_dam_cfm_resource_types_isSet;

    OAIConfigNodePropertyArray dam_cfm_reference_properties;
    bool m_dam_cfm_reference_properties_isSet;

};

}

#endif // OAIComAdobeCqDamCfmImplConfFeatureConfigImplProperties_H
