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
 * OAIComDayCqWcmMsmImplActionsPageMoveActionFactoryInfo.h
 *
 * 
 */

#ifndef OAIComDayCqWcmMsmImplActionsPageMoveActionFactoryInfo_H
#define OAIComDayCqWcmMsmImplActionsPageMoveActionFactoryInfo_H

#include <QJsonObject>


#include "OAIComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqWcmMsmImplActionsPageMoveActionFactoryInfo: public OAIObject {
public:
    OAIComDayCqWcmMsmImplActionsPageMoveActionFactoryInfo();
    OAIComDayCqWcmMsmImplActionsPageMoveActionFactoryInfo(QString json);
    ~OAIComDayCqWcmMsmImplActionsPageMoveActionFactoryInfo() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getPid() const;
    void setPid(const QString &pid);

    QString getTitle() const;
    void setTitle(const QString &title);

    QString getDescription() const;
    void setDescription(const QString &description);

    OAIComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties getProperties() const;
    void setProperties(const OAIComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties &properties);

    virtual bool isSet() const override;

private:
    QString pid;
    bool m_pid_isSet;

    QString title;
    bool m_title_isSet;

    QString description;
    bool m_description_isSet;

    OAIComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties properties;
    bool m_properties_isSet;

};

}

#endif // OAIComDayCqWcmMsmImplActionsPageMoveActionFactoryInfo_H
