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
 * OAIComAdobeCqSocialNotificationsImplMentionsRouterInfo.h
 *
 * 
 */

#ifndef OAIComAdobeCqSocialNotificationsImplMentionsRouterInfo_H_
#define OAIComAdobeCqSocialNotificationsImplMentionsRouterInfo_H_

#include <QJsonObject>


#include "OAIOAIComAdobeCqSocialNotificationsImplMentionsRouterProperties.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqSocialNotificationsImplMentionsRouterInfo: public OAIObject {
public:
    OAIComAdobeCqSocialNotificationsImplMentionsRouterInfo();
    OAIComAdobeCqSocialNotificationsImplMentionsRouterInfo(QString json);
    ~OAIComAdobeCqSocialNotificationsImplMentionsRouterInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeCqSocialNotificationsImplMentionsRouterInfo* fromJson(QString jsonString) override;

    QString* getPid();
    void setPid(QString* pid);

    QString* getTitle();
    void setTitle(QString* title);

    QString* getDescription();
    void setDescription(QString* description);

    OAIComAdobeCqSocialNotificationsImplMentionsRouterProperties* getProperties();
    void setProperties(OAIComAdobeCqSocialNotificationsImplMentionsRouterProperties* properties);


    virtual bool isSet() override;

private:
    QString* pid;
    bool m_pid_isSet;

    QString* title;
    bool m_title_isSet;

    QString* description;
    bool m_description_isSet;

    OAIComAdobeCqSocialNotificationsImplMentionsRouterProperties* properties;
    bool m_properties_isSet;

};

}

#endif /* OAIComAdobeCqSocialNotificationsImplMentionsRouterInfo_H_ */