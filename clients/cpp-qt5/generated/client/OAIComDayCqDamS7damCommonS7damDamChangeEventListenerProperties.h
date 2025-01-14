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
 * OAIComDayCqDamS7damCommonS7damDamChangeEventListenerProperties.h
 *
 * 
 */

#ifndef OAIComDayCqDamS7damCommonS7damDamChangeEventListenerProperties_H_
#define OAIComDayCqDamS7damCommonS7damDamChangeEventListenerProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyBoolean.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqDamS7damCommonS7damDamChangeEventListenerProperties: public OAIObject {
public:
    OAIComDayCqDamS7damCommonS7damDamChangeEventListenerProperties();
    OAIComDayCqDamS7damCommonS7damDamChangeEventListenerProperties(QString json);
    ~OAIComDayCqDamS7damCommonS7damDamChangeEventListenerProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComDayCqDamS7damCommonS7damDamChangeEventListenerProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyBoolean* getCqDamS7damDamchangeeventlistenerEnabled();
    void setCqDamS7damDamchangeeventlistenerEnabled(OAIConfigNodePropertyBoolean* cq_dam_s7dam_damchangeeventlistener_enabled);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyBoolean* cq_dam_s7dam_damchangeeventlistener_enabled;
    bool m_cq_dam_s7dam_damchangeeventlistener_enabled_isSet;

};

}

#endif /* OAIComDayCqDamS7damCommonS7damDamChangeEventListenerProperties_H_ */
