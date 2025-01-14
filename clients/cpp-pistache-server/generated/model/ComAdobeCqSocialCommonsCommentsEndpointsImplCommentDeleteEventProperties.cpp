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


#include "ComAdobeCqSocialCommonsCommentsEndpointsImplCommentDeleteEventProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComAdobeCqSocialCommonsCommentsEndpointsImplCommentDeleteEventProperties::ComAdobeCqSocialCommonsCommentsEndpointsImplCommentDeleteEventProperties()
{
    m_RankingIsSet = false;
    
}

ComAdobeCqSocialCommonsCommentsEndpointsImplCommentDeleteEventProperties::~ComAdobeCqSocialCommonsCommentsEndpointsImplCommentDeleteEventProperties()
{
}

void ComAdobeCqSocialCommonsCommentsEndpointsImplCommentDeleteEventProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComAdobeCqSocialCommonsCommentsEndpointsImplCommentDeleteEventProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_RankingIsSet)
    {
        val["ranking"] = ModelBase::toJson(m_Ranking);
    }
    

    return val;
}

void ComAdobeCqSocialCommonsCommentsEndpointsImplCommentDeleteEventProperties::fromJson(nlohmann::json& val)
{
    if(val.find("ranking") != val.end())
    {
        if(!val["ranking"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["ranking"]);
            setRanking( newItem );
        }
        
    }
    
}


ConfigNodePropertyInteger ComAdobeCqSocialCommonsCommentsEndpointsImplCommentDeleteEventProperties::getRanking() const
{
    return m_Ranking;
}
void ComAdobeCqSocialCommonsCommentsEndpointsImplCommentDeleteEventProperties::setRanking(ConfigNodePropertyInteger const& value)
{
    m_Ranking = value;
    m_RankingIsSet = true;
}
bool ComAdobeCqSocialCommonsCommentsEndpointsImplCommentDeleteEventProperties::rankingIsSet() const
{
    return m_RankingIsSet;
}
void ComAdobeCqSocialCommonsCommentsEndpointsImplCommentDeleteEventProperties::unsetRanking()
{
    m_RankingIsSet = false;
}

}
}
}
}

