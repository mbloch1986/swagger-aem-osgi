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
 * OAIComDayCqDamCoreImplServletGuidLookupFilterProperties.h
 *
 * 
 */

#ifndef OAIComDayCqDamCoreImplServletGuidLookupFilterProperties_H_
#define OAIComDayCqDamCoreImplServletGuidLookupFilterProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyBoolean.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqDamCoreImplServletGuidLookupFilterProperties: public OAIObject {
public:
    OAIComDayCqDamCoreImplServletGuidLookupFilterProperties();
    OAIComDayCqDamCoreImplServletGuidLookupFilterProperties(QString json);
    ~OAIComDayCqDamCoreImplServletGuidLookupFilterProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComDayCqDamCoreImplServletGuidLookupFilterProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyBoolean* getCqDamCoreGuidlookupfilterEnabled();
    void setCqDamCoreGuidlookupfilterEnabled(OAIConfigNodePropertyBoolean* cq_dam_core_guidlookupfilter_enabled);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyBoolean* cq_dam_core_guidlookupfilter_enabled;
    bool m_cq_dam_core_guidlookupfilter_enabled_isSet;

};

}

#endif /* OAIComDayCqDamCoreImplServletGuidLookupFilterProperties_H_ */
