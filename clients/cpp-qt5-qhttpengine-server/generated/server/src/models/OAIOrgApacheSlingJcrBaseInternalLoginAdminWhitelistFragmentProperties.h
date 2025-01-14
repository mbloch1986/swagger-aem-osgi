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
 * OAIOrgApacheSlingJcrBaseInternalLoginAdminWhitelistFragmentProperties.h
 *
 * 
 */

#ifndef OAIOrgApacheSlingJcrBaseInternalLoginAdminWhitelistFragmentProperties_H
#define OAIOrgApacheSlingJcrBaseInternalLoginAdminWhitelistFragmentProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyArray.h"
#include "OAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrgApacheSlingJcrBaseInternalLoginAdminWhitelistFragmentProperties: public OAIObject {
public:
    OAIOrgApacheSlingJcrBaseInternalLoginAdminWhitelistFragmentProperties();
    OAIOrgApacheSlingJcrBaseInternalLoginAdminWhitelistFragmentProperties(QString json);
    ~OAIOrgApacheSlingJcrBaseInternalLoginAdminWhitelistFragmentProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyString getWhitelistName() const;
    void setWhitelistName(const OAIConfigNodePropertyString &whitelist_name);

    OAIConfigNodePropertyArray getWhitelistBundles() const;
    void setWhitelistBundles(const OAIConfigNodePropertyArray &whitelist_bundles);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyString whitelist_name;
    bool m_whitelist_name_isSet;

    OAIConfigNodePropertyArray whitelist_bundles;
    bool m_whitelist_bundles_isSet;

};

}

#endif // OAIOrgApacheSlingJcrBaseInternalLoginAdminWhitelistFragmentProperties_H
