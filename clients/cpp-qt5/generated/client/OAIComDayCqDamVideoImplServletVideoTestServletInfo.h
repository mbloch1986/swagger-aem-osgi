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
 * OAIComDayCqDamVideoImplServletVideoTestServletInfo.h
 *
 * 
 */

#ifndef OAIComDayCqDamVideoImplServletVideoTestServletInfo_H_
#define OAIComDayCqDamVideoImplServletVideoTestServletInfo_H_

#include <QJsonObject>


#include "OAIOAIComDayCqDamVideoImplServletVideoTestServletProperties.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqDamVideoImplServletVideoTestServletInfo: public OAIObject {
public:
    OAIComDayCqDamVideoImplServletVideoTestServletInfo();
    OAIComDayCqDamVideoImplServletVideoTestServletInfo(QString json);
    ~OAIComDayCqDamVideoImplServletVideoTestServletInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComDayCqDamVideoImplServletVideoTestServletInfo* fromJson(QString jsonString) override;

    QString* getPid();
    void setPid(QString* pid);

    QString* getTitle();
    void setTitle(QString* title);

    QString* getDescription();
    void setDescription(QString* description);

    OAIComDayCqDamVideoImplServletVideoTestServletProperties* getProperties();
    void setProperties(OAIComDayCqDamVideoImplServletVideoTestServletProperties* properties);

    QString* getBundleLocation();
    void setBundleLocation(QString* bundle_location);

    QString* getServiceLocation();
    void setServiceLocation(QString* service_location);


    virtual bool isSet() override;

private:
    QString* pid;
    bool m_pid_isSet;

    QString* title;
    bool m_title_isSet;

    QString* description;
    bool m_description_isSet;

    OAIComDayCqDamVideoImplServletVideoTestServletProperties* properties;
    bool m_properties_isSet;

    QString* bundle_location;
    bool m_bundle_location_isSet;

    QString* service_location;
    bool m_service_location_isSet;

};

}

#endif /* OAIComDayCqDamVideoImplServletVideoTestServletInfo_H_ */