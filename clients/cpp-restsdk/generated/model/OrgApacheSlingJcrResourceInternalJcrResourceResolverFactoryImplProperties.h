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

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_OrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_OrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyArray.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties
    : public ModelBase
{
public:
    OrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties();
    virtual ~OrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// OrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getResourceResolverSearchpath() const;
    bool resourceResolverSearchpathIsSet() const;
    void unsetResource_resolver_searchpath();
    void setResourceResolverSearchpath(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getResourceResolverManglenamespaces() const;
    bool resourceResolverManglenamespacesIsSet() const;
    void unsetResource_resolver_manglenamespaces();
    void setResourceResolverManglenamespaces(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getResourceResolverAllowDirect() const;
    bool resourceResolverAllowDirectIsSet() const;
    void unsetResource_resolver_allowDirect();
    void setResourceResolverAllowDirect(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getResourceResolverRequiredProviders() const;
    bool resourceResolverRequiredProvidersIsSet() const;
    void unsetResource_resolver_required_providers();
    void setResourceResolverRequiredProviders(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getResourceResolverRequiredProvidernames() const;
    bool resourceResolverRequiredProvidernamesIsSet() const;
    void unsetResource_resolver_required_providernames();
    void setResourceResolverRequiredProvidernames(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getResourceResolverVirtual() const;
    bool resourceResolverVirtualIsSet() const;
    void unsetResource_resolver_virtual();
    void setResourceResolverVirtual(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getResourceResolverMapping() const;
    bool resourceResolverMappingIsSet() const;
    void unsetResource_resolver_mapping();
    void setResourceResolverMapping(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getResourceResolverMapLocation() const;
    bool resourceResolverMapLocationIsSet() const;
    void unsetResource_resolver_map_location();
    void setResourceResolverMapLocation(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getResourceResolverMapObservation() const;
    bool resourceResolverMapObservationIsSet() const;
    void unsetResource_resolver_map_observation();
    void setResourceResolverMapObservation(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getResourceResolverDefaultVanityRedirectStatus() const;
    bool resourceResolverDefaultVanityRedirectStatusIsSet() const;
    void unsetResource_resolver_default_vanity_redirect_status();
    void setResourceResolverDefaultVanityRedirectStatus(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getResourceResolverEnableVanitypath() const;
    bool resourceResolverEnableVanitypathIsSet() const;
    void unsetResource_resolver_enable_vanitypath();
    void setResourceResolverEnableVanitypath(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getResourceResolverVanitypathMaxEntries() const;
    bool resourceResolverVanitypathMaxEntriesIsSet() const;
    void unsetResource_resolver_vanitypath_maxEntries();
    void setResourceResolverVanitypathMaxEntries(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getResourceResolverVanitypathMaxEntriesStartup() const;
    bool resourceResolverVanitypathMaxEntriesStartupIsSet() const;
    void unsetResource_resolver_vanitypath_maxEntries_startup();
    void setResourceResolverVanitypathMaxEntriesStartup(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getResourceResolverVanitypathBloomfilterMaxBytes() const;
    bool resourceResolverVanitypathBloomfilterMaxBytesIsSet() const;
    void unsetResource_resolver_vanitypath_bloomfilter_maxBytes();
    void setResourceResolverVanitypathBloomfilterMaxBytes(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getResourceResolverOptimizeAliasResolution() const;
    bool resourceResolverOptimizeAliasResolutionIsSet() const;
    void unsetResource_resolver_optimize_alias_resolution();
    void setResourceResolverOptimizeAliasResolution(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getResourceResolverVanitypathWhitelist() const;
    bool resourceResolverVanitypathWhitelistIsSet() const;
    void unsetResource_resolver_vanitypath_whitelist();
    void setResourceResolverVanitypathWhitelist(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getResourceResolverVanitypathBlacklist() const;
    bool resourceResolverVanitypathBlacklistIsSet() const;
    void unsetResource_resolver_vanitypath_blacklist();
    void setResourceResolverVanitypathBlacklist(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getResourceResolverVanityPrecedence() const;
    bool resourceResolverVanityPrecedenceIsSet() const;
    void unsetResource_resolver_vanity_precedence();
    void setResourceResolverVanityPrecedence(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getResourceResolverProviderhandlingParanoid() const;
    bool resourceResolverProviderhandlingParanoidIsSet() const;
    void unsetResource_resolver_providerhandling_paranoid();
    void setResourceResolverProviderhandlingParanoid(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getResourceResolverLogClosing() const;
    bool resourceResolverLogClosingIsSet() const;
    void unsetResource_resolver_log_closing();
    void setResourceResolverLogClosing(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getResourceResolverLogUnclosed() const;
    bool resourceResolverLogUnclosedIsSet() const;
    void unsetResource_resolver_log_unclosed();
    void setResourceResolverLogUnclosed(std::shared_ptr<ConfigNodePropertyBoolean> value);

protected:
    std::shared_ptr<ConfigNodePropertyArray> m_Resource_resolver_searchpath;
    bool m_Resource_resolver_searchpathIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Resource_resolver_manglenamespaces;
    bool m_Resource_resolver_manglenamespacesIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Resource_resolver_allowDirect;
    bool m_Resource_resolver_allowDirectIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_Resource_resolver_required_providers;
    bool m_Resource_resolver_required_providersIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_Resource_resolver_required_providernames;
    bool m_Resource_resolver_required_providernamesIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_Resource_resolver_virtual;
    bool m_Resource_resolver_virtualIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_Resource_resolver_mapping;
    bool m_Resource_resolver_mappingIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Resource_resolver_map_location;
    bool m_Resource_resolver_map_locationIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_Resource_resolver_map_observation;
    bool m_Resource_resolver_map_observationIsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_Resource_resolver_default_vanity_redirect_status;
    bool m_Resource_resolver_default_vanity_redirect_statusIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Resource_resolver_enable_vanitypath;
    bool m_Resource_resolver_enable_vanitypathIsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_Resource_resolver_vanitypath_maxEntries;
    bool m_Resource_resolver_vanitypath_maxEntriesIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Resource_resolver_vanitypath_maxEntries_startup;
    bool m_Resource_resolver_vanitypath_maxEntries_startupIsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_Resource_resolver_vanitypath_bloomfilter_maxBytes;
    bool m_Resource_resolver_vanitypath_bloomfilter_maxBytesIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Resource_resolver_optimize_alias_resolution;
    bool m_Resource_resolver_optimize_alias_resolutionIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_Resource_resolver_vanitypath_whitelist;
    bool m_Resource_resolver_vanitypath_whitelistIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_Resource_resolver_vanitypath_blacklist;
    bool m_Resource_resolver_vanitypath_blacklistIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Resource_resolver_vanity_precedence;
    bool m_Resource_resolver_vanity_precedenceIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Resource_resolver_providerhandling_paranoid;
    bool m_Resource_resolver_providerhandling_paranoidIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Resource_resolver_log_closing;
    bool m_Resource_resolver_log_closingIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Resource_resolver_log_unclosed;
    bool m_Resource_resolver_log_unclosedIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_OrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties_H_ */
