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
 * OAIComAdobeGraniteAuthImsProperties.h
 *
 * 
 */

#ifndef OAIComAdobeGraniteAuthImsProperties_H_
#define OAIComAdobeGraniteAuthImsProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeGraniteAuthImsProperties: public OAIObject {
public:
    OAIComAdobeGraniteAuthImsProperties();
    OAIComAdobeGraniteAuthImsProperties(QString json);
    ~OAIComAdobeGraniteAuthImsProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeGraniteAuthImsProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyString* getConfigid();
    void setConfigid(OAIConfigNodePropertyString* configid);

    OAIConfigNodePropertyString* getScope();
    void setScope(OAIConfigNodePropertyString* scope);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyString* configid;
    bool m_configid_isSet;

    OAIConfigNodePropertyString* scope;
    bool m_scope_isSet;

};

}

#endif /* OAIComAdobeGraniteAuthImsProperties_H_ */
