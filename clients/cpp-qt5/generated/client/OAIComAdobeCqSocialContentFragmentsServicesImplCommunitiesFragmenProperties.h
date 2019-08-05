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
 * OAIComAdobeCqSocialContentFragmentsServicesImplCommunitiesFragmenProperties.h
 *
 * 
 */

#ifndef OAIComAdobeCqSocialContentFragmentsServicesImplCommunitiesFragmenProperties_H_
#define OAIComAdobeCqSocialContentFragmentsServicesImplCommunitiesFragmenProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyBoolean.h"
#include "OAIOAIConfigNodePropertyInteger.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqSocialContentFragmentsServicesImplCommunitiesFragmenProperties: public OAIObject {
public:
    OAIComAdobeCqSocialContentFragmentsServicesImplCommunitiesFragmenProperties();
    OAIComAdobeCqSocialContentFragmentsServicesImplCommunitiesFragmenProperties(QString json);
    ~OAIComAdobeCqSocialContentFragmentsServicesImplCommunitiesFragmenProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeCqSocialContentFragmentsServicesImplCommunitiesFragmenProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyBoolean* getCqSocialContentFragmentsServicesEnabled();
    void setCqSocialContentFragmentsServicesEnabled(OAIConfigNodePropertyBoolean* cq_social_content_fragments_services_enabled);

    OAIConfigNodePropertyInteger* getCqSocialContentFragmentsServicesWaitTimeSeconds();
    void setCqSocialContentFragmentsServicesWaitTimeSeconds(OAIConfigNodePropertyInteger* cq_social_content_fragments_services_wait_time_seconds);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyBoolean* cq_social_content_fragments_services_enabled;
    bool m_cq_social_content_fragments_services_enabled_isSet;

    OAIConfigNodePropertyInteger* cq_social_content_fragments_services_wait_time_seconds;
    bool m_cq_social_content_fragments_services_wait_time_seconds_isSet;

};

}

#endif /* OAIComAdobeCqSocialContentFragmentsServicesImplCommunitiesFragmenProperties_H_ */