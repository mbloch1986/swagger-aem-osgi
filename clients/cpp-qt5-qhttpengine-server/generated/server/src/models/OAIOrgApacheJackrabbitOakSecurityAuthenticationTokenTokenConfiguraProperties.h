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
 * OAIOrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties.h
 *
 * 
 */

#ifndef OAIOrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties_H
#define OAIOrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyBoolean.h"
#include "OAIConfigNodePropertyInteger.h"
#include "OAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties: public OAIObject {
public:
    OAIOrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties();
    OAIOrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties(QString json);
    ~OAIOrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyString getTokenExpiration() const;
    void setTokenExpiration(const OAIConfigNodePropertyString &token_expiration);

    OAIConfigNodePropertyString getTokenLength() const;
    void setTokenLength(const OAIConfigNodePropertyString &token_length);

    OAIConfigNodePropertyBoolean getTokenRefresh() const;
    void setTokenRefresh(const OAIConfigNodePropertyBoolean &token_refresh);

    OAIConfigNodePropertyInteger getTokenCleanupThreshold() const;
    void setTokenCleanupThreshold(const OAIConfigNodePropertyInteger &token_cleanup_threshold);

    OAIConfigNodePropertyString getPasswordHashAlgorithm() const;
    void setPasswordHashAlgorithm(const OAIConfigNodePropertyString &password_hash_algorithm);

    OAIConfigNodePropertyInteger getPasswordHashIterations() const;
    void setPasswordHashIterations(const OAIConfigNodePropertyInteger &password_hash_iterations);

    OAIConfigNodePropertyInteger getPasswordSaltSize() const;
    void setPasswordSaltSize(const OAIConfigNodePropertyInteger &password_salt_size);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyString token_expiration;
    bool m_token_expiration_isSet;

    OAIConfigNodePropertyString token_length;
    bool m_token_length_isSet;

    OAIConfigNodePropertyBoolean token_refresh;
    bool m_token_refresh_isSet;

    OAIConfigNodePropertyInteger token_cleanup_threshold;
    bool m_token_cleanup_threshold_isSet;

    OAIConfigNodePropertyString password_hash_algorithm;
    bool m_password_hash_algorithm_isSet;

    OAIConfigNodePropertyInteger password_hash_iterations;
    bool m_password_hash_iterations_isSet;

    OAIConfigNodePropertyInteger password_salt_size;
    bool m_password_salt_size_isSet;

};

}

#endif // OAIOrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties_H
