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
 * OAIOrgApacheAriesJmxFrameworkStateConfigProperties.h
 *
 * 
 */

#ifndef OAIOrgApacheAriesJmxFrameworkStateConfigProperties_H
#define OAIOrgApacheAriesJmxFrameworkStateConfigProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyBoolean.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrgApacheAriesJmxFrameworkStateConfigProperties: public OAIObject {
public:
    OAIOrgApacheAriesJmxFrameworkStateConfigProperties();
    OAIOrgApacheAriesJmxFrameworkStateConfigProperties(QString json);
    ~OAIOrgApacheAriesJmxFrameworkStateConfigProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyBoolean getAttributeChangeNotificationEnabled() const;
    void setAttributeChangeNotificationEnabled(const OAIConfigNodePropertyBoolean &attribute_change_notification_enabled);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyBoolean attribute_change_notification_enabled;
    bool m_attribute_change_notification_enabled_isSet;

};

}

#endif // OAIOrgApacheAriesJmxFrameworkStateConfigProperties_H