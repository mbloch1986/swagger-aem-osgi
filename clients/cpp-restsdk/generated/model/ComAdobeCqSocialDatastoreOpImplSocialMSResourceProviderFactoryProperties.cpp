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



#include "ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties()
{
    m_Solr_zk_timeoutIsSet = false;
    m_Solr_commitIsSet = false;
    m_Cache_onIsSet = false;
    m_Concurrency_levelIsSet = false;
    m_Cache_start_sizeIsSet = false;
    m_Cache_ttlIsSet = false;
    m_Cache_sizeIsSet = false;
}

ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::~ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties()
{
}

void ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Solr_zk_timeoutIsSet)
    {
        val[utility::conversions::to_string_t("solr.zk.timeout")] = ModelBase::toJson(m_Solr_zk_timeout);
    }
    if(m_Solr_commitIsSet)
    {
        val[utility::conversions::to_string_t("solr.commit")] = ModelBase::toJson(m_Solr_commit);
    }
    if(m_Cache_onIsSet)
    {
        val[utility::conversions::to_string_t("cache.on")] = ModelBase::toJson(m_Cache_on);
    }
    if(m_Concurrency_levelIsSet)
    {
        val[utility::conversions::to_string_t("concurrency.level")] = ModelBase::toJson(m_Concurrency_level);
    }
    if(m_Cache_start_sizeIsSet)
    {
        val[utility::conversions::to_string_t("cache.start.size")] = ModelBase::toJson(m_Cache_start_size);
    }
    if(m_Cache_ttlIsSet)
    {
        val[utility::conversions::to_string_t("cache.ttl")] = ModelBase::toJson(m_Cache_ttl);
    }
    if(m_Cache_sizeIsSet)
    {
        val[utility::conversions::to_string_t("cache.size")] = ModelBase::toJson(m_Cache_size);
    }

    return val;
}

void ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("solr.zk.timeout")))
    {
        if(!val[utility::conversions::to_string_t("solr.zk.timeout")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("solr.zk.timeout")]);
            setSolrZkTimeout( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("solr.commit")))
    {
        if(!val[utility::conversions::to_string_t("solr.commit")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("solr.commit")]);
            setSolrCommit( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cache.on")))
    {
        if(!val[utility::conversions::to_string_t("cache.on")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("cache.on")]);
            setCacheOn( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("concurrency.level")))
    {
        if(!val[utility::conversions::to_string_t("concurrency.level")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("concurrency.level")]);
            setConcurrencyLevel( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cache.start.size")))
    {
        if(!val[utility::conversions::to_string_t("cache.start.size")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("cache.start.size")]);
            setCacheStartSize( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cache.ttl")))
    {
        if(!val[utility::conversions::to_string_t("cache.ttl")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("cache.ttl")]);
            setCacheTtl( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cache.size")))
    {
        if(!val[utility::conversions::to_string_t("cache.size")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("cache.size")]);
            setCacheSize( newItem );
        }
    }
}

void ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Solr_zk_timeoutIsSet)
    {
        if (m_Solr_zk_timeout.get())
        {
            m_Solr_zk_timeout->toMultipart(multipart, utility::conversions::to_string_t("solr.zk.timeout."));
        }
    }
    if(m_Solr_commitIsSet)
    {
        if (m_Solr_commit.get())
        {
            m_Solr_commit->toMultipart(multipart, utility::conversions::to_string_t("solr.commit."));
        }
    }
    if(m_Cache_onIsSet)
    {
        if (m_Cache_on.get())
        {
            m_Cache_on->toMultipart(multipart, utility::conversions::to_string_t("cache.on."));
        }
    }
    if(m_Concurrency_levelIsSet)
    {
        if (m_Concurrency_level.get())
        {
            m_Concurrency_level->toMultipart(multipart, utility::conversions::to_string_t("concurrency.level."));
        }
    }
    if(m_Cache_start_sizeIsSet)
    {
        if (m_Cache_start_size.get())
        {
            m_Cache_start_size->toMultipart(multipart, utility::conversions::to_string_t("cache.start.size."));
        }
    }
    if(m_Cache_ttlIsSet)
    {
        if (m_Cache_ttl.get())
        {
            m_Cache_ttl->toMultipart(multipart, utility::conversions::to_string_t("cache.ttl."));
        }
    }
    if(m_Cache_sizeIsSet)
    {
        if (m_Cache_size.get())
        {
            m_Cache_size->toMultipart(multipart, utility::conversions::to_string_t("cache.size."));
        }
    }
}

void ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("solr.zk.timeout")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("solr.zk.timeout")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("solr.zk.timeout."));
            setSolrZkTimeout( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("solr.commit")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("solr.commit")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("solr.commit."));
            setSolrCommit( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("cache.on")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("cache.on")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("cache.on."));
            setCacheOn( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("concurrency.level")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("concurrency.level")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("concurrency.level."));
            setConcurrencyLevel( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("cache.start.size")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("cache.start.size")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("cache.start.size."));
            setCacheStartSize( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("cache.ttl")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("cache.ttl")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("cache.ttl."));
            setCacheTtl( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("cache.size")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("cache.size")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("cache.size."));
            setCacheSize( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::getSolrZkTimeout() const
{
    return m_Solr_zk_timeout;
}


void ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::setSolrZkTimeout(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Solr_zk_timeout = value;
    m_Solr_zk_timeoutIsSet = true;
}
bool ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::solrZkTimeoutIsSet() const
{
    return m_Solr_zk_timeoutIsSet;
}

void ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::unsetSolr_zk_timeout()
{
    m_Solr_zk_timeoutIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::getSolrCommit() const
{
    return m_Solr_commit;
}


void ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::setSolrCommit(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Solr_commit = value;
    m_Solr_commitIsSet = true;
}
bool ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::solrCommitIsSet() const
{
    return m_Solr_commitIsSet;
}

void ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::unsetSolr_commit()
{
    m_Solr_commitIsSet = false;
}

std::shared_ptr<ConfigNodePropertyBoolean> ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::getCacheOn() const
{
    return m_Cache_on;
}


void ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::setCacheOn(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Cache_on = value;
    m_Cache_onIsSet = true;
}
bool ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::cacheOnIsSet() const
{
    return m_Cache_onIsSet;
}

void ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::unsetCache_on()
{
    m_Cache_onIsSet = false;
}

std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::getConcurrencyLevel() const
{
    return m_Concurrency_level;
}


void ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::setConcurrencyLevel(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Concurrency_level = value;
    m_Concurrency_levelIsSet = true;
}
bool ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::concurrencyLevelIsSet() const
{
    return m_Concurrency_levelIsSet;
}

void ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::unsetConcurrency_level()
{
    m_Concurrency_levelIsSet = false;
}

std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::getCacheStartSize() const
{
    return m_Cache_start_size;
}


void ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::setCacheStartSize(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Cache_start_size = value;
    m_Cache_start_sizeIsSet = true;
}
bool ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::cacheStartSizeIsSet() const
{
    return m_Cache_start_sizeIsSet;
}

void ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::unsetCache_start_size()
{
    m_Cache_start_sizeIsSet = false;
}

std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::getCacheTtl() const
{
    return m_Cache_ttl;
}


void ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::setCacheTtl(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Cache_ttl = value;
    m_Cache_ttlIsSet = true;
}
bool ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::cacheTtlIsSet() const
{
    return m_Cache_ttlIsSet;
}

void ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::unsetCache_ttl()
{
    m_Cache_ttlIsSet = false;
}

std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::getCacheSize() const
{
    return m_Cache_size;
}


void ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::setCacheSize(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Cache_size = value;
    m_Cache_sizeIsSet = true;
}
bool ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::cacheSizeIsSet() const
{
    return m_Cache_sizeIsSet;
}

void ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::unsetCache_size()
{
    m_Cache_sizeIsSet = false;
}

}
}
}
}
