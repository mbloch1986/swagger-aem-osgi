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


#include "OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties(QString json) {
    this->fromJson(json);
}

OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties() {
    this->init();
}

OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::~OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties() {
    
}

void
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::init() {
    m_resource_resolver_searchpath_isSet = false;
    m_resource_resolver_manglenamespaces_isSet = false;
    m_resource_resolver_allow_direct_isSet = false;
    m_resource_resolver_required_providers_isSet = false;
    m_resource_resolver_required_providernames_isSet = false;
    m_resource_resolver_virtual_isSet = false;
    m_resource_resolver_mapping_isSet = false;
    m_resource_resolver_map_location_isSet = false;
    m_resource_resolver_map_observation_isSet = false;
    m_resource_resolver_default_vanity_redirect_status_isSet = false;
    m_resource_resolver_enable_vanitypath_isSet = false;
    m_resource_resolver_vanitypath_max_entries_isSet = false;
    m_resource_resolver_vanitypath_max_entries_startup_isSet = false;
    m_resource_resolver_vanitypath_bloomfilter_max_bytes_isSet = false;
    m_resource_resolver_optimize_alias_resolution_isSet = false;
    m_resource_resolver_vanitypath_whitelist_isSet = false;
    m_resource_resolver_vanitypath_blacklist_isSet = false;
    m_resource_resolver_vanity_precedence_isSet = false;
    m_resource_resolver_providerhandling_paranoid_isSet = false;
    m_resource_resolver_log_closing_isSet = false;
    m_resource_resolver_log_unclosed_isSet = false;
}

void
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(resource_resolver_searchpath, json[QString("resource.resolver.searchpath")]);
    
    ::OpenAPI::fromJsonValue(resource_resolver_manglenamespaces, json[QString("resource.resolver.manglenamespaces")]);
    
    ::OpenAPI::fromJsonValue(resource_resolver_allow_direct, json[QString("resource.resolver.allowDirect")]);
    
    ::OpenAPI::fromJsonValue(resource_resolver_required_providers, json[QString("resource.resolver.required.providers")]);
    
    ::OpenAPI::fromJsonValue(resource_resolver_required_providernames, json[QString("resource.resolver.required.providernames")]);
    
    ::OpenAPI::fromJsonValue(resource_resolver_virtual, json[QString("resource.resolver.virtual")]);
    
    ::OpenAPI::fromJsonValue(resource_resolver_mapping, json[QString("resource.resolver.mapping")]);
    
    ::OpenAPI::fromJsonValue(resource_resolver_map_location, json[QString("resource.resolver.map.location")]);
    
    ::OpenAPI::fromJsonValue(resource_resolver_map_observation, json[QString("resource.resolver.map.observation")]);
    
    ::OpenAPI::fromJsonValue(resource_resolver_default_vanity_redirect_status, json[QString("resource.resolver.default.vanity.redirect.status")]);
    
    ::OpenAPI::fromJsonValue(resource_resolver_enable_vanitypath, json[QString("resource.resolver.enable.vanitypath")]);
    
    ::OpenAPI::fromJsonValue(resource_resolver_vanitypath_max_entries, json[QString("resource.resolver.vanitypath.maxEntries")]);
    
    ::OpenAPI::fromJsonValue(resource_resolver_vanitypath_max_entries_startup, json[QString("resource.resolver.vanitypath.maxEntries.startup")]);
    
    ::OpenAPI::fromJsonValue(resource_resolver_vanitypath_bloomfilter_max_bytes, json[QString("resource.resolver.vanitypath.bloomfilter.maxBytes")]);
    
    ::OpenAPI::fromJsonValue(resource_resolver_optimize_alias_resolution, json[QString("resource.resolver.optimize.alias.resolution")]);
    
    ::OpenAPI::fromJsonValue(resource_resolver_vanitypath_whitelist, json[QString("resource.resolver.vanitypath.whitelist")]);
    
    ::OpenAPI::fromJsonValue(resource_resolver_vanitypath_blacklist, json[QString("resource.resolver.vanitypath.blacklist")]);
    
    ::OpenAPI::fromJsonValue(resource_resolver_vanity_precedence, json[QString("resource.resolver.vanity.precedence")]);
    
    ::OpenAPI::fromJsonValue(resource_resolver_providerhandling_paranoid, json[QString("resource.resolver.providerhandling.paranoid")]);
    
    ::OpenAPI::fromJsonValue(resource_resolver_log_closing, json[QString("resource.resolver.log.closing")]);
    
    ::OpenAPI::fromJsonValue(resource_resolver_log_unclosed, json[QString("resource.resolver.log.unclosed")]);
    
}

