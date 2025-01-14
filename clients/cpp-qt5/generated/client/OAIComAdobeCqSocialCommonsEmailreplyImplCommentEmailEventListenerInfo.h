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
 * OAIComAdobeCqSocialCommonsEmailreplyImplCommentEmailEventListenerInfo.h
 *
 * 
 */

#ifndef OAIComAdobeCqSocialCommonsEmailreplyImplCommentEmailEventListenerInfo_H_
#define OAIComAdobeCqSocialCommonsEmailreplyImplCommentEmailEventListenerInfo_H_

#include <QJsonObject>


#include "OAIOAIComAdobeCqSocialCommonsEmailreplyImplCommentEmailEventListenerProperties.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqSocialCommonsEmailreplyImplCommentEmailEventListenerInfo: public OAIObject {
public:
    OAIComAdobeCqSocialCommonsEmailreplyImplCommentEmailEventListenerInfo();
    OAIComAdobeCqSocialCommonsEmailreplyImplCommentEmailEventListenerInfo(QString json);
    ~OAIComAdobeCqSocialCommonsEmailreplyImplCommentEmailEventListenerInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeCqSocialCommonsEmailreplyImplCommentEmailEventListenerInfo* fromJson(QString jsonString) override;

    QString* getPid();
    void setPid(QString* pid);

    QString* getTitle();
    void setTitle(QString* title);

    QString* getDescription();
    void setDescription(QString* description);

    OAIComAdobeCqSocialCommonsEmailreplyImplCommentEmailEventListenerProperties* getProperties();
    void setProperties(OAIComAdobeCqSocialCommonsEmailreplyImplCommentEmailEventListenerProperties* properties);


    virtual bool isSet() override;

private:
    QString* pid;
    bool m_pid_isSet;

    QString* title;
    bool m_title_isSet;

    QString* description;
    bool m_description_isSet;

    OAIComAdobeCqSocialCommonsEmailreplyImplCommentEmailEventListenerProperties* properties;
    bool m_properties_isSet;

};

}

#endif /* OAIComAdobeCqSocialCommonsEmailreplyImplCommentEmailEventListenerInfo_H_ */
