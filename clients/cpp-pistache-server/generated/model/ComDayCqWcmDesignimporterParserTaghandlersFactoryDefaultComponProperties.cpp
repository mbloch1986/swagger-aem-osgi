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


#include "ComDayCqWcmDesignimporterParserTaghandlersFactoryDefaultComponProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComDayCqWcmDesignimporterParserTaghandlersFactoryDefaultComponProperties::ComDayCqWcmDesignimporterParserTaghandlersFactoryDefaultComponProperties()
{
    m_Service_rankingIsSet = false;
    m_TagpatternIsSet = false;
    
}

ComDayCqWcmDesignimporterParserTaghandlersFactoryDefaultComponProperties::~ComDayCqWcmDesignimporterParserTaghandlersFactoryDefaultComponProperties()
{
}

void ComDayCqWcmDesignimporterParserTaghandlersFactoryDefaultComponProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComDayCqWcmDesignimporterParserTaghandlersFactoryDefaultComponProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Service_rankingIsSet)
    {
        val["service.ranking"] = ModelBase::toJson(m_Service_ranking);
    }
    if(m_TagpatternIsSet)
    {
        val["tagpattern"] = ModelBase::toJson(m_Tagpattern);
    }
    

    return val;
}

void ComDayCqWcmDesignimporterParserTaghandlersFactoryDefaultComponProperties::fromJson(nlohmann::json& val)
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
    if(val.find("tagpattern") != val.end())
    {
        if(!val["tagpattern"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["tagpattern"]);
            setTagpattern( newItem );
        }
        
    }
    
}


ConfigNodePropertyInteger ComDayCqWcmDesignimporterParserTaghandlersFactoryDefaultComponProperties::getServiceRanking() const
{
    return m_Service_ranking;
}
void ComDayCqWcmDesignimporterParserTaghandlersFactoryDefaultComponProperties::setServiceRanking(ConfigNodePropertyInteger const& value)
{
    m_Service_ranking = value;
    m_Service_rankingIsSet = true;
}
bool ComDayCqWcmDesignimporterParserTaghandlersFactoryDefaultComponProperties::serviceRankingIsSet() const
{
    return m_Service_rankingIsSet;
}
void ComDayCqWcmDesignimporterParserTaghandlersFactoryDefaultComponProperties::unsetService_ranking()
{
    m_Service_rankingIsSet = false;
}
ConfigNodePropertyString ComDayCqWcmDesignimporterParserTaghandlersFactoryDefaultComponProperties::getTagpattern() const
{
    return m_Tagpattern;
}
void ComDayCqWcmDesignimporterParserTaghandlersFactoryDefaultComponProperties::setTagpattern(ConfigNodePropertyString const& value)
{
    m_Tagpattern = value;
    m_TagpatternIsSet = true;
}
bool ComDayCqWcmDesignimporterParserTaghandlersFactoryDefaultComponProperties::tagpatternIsSet() const
{
    return m_TagpatternIsSet;
}
void ComDayCqWcmDesignimporterParserTaghandlersFactoryDefaultComponProperties::unsetTagpattern()
{
    m_TagpatternIsSet = false;
}

}
}
}
}
