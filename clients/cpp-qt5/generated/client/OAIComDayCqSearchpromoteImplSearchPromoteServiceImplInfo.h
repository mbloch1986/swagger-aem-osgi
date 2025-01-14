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
 * OAIComDayCqSearchpromoteImplSearchPromoteServiceImplInfo.h
 *
 * 
 */

#ifndef OAIComDayCqSearchpromoteImplSearchPromoteServiceImplInfo_H_
#define OAIComDayCqSearchpromoteImplSearchPromoteServiceImplInfo_H_

#include <QJsonObject>


#include "OAIOAIComDayCqSearchpromoteImplSearchPromoteServiceImplProperties.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqSearchpromoteImplSearchPromoteServiceImplInfo: public OAIObject {
public:
    OAIComDayCqSearchpromoteImplSearchPromoteServiceImplInfo();
    OAIComDayCqSearchpromoteImplSearchPromoteServiceImplInfo(QString json);
    ~OAIComDayCqSearchpromoteImplSearchPromoteServiceImplInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComDayCqSearchpromoteImplSearchPromoteServiceImplInfo* fromJson(QString jsonString) override;

    QString* getPid();
    void setPid(QString* pid);

    QString* getTitle();
    void setTitle(QString* title);

    QString* getDescription();
    void setDescription(QString* description);

    OAIComDayCqSearchpromoteImplSearchPromoteServiceImplProperties* getProperties();
    void setProperties(OAIComDayCqSearchpromoteImplSearchPromoteServiceImplProperties* properties);

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

    OAIComDayCqSearchpromoteImplSearchPromoteServiceImplProperties* properties;
    bool m_properties_isSet;

    QString* bundle_location;
    bool m_bundle_location_isSet;

    QString* service_location;
    bool m_service_location_isSet;

};

}

#endif /* OAIComDayCqSearchpromoteImplSearchPromoteServiceImplInfo_H_ */
