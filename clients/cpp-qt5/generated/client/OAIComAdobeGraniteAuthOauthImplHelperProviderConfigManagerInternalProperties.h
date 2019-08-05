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
 * OAIComAdobeGraniteAuthOauthImplHelperProviderConfigManagerInternalProperties.h
 *
 * 
 */

#ifndef OAIComAdobeGraniteAuthOauthImplHelperProviderConfigManagerInternalProperties_H_
#define OAIComAdobeGraniteAuthOauthImplHelperProviderConfigManagerInternalProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeGraniteAuthOauthImplHelperProviderConfigManagerInternalProperties: public OAIObject {
public:
    OAIComAdobeGraniteAuthOauthImplHelperProviderConfigManagerInternalProperties();
    OAIComAdobeGraniteAuthOauthImplHelperProviderConfigManagerInternalProperties(QString json);
    ~OAIComAdobeGraniteAuthOauthImplHelperProviderConfigManagerInternalProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeGraniteAuthOauthImplHelperProviderConfigManagerInternalProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyString* getOauthCookieLoginTimeout();
    void setOauthCookieLoginTimeout(OAIConfigNodePropertyString* oauth_cookie_login_timeout);

    OAIConfigNodePropertyString* getOauthCookieMaxAge();
    void setOauthCookieMaxAge(OAIConfigNodePropertyString* oauth_cookie_max_age);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyString* oauth_cookie_login_timeout;
    bool m_oauth_cookie_login_timeout_isSet;

    OAIConfigNodePropertyString* oauth_cookie_max_age;
    bool m_oauth_cookie_max_age_isSet;

};

}

#endif /* OAIComAdobeGraniteAuthOauthImplHelperProviderConfigManagerInternalProperties_H_ */