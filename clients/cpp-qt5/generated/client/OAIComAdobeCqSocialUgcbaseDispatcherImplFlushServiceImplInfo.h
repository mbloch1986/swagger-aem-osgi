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
 * OAIComAdobeCqSocialUgcbaseDispatcherImplFlushServiceImplInfo.h
 *
 * 
 */

#ifndef OAIComAdobeCqSocialUgcbaseDispatcherImplFlushServiceImplInfo_H_
#define OAIComAdobeCqSocialUgcbaseDispatcherImplFlushServiceImplInfo_H_

#include <QJsonObject>


#include "OAIOAIComAdobeCqSocialUgcbaseDispatcherImplFlushServiceImplProperties.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqSocialUgcbaseDispatcherImplFlushServiceImplInfo: public OAIObject {
public:
    OAIComAdobeCqSocialUgcbaseDispatcherImplFlushServiceImplInfo();
    OAIComAdobeCqSocialUgcbaseDispatcherImplFlushServiceImplInfo(QString json);
    ~OAIComAdobeCqSocialUgcbaseDispatcherImplFlushServiceImplInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeCqSocialUgcbaseDispatcherImplFlushServiceImplInfo* fromJson(QString jsonString) override;

    QString* getPid();
    void setPid(QString* pid);

    QString* getTitle();
    void setTitle(QString* title);

    QString* getDescription();
    void setDescription(QString* description);

    OAIComAdobeCqSocialUgcbaseDispatcherImplFlushServiceImplProperties* getProperties();
    void setProperties(OAIComAdobeCqSocialUgcbaseDispatcherImplFlushServiceImplProperties* properties);


    virtual bool isSet() override;

private:
    QString* pid;
    bool m_pid_isSet;

    QString* title;
    bool m_title_isSet;

    QString* description;
    bool m_description_isSet;

    OAIComAdobeCqSocialUgcbaseDispatcherImplFlushServiceImplProperties* properties;
    bool m_properties_isSet;

};

}

#endif /* OAIComAdobeCqSocialUgcbaseDispatcherImplFlushServiceImplInfo_H_ */