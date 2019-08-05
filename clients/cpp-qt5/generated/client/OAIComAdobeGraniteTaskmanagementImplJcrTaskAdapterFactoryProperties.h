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
 * OAIComAdobeGraniteTaskmanagementImplJcrTaskAdapterFactoryProperties.h
 *
 * 
 */

#ifndef OAIComAdobeGraniteTaskmanagementImplJcrTaskAdapterFactoryProperties_H_
#define OAIComAdobeGraniteTaskmanagementImplJcrTaskAdapterFactoryProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeGraniteTaskmanagementImplJcrTaskAdapterFactoryProperties: public OAIObject {
public:
    OAIComAdobeGraniteTaskmanagementImplJcrTaskAdapterFactoryProperties();
    OAIComAdobeGraniteTaskmanagementImplJcrTaskAdapterFactoryProperties(QString json);
    ~OAIComAdobeGraniteTaskmanagementImplJcrTaskAdapterFactoryProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeGraniteTaskmanagementImplJcrTaskAdapterFactoryProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyString* getAdapterCondition();
    void setAdapterCondition(OAIConfigNodePropertyString* adapter_condition);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyString* adapter_condition;
    bool m_adapter_condition_isSet;

};

}

#endif /* OAIComAdobeGraniteTaskmanagementImplJcrTaskAdapterFactoryProperties_H_ */