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
 * OAIComDayCqWcmFoundationFormsImplMailServletInfo.h
 *
 * 
 */

#ifndef OAIComDayCqWcmFoundationFormsImplMailServletInfo_H_
#define OAIComDayCqWcmFoundationFormsImplMailServletInfo_H_

#include <QJsonObject>


#include "OAIOAIComDayCqWcmFoundationFormsImplMailServletProperties.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqWcmFoundationFormsImplMailServletInfo: public OAIObject {
public:
    OAIComDayCqWcmFoundationFormsImplMailServletInfo();
    OAIComDayCqWcmFoundationFormsImplMailServletInfo(QString json);
    ~OAIComDayCqWcmFoundationFormsImplMailServletInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComDayCqWcmFoundationFormsImplMailServletInfo* fromJson(QString jsonString) override;

    QString* getPid();
    void setPid(QString* pid);

    QString* getTitle();
    void setTitle(QString* title);

    QString* getDescription();
    void setDescription(QString* description);

    OAIComDayCqWcmFoundationFormsImplMailServletProperties* getProperties();
    void setProperties(OAIComDayCqWcmFoundationFormsImplMailServletProperties* properties);


    virtual bool isSet() override;

private:
    QString* pid;
    bool m_pid_isSet;

    QString* title;
    bool m_title_isSet;

    QString* description;
    bool m_description_isSet;

    OAIComDayCqWcmFoundationFormsImplMailServletProperties* properties;
    bool m_properties_isSet;

};

}

#endif /* OAIComDayCqWcmFoundationFormsImplMailServletInfo_H_ */
