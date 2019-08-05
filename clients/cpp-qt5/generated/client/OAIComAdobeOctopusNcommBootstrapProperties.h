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
 * OAIComAdobeOctopusNcommBootstrapProperties.h
 *
 * 
 */

#ifndef OAIComAdobeOctopusNcommBootstrapProperties_H_
#define OAIComAdobeOctopusNcommBootstrapProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyInteger.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeOctopusNcommBootstrapProperties: public OAIObject {
public:
    OAIComAdobeOctopusNcommBootstrapProperties();
    OAIComAdobeOctopusNcommBootstrapProperties(QString json);
    ~OAIComAdobeOctopusNcommBootstrapProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeOctopusNcommBootstrapProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyInteger* getMaxConnections();
    void setMaxConnections(OAIConfigNodePropertyInteger* max_connections);

    OAIConfigNodePropertyInteger* getMaxRequests();
    void setMaxRequests(OAIConfigNodePropertyInteger* max_requests);

    OAIConfigNodePropertyInteger* getRequestTimeout();
    void setRequestTimeout(OAIConfigNodePropertyInteger* request_timeout);

    OAIConfigNodePropertyInteger* getRequestRetries();
    void setRequestRetries(OAIConfigNodePropertyInteger* request_retries);

    OAIConfigNodePropertyInteger* getLaunchTimeout();
    void setLaunchTimeout(OAIConfigNodePropertyInteger* launch_timeout);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyInteger* max_connections;
    bool m_max_connections_isSet;

    OAIConfigNodePropertyInteger* max_requests;
    bool m_max_requests_isSet;

    OAIConfigNodePropertyInteger* request_timeout;
    bool m_request_timeout_isSet;

    OAIConfigNodePropertyInteger* request_retries;
    bool m_request_retries_isSet;

    OAIConfigNodePropertyInteger* launch_timeout;
    bool m_launch_timeout_isSet;

};

}

#endif /* OAIComAdobeOctopusNcommBootstrapProperties_H_ */