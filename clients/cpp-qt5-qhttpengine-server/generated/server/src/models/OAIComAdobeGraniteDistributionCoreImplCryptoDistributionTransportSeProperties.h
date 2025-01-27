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
 * OAIComAdobeGraniteDistributionCoreImplCryptoDistributionTransportSeProperties.h
 *
 * 
 */

#ifndef OAIComAdobeGraniteDistributionCoreImplCryptoDistributionTransportSeProperties_H
#define OAIComAdobeGraniteDistributionCoreImplCryptoDistributionTransportSeProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeGraniteDistributionCoreImplCryptoDistributionTransportSeProperties: public OAIObject {
public:
    OAIComAdobeGraniteDistributionCoreImplCryptoDistributionTransportSeProperties();
    OAIComAdobeGraniteDistributionCoreImplCryptoDistributionTransportSeProperties(QString json);
    ~OAIComAdobeGraniteDistributionCoreImplCryptoDistributionTransportSeProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyString getName() const;
    void setName(const OAIConfigNodePropertyString &name);

    OAIConfigNodePropertyString getUsername() const;
    void setUsername(const OAIConfigNodePropertyString &username);

    OAIConfigNodePropertyString getEncryptedPassword() const;
    void setEncryptedPassword(const OAIConfigNodePropertyString &encrypted_password);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyString name;
    bool m_name_isSet;

    OAIConfigNodePropertyString username;
    bool m_username_isSet;

    OAIConfigNodePropertyString encrypted_password;
    bool m_encrypted_password_isSet;

};

}

#endif // OAIComAdobeGraniteDistributionCoreImplCryptoDistributionTransportSeProperties_H
