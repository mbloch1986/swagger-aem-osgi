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
 * OAIComAdobeCqSocialModerationDashboardApiModerationDashboardSocialProperties.h
 *
 * 
 */

#ifndef OAIComAdobeCqSocialModerationDashboardApiModerationDashboardSocialProperties_H_
#define OAIComAdobeCqSocialModerationDashboardApiModerationDashboardSocialProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyInteger.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqSocialModerationDashboardApiModerationDashboardSocialProperties: public OAIObject {
public:
    OAIComAdobeCqSocialModerationDashboardApiModerationDashboardSocialProperties();
    OAIComAdobeCqSocialModerationDashboardApiModerationDashboardSocialProperties(QString json);
    ~OAIComAdobeCqSocialModerationDashboardApiModerationDashboardSocialProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeCqSocialModerationDashboardApiModerationDashboardSocialProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyInteger* getPriority();
    void setPriority(OAIConfigNodePropertyInteger* priority);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyInteger* priority;
    bool m_priority_isSet;

};

}

#endif /* OAIComAdobeCqSocialModerationDashboardApiModerationDashboardSocialProperties_H_ */
