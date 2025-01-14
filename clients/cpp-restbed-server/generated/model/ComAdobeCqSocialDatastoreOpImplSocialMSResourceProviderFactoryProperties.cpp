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

#include <string>
#include <sstream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties()
{
    
}

ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::~ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties()
{
}

std::string ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	write_json(ss, pt, false);
	return ss.str();
}

void ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::getSolrZkTimeout() const
{
    return m_Solr_zk_timeout;
}
void ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::setSolrZkTimeout(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Solr_zk_timeout = value;
}
std::shared_ptr<ConfigNodePropertyString> ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::getSolrCommit() const
{
    return m_Solr_commit;
}
void ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::setSolrCommit(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Solr_commit = value;
}
std::shared_ptr<ConfigNodePropertyBoolean> ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::getCacheOn() const
{
    return m_Cache_on;
}
void ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::setCacheOn(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Cache_on = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::getConcurrencyLevel() const
{
    return m_Concurrency_level;
}
void ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::setConcurrencyLevel(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Concurrency_level = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::getCacheStartSize() const
{
    return m_Cache_start_size;
}
void ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::setCacheStartSize(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Cache_start_size = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::getCacheTtl() const
{
    return m_Cache_ttl;
}
void ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::setCacheTtl(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Cache_ttl = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::getCacheSize() const
{
    return m_Cache_size;
}
void ComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties::setCacheSize(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Cache_size = value;
}

}
}
}
}