QString
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::asJsonObject() const {
    QJsonObject obj;
	if(resource_resolver_searchpath.isSet()){
        obj.insert(QString("resource.resolver.searchpath"), ::OpenAPI::toJsonValue(resource_resolver_searchpath));
    }
	if(resource_resolver_manglenamespaces.isSet()){
        obj.insert(QString("resource.resolver.manglenamespaces"), ::OpenAPI::toJsonValue(resource_resolver_manglenamespaces));
    }
	if(resource_resolver_allow_direct.isSet()){
        obj.insert(QString("resource.resolver.allowDirect"), ::OpenAPI::toJsonValue(resource_resolver_allow_direct));
    }
	if(resource_resolver_required_providers.isSet()){
        obj.insert(QString("resource.resolver.required.providers"), ::OpenAPI::toJsonValue(resource_resolver_required_providers));
    }
	if(resource_resolver_required_providernames.isSet()){
        obj.insert(QString("resource.resolver.required.providernames"), ::OpenAPI::toJsonValue(resource_resolver_required_providernames));
    }
	if(resource_resolver_virtual.isSet()){
        obj.insert(QString("resource.resolver.virtual"), ::OpenAPI::toJsonValue(resource_resolver_virtual));
    }
	if(resource_resolver_mapping.isSet()){
        obj.insert(QString("resource.resolver.mapping"), ::OpenAPI::toJsonValue(resource_resolver_mapping));
    }
	if(resource_resolver_map_location.isSet()){
        obj.insert(QString("resource.resolver.map.location"), ::OpenAPI::toJsonValue(resource_resolver_map_location));
    }
	if(resource_resolver_map_observation.isSet()){
        obj.insert(QString("resource.resolver.map.observation"), ::OpenAPI::toJsonValue(resource_resolver_map_observation));
    }
	if(resource_resolver_default_vanity_redirect_status.isSet()){
        obj.insert(QString("resource.resolver.default.vanity.redirect.status"), ::OpenAPI::toJsonValue(resource_resolver_default_vanity_redirect_status));
    }
	if(resource_resolver_enable_vanitypath.isSet()){
        obj.insert(QString("resource.resolver.enable.vanitypath"), ::OpenAPI::toJsonValue(resource_resolver_enable_vanitypath));
    }
	if(resource_resolver_vanitypath_max_entries.isSet()){
        obj.insert(QString("resource.resolver.vanitypath.maxEntries"), ::OpenAPI::toJsonValue(resource_resolver_vanitypath_max_entries));
    }
	if(resource_resolver_vanitypath_max_entries_startup.isSet()){
        obj.insert(QString("resource.resolver.vanitypath.maxEntries.startup"), ::OpenAPI::toJsonValue(resource_resolver_vanitypath_max_entries_startup));
    }
	if(resource_resolver_vanitypath_bloomfilter_max_bytes.isSet()){
        obj.insert(QString("resource.resolver.vanitypath.bloomfilter.maxBytes"), ::OpenAPI::toJsonValue(resource_resolver_vanitypath_bloomfilter_max_bytes));
    }
	if(resource_resolver_optimize_alias_resolution.isSet()){
        obj.insert(QString("resource.resolver.optimize.alias.resolution"), ::OpenAPI::toJsonValue(resource_resolver_optimize_alias_resolution));
    }
	if(resource_resolver_vanitypath_whitelist.isSet()){
        obj.insert(QString("resource.resolver.vanitypath.whitelist"), ::OpenAPI::toJsonValue(resource_resolver_vanitypath_whitelist));
    }
	if(resource_resolver_vanitypath_blacklist.isSet()){
        obj.insert(QString("resource.resolver.vanitypath.blacklist"), ::OpenAPI::toJsonValue(resource_resolver_vanitypath_blacklist));
    }
	if(resource_resolver_vanity_precedence.isSet()){
        obj.insert(QString("resource.resolver.vanity.precedence"), ::OpenAPI::toJsonValue(resource_resolver_vanity_precedence));
    }
	if(resource_resolver_providerhandling_paranoid.isSet()){
        obj.insert(QString("resource.resolver.providerhandling.paranoid"), ::OpenAPI::toJsonValue(resource_resolver_providerhandling_paranoid));
    }
	if(resource_resolver_log_closing.isSet()){
        obj.insert(QString("resource.resolver.log.closing"), ::OpenAPI::toJsonValue(resource_resolver_log_closing));
    }
	if(resource_resolver_log_unclosed.isSet()){
        obj.insert(QString("resource.resolver.log.unclosed"), ::OpenAPI::toJsonValue(resource_resolver_log_unclosed));
    }
    return obj;
}

