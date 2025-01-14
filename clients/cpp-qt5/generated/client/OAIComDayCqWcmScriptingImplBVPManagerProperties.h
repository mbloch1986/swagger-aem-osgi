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
 * OAIComDayCqWcmScriptingImplBVPManagerProperties.h
 *
 * 
 */

#ifndef OAIComDayCqWcmScriptingImplBVPManagerProperties_H_
#define OAIComDayCqWcmScriptingImplBVPManagerProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyArray.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqWcmScriptingImplBVPManagerProperties: public OAIObject {
public:
    OAIComDayCqWcmScriptingImplBVPManagerProperties();
    OAIComDayCqWcmScriptingImplBVPManagerProperties(QString json);
    ~OAIComDayCqWcmScriptingImplBVPManagerProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComDayCqWcmScriptingImplBVPManagerProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray* getComDayCqWcmScriptingBvpScriptEngines();
    void setComDayCqWcmScriptingBvpScriptEngines(OAIConfigNodePropertyArray* com_day_cq_wcm_scripting_bvp_script_engines);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyArray* com_day_cq_wcm_scripting_bvp_script_engines;
    bool m_com_day_cq_wcm_scripting_bvp_script_engines_isSet;

};

}

#endif /* OAIComDayCqWcmScriptingImplBVPManagerProperties_H_ */
