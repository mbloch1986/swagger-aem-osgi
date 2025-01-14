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
 * OAIComDayCqDamCoreImplServletAssetXMPSearchServletInfo.h
 *
 * 
 */

#ifndef OAIComDayCqDamCoreImplServletAssetXMPSearchServletInfo_H_
#define OAIComDayCqDamCoreImplServletAssetXMPSearchServletInfo_H_

#include <QJsonObject>


#include "OAIOAIComDayCqDamCoreImplServletAssetXMPSearchServletProperties.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqDamCoreImplServletAssetXMPSearchServletInfo: public OAIObject {
public:
    OAIComDayCqDamCoreImplServletAssetXMPSearchServletInfo();
    OAIComDayCqDamCoreImplServletAssetXMPSearchServletInfo(QString json);
    ~OAIComDayCqDamCoreImplServletAssetXMPSearchServletInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComDayCqDamCoreImplServletAssetXMPSearchServletInfo* fromJson(QString jsonString) override;

    QString* getPid();
    void setPid(QString* pid);

    QString* getTitle();
    void setTitle(QString* title);

    QString* getDescription();
    void setDescription(QString* description);

    OAIComDayCqDamCoreImplServletAssetXMPSearchServletProperties* getProperties();
    void setProperties(OAIComDayCqDamCoreImplServletAssetXMPSearchServletProperties* properties);


    virtual bool isSet() override;

private:
    QString* pid;
    bool m_pid_isSet;

    QString* title;
    bool m_title_isSet;

    QString* description;
    bool m_description_isSet;

    OAIComDayCqDamCoreImplServletAssetXMPSearchServletProperties* properties;
    bool m_properties_isSet;

};

}

#endif /* OAIComDayCqDamCoreImplServletAssetXMPSearchServletInfo_H_ */
