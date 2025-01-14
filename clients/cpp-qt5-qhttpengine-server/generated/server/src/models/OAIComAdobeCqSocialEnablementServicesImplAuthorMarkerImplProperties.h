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
 * OAIComAdobeCqSocialEnablementServicesImplAuthorMarkerImplProperties.h
 *
 * 
 */

#ifndef OAIComAdobeCqSocialEnablementServicesImplAuthorMarkerImplProperties_H
#define OAIComAdobeCqSocialEnablementServicesImplAuthorMarkerImplProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyInteger.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqSocialEnablementServicesImplAuthorMarkerImplProperties: public OAIObject {
public:
    OAIComAdobeCqSocialEnablementServicesImplAuthorMarkerImplProperties();
    OAIComAdobeCqSocialEnablementServicesImplAuthorMarkerImplProperties(QString json);
    ~OAIComAdobeCqSocialEnablementServicesImplAuthorMarkerImplProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyInteger getServiceRanking() const;
    void setServiceRanking(const OAIConfigNodePropertyInteger &service_ranking);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyInteger service_ranking;
    bool m_service_ranking_isSet;

};

}

#endif // OAIComAdobeCqSocialEnablementServicesImplAuthorMarkerImplProperties_H
