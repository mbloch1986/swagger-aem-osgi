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


#include "ComDayCqSearchSuggestImplSuggestionIndexManagerImplProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComDayCqSearchSuggestImplSuggestionIndexManagerImplProperties::ComDayCqSearchSuggestImplSuggestionIndexManagerImplProperties()
{
    m_PathBuilder_targetIsSet = false;
    m_Suggest_basepathIsSet = false;
    
}

ComDayCqSearchSuggestImplSuggestionIndexManagerImplProperties::~ComDayCqSearchSuggestImplSuggestionIndexManagerImplProperties()
{
}

void ComDayCqSearchSuggestImplSuggestionIndexManagerImplProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComDayCqSearchSuggestImplSuggestionIndexManagerImplProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_PathBuilder_targetIsSet)
    {
        val["pathBuilder.target"] = ModelBase::toJson(m_PathBuilder_target);
    }
    if(m_Suggest_basepathIsSet)
    {
        val["suggest.basepath"] = ModelBase::toJson(m_Suggest_basepath);
    }
    

    return val;
}

void ComDayCqSearchSuggestImplSuggestionIndexManagerImplProperties::fromJson(nlohmann::json& val)
{
    if(val.find("pathBuilder.target") != val.end())
    {
        if(!val["pathBuilder.target"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["pathBuilder.target"]);
            setPathBuilderTarget( newItem );
        }
        
    }
    if(val.find("suggest.basepath") != val.end())
    {
        if(!val["suggest.basepath"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["suggest.basepath"]);
            setSuggestBasepath( newItem );
        }
        
    }
    
}


ConfigNodePropertyString ComDayCqSearchSuggestImplSuggestionIndexManagerImplProperties::getPathBuilderTarget() const
{
    return m_PathBuilder_target;
}
void ComDayCqSearchSuggestImplSuggestionIndexManagerImplProperties::setPathBuilderTarget(ConfigNodePropertyString const& value)
{
    m_PathBuilder_target = value;
    m_PathBuilder_targetIsSet = true;
}
bool ComDayCqSearchSuggestImplSuggestionIndexManagerImplProperties::pathBuilderTargetIsSet() const
{
    return m_PathBuilder_targetIsSet;
}
void ComDayCqSearchSuggestImplSuggestionIndexManagerImplProperties::unsetPathBuilder_target()
{
    m_PathBuilder_targetIsSet = false;
}
ConfigNodePropertyString ComDayCqSearchSuggestImplSuggestionIndexManagerImplProperties::getSuggestBasepath() const
{
    return m_Suggest_basepath;
}
void ComDayCqSearchSuggestImplSuggestionIndexManagerImplProperties::setSuggestBasepath(ConfigNodePropertyString const& value)
{
    m_Suggest_basepath = value;
    m_Suggest_basepathIsSet = true;
}
bool ComDayCqSearchSuggestImplSuggestionIndexManagerImplProperties::suggestBasepathIsSet() const
{
    return m_Suggest_basepathIsSet;
}
void ComDayCqSearchSuggestImplSuggestionIndexManagerImplProperties::unsetSuggest_basepath()
{
    m_Suggest_basepathIsSet = false;
}

}
}
}
}

