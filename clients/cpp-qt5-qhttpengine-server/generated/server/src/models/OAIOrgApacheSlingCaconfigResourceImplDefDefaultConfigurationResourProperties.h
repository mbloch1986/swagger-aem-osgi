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
 * OAIOrgApacheSlingCaconfigResourceImplDefDefaultConfigurationResourProperties.h
 *
 * 
 */

#ifndef OAIOrgApacheSlingCaconfigResourceImplDefDefaultConfigurationResourProperties_H
#define OAIOrgApacheSlingCaconfigResourceImplDefDefaultConfigurationResourProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyArray.h"
#include "OAIConfigNodePropertyBoolean.h"
#include "OAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrgApacheSlingCaconfigResourceImplDefDefaultConfigurationResourProperties: public OAIObject {
public:
    OAIOrgApacheSlingCaconfigResourceImplDefDefaultConfigurationResourProperties();
    OAIOrgApacheSlingCaconfigResourceImplDefDefaultConfigurationResourProperties(QString json);
    ~OAIOrgApacheSlingCaconfigResourceImplDefDefaultConfigurationResourProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyBoolean getEnabled() const;
    void setEnabled(const OAIConfigNodePropertyBoolean &enabled);

    OAIConfigNodePropertyString getConfigPath() const;
    void setConfigPath(const OAIConfigNodePropertyString &config_path);

    OAIConfigNodePropertyArray getFallbackPaths() const;
    void setFallbackPaths(const OAIConfigNodePropertyArray &fallback_paths);

    OAIConfigNodePropertyArray getConfigCollectionInheritancePropertyNames() const;
    void setConfigCollectionInheritancePropertyNames(const OAIConfigNodePropertyArray &config_collection_inheritance_property_names);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyBoolean enabled;
    bool m_enabled_isSet;

    OAIConfigNodePropertyString config_path;
    bool m_config_path_isSet;

    OAIConfigNodePropertyArray fallback_paths;
    bool m_fallback_paths_isSet;

    OAIConfigNodePropertyArray config_collection_inheritance_property_names;
    bool m_config_collection_inheritance_property_names_isSet;

};

}

#endif // OAIOrgApacheSlingCaconfigResourceImplDefDefaultConfigurationResourProperties_H
