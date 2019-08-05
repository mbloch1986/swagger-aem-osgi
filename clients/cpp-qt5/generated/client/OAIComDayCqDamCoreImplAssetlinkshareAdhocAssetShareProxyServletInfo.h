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
 * OAIComDayCqDamCoreImplAssetlinkshareAdhocAssetShareProxyServletInfo.h
 *
 * 
 */

#ifndef OAIComDayCqDamCoreImplAssetlinkshareAdhocAssetShareProxyServletInfo_H_
#define OAIComDayCqDamCoreImplAssetlinkshareAdhocAssetShareProxyServletInfo_H_

#include <QJsonObject>


#include "OAIOAIComDayCqDamCoreImplAssetlinkshareAdhocAssetShareProxyServletProperties.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqDamCoreImplAssetlinkshareAdhocAssetShareProxyServletInfo: public OAIObject {
public:
    OAIComDayCqDamCoreImplAssetlinkshareAdhocAssetShareProxyServletInfo();
    OAIComDayCqDamCoreImplAssetlinkshareAdhocAssetShareProxyServletInfo(QString json);
    ~OAIComDayCqDamCoreImplAssetlinkshareAdhocAssetShareProxyServletInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComDayCqDamCoreImplAssetlinkshareAdhocAssetShareProxyServletInfo* fromJson(QString jsonString) override;

    QString* getPid();
    void setPid(QString* pid);

    QString* getTitle();
    void setTitle(QString* title);

    QString* getDescription();
    void setDescription(QString* description);

    OAIComDayCqDamCoreImplAssetlinkshareAdhocAssetShareProxyServletProperties* getProperties();
    void setProperties(OAIComDayCqDamCoreImplAssetlinkshareAdhocAssetShareProxyServletProperties* properties);


    virtual bool isSet() override;

private:
    QString* pid;
    bool m_pid_isSet;

    QString* title;
    bool m_title_isSet;

    QString* description;
    bool m_description_isSet;

    OAIComDayCqDamCoreImplAssetlinkshareAdhocAssetShareProxyServletProperties* properties;
    bool m_properties_isSet;

};

}

#endif /* OAIComDayCqDamCoreImplAssetlinkshareAdhocAssetShareProxyServletInfo_H_ */