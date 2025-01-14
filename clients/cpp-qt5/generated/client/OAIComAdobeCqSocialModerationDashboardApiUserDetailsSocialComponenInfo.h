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
 * OAIComAdobeCqSocialModerationDashboardApiUserDetailsSocialComponenInfo.h
 *
 * 
 */

#ifndef OAIComAdobeCqSocialModerationDashboardApiUserDetailsSocialComponenInfo_H_
#define OAIComAdobeCqSocialModerationDashboardApiUserDetailsSocialComponenInfo_H_

#include <QJsonObject>


#include "OAIOAIComAdobeCqSocialModerationDashboardApiUserDetailsSocialComponenProperties.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqSocialModerationDashboardApiUserDetailsSocialComponenInfo: public OAIObject {
public:
    OAIComAdobeCqSocialModerationDashboardApiUserDetailsSocialComponenInfo();
    OAIComAdobeCqSocialModerationDashboardApiUserDetailsSocialComponenInfo(QString json);
    ~OAIComAdobeCqSocialModerationDashboardApiUserDetailsSocialComponenInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeCqSocialModerationDashboardApiUserDetailsSocialComponenInfo* fromJson(QString jsonString) override;

    QString* getPid();
    void setPid(QString* pid);

    QString* getTitle();
    void setTitle(QString* title);

    QString* getDescription();
    void setDescription(QString* description);

    OAIComAdobeCqSocialModerationDashboardApiUserDetailsSocialComponenProperties* getProperties();
    void setProperties(OAIComAdobeCqSocialModerationDashboardApiUserDetailsSocialComponenProperties* properties);


    virtual bool isSet() override;

private:
    QString* pid;
    bool m_pid_isSet;

    QString* title;
    bool m_title_isSet;

    QString* description;
    bool m_description_isSet;

    OAIComAdobeCqSocialModerationDashboardApiUserDetailsSocialComponenProperties* properties;
    bool m_properties_isSet;

};

}

#endif /* OAIComAdobeCqSocialModerationDashboardApiUserDetailsSocialComponenInfo_H_ */
