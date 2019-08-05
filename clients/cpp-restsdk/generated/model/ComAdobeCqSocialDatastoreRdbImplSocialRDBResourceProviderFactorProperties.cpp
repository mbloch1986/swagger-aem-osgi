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



#include "ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorProperties::ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorProperties()
{
    m_Solr_zk_timeoutIsSet = false;
    m_Solr_commitIsSet = false;
    m_Cache_onIsSet = false;
    m_Concurrency_levelIsSet = false;
    m_Cache_start_sizeIsSet = false;
    m_Cache_ttlIsSet = false;
    m_Cache_sizeIsSet = false;
}

ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorProperties::~ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorProperties()
{
}

void ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorProperties::toJson() const
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

void ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorProperties::fromJson(web::json::value& val)
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

void ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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

void ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

std::shared_ptr<ConfigNodePropertyString> ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorProperties::getSolrZkTimeout() const
{
    return m_Solr_zk_timeout;
}


void ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorProperties::setSolrZkTimeout(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Solr_zk_timeout = value;
    m_Solr_zk_timeoutIsSet = true;
}
bool ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorProperties::solrZkTimeoutIsSet() const
{
    return m_Solr_zk_timeoutIsSet;
}

void ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorProperties::unsetSolr_zk_timeout()
{
    m_Solr_zk_timeoutIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorProperties::getSolrCommit() const
{
    return m_Solr_commit;
}


void ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorProperties::setSolrCommit(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Solr_commit = value;
    m_Solr_commitIsSet = true;
}
bool ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorProperties::solrCommitIsSet() const
{
    return m_Solr_commitIsSet;
}

void ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorProperties::unsetSolr_commit()
{
    m_Solr_commitIsSet = false;
}

std::shared_ptr<ConfigNodePropertyBoolean> ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorProperties::getCacheOn() const
{
    return m_Cache_on;
}


void ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorProperties::setCacheOn(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Cache_on = value;
    m_Cache_onIsSet = true;
}
bool ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorProperties::cacheOnIsSet() const
{
    return m_Cache_onIsSet;
}

void ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorProperties::unsetCache_on()
{
    m_Cache_onIsSet = false;
}

std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorProperties::getConcurrencyLevel() const
{
    return m_Concurrency_level;
}


void ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorProperties::setConcurrencyLevel(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Concurrency_level = value;
    m_Concurrency_levelIsSet = true;
}
bool ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorProperties::concurrencyLevelIsSet() const
{
    return m_Concurrency_levelIsSet;
}

void ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorProperties::unsetConcurrency_level()
{
    m_Concurrency_levelIsSet = false;
}

std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorProperties::getCacheStartSize() const
{
    return m_Cache_start_size;
}


void ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorProperties::setCacheStartSize(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Cache_start_size = value;
    m_Cache_start_sizeIsSet = true;
}
bool ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorProperties::cacheStartSizeIsSet() const
{
    return m_Cache_start_sizeIsSet;
}

void ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorProperties::unsetCache_start_size()
{
    m_Cache_start_sizeIsSet = false;
}

std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorProperties::getCacheTtl() const
{
    return m_Cache_ttl;
}


void ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorProperties::setCacheTtl(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Cache_ttl = value;
    m_Cache_ttlIsSet = true;
}
bool ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorProperties::cacheTtlIsSet() const
{
    return m_Cache_ttlIsSet;
}

void ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorProperties::unsetCache_ttl()
{
    m_Cache_ttlIsSet = false;
}

std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorProperties::getCacheSize() const
{
    return m_Cache_size;
}


void ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorProperties::setCacheSize(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Cache_size = value;
    m_Cache_sizeIsSet = true;
}
bool ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorProperties::cacheSizeIsSet() const
{
    return m_Cache_sizeIsSet;
}

void ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorProperties::unsetCache_size()
{
    m_Cache_sizeIsSet = false;
}

}
}
}
}
