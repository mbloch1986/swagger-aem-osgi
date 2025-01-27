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
 * OAIComAdobeGraniteAuthCertImplClientCertAuthHandlerProperties.h
 *
 * 
 */

#ifndef OAIComAdobeGraniteAuthCertImplClientCertAuthHandlerProperties_H_
#define OAIComAdobeGraniteAuthCertImplClientCertAuthHandlerProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyInteger.h"
#include "OAIOAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeGraniteAuthCertImplClientCertAuthHandlerProperties: public OAIObject {
public:
    OAIComAdobeGraniteAuthCertImplClientCertAuthHandlerProperties();
    OAIComAdobeGraniteAuthCertImplClientCertAuthHandlerProperties(QString json);
    ~OAIComAdobeGraniteAuthCertImplClientCertAuthHandlerProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeGraniteAuthCertImplClientCertAuthHandlerProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyString* getPath();
    void setPath(OAIConfigNodePropertyString* path);

    OAIConfigNodePropertyInteger* getServiceRanking();
    void setServiceRanking(OAIConfigNodePropertyInteger* service_ranking);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyString* path;
    bool m_path_isSet;

    OAIConfigNodePropertyInteger* service_ranking;
    bool m_service_ranking_isSet;

};

}

#endif /* OAIComAdobeGraniteAuthCertImplClientCertAuthHandlerProperties_H_ */
