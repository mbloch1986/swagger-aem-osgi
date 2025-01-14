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
 * OAIComDayCqWcmCoreImplCommandsWCMCommandServletProperties.h
 *
 * 
 */

#ifndef OAIComDayCqWcmCoreImplCommandsWCMCommandServletProperties_H
#define OAIComDayCqWcmCoreImplCommandsWCMCommandServletProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyArray.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqWcmCoreImplCommandsWCMCommandServletProperties: public OAIObject {
public:
    OAIComDayCqWcmCoreImplCommandsWCMCommandServletProperties();
    OAIComDayCqWcmCoreImplCommandsWCMCommandServletProperties(QString json);
    ~OAIComDayCqWcmCoreImplCommandsWCMCommandServletProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray getWcmcommandservletDeleteWhitelist() const;
    void setWcmcommandservletDeleteWhitelist(const OAIConfigNodePropertyArray &wcmcommandservlet_delete_whitelist);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyArray wcmcommandservlet_delete_whitelist;
    bool m_wcmcommandservlet_delete_whitelist_isSet;

};

}

#endif // OAIComDayCqWcmCoreImplCommandsWCMCommandServletProperties_H
