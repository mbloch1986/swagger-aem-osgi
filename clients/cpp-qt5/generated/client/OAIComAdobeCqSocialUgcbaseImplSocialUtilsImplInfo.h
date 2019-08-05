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
 * OAIComAdobeCqSocialUgcbaseImplSocialUtilsImplInfo.h
 *
 * 
 */

#ifndef OAIComAdobeCqSocialUgcbaseImplSocialUtilsImplInfo_H_
#define OAIComAdobeCqSocialUgcbaseImplSocialUtilsImplInfo_H_

#include <QJsonObject>


#include "OAIOAIComAdobeCqSocialUgcbaseImplSocialUtilsImplProperties.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqSocialUgcbaseImplSocialUtilsImplInfo: public OAIObject {
public:
    OAIComAdobeCqSocialUgcbaseImplSocialUtilsImplInfo();
    OAIComAdobeCqSocialUgcbaseImplSocialUtilsImplInfo(QString json);
    ~OAIComAdobeCqSocialUgcbaseImplSocialUtilsImplInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeCqSocialUgcbaseImplSocialUtilsImplInfo* fromJson(QString jsonString) override;

    QString* getPid();
    void setPid(QString* pid);

    QString* getTitle();
    void setTitle(QString* title);

    QString* getDescription();
    void setDescription(QString* description);

    OAIComAdobeCqSocialUgcbaseImplSocialUtilsImplProperties* getProperties();
    void setProperties(OAIComAdobeCqSocialUgcbaseImplSocialUtilsImplProperties* properties);


    virtual bool isSet() override;

private:
    QString* pid;
    bool m_pid_isSet;

    QString* title;
    bool m_title_isSet;

    QString* description;
    bool m_description_isSet;

    OAIComAdobeCqSocialUgcbaseImplSocialUtilsImplProperties* properties;
    bool m_properties_isSet;

};

}

#endif /* OAIComAdobeCqSocialUgcbaseImplSocialUtilsImplInfo_H_ */