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
 * OAIOrgApacheSlingJcrJackrabbitServerRmiRegistrationSupportProperties.h
 *
 * 
 */

#ifndef OAIOrgApacheSlingJcrJackrabbitServerRmiRegistrationSupportProperties_H_
#define OAIOrgApacheSlingJcrJackrabbitServerRmiRegistrationSupportProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyInteger.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrgApacheSlingJcrJackrabbitServerRmiRegistrationSupportProperties: public OAIObject {
public:
    OAIOrgApacheSlingJcrJackrabbitServerRmiRegistrationSupportProperties();
    OAIOrgApacheSlingJcrJackrabbitServerRmiRegistrationSupportProperties(QString json);
    ~OAIOrgApacheSlingJcrJackrabbitServerRmiRegistrationSupportProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIOrgApacheSlingJcrJackrabbitServerRmiRegistrationSupportProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyInteger* getPort();
    void setPort(OAIConfigNodePropertyInteger* port);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyInteger* port;
    bool m_port_isSet;

};

}

#endif /* OAIOrgApacheSlingJcrJackrabbitServerRmiRegistrationSupportProperties_H_ */