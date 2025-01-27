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
 * OAIComDayCqWcmCoreImplServletsFindReplaceServletInfo.h
 *
 * 
 */

#ifndef OAIComDayCqWcmCoreImplServletsFindReplaceServletInfo_H_
#define OAIComDayCqWcmCoreImplServletsFindReplaceServletInfo_H_

#include <QJsonObject>


#include "OAIOAIComDayCqWcmCoreImplServletsFindReplaceServletProperties.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqWcmCoreImplServletsFindReplaceServletInfo: public OAIObject {
public:
    OAIComDayCqWcmCoreImplServletsFindReplaceServletInfo();
    OAIComDayCqWcmCoreImplServletsFindReplaceServletInfo(QString json);
    ~OAIComDayCqWcmCoreImplServletsFindReplaceServletInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComDayCqWcmCoreImplServletsFindReplaceServletInfo* fromJson(QString jsonString) override;

    QString* getPid();
    void setPid(QString* pid);

    QString* getTitle();
    void setTitle(QString* title);

    QString* getDescription();
    void setDescription(QString* description);

    OAIComDayCqWcmCoreImplServletsFindReplaceServletProperties* getProperties();
    void setProperties(OAIComDayCqWcmCoreImplServletsFindReplaceServletProperties* properties);


    virtual bool isSet() override;

private:
    QString* pid;
    bool m_pid_isSet;

    QString* title;
    bool m_title_isSet;

    QString* description;
    bool m_description_isSet;

    OAIComDayCqWcmCoreImplServletsFindReplaceServletProperties* properties;
    bool m_properties_isSet;

};

}

#endif /* OAIComDayCqWcmCoreImplServletsFindReplaceServletInfo_H_ */
