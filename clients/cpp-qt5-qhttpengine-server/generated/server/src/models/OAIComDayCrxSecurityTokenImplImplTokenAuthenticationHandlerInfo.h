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
 * OAIComDayCrxSecurityTokenImplImplTokenAuthenticationHandlerInfo.h
 *
 * 
 */

#ifndef OAIComDayCrxSecurityTokenImplImplTokenAuthenticationHandlerInfo_H
#define OAIComDayCrxSecurityTokenImplImplTokenAuthenticationHandlerInfo_H

#include <QJsonObject>


#include "OAIComDayCrxSecurityTokenImplImplTokenAuthenticationHandlerProperties.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCrxSecurityTokenImplImplTokenAuthenticationHandlerInfo: public OAIObject {
public:
    OAIComDayCrxSecurityTokenImplImplTokenAuthenticationHandlerInfo();
    OAIComDayCrxSecurityTokenImplImplTokenAuthenticationHandlerInfo(QString json);
    ~OAIComDayCrxSecurityTokenImplImplTokenAuthenticationHandlerInfo() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getPid() const;
    void setPid(const QString &pid);

    QString getTitle() const;
    void setTitle(const QString &title);

    QString getDescription() const;
    void setDescription(const QString &description);

    OAIComDayCrxSecurityTokenImplImplTokenAuthenticationHandlerProperties getProperties() const;
    void setProperties(const OAIComDayCrxSecurityTokenImplImplTokenAuthenticationHandlerProperties &properties);

    QString getBundleLocation() const;
    void setBundleLocation(const QString &bundle_location);

    QString getServiceLocation() const;
    void setServiceLocation(const QString &service_location);

    virtual bool isSet() const override;

private:
    QString pid;
    bool m_pid_isSet;

    QString title;
    bool m_title_isSet;

    QString description;
    bool m_description_isSet;

    OAIComDayCrxSecurityTokenImplImplTokenAuthenticationHandlerProperties properties;
    bool m_properties_isSet;

    QString bundle_location;
    bool m_bundle_location_isSet;

    QString service_location;
    bool m_service_location_isSet;

};

}

#endif // OAIComDayCrxSecurityTokenImplImplTokenAuthenticationHandlerInfo_H
