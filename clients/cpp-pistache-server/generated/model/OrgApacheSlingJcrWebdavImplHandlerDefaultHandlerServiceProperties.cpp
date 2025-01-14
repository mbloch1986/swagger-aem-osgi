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


#include "OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties::OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties()
{
    m_Service_rankingIsSet = false;
    m_Type_collectionsIsSet = false;
    m_Type_noncollectionsIsSet = false;
    m_Type_contentIsSet = false;
    
}

OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties::~OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties()
{
}

void OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Service_rankingIsSet)
    {
        val["service.ranking"] = ModelBase::toJson(m_Service_ranking);
    }
    if(m_Type_collectionsIsSet)
    {
        val["type.collections"] = ModelBase::toJson(m_Type_collections);
    }
    if(m_Type_noncollectionsIsSet)
    {
        val["type.noncollections"] = ModelBase::toJson(m_Type_noncollections);
    }
    if(m_Type_contentIsSet)
    {
        val["type.content"] = ModelBase::toJson(m_Type_content);
    }
    

    return val;
}

void OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties::fromJson(nlohmann::json& val)
{
    if(val.find("service.ranking") != val.end())
    {
        if(!val["service.ranking"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["service.ranking"]);
            setServiceRanking( newItem );
        }
        
    }
    if(val.find("type.collections") != val.end())
    {
        if(!val["type.collections"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["type.collections"]);
            setTypeCollections( newItem );
        }
        
    }
    if(val.find("type.noncollections") != val.end())
    {
        if(!val["type.noncollections"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["type.noncollections"]);
            setTypeNoncollections( newItem );
        }
        
    }
    if(val.find("type.content") != val.end())
    {
        if(!val["type.content"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["type.content"]);
            setTypeContent( newItem );
        }
        
    }
    
}


ConfigNodePropertyInteger OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties::getServiceRanking() const
{
    return m_Service_ranking;
}
void OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties::setServiceRanking(ConfigNodePropertyInteger const& value)
{
    m_Service_ranking = value;
    m_Service_rankingIsSet = true;
}
bool OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties::serviceRankingIsSet() const
{
    return m_Service_rankingIsSet;
}
void OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties::unsetService_ranking()
{
    m_Service_rankingIsSet = false;
}
ConfigNodePropertyString OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties::getTypeCollections() const
{
    return m_Type_collections;
}
void OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties::setTypeCollections(ConfigNodePropertyString const& value)
{
    m_Type_collections = value;
    m_Type_collectionsIsSet = true;
}
bool OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties::typeCollectionsIsSet() const
{
    return m_Type_collectionsIsSet;
}
void OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties::unsetType_collections()
{
    m_Type_collectionsIsSet = false;
}
ConfigNodePropertyString OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties::getTypeNoncollections() const
{
    return m_Type_noncollections;
}
void OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties::setTypeNoncollections(ConfigNodePropertyString const& value)
{
    m_Type_noncollections = value;
    m_Type_noncollectionsIsSet = true;
}
bool OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties::typeNoncollectionsIsSet() const
{
    return m_Type_noncollectionsIsSet;
}
void OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties::unsetType_noncollections()
{
    m_Type_noncollectionsIsSet = false;
}
ConfigNodePropertyString OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties::getTypeContent() const
{
    return m_Type_content;
}
void OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties::setTypeContent(ConfigNodePropertyString const& value)
{
    m_Type_content = value;
    m_Type_contentIsSet = true;
}
bool OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties::typeContentIsSet() const
{
    return m_Type_contentIsSet;
}
void OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties::unsetType_content()
{
    m_Type_contentIsSet = false;
}

}
}
}
}

