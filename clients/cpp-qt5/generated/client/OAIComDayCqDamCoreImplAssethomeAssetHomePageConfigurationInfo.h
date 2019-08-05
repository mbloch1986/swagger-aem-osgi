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
 * OAIComDayCqDamCoreImplAssethomeAssetHomePageConfigurationInfo.h
 *
 * 
 */

#ifndef OAIComDayCqDamCoreImplAssethomeAssetHomePageConfigurationInfo_H_
#define OAIComDayCqDamCoreImplAssethomeAssetHomePageConfigurationInfo_H_

#include <QJsonObject>


#include "OAIOAIComDayCqDamCoreImplAssethomeAssetHomePageConfigurationProperties.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqDamCoreImplAssethomeAssetHomePageConfigurationInfo: public OAIObject {
public:
    OAIComDayCqDamCoreImplAssethomeAssetHomePageConfigurationInfo();
    OAIComDayCqDamCoreImplAssethomeAssetHomePageConfigurationInfo(QString json);
    ~OAIComDayCqDamCoreImplAssethomeAssetHomePageConfigurationInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComDayCqDamCoreImplAssethomeAssetHomePageConfigurationInfo* fromJson(QString jsonString) override;

    QString* getPid();
    void setPid(QString* pid);

    QString* getTitle();
    void setTitle(QString* title);

    QString* getDescription();
    void setDescription(QString* description);

    OAIComDayCqDamCoreImplAssethomeAssetHomePageConfigurationProperties* getProperties();
    void setProperties(OAIComDayCqDamCoreImplAssethomeAssetHomePageConfigurationProperties* properties);


    virtual bool isSet() override;

private:
    QString* pid;
    bool m_pid_isSet;

    QString* title;
    bool m_title_isSet;

    QString* description;
    bool m_description_isSet;

    OAIComDayCqDamCoreImplAssethomeAssetHomePageConfigurationProperties* properties;
    bool m_properties_isSet;

};

}

#endif /* OAIComDayCqDamCoreImplAssethomeAssetHomePageConfigurationInfo_H_ */