OAIConfigNodePropertyArray
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::getResourceResolverSearchpath() const {
    return resource_resolver_searchpath;
}
void
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::setResourceResolverSearchpath(const OAIConfigNodePropertyArray &resource_resolver_searchpath) {
    this->resource_resolver_searchpath = resource_resolver_searchpath;
    this->m_resource_resolver_searchpath_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::getResourceResolverManglenamespaces() const {
    return resource_resolver_manglenamespaces;
}
void
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::setResourceResolverManglenamespaces(const OAIConfigNodePropertyBoolean &resource_resolver_manglenamespaces) {
    this->resource_resolver_manglenamespaces = resource_resolver_manglenamespaces;
    this->m_resource_resolver_manglenamespaces_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::getResourceResolverAllowDirect() const {
    return resource_resolver_allow_direct;
}
void
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::setResourceResolverAllowDirect(const OAIConfigNodePropertyBoolean &resource_resolver_allow_direct) {
    this->resource_resolver_allow_direct = resource_resolver_allow_direct;
    this->m_resource_resolver_allow_direct_isSet = true;
}

OAIConfigNodePropertyArray
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::getResourceResolverRequiredProviders() const {
    return resource_resolver_required_providers;
}
void
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::setResourceResolverRequiredProviders(const OAIConfigNodePropertyArray &resource_resolver_required_providers) {
    this->resource_resolver_required_providers = resource_resolver_required_providers;
    this->m_resource_resolver_required_providers_isSet = true;
}

OAIConfigNodePropertyArray
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::getResourceResolverRequiredProvidernames() const {
    return resource_resolver_required_providernames;
}
void
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::setResourceResolverRequiredProvidernames(const OAIConfigNodePropertyArray &resource_resolver_required_providernames) {
    this->resource_resolver_required_providernames = resource_resolver_required_providernames;
    this->m_resource_resolver_required_providernames_isSet = true;
}

OAIConfigNodePropertyArray
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::getResourceResolverVirtual() const {
    return resource_resolver_virtual;
}
void
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::setResourceResolverVirtual(const OAIConfigNodePropertyArray &resource_resolver_virtual) {
    this->resource_resolver_virtual = resource_resolver_virtual;
    this->m_resource_resolver_virtual_isSet = true;
}

OAIConfigNodePropertyArray
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::getResourceResolverMapping() const {
    return resource_resolver_mapping;
}
void
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::setResourceResolverMapping(const OAIConfigNodePropertyArray &resource_resolver_mapping) {
    this->resource_resolver_mapping = resource_resolver_mapping;
    this->m_resource_resolver_mapping_isSet = true;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::getResourceResolverMapLocation() const {
    return resource_resolver_map_location;
}
void
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::setResourceResolverMapLocation(const OAIConfigNodePropertyString &resource_resolver_map_location) {
    this->resource_resolver_map_location = resource_resolver_map_location;
    this->m_resource_resolver_map_location_isSet = true;
}

OAIConfigNodePropertyArray
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::getResourceResolverMapObservation() const {
    return resource_resolver_map_observation;
}
void
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::setResourceResolverMapObservation(const OAIConfigNodePropertyArray &resource_resolver_map_observation) {
    this->resource_resolver_map_observation = resource_resolver_map_observation;
    this->m_resource_resolver_map_observation_isSet = true;
}

OAIConfigNodePropertyInteger
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::getResourceResolverDefaultVanityRedirectStatus() const {
    return resource_resolver_default_vanity_redirect_status;
}
void
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::setResourceResolverDefaultVanityRedirectStatus(const OAIConfigNodePropertyInteger &resource_resolver_default_vanity_redirect_status) {
    this->resource_resolver_default_vanity_redirect_status = resource_resolver_default_vanity_redirect_status;
    this->m_resource_resolver_default_vanity_redirect_status_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::getResourceResolverEnableVanitypath() const {
    return resource_resolver_enable_vanitypath;
}
void
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::setResourceResolverEnableVanitypath(const OAIConfigNodePropertyBoolean &resource_resolver_enable_vanitypath) {
    this->resource_resolver_enable_vanitypath = resource_resolver_enable_vanitypath;
    this->m_resource_resolver_enable_vanitypath_isSet = true;
}

OAIConfigNodePropertyInteger
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::getResourceResolverVanitypathMaxEntries() const {
    return resource_resolver_vanitypath_max_entries;
}
void
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::setResourceResolverVanitypathMaxEntries(const OAIConfigNodePropertyInteger &resource_resolver_vanitypath_max_entries) {
    this->resource_resolver_vanitypath_max_entries = resource_resolver_vanitypath_max_entries;
    this->m_resource_resolver_vanitypath_max_entries_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::getResourceResolverVanitypathMaxEntriesStartup() const {
    return resource_resolver_vanitypath_max_entries_startup;
}
void
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::setResourceResolverVanitypathMaxEntriesStartup(const OAIConfigNodePropertyBoolean &resource_resolver_vanitypath_max_entries_startup) {
    this->resource_resolver_vanitypath_max_entries_startup = resource_resolver_vanitypath_max_entries_startup;
    this->m_resource_resolver_vanitypath_max_entries_startup_isSet = true;
}

OAIConfigNodePropertyInteger
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::getResourceResolverVanitypathBloomfilterMaxBytes() const {
    return resource_resolver_vanitypath_bloomfilter_max_bytes;
}
void
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::setResourceResolverVanitypathBloomfilterMaxBytes(const OAIConfigNodePropertyInteger &resource_resolver_vanitypath_bloomfilter_max_bytes) {
    this->resource_resolver_vanitypath_bloomfilter_max_bytes = resource_resolver_vanitypath_bloomfilter_max_bytes;
    this->m_resource_resolver_vanitypath_bloomfilter_max_bytes_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::getResourceResolverOptimizeAliasResolution() const {
    return resource_resolver_optimize_alias_resolution;
}
void
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::setResourceResolverOptimizeAliasResolution(const OAIConfigNodePropertyBoolean &resource_resolver_optimize_alias_resolution) {
    this->resource_resolver_optimize_alias_resolution = resource_resolver_optimize_alias_resolution;
    this->m_resource_resolver_optimize_alias_resolution_isSet = true;
}

OAIConfigNodePropertyArray
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::getResourceResolverVanitypathWhitelist() const {
    return resource_resolver_vanitypath_whitelist;
}
void
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::setResourceResolverVanitypathWhitelist(const OAIConfigNodePropertyArray &resource_resolver_vanitypath_whitelist) {
    this->resource_resolver_vanitypath_whitelist = resource_resolver_vanitypath_whitelist;
    this->m_resource_resolver_vanitypath_whitelist_isSet = true;
}

OAIConfigNodePropertyArray
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::getResourceResolverVanitypathBlacklist() const {
    return resource_resolver_vanitypath_blacklist;
}
void
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::setResourceResolverVanitypathBlacklist(const OAIConfigNodePropertyArray &resource_resolver_vanitypath_blacklist) {
    this->resource_resolver_vanitypath_blacklist = resource_resolver_vanitypath_blacklist;
    this->m_resource_resolver_vanitypath_blacklist_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::getResourceResolverVanityPrecedence() const {
    return resource_resolver_vanity_precedence;
}
void
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::setResourceResolverVanityPrecedence(const OAIConfigNodePropertyBoolean &resource_resolver_vanity_precedence) {
    this->resource_resolver_vanity_precedence = resource_resolver_vanity_precedence;
    this->m_resource_resolver_vanity_precedence_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::getResourceResolverProviderhandlingParanoid() const {
    return resource_resolver_providerhandling_paranoid;
}
void
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::setResourceResolverProviderhandlingParanoid(const OAIConfigNodePropertyBoolean &resource_resolver_providerhandling_paranoid) {
    this->resource_resolver_providerhandling_paranoid = resource_resolver_providerhandling_paranoid;
    this->m_resource_resolver_providerhandling_paranoid_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::getResourceResolverLogClosing() const {
    return resource_resolver_log_closing;
}
void
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::setResourceResolverLogClosing(const OAIConfigNodePropertyBoolean &resource_resolver_log_closing) {
    this->resource_resolver_log_closing = resource_resolver_log_closing;
    this->m_resource_resolver_log_closing_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::getResourceResolverLogUnclosed() const {
    return resource_resolver_log_unclosed;
}
void
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::setResourceResolverLogUnclosed(const OAIConfigNodePropertyBoolean &resource_resolver_log_unclosed) {
    this->resource_resolver_log_unclosed = resource_resolver_log_unclosed;
    this->m_resource_resolver_log_unclosed_isSet = true;
}


bool
OAIOrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(resource_resolver_searchpath.isSet()){ isObjectUpdated = true; break;}
    
        if(resource_resolver_manglenamespaces.isSet()){ isObjectUpdated = true; break;}
    
        if(resource_resolver_allow_direct.isSet()){ isObjectUpdated = true; break;}
    
        if(resource_resolver_required_providers.isSet()){ isObjectUpdated = true; break;}
    
        if(resource_resolver_required_providernames.isSet()){ isObjectUpdated = true; break;}
    
        if(resource_resolver_virtual.isSet()){ isObjectUpdated = true; break;}
    
        if(resource_resolver_mapping.isSet()){ isObjectUpdated = true; break;}
    
        if(resource_resolver_map_location.isSet()){ isObjectUpdated = true; break;}
    
        if(resource_resolver_map_observation.isSet()){ isObjectUpdated = true; break;}
    
        if(resource_resolver_default_vanity_redirect_status.isSet()){ isObjectUpdated = true; break;}
    
        if(resource_resolver_enable_vanitypath.isSet()){ isObjectUpdated = true; break;}
    
        if(resource_resolver_vanitypath_max_entries.isSet()){ isObjectUpdated = true; break;}
    
        if(resource_resolver_vanitypath_max_entries_startup.isSet()){ isObjectUpdated = true; break;}
    
        if(resource_resolver_vanitypath_bloomfilter_max_bytes.isSet()){ isObjectUpdated = true; break;}
    
        if(resource_resolver_optimize_alias_resolution.isSet()){ isObjectUpdated = true; break;}
    
        if(resource_resolver_vanitypath_whitelist.isSet()){ isObjectUpdated = true; break;}
    
        if(resource_resolver_vanitypath_blacklist.isSet()){ isObjectUpdated = true; break;}
    
        if(resource_resolver_vanity_precedence.isSet()){ isObjectUpdated = true; break;}
    
        if(resource_resolver_providerhandling_paranoid.isSet()){ isObjectUpdated = true; break;}
    
        if(resource_resolver_log_closing.isSet()){ isObjectUpdated = true; break;}
    
        if(resource_resolver_log_unclosed.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

