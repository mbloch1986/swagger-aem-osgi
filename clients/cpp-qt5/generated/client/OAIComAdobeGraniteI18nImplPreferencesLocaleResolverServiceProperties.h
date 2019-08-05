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
 * OAIComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties.h
 *
 * 
 */

#ifndef OAIComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties_H_
#define OAIComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties: public OAIObject {
public:
    OAIComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties();
    OAIComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties(QString json);
    ~OAIComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyString* getSecurityPreferencesName();
    void setSecurityPreferencesName(OAIConfigNodePropertyString* security_preferences_name);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyString* security_preferences_name;
    bool m_security_preferences_name_isSet;

};

}

#endif /* OAIComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties_H_ */