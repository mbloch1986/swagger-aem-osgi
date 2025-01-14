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
 * OAIComAdobeCqScreensImplRemoteImplDistributedHttpClientImplProperties.h
 *
 * 
 */

#ifndef OAIComAdobeCqScreensImplRemoteImplDistributedHttpClientImplProperties_H
#define OAIComAdobeCqScreensImplRemoteImplDistributedHttpClientImplProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyInteger.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqScreensImplRemoteImplDistributedHttpClientImplProperties: public OAIObject {
public:
    OAIComAdobeCqScreensImplRemoteImplDistributedHttpClientImplProperties();
    OAIComAdobeCqScreensImplRemoteImplDistributedHttpClientImplProperties(QString json);
    ~OAIComAdobeCqScreensImplRemoteImplDistributedHttpClientImplProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyInteger getComAdobeAemScreensImplRemoteRequestTimeout() const;
    void setComAdobeAemScreensImplRemoteRequestTimeout(const OAIConfigNodePropertyInteger &com_adobe_aem_screens_impl_remote_request_timeout);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyInteger com_adobe_aem_screens_impl_remote_request_timeout;
    bool m_com_adobe_aem_screens_impl_remote_request_timeout_isSet;

};

}

#endif // OAIComAdobeCqScreensImplRemoteImplDistributedHttpClientImplProperties_H
