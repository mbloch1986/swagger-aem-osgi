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
 * OAIComDayCqWcmCoreImplServletsContentfinderPageViewHandlerInfo.h
 *
 * 
 */

#ifndef OAIComDayCqWcmCoreImplServletsContentfinderPageViewHandlerInfo_H_
#define OAIComDayCqWcmCoreImplServletsContentfinderPageViewHandlerInfo_H_

#include <QJsonObject>


#include "OAIOAIComDayCqWcmCoreImplServletsContentfinderPageViewHandlerProperties.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqWcmCoreImplServletsContentfinderPageViewHandlerInfo: public OAIObject {
public:
    OAIComDayCqWcmCoreImplServletsContentfinderPageViewHandlerInfo();
    OAIComDayCqWcmCoreImplServletsContentfinderPageViewHandlerInfo(QString json);
    ~OAIComDayCqWcmCoreImplServletsContentfinderPageViewHandlerInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComDayCqWcmCoreImplServletsContentfinderPageViewHandlerInfo* fromJson(QString jsonString) override;

    QString* getPid();
    void setPid(QString* pid);

    QString* getTitle();
    void setTitle(QString* title);

    QString* getDescription();
    void setDescription(QString* description);

    OAIComDayCqWcmCoreImplServletsContentfinderPageViewHandlerProperties* getProperties();
    void setProperties(OAIComDayCqWcmCoreImplServletsContentfinderPageViewHandlerProperties* properties);


    virtual bool isSet() override;

private:
    QString* pid;
    bool m_pid_isSet;

    QString* title;
    bool m_title_isSet;

    QString* description;
    bool m_description_isSet;

    OAIComDayCqWcmCoreImplServletsContentfinderPageViewHandlerProperties* properties;
    bool m_properties_isSet;

};

}

#endif /* OAIComDayCqWcmCoreImplServletsContentfinderPageViewHandlerInfo_H_ */
