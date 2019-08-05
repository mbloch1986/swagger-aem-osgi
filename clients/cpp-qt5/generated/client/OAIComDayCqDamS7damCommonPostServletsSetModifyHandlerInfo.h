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
 * OAIComDayCqDamS7damCommonPostServletsSetModifyHandlerInfo.h
 *
 * 
 */

#ifndef OAIComDayCqDamS7damCommonPostServletsSetModifyHandlerInfo_H_
#define OAIComDayCqDamS7damCommonPostServletsSetModifyHandlerInfo_H_

#include <QJsonObject>


#include "OAIOAIComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqDamS7damCommonPostServletsSetModifyHandlerInfo: public OAIObject {
public:
    OAIComDayCqDamS7damCommonPostServletsSetModifyHandlerInfo();
    OAIComDayCqDamS7damCommonPostServletsSetModifyHandlerInfo(QString json);
    ~OAIComDayCqDamS7damCommonPostServletsSetModifyHandlerInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComDayCqDamS7damCommonPostServletsSetModifyHandlerInfo* fromJson(QString jsonString) override;

    QString* getPid();
    void setPid(QString* pid);

    QString* getTitle();
    void setTitle(QString* title);

    QString* getDescription();
    void setDescription(QString* description);

    OAIComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties* getProperties();
    void setProperties(OAIComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties* properties);


    virtual bool isSet() override;

private:
    QString* pid;
    bool m_pid_isSet;

    QString* title;
    bool m_title_isSet;

    QString* description;
    bool m_description_isSet;

    OAIComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties* properties;
    bool m_properties_isSet;

};

}

#endif /* OAIComDayCqDamS7damCommonPostServletsSetModifyHandlerInfo_H_ */