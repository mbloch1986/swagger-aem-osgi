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
 * OAIComDayCqSearchpromoteImplSearchPromoteServiceImplProperties.h
 *
 * 
 */

#ifndef OAIComDayCqSearchpromoteImplSearchPromoteServiceImplProperties_H
#define OAIComDayCqSearchpromoteImplSearchPromoteServiceImplProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyInteger.h"
#include "OAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqSearchpromoteImplSearchPromoteServiceImplProperties: public OAIObject {
public:
    OAIComDayCqSearchpromoteImplSearchPromoteServiceImplProperties();
    OAIComDayCqSearchpromoteImplSearchPromoteServiceImplProperties(QString json);
    ~OAIComDayCqSearchpromoteImplSearchPromoteServiceImplProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyString getCqSearchpromoteConfigurationServerUri() const;
    void setCqSearchpromoteConfigurationServerUri(const OAIConfigNodePropertyString &cq_searchpromote_configuration_server_uri);

    OAIConfigNodePropertyString getCqSearchpromoteConfigurationEnvironment() const;
    void setCqSearchpromoteConfigurationEnvironment(const OAIConfigNodePropertyString &cq_searchpromote_configuration_environment);

    OAIConfigNodePropertyInteger getConnectionTimeout() const;
    void setConnectionTimeout(const OAIConfigNodePropertyInteger &connection_timeout);

    OAIConfigNodePropertyInteger getSocketTimeout() const;
    void setSocketTimeout(const OAIConfigNodePropertyInteger &socket_timeout);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyString cq_searchpromote_configuration_server_uri;
    bool m_cq_searchpromote_configuration_server_uri_isSet;

    OAIConfigNodePropertyString cq_searchpromote_configuration_environment;
    bool m_cq_searchpromote_configuration_environment_isSet;

    OAIConfigNodePropertyInteger connection_timeout;
    bool m_connection_timeout_isSet;

    OAIConfigNodePropertyInteger socket_timeout;
    bool m_socket_timeout_isSet;

};

}

#endif // OAIComDayCqSearchpromoteImplSearchPromoteServiceImplProperties_H
