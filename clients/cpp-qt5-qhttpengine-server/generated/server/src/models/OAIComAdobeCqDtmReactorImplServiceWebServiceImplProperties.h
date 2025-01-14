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
 * OAIComAdobeCqDtmReactorImplServiceWebServiceImplProperties.h
 *
 * 
 */

#ifndef OAIComAdobeCqDtmReactorImplServiceWebServiceImplProperties_H
#define OAIComAdobeCqDtmReactorImplServiceWebServiceImplProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyInteger.h"
#include "OAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqDtmReactorImplServiceWebServiceImplProperties: public OAIObject {
public:
    OAIComAdobeCqDtmReactorImplServiceWebServiceImplProperties();
    OAIComAdobeCqDtmReactorImplServiceWebServiceImplProperties(QString json);
    ~OAIComAdobeCqDtmReactorImplServiceWebServiceImplProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyString getEndpointUri() const;
    void setEndpointUri(const OAIConfigNodePropertyString &endpoint_uri);

    OAIConfigNodePropertyInteger getConnectionTimeout() const;
    void setConnectionTimeout(const OAIConfigNodePropertyInteger &connection_timeout);

    OAIConfigNodePropertyInteger getSocketTimeout() const;
    void setSocketTimeout(const OAIConfigNodePropertyInteger &socket_timeout);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyString endpoint_uri;
    bool m_endpoint_uri_isSet;

    OAIConfigNodePropertyInteger connection_timeout;
    bool m_connection_timeout_isSet;

    OAIConfigNodePropertyInteger socket_timeout;
    bool m_socket_timeout_isSet;

};

}

#endif // OAIComAdobeCqDtmReactorImplServiceWebServiceImplProperties_H
