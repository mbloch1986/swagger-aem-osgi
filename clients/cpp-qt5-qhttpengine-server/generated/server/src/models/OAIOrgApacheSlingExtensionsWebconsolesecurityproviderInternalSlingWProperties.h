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
 * OAIOrgApacheSlingExtensionsWebconsolesecurityproviderInternalSlingWProperties.h
 *
 * 
 */

#ifndef OAIOrgApacheSlingExtensionsWebconsolesecurityproviderInternalSlingWProperties_H
#define OAIOrgApacheSlingExtensionsWebconsolesecurityproviderInternalSlingWProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyArray.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrgApacheSlingExtensionsWebconsolesecurityproviderInternalSlingWProperties: public OAIObject {
public:
    OAIOrgApacheSlingExtensionsWebconsolesecurityproviderInternalSlingWProperties();
    OAIOrgApacheSlingExtensionsWebconsolesecurityproviderInternalSlingWProperties(QString json);
    ~OAIOrgApacheSlingExtensionsWebconsolesecurityproviderInternalSlingWProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray getUsers() const;
    void setUsers(const OAIConfigNodePropertyArray &users);

    OAIConfigNodePropertyArray getGroups() const;
    void setGroups(const OAIConfigNodePropertyArray &groups);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyArray users;
    bool m_users_isSet;

    OAIConfigNodePropertyArray groups;
    bool m_groups_isSet;

};

}

#endif // OAIOrgApacheSlingExtensionsWebconsolesecurityproviderInternalSlingWProperties_H