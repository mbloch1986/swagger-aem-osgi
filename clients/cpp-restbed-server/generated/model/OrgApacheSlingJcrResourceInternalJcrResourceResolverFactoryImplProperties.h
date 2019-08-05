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
 * OrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties.h
 *
 * 
 */

#ifndef OrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties_H_
#define OrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties_H_



#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyArray.h"
#include "ConfigNodePropertyString.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties
{
public:
    OrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties();
    virtual ~OrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// OrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getResourceResolverSearchpath() const;
    void setResourceResolverSearchpath(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getResourceResolverManglenamespaces() const;
    void setResourceResolverManglenamespaces(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getResourceResolverAllowDirect() const;
    void setResourceResolverAllowDirect(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getResourceResolverRequiredProviders() const;
    void setResourceResolverRequiredProviders(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getResourceResolverRequiredProvidernames() const;
    void setResourceResolverRequiredProvidernames(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getResourceResolverVirtual() const;
    void setResourceResolverVirtual(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getResourceResolverMapping() const;
    void setResourceResolverMapping(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getResourceResolverMapLocation() const;
    void setResourceResolverMapLocation(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getResourceResolverMapObservation() const;
    void setResourceResolverMapObservation(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getResourceResolverDefaultVanityRedirectStatus() const;
    void setResourceResolverDefaultVanityRedirectStatus(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getResourceResolverEnableVanitypath() const;
    void setResourceResolverEnableVanitypath(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getResourceResolverVanitypathMaxEntries() const;
    void setResourceResolverVanitypathMaxEntries(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getResourceResolverVanitypathMaxEntriesStartup() const;
    void setResourceResolverVanitypathMaxEntriesStartup(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getResourceResolverVanitypathBloomfilterMaxBytes() const;
    void setResourceResolverVanitypathBloomfilterMaxBytes(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getResourceResolverOptimizeAliasResolution() const;
    void setResourceResolverOptimizeAliasResolution(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getResourceResolverVanitypathWhitelist() const;
    void setResourceResolverVanitypathWhitelist(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getResourceResolverVanitypathBlacklist() const;
    void setResourceResolverVanitypathBlacklist(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getResourceResolverVanityPrecedence() const;
    void setResourceResolverVanityPrecedence(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getResourceResolverProviderhandlingParanoid() const;
    void setResourceResolverProviderhandlingParanoid(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getResourceResolverLogClosing() const;
    void setResourceResolverLogClosing(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getResourceResolverLogUnclosed() const;
    void setResourceResolverLogUnclosed(std::shared_ptr<ConfigNodePropertyBoolean> value);

protected:
    std::shared_ptr<ConfigNodePropertyArray> m_Resource_resolver_searchpath;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Resource_resolver_manglenamespaces;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Resource_resolver_allowDirect;
    std::shared_ptr<ConfigNodePropertyArray> m_Resource_resolver_required_providers;
    std::shared_ptr<ConfigNodePropertyArray> m_Resource_resolver_required_providernames;
    std::shared_ptr<ConfigNodePropertyArray> m_Resource_resolver_virtual;
    std::shared_ptr<ConfigNodePropertyArray> m_Resource_resolver_mapping;
    std::shared_ptr<ConfigNodePropertyString> m_Resource_resolver_map_location;
    std::shared_ptr<ConfigNodePropertyArray> m_Resource_resolver_map_observation;
    std::shared_ptr<ConfigNodePropertyInteger> m_Resource_resolver_default_vanity_redirect_status;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Resource_resolver_enable_vanitypath;
    std::shared_ptr<ConfigNodePropertyInteger> m_Resource_resolver_vanitypath_maxEntries;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Resource_resolver_vanitypath_maxEntries_startup;
    std::shared_ptr<ConfigNodePropertyInteger> m_Resource_resolver_vanitypath_bloomfilter_maxBytes;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Resource_resolver_optimize_alias_resolution;
    std::shared_ptr<ConfigNodePropertyArray> m_Resource_resolver_vanitypath_whitelist;
    std::shared_ptr<ConfigNodePropertyArray> m_Resource_resolver_vanitypath_blacklist;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Resource_resolver_vanity_precedence;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Resource_resolver_providerhandling_paranoid;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Resource_resolver_log_closing;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Resource_resolver_log_unclosed;
};

}
}
}
}

#endif /* OrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties_H_ */