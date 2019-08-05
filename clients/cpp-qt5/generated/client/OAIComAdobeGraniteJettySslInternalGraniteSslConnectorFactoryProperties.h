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
 * OAIComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryProperties.h
 *
 * 
 */

#ifndef OAIComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryProperties_H_
#define OAIComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyArray.h"
#include "OAIOAIConfigNodePropertyDropDown.h"
#include "OAIOAIConfigNodePropertyInteger.h"
#include "OAIOAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryProperties: public OAIObject {
public:
    OAIComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryProperties();
    OAIComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryProperties(QString json);
    ~OAIComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyInteger* getComAdobeGraniteJettySslPort();
    void setComAdobeGraniteJettySslPort(OAIConfigNodePropertyInteger* com_adobe_granite_jetty_ssl_port);

    OAIConfigNodePropertyString* getComAdobeGraniteJettySslKeystoreUser();
    void setComAdobeGraniteJettySslKeystoreUser(OAIConfigNodePropertyString* com_adobe_granite_jetty_ssl_keystore_user);

    OAIConfigNodePropertyString* getComAdobeGraniteJettySslKeystorePassword();
    void setComAdobeGraniteJettySslKeystorePassword(OAIConfigNodePropertyString* com_adobe_granite_jetty_ssl_keystore_password);

    OAIConfigNodePropertyArray* getComAdobeGraniteJettySslCiphersuitesExcluded();
    void setComAdobeGraniteJettySslCiphersuitesExcluded(OAIConfigNodePropertyArray* com_adobe_granite_jetty_ssl_ciphersuites_excluded);

    OAIConfigNodePropertyArray* getComAdobeGraniteJettySslCiphersuitesIncluded();
    void setComAdobeGraniteJettySslCiphersuitesIncluded(OAIConfigNodePropertyArray* com_adobe_granite_jetty_ssl_ciphersuites_included);

    OAIConfigNodePropertyDropDown* getComAdobeGraniteJettySslClientCertificate();
    void setComAdobeGraniteJettySslClientCertificate(OAIConfigNodePropertyDropDown* com_adobe_granite_jetty_ssl_client_certificate);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyInteger* com_adobe_granite_jetty_ssl_port;
    bool m_com_adobe_granite_jetty_ssl_port_isSet;

    OAIConfigNodePropertyString* com_adobe_granite_jetty_ssl_keystore_user;
    bool m_com_adobe_granite_jetty_ssl_keystore_user_isSet;

    OAIConfigNodePropertyString* com_adobe_granite_jetty_ssl_keystore_password;
    bool m_com_adobe_granite_jetty_ssl_keystore_password_isSet;

    OAIConfigNodePropertyArray* com_adobe_granite_jetty_ssl_ciphersuites_excluded;
    bool m_com_adobe_granite_jetty_ssl_ciphersuites_excluded_isSet;

    OAIConfigNodePropertyArray* com_adobe_granite_jetty_ssl_ciphersuites_included;
    bool m_com_adobe_granite_jetty_ssl_ciphersuites_included_isSet;

    OAIConfigNodePropertyDropDown* com_adobe_granite_jetty_ssl_client_certificate;
    bool m_com_adobe_granite_jetty_ssl_client_certificate_isSet;

};

}

#endif /* OAIComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryProperties_H_ */