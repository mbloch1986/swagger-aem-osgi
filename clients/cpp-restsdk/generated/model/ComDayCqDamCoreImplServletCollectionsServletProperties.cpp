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



#include "ComDayCqDamCoreImplServletCollectionsServletProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComDayCqDamCoreImplServletCollectionsServletProperties::ComDayCqDamCoreImplServletCollectionsServletProperties()
{
    m_Cq_dam_batch_collections_propertiesIsSet = false;
    m_Cq_dam_batch_collections_limitIsSet = false;
}

ComDayCqDamCoreImplServletCollectionsServletProperties::~ComDayCqDamCoreImplServletCollectionsServletProperties()
{
}

void ComDayCqDamCoreImplServletCollectionsServletProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComDayCqDamCoreImplServletCollectionsServletProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Cq_dam_batch_collections_propertiesIsSet)
    {
        val[utility::conversions::to_string_t("cq.dam.batch.collections.properties")] = ModelBase::toJson(m_Cq_dam_batch_collections_properties);
    }
    if(m_Cq_dam_batch_collections_limitIsSet)
    {
        val[utility::conversions::to_string_t("cq.dam.batch.collections.limit")] = ModelBase::toJson(m_Cq_dam_batch_collections_limit);
    }

    return val;
}

void ComDayCqDamCoreImplServletCollectionsServletProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("cq.dam.batch.collections.properties")))
    {
        if(!val[utility::conversions::to_string_t("cq.dam.batch.collections.properties")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("cq.dam.batch.collections.properties")]);
            setCqDamBatchCollectionsProperties( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cq.dam.batch.collections.limit")))
    {
        if(!val[utility::conversions::to_string_t("cq.dam.batch.collections.limit")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("cq.dam.batch.collections.limit")]);
            setCqDamBatchCollectionsLimit( newItem );
        }
    }
}

void ComDayCqDamCoreImplServletCollectionsServletProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Cq_dam_batch_collections_propertiesIsSet)
    {
        if (m_Cq_dam_batch_collections_properties.get())
        {
            m_Cq_dam_batch_collections_properties->toMultipart(multipart, utility::conversions::to_string_t("cq.dam.batch.collections.properties."));
        }
    }
    if(m_Cq_dam_batch_collections_limitIsSet)
    {
        if (m_Cq_dam_batch_collections_limit.get())
        {
            m_Cq_dam_batch_collections_limit->toMultipart(multipart, utility::conversions::to_string_t("cq.dam.batch.collections.limit."));
        }
    }
}

void ComDayCqDamCoreImplServletCollectionsServletProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("cq.dam.batch.collections.properties")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("cq.dam.batch.collections.properties")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("cq.dam.batch.collections.properties."));
            setCqDamBatchCollectionsProperties( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("cq.dam.batch.collections.limit")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("cq.dam.batch.collections.limit")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("cq.dam.batch.collections.limit."));
            setCqDamBatchCollectionsLimit( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyArray> ComDayCqDamCoreImplServletCollectionsServletProperties::getCqDamBatchCollectionsProperties() const
{
    return m_Cq_dam_batch_collections_properties;
}


void ComDayCqDamCoreImplServletCollectionsServletProperties::setCqDamBatchCollectionsProperties(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Cq_dam_batch_collections_properties = value;
    m_Cq_dam_batch_collections_propertiesIsSet = true;
}
bool ComDayCqDamCoreImplServletCollectionsServletProperties::cqDamBatchCollectionsPropertiesIsSet() const
{
    return m_Cq_dam_batch_collections_propertiesIsSet;
}

void ComDayCqDamCoreImplServletCollectionsServletProperties::unsetCq_dam_batch_collections_properties()
{
    m_Cq_dam_batch_collections_propertiesIsSet = false;
}

std::shared_ptr<ConfigNodePropertyInteger> ComDayCqDamCoreImplServletCollectionsServletProperties::getCqDamBatchCollectionsLimit() const
{
    return m_Cq_dam_batch_collections_limit;
}


void ComDayCqDamCoreImplServletCollectionsServletProperties::setCqDamBatchCollectionsLimit(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Cq_dam_batch_collections_limit = value;
    m_Cq_dam_batch_collections_limitIsSet = true;
}
bool ComDayCqDamCoreImplServletCollectionsServletProperties::cqDamBatchCollectionsLimitIsSet() const
{
    return m_Cq_dam_batch_collections_limitIsSet;
}

void ComDayCqDamCoreImplServletCollectionsServletProperties::unsetCq_dam_batch_collections_limit()
{
    m_Cq_dam_batch_collections_limitIsSet = false;
}

}
}
}
}
