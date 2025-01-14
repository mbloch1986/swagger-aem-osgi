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
 * OAIComDayCqDamScene7ImplScene7APIClientImplProperties.h
 *
 * 
 */

#ifndef OAIComDayCqDamScene7ImplScene7APIClientImplProperties_H_
#define OAIComDayCqDamScene7ImplScene7APIClientImplProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyInteger.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqDamScene7ImplScene7APIClientImplProperties: public OAIObject {
public:
    OAIComDayCqDamScene7ImplScene7APIClientImplProperties();
    OAIComDayCqDamScene7ImplScene7APIClientImplProperties(QString json);
    ~OAIComDayCqDamScene7ImplScene7APIClientImplProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComDayCqDamScene7ImplScene7APIClientImplProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyInteger* getCqDamScene7ApiclientRecordsperpageNofilterName();
    void setCqDamScene7ApiclientRecordsperpageNofilterName(OAIConfigNodePropertyInteger* cq_dam_scene7_apiclient_recordsperpage_nofilter_name);

    OAIConfigNodePropertyInteger* getCqDamScene7ApiclientRecordsperpageWithfilterName();
    void setCqDamScene7ApiclientRecordsperpageWithfilterName(OAIConfigNodePropertyInteger* cq_dam_scene7_apiclient_recordsperpage_withfilter_name);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyInteger* cq_dam_scene7_apiclient_recordsperpage_nofilter_name;
    bool m_cq_dam_scene7_apiclient_recordsperpage_nofilter_name_isSet;

    OAIConfigNodePropertyInteger* cq_dam_scene7_apiclient_recordsperpage_withfilter_name;
    bool m_cq_dam_scene7_apiclient_recordsperpage_withfilter_name_isSet;

};

}

#endif /* OAIComDayCqDamScene7ImplScene7APIClientImplProperties_H_ */
