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



#include "ComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties::ComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties()
{
    m_Forward_requestsIsSet = false;
}

ComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties::~ComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties()
{
}

void ComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Forward_requestsIsSet)
    {
        val[utility::conversions::to_string_t("forward.requests")] = ModelBase::toJson(m_Forward_requests);
    }

    return val;
}

void ComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("forward.requests")))
    {
        if(!val[utility::conversions::to_string_t("forward.requests")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("forward.requests")]);
            setForwardRequests( newItem );
        }
    }
}

void ComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Forward_requestsIsSet)
    {
        if (m_Forward_requests.get())
        {
            m_Forward_requests->toMultipart(multipart, utility::conversions::to_string_t("forward.requests."));
        }
    }
}

void ComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("forward.requests")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("forward.requests")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("forward.requests."));
            setForwardRequests( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyBoolean> ComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties::getForwardRequests() const
{
    return m_Forward_requests;
}


void ComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties::setForwardRequests(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Forward_requests = value;
    m_Forward_requestsIsSet = true;
}
bool ComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties::forwardRequestsIsSet() const
{
    return m_Forward_requestsIsSet;
}

void ComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties::unsetForward_requests()
{
    m_Forward_requestsIsSet = false;
}

}
}
}
}

