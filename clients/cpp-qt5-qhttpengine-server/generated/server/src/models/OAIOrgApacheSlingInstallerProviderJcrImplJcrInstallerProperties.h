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
 * OAIOrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties.h
 *
 * 
 */

#ifndef OAIOrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties_H
#define OAIOrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyArray.h"
#include "OAIConfigNodePropertyBoolean.h"
#include "OAIConfigNodePropertyInteger.h"
#include "OAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties: public OAIObject {
public:
    OAIOrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties();
    OAIOrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties(QString json);
    ~OAIOrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray getHandlerSchemes() const;
    void setHandlerSchemes(const OAIConfigNodePropertyArray &handler_schemes);

    OAIConfigNodePropertyString getSlingJcrinstallFolderNameRegexp() const;
    void setSlingJcrinstallFolderNameRegexp(const OAIConfigNodePropertyString &sling_jcrinstall_folder_name_regexp);

    OAIConfigNodePropertyInteger getSlingJcrinstallFolderMaxDepth() const;
    void setSlingJcrinstallFolderMaxDepth(const OAIConfigNodePropertyInteger &sling_jcrinstall_folder_max_depth);

    OAIConfigNodePropertyArray getSlingJcrinstallSearchPath() const;
    void setSlingJcrinstallSearchPath(const OAIConfigNodePropertyArray &sling_jcrinstall_search_path);

    OAIConfigNodePropertyString getSlingJcrinstallNewConfigPath() const;
    void setSlingJcrinstallNewConfigPath(const OAIConfigNodePropertyString &sling_jcrinstall_new_config_path);

    OAIConfigNodePropertyString getSlingJcrinstallSignalPath() const;
    void setSlingJcrinstallSignalPath(const OAIConfigNodePropertyString &sling_jcrinstall_signal_path);

    OAIConfigNodePropertyBoolean getSlingJcrinstallEnableWriteback() const;
    void setSlingJcrinstallEnableWriteback(const OAIConfigNodePropertyBoolean &sling_jcrinstall_enable_writeback);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyArray handler_schemes;
    bool m_handler_schemes_isSet;

    OAIConfigNodePropertyString sling_jcrinstall_folder_name_regexp;
    bool m_sling_jcrinstall_folder_name_regexp_isSet;

    OAIConfigNodePropertyInteger sling_jcrinstall_folder_max_depth;
    bool m_sling_jcrinstall_folder_max_depth_isSet;

    OAIConfigNodePropertyArray sling_jcrinstall_search_path;
    bool m_sling_jcrinstall_search_path_isSet;

    OAIConfigNodePropertyString sling_jcrinstall_new_config_path;
    bool m_sling_jcrinstall_new_config_path_isSet;

    OAIConfigNodePropertyString sling_jcrinstall_signal_path;
    bool m_sling_jcrinstall_signal_path_isSet;

    OAIConfigNodePropertyBoolean sling_jcrinstall_enable_writeback;
    bool m_sling_jcrinstall_enable_writeback_isSet;

};

}

#endif // OAIOrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties_H
