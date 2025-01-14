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

#ifndef OAIComAdobeGraniteAuthImsProperties_H
#define OAIComAdobeGraniteAuthImsProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeGraniteAuthImsProperties: public OAIObject {
public:
    OAIComAdobeGraniteAuthImsProperties();
    OAIComAdobeGraniteAuthImsProperties(QString json);
    ~OAIComAdobeGraniteAuthImsProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyString getConfigid() const;
    void setConfigid(const OAIConfigNodePropertyString &configid);

    OAIConfigNodePropertyString getScope() const;
    void setScope(const OAIConfigNodePropertyString &scope);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyString configid;
    bool m_configid_isSet;

    OAIConfigNodePropertyString scope;
    bool m_scope_isSet;

};

}

#endif // OAIComAdobeGraniteAuthImsProperties_H
