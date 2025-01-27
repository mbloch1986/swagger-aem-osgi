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



#include "ComDayCqWcmMsmImplLiveRelationshipManagerImplProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComDayCqWcmMsmImplLiveRelationshipManagerImplProperties::ComDayCqWcmMsmImplLiveRelationshipManagerImplProperties()
{
    m_Liverelationshipmgr_relationsconfig_defaultIsSet = false;
}

ComDayCqWcmMsmImplLiveRelationshipManagerImplProperties::~ComDayCqWcmMsmImplLiveRelationshipManagerImplProperties()
{
}

void ComDayCqWcmMsmImplLiveRelationshipManagerImplProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComDayCqWcmMsmImplLiveRelationshipManagerImplProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Liverelationshipmgr_relationsconfig_defaultIsSet)
    {
        val[utility::conversions::to_string_t("liverelationshipmgr.relationsconfig.default")] = ModelBase::toJson(m_Liverelationshipmgr_relationsconfig_default);
    }

    return val;
}

void ComDayCqWcmMsmImplLiveRelationshipManagerImplProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("liverelationshipmgr.relationsconfig.default")))
    {
        if(!val[utility::conversions::to_string_t("liverelationshipmgr.relationsconfig.default")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("liverelationshipmgr.relationsconfig.default")]);
            setLiverelationshipmgrRelationsconfigDefault( newItem );
        }
    }
}

void ComDayCqWcmMsmImplLiveRelationshipManagerImplProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Liverelationshipmgr_relationsconfig_defaultIsSet)
    {
        if (m_Liverelationshipmgr_relationsconfig_default.get())
        {
            m_Liverelationshipmgr_relationsconfig_default->toMultipart(multipart, utility::conversions::to_string_t("liverelationshipmgr.relationsconfig.default."));
        }
    }
}

void ComDayCqWcmMsmImplLiveRelationshipManagerImplProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("liverelationshipmgr.relationsconfig.default")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("liverelationshipmgr.relationsconfig.default")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("liverelationshipmgr.relationsconfig.default."));
            setLiverelationshipmgrRelationsconfigDefault( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyString> ComDayCqWcmMsmImplLiveRelationshipManagerImplProperties::getLiverelationshipmgrRelationsconfigDefault() const
{
    return m_Liverelationshipmgr_relationsconfig_default;
}


void ComDayCqWcmMsmImplLiveRelationshipManagerImplProperties::setLiverelationshipmgrRelationsconfigDefault(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Liverelationshipmgr_relationsconfig_default = value;
    m_Liverelationshipmgr_relationsconfig_defaultIsSet = true;
}
bool ComDayCqWcmMsmImplLiveRelationshipManagerImplProperties::liverelationshipmgrRelationsconfigDefaultIsSet() const
{
    return m_Liverelationshipmgr_relationsconfig_defaultIsSet;
}

void ComDayCqWcmMsmImplLiveRelationshipManagerImplProperties::unsetLiverelationshipmgr_relationsconfig_default()
{
    m_Liverelationshipmgr_relationsconfig_defaultIsSet = false;
}

}
}
}
}

