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
 * OAIComAdobeGraniteAuthOauthImplGithubProviderImplProperties.h
 *
 * 
 */

#ifndef OAIComAdobeGraniteAuthOauthImplGithubProviderImplProperties_H
#define OAIComAdobeGraniteAuthOauthImplGithubProviderImplProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeGraniteAuthOauthImplGithubProviderImplProperties: public OAIObject {
public:
    OAIComAdobeGraniteAuthOauthImplGithubProviderImplProperties();
    OAIComAdobeGraniteAuthOauthImplGithubProviderImplProperties(QString json);
    ~OAIComAdobeGraniteAuthOauthImplGithubProviderImplProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyString getOauthProviderId() const;
    void setOauthProviderId(const OAIConfigNodePropertyString &oauth_provider_id);

    OAIConfigNodePropertyString getOauthProviderGithubAuthorizationUrl() const;
    void setOauthProviderGithubAuthorizationUrl(const OAIConfigNodePropertyString &oauth_provider_github_authorization_url);

    OAIConfigNodePropertyString getOauthProviderGithubTokenUrl() const;
    void setOauthProviderGithubTokenUrl(const OAIConfigNodePropertyString &oauth_provider_github_token_url);

    OAIConfigNodePropertyString getOauthProviderGithubProfileUrl() const;
    void setOauthProviderGithubProfileUrl(const OAIConfigNodePropertyString &oauth_provider_github_profile_url);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyString oauth_provider_id;
    bool m_oauth_provider_id_isSet;

    OAIConfigNodePropertyString oauth_provider_github_authorization_url;
    bool m_oauth_provider_github_authorization_url_isSet;

    OAIConfigNodePropertyString oauth_provider_github_token_url;
    bool m_oauth_provider_github_token_url_isSet;

    OAIConfigNodePropertyString oauth_provider_github_profile_url;
    bool m_oauth_provider_github_profile_url_isSet;

};

}

#endif // OAIComAdobeGraniteAuthOauthImplGithubProviderImplProperties_H