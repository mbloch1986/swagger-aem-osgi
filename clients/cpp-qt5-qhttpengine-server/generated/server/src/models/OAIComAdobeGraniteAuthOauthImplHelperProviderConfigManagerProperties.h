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
 * OAIComAdobeGraniteAuthOauthImplHelperProviderConfigManagerProperties.h
 *
 * 
 */

#ifndef OAIComAdobeGraniteAuthOauthImplHelperProviderConfigManagerProperties_H
#define OAIComAdobeGraniteAuthOauthImplHelperProviderConfigManagerProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeGraniteAuthOauthImplHelperProviderConfigManagerProperties: public OAIObject {
public:
    OAIComAdobeGraniteAuthOauthImplHelperProviderConfigManagerProperties();
    OAIComAdobeGraniteAuthOauthImplHelperProviderConfigManagerProperties(QString json);
    ~OAIComAdobeGraniteAuthOauthImplHelperProviderConfigManagerProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyString getOauthCookieLoginTimeout() const;
    void setOauthCookieLoginTimeout(const OAIConfigNodePropertyString &oauth_cookie_login_timeout);

    OAIConfigNodePropertyString getOauthCookieMaxAge() const;
    void setOauthCookieMaxAge(const OAIConfigNodePropertyString &oauth_cookie_max_age);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyString oauth_cookie_login_timeout;
    bool m_oauth_cookie_login_timeout_isSet;

    OAIConfigNodePropertyString oauth_cookie_max_age;
    bool m_oauth_cookie_max_age_isSet;

};

}

#endif // OAIComAdobeGraniteAuthOauthImplHelperProviderConfigManagerProperties_H
