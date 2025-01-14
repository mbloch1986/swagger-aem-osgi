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
 * OAIComAdobeGraniteAuthOauthImplGraniteProviderProperties.h
 *
 * 
 */

#ifndef OAIComAdobeGraniteAuthOauthImplGraniteProviderProperties_H_
#define OAIComAdobeGraniteAuthOauthImplGraniteProviderProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeGraniteAuthOauthImplGraniteProviderProperties: public OAIObject {
public:
    OAIComAdobeGraniteAuthOauthImplGraniteProviderProperties();
    OAIComAdobeGraniteAuthOauthImplGraniteProviderProperties(QString json);
    ~OAIComAdobeGraniteAuthOauthImplGraniteProviderProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeGraniteAuthOauthImplGraniteProviderProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyString* getOauthProviderId();
    void setOauthProviderId(OAIConfigNodePropertyString* oauth_provider_id);

    OAIConfigNodePropertyString* getOauthProviderGraniteAuthorizationUrl();
    void setOauthProviderGraniteAuthorizationUrl(OAIConfigNodePropertyString* oauth_provider_granite_authorization_url);

    OAIConfigNodePropertyString* getOauthProviderGraniteTokenUrl();
    void setOauthProviderGraniteTokenUrl(OAIConfigNodePropertyString* oauth_provider_granite_token_url);

    OAIConfigNodePropertyString* getOauthProviderGraniteProfileUrl();
    void setOauthProviderGraniteProfileUrl(OAIConfigNodePropertyString* oauth_provider_granite_profile_url);

    OAIConfigNodePropertyString* getOauthProviderGraniteExtendedDetailsUrls();
    void setOauthProviderGraniteExtendedDetailsUrls(OAIConfigNodePropertyString* oauth_provider_granite_extended_details_urls);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyString* oauth_provider_id;
    bool m_oauth_provider_id_isSet;

    OAIConfigNodePropertyString* oauth_provider_granite_authorization_url;
    bool m_oauth_provider_granite_authorization_url_isSet;

    OAIConfigNodePropertyString* oauth_provider_granite_token_url;
    bool m_oauth_provider_granite_token_url_isSet;

    OAIConfigNodePropertyString* oauth_provider_granite_profile_url;
    bool m_oauth_provider_granite_profile_url_isSet;

    OAIConfigNodePropertyString* oauth_provider_granite_extended_details_urls;
    bool m_oauth_provider_granite_extended_details_urls_isSet;

};

}

#endif /* OAIComAdobeGraniteAuthOauthImplGraniteProviderProperties_H_ */
