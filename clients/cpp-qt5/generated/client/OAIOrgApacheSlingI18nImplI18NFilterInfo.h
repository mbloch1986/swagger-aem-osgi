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
 * OAIOrgApacheSlingI18nImplI18NFilterInfo.h
 *
 * 
 */

#ifndef OAIOrgApacheSlingI18nImplI18NFilterInfo_H_
#define OAIOrgApacheSlingI18nImplI18NFilterInfo_H_

#include <QJsonObject>


#include "OAIOAIOrgApacheSlingI18nImplI18NFilterProperties.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrgApacheSlingI18nImplI18NFilterInfo: public OAIObject {
public:
    OAIOrgApacheSlingI18nImplI18NFilterInfo();
    OAIOrgApacheSlingI18nImplI18NFilterInfo(QString json);
    ~OAIOrgApacheSlingI18nImplI18NFilterInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIOrgApacheSlingI18nImplI18NFilterInfo* fromJson(QString jsonString) override;

    QString* getPid();
    void setPid(QString* pid);

    QString* getTitle();
    void setTitle(QString* title);

    QString* getDescription();
    void setDescription(QString* description);

    OAIOrgApacheSlingI18nImplI18NFilterProperties* getProperties();
    void setProperties(OAIOrgApacheSlingI18nImplI18NFilterProperties* properties);

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

    OAIOrgApacheSlingI18nImplI18NFilterProperties* properties;
    bool m_properties_isSet;

    QString* bundle_location;
    bool m_bundle_location_isSet;

    QString* service_location;
    bool m_service_location_isSet;

};

}

#endif /* OAIOrgApacheSlingI18nImplI18NFilterInfo_H_ */