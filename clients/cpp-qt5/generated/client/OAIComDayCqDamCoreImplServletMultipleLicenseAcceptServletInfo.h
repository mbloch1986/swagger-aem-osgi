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
 * OAIComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo.h
 *
 * 
 */

#ifndef OAIComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo_H_
#define OAIComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo_H_

#include <QJsonObject>


#include "OAIOAIComDayCqDamCoreImplServletMultipleLicenseAcceptServletProperties.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo: public OAIObject {
public:
    OAIComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo();
    OAIComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo(QString json);
    ~OAIComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo* fromJson(QString jsonString) override;

    QString* getPid();
    void setPid(QString* pid);

    QString* getTitle();
    void setTitle(QString* title);

    QString* getDescription();
    void setDescription(QString* description);

    OAIComDayCqDamCoreImplServletMultipleLicenseAcceptServletProperties* getProperties();
    void setProperties(OAIComDayCqDamCoreImplServletMultipleLicenseAcceptServletProperties* properties);


    virtual bool isSet() override;

private:
    QString* pid;
    bool m_pid_isSet;

    QString* title;
    bool m_title_isSet;

    QString* description;
    bool m_description_isSet;

    OAIComDayCqDamCoreImplServletMultipleLicenseAcceptServletProperties* properties;
    bool m_properties_isSet;

};

}

#endif /* OAIComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo_H_ */
