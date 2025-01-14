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
 * OAIComAdobeGraniteAuthImsImplIMSAccessTokenRequestCustomizerImplProperties.h
 *
 * 
 */

#ifndef OAIComAdobeGraniteAuthImsImplIMSAccessTokenRequestCustomizerImplProperties_H_
#define OAIComAdobeGraniteAuthImsImplIMSAccessTokenRequestCustomizerImplProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeGraniteAuthImsImplIMSAccessTokenRequestCustomizerImplProperties: public OAIObject {
public:
    OAIComAdobeGraniteAuthImsImplIMSAccessTokenRequestCustomizerImplProperties();
    OAIComAdobeGraniteAuthImsImplIMSAccessTokenRequestCustomizerImplProperties(QString json);
    ~OAIComAdobeGraniteAuthImsImplIMSAccessTokenRequestCustomizerImplProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeGraniteAuthImsImplIMSAccessTokenRequestCustomizerImplProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyString* getAuthImsClientSecret();
    void setAuthImsClientSecret(OAIConfigNodePropertyString* auth_ims_client_secret);

    OAIConfigNodePropertyString* getCustomizerType();
    void setCustomizerType(OAIConfigNodePropertyString* customizer_type);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyString* auth_ims_client_secret;
    bool m_auth_ims_client_secret_isSet;

    OAIConfigNodePropertyString* customizer_type;
    bool m_customizer_type_isSet;

};

}

#endif /* OAIComAdobeGraniteAuthImsImplIMSAccessTokenRequestCustomizerImplProperties_H_ */
