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
 * OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties.h
 *
 * 
 */

#ifndef OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties_H_
#define OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyInteger.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties
    : public ModelBase
{
public:
    OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties();
    virtual ~OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyInteger getQueryLimitInMemory() const;
    void setQueryLimitInMemory(ConfigNodePropertyInteger const& value);
    bool queryLimitInMemoryIsSet() const;
    void unsetQueryLimitInMemory();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyInteger getQueryLimitReads() const;
    void setQueryLimitReads(ConfigNodePropertyInteger const& value);
    bool queryLimitReadsIsSet() const;
    void unsetQueryLimitReads();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getQueryFailTraversal() const;
    void setQueryFailTraversal(ConfigNodePropertyBoolean const& value);
    bool queryFailTraversalIsSet() const;
    void unsetQueryFailTraversal();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getFastQuerySize() const;
    void setFastQuerySize(ConfigNodePropertyBoolean const& value);
    bool fastQuerySizeIsSet() const;
    void unsetFastQuerySize();

protected:
    ConfigNodePropertyInteger m_QueryLimitInMemory;
    bool m_QueryLimitInMemoryIsSet;
    ConfigNodePropertyInteger m_QueryLimitReads;
    bool m_QueryLimitReadsIsSet;
    ConfigNodePropertyBoolean m_QueryFailTraversal;
    bool m_QueryFailTraversalIsSet;
    ConfigNodePropertyBoolean m_FastQuerySize;
    bool m_FastQuerySizeIsSet;
};

}
}
}
}

#endif /* OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties_H_ */
