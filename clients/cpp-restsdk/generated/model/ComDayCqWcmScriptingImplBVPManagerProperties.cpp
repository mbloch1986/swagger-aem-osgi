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



#include "ComDayCqWcmScriptingImplBVPManagerProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComDayCqWcmScriptingImplBVPManagerProperties::ComDayCqWcmScriptingImplBVPManagerProperties()
{
    m_Com_day_cq_wcm_scripting_bvp_script_enginesIsSet = false;
}

ComDayCqWcmScriptingImplBVPManagerProperties::~ComDayCqWcmScriptingImplBVPManagerProperties()
{
}

void ComDayCqWcmScriptingImplBVPManagerProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComDayCqWcmScriptingImplBVPManagerProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Com_day_cq_wcm_scripting_bvp_script_enginesIsSet)
    {
        val[utility::conversions::to_string_t("com.day.cq.wcm.scripting.bvp.script.engines")] = ModelBase::toJson(m_Com_day_cq_wcm_scripting_bvp_script_engines);
    }

    return val;
}

void ComDayCqWcmScriptingImplBVPManagerProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("com.day.cq.wcm.scripting.bvp.script.engines")))
    {
        if(!val[utility::conversions::to_string_t("com.day.cq.wcm.scripting.bvp.script.engines")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("com.day.cq.wcm.scripting.bvp.script.engines")]);
            setComDayCqWcmScriptingBvpScriptEngines( newItem );
        }
    }
}

void ComDayCqWcmScriptingImplBVPManagerProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Com_day_cq_wcm_scripting_bvp_script_enginesIsSet)
    {
        if (m_Com_day_cq_wcm_scripting_bvp_script_engines.get())
        {
            m_Com_day_cq_wcm_scripting_bvp_script_engines->toMultipart(multipart, utility::conversions::to_string_t("com.day.cq.wcm.scripting.bvp.script.engines."));
        }
    }
}

void ComDayCqWcmScriptingImplBVPManagerProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("com.day.cq.wcm.scripting.bvp.script.engines")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("com.day.cq.wcm.scripting.bvp.script.engines")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("com.day.cq.wcm.scripting.bvp.script.engines."));
            setComDayCqWcmScriptingBvpScriptEngines( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyArray> ComDayCqWcmScriptingImplBVPManagerProperties::getComDayCqWcmScriptingBvpScriptEngines() const
{
    return m_Com_day_cq_wcm_scripting_bvp_script_engines;
}


void ComDayCqWcmScriptingImplBVPManagerProperties::setComDayCqWcmScriptingBvpScriptEngines(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Com_day_cq_wcm_scripting_bvp_script_engines = value;
    m_Com_day_cq_wcm_scripting_bvp_script_enginesIsSet = true;
}
bool ComDayCqWcmScriptingImplBVPManagerProperties::comDayCqWcmScriptingBvpScriptEnginesIsSet() const
{
    return m_Com_day_cq_wcm_scripting_bvp_script_enginesIsSet;
}

void ComDayCqWcmScriptingImplBVPManagerProperties::unsetCom_day_cq_wcm_scripting_bvp_script_engines()
{
    m_Com_day_cq_wcm_scripting_bvp_script_enginesIsSet = false;
}

}
}
}
}
