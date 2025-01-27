/**
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.2.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OrgApacheSlingCommonsLogLogManagerProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_OrgApacheSlingCommonsLogLogManagerProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_OrgApacheSlingCommonsLogLogManagerProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyDropDown.h"
#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheSlingCommonsLogLogManagerProperties
    : public ModelBase
{
public:
    OrgApacheSlingCommonsLogLogManagerProperties();
    virtual ~OrgApacheSlingCommonsLogLogManagerProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// OrgApacheSlingCommonsLogLogManagerProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyDropDown> getOrgApacheSlingCommonsLogLevel() const;
    bool orgApacheSlingCommonsLogLevelIsSet() const;
    void unsetOrg_apache_sling_commons_log_level();
    void setOrgApacheSlingCommonsLogLevel(std::shared_ptr<ConfigNodePropertyDropDown> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getOrgApacheSlingCommonsLogFile() const;
    bool orgApacheSlingCommonsLogFileIsSet() const;
    void unsetOrg_apache_sling_commons_log_file();
    void setOrgApacheSlingCommonsLogFile(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getOrgApacheSlingCommonsLogFileNumber() const;
    bool orgApacheSlingCommonsLogFileNumberIsSet() const;
    void unsetOrg_apache_sling_commons_log_file_number();
    void setOrgApacheSlingCommonsLogFileNumber(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getOrgApacheSlingCommonsLogFileSize() const;
    bool orgApacheSlingCommonsLogFileSizeIsSet() const;
    void unsetOrg_apache_sling_commons_log_file_size();
    void setOrgApacheSlingCommonsLogFileSize(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getOrgApacheSlingCommonsLogPattern() const;
    bool orgApacheSlingCommonsLogPatternIsSet() const;
    void unsetOrg_apache_sling_commons_log_pattern();
    void setOrgApacheSlingCommonsLogPattern(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getOrgApacheSlingCommonsLogConfigurationFile() const;
    bool orgApacheSlingCommonsLogConfigurationFileIsSet() const;
    void unsetOrg_apache_sling_commons_log_configurationFile();
    void setOrgApacheSlingCommonsLogConfigurationFile(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getOrgApacheSlingCommonsLogPackagingDataEnabled() const;
    bool orgApacheSlingCommonsLogPackagingDataEnabledIsSet() const;
    void unsetOrg_apache_sling_commons_log_packagingDataEnabled();
    void setOrgApacheSlingCommonsLogPackagingDataEnabled(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getOrgApacheSlingCommonsLogMaxCallerDataDepth() const;
    bool orgApacheSlingCommonsLogMaxCallerDataDepthIsSet() const;
    void unsetOrg_apache_sling_commons_log_maxCallerDataDepth();
    void setOrgApacheSlingCommonsLogMaxCallerDataDepth(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getOrgApacheSlingCommonsLogMaxOldFileCountInDump() const;
    bool orgApacheSlingCommonsLogMaxOldFileCountInDumpIsSet() const;
    void unsetOrg_apache_sling_commons_log_maxOldFileCountInDump();
    void setOrgApacheSlingCommonsLogMaxOldFileCountInDump(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getOrgApacheSlingCommonsLogNumOfLines() const;
    bool orgApacheSlingCommonsLogNumOfLinesIsSet() const;
    void unsetOrg_apache_sling_commons_log_numOfLines();
    void setOrgApacheSlingCommonsLogNumOfLines(std::shared_ptr<ConfigNodePropertyInteger> value);

protected:
    std::shared_ptr<ConfigNodePropertyDropDown> m_Org_apache_sling_commons_log_level;
    bool m_Org_apache_sling_commons_log_levelIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Org_apache_sling_commons_log_file;
    bool m_Org_apache_sling_commons_log_fileIsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_Org_apache_sling_commons_log_file_number;
    bool m_Org_apache_sling_commons_log_file_numberIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Org_apache_sling_commons_log_file_size;
    bool m_Org_apache_sling_commons_log_file_sizeIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Org_apache_sling_commons_log_pattern;
    bool m_Org_apache_sling_commons_log_patternIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Org_apache_sling_commons_log_configurationFile;
    bool m_Org_apache_sling_commons_log_configurationFileIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Org_apache_sling_commons_log_packagingDataEnabled;
    bool m_Org_apache_sling_commons_log_packagingDataEnabledIsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_Org_apache_sling_commons_log_maxCallerDataDepth;
    bool m_Org_apache_sling_commons_log_maxCallerDataDepthIsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_Org_apache_sling_commons_log_maxOldFileCountInDump;
    bool m_Org_apache_sling_commons_log_maxOldFileCountInDumpIsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_Org_apache_sling_commons_log_numOfLines;
    bool m_Org_apache_sling_commons_log_numOfLinesIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_OrgApacheSlingCommonsLogLogManagerProperties_H_ */
