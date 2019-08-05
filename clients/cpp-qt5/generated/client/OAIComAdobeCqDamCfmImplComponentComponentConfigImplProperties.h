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
 * OAIComAdobeCqDamCfmImplComponentComponentConfigImplProperties.h
 *
 * 
 */

#ifndef OAIComAdobeCqDamCfmImplComponentComponentConfigImplProperties_H_
#define OAIComAdobeCqDamCfmImplComponentComponentConfigImplProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqDamCfmImplComponentComponentConfigImplProperties: public OAIObject {
public:
    OAIComAdobeCqDamCfmImplComponentComponentConfigImplProperties();
    OAIComAdobeCqDamCfmImplComponentComponentConfigImplProperties(QString json);
    ~OAIComAdobeCqDamCfmImplComponentComponentConfigImplProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeCqDamCfmImplComponentComponentConfigImplProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyString* getDamCfmComponentResourceType();
    void setDamCfmComponentResourceType(OAIConfigNodePropertyString* dam_cfm_component_resource_type);

    OAIConfigNodePropertyString* getDamCfmComponentFileReferenceProp();
    void setDamCfmComponentFileReferenceProp(OAIConfigNodePropertyString* dam_cfm_component_file_reference_prop);

    OAIConfigNodePropertyString* getDamCfmComponentElementsProp();
    void setDamCfmComponentElementsProp(OAIConfigNodePropertyString* dam_cfm_component_elements_prop);

    OAIConfigNodePropertyString* getDamCfmComponentVariationProp();
    void setDamCfmComponentVariationProp(OAIConfigNodePropertyString* dam_cfm_component_variation_prop);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyString* dam_cfm_component_resource_type;
    bool m_dam_cfm_component_resource_type_isSet;

    OAIConfigNodePropertyString* dam_cfm_component_file_reference_prop;
    bool m_dam_cfm_component_file_reference_prop_isSet;

    OAIConfigNodePropertyString* dam_cfm_component_elements_prop;
    bool m_dam_cfm_component_elements_prop_isSet;

    OAIConfigNodePropertyString* dam_cfm_component_variation_prop;
    bool m_dam_cfm_component_variation_prop_isSet;

};

}

#endif /* OAIComAdobeCqDamCfmImplComponentComponentConfigImplProperties_H_ */