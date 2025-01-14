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
 * OAIComAdobeGraniteRepositoryServiceUserConfigurationProperties.h
 *
 * 
 */

#ifndef OAIComAdobeGraniteRepositoryServiceUserConfigurationProperties_H
#define OAIComAdobeGraniteRepositoryServiceUserConfigurationProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyArray.h"
#include "OAIConfigNodePropertyBoolean.h"
#include "OAIConfigNodePropertyInteger.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeGraniteRepositoryServiceUserConfigurationProperties: public OAIObject {
public:
    OAIComAdobeGraniteRepositoryServiceUserConfigurationProperties();
    OAIComAdobeGraniteRepositoryServiceUserConfigurationProperties(QString json);
    ~OAIComAdobeGraniteRepositoryServiceUserConfigurationProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyInteger getServiceRanking() const;
    void setServiceRanking(const OAIConfigNodePropertyInteger &service_ranking);

    OAIConfigNodePropertyBoolean getServiceusersSimpleSubjectPopulation() const;
    void setServiceusersSimpleSubjectPopulation(const OAIConfigNodePropertyBoolean &serviceusers_simple_subject_population);

    OAIConfigNodePropertyArray getServiceusersList() const;
    void setServiceusersList(const OAIConfigNodePropertyArray &serviceusers_list);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyInteger service_ranking;
    bool m_service_ranking_isSet;

    OAIConfigNodePropertyBoolean serviceusers_simple_subject_population;
    bool m_serviceusers_simple_subject_population_isSet;

    OAIConfigNodePropertyArray serviceusers_list;
    bool m_serviceusers_list_isSet;

};

}

#endif // OAIComAdobeGraniteRepositoryServiceUserConfigurationProperties_H
