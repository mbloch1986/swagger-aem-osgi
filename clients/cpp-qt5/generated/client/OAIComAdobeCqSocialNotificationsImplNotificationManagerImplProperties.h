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
 * OAIComAdobeCqSocialNotificationsImplNotificationManagerImplProperties.h
 *
 * 
 */

#ifndef OAIComAdobeCqSocialNotificationsImplNotificationManagerImplProperties_H_
#define OAIComAdobeCqSocialNotificationsImplNotificationManagerImplProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyInteger.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqSocialNotificationsImplNotificationManagerImplProperties: public OAIObject {
public:
    OAIComAdobeCqSocialNotificationsImplNotificationManagerImplProperties();
    OAIComAdobeCqSocialNotificationsImplNotificationManagerImplProperties(QString json);
    ~OAIComAdobeCqSocialNotificationsImplNotificationManagerImplProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeCqSocialNotificationsImplNotificationManagerImplProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyInteger* getMaxUnreadNotificationCount();
    void setMaxUnreadNotificationCount(OAIConfigNodePropertyInteger* max_unread_notification_count);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyInteger* max_unread_notification_count;
    bool m_max_unread_notification_count_isSet;

};

}

#endif /* OAIComAdobeCqSocialNotificationsImplNotificationManagerImplProperties_H_ */