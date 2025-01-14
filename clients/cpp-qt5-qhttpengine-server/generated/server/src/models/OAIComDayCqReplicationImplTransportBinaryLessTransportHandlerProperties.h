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
 * OAIComDayCqReplicationImplTransportBinaryLessTransportHandlerProperties.h
 *
 * 
 */

#ifndef OAIComDayCqReplicationImplTransportBinaryLessTransportHandlerProperties_H
#define OAIComDayCqReplicationImplTransportBinaryLessTransportHandlerProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyArray.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqReplicationImplTransportBinaryLessTransportHandlerProperties: public OAIObject {
public:
    OAIComDayCqReplicationImplTransportBinaryLessTransportHandlerProperties();
    OAIComDayCqReplicationImplTransportBinaryLessTransportHandlerProperties(QString json);
    ~OAIComDayCqReplicationImplTransportBinaryLessTransportHandlerProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray getDisabledCipherSuites() const;
    void setDisabledCipherSuites(const OAIConfigNodePropertyArray &disabled_cipher_suites);

    OAIConfigNodePropertyArray getEnabledCipherSuites() const;
    void setEnabledCipherSuites(const OAIConfigNodePropertyArray &enabled_cipher_suites);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyArray disabled_cipher_suites;
    bool m_disabled_cipher_suites_isSet;

    OAIConfigNodePropertyArray enabled_cipher_suites;
    bool m_enabled_cipher_suites_isSet;

};

}

#endif // OAIComDayCqReplicationImplTransportBinaryLessTransportHandlerProperties_H
