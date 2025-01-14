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



#include "ComAdobeCqDtmReactorImplServiceWebServiceImplProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeCqDtmReactorImplServiceWebServiceImplProperties::ComAdobeCqDtmReactorImplServiceWebServiceImplProperties()
{
    m_EndpointUriIsSet = false;
    m_ConnectionTimeoutIsSet = false;
    m_SocketTimeoutIsSet = false;
}

ComAdobeCqDtmReactorImplServiceWebServiceImplProperties::~ComAdobeCqDtmReactorImplServiceWebServiceImplProperties()
{
}

void ComAdobeCqDtmReactorImplServiceWebServiceImplProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeCqDtmReactorImplServiceWebServiceImplProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_EndpointUriIsSet)
    {
        val[utility::conversions::to_string_t("endpointUri")] = ModelBase::toJson(m_EndpointUri);
    }
    if(m_ConnectionTimeoutIsSet)
    {
        val[utility::conversions::to_string_t("connectionTimeout")] = ModelBase::toJson(m_ConnectionTimeout);
    }
    if(m_SocketTimeoutIsSet)
    {
        val[utility::conversions::to_string_t("socketTimeout")] = ModelBase::toJson(m_SocketTimeout);
    }

    return val;
}

void ComAdobeCqDtmReactorImplServiceWebServiceImplProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("endpointUri")))
    {
        if(!val[utility::conversions::to_string_t("endpointUri")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("endpointUri")]);
            setEndpointUri( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("connectionTimeout")))
    {
        if(!val[utility::conversions::to_string_t("connectionTimeout")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("connectionTimeout")]);
            setConnectionTimeout( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("socketTimeout")))
    {
        if(!val[utility::conversions::to_string_t("socketTimeout")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("socketTimeout")]);
            setSocketTimeout( newItem );
        }
    }
}

void ComAdobeCqDtmReactorImplServiceWebServiceImplProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_EndpointUriIsSet)
    {
        if (m_EndpointUri.get())
        {
            m_EndpointUri->toMultipart(multipart, utility::conversions::to_string_t("endpointUri."));
        }
    }
    if(m_ConnectionTimeoutIsSet)
    {
        if (m_ConnectionTimeout.get())
        {
            m_ConnectionTimeout->toMultipart(multipart, utility::conversions::to_string_t("connectionTimeout."));
        }
    }
    if(m_SocketTimeoutIsSet)
    {
        if (m_SocketTimeout.get())
        {
            m_SocketTimeout->toMultipart(multipart, utility::conversions::to_string_t("socketTimeout."));
        }
    }
}

void ComAdobeCqDtmReactorImplServiceWebServiceImplProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("endpointUri")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("endpointUri")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("endpointUri."));
            setEndpointUri( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("connectionTimeout")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("connectionTimeout")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("connectionTimeout."));
            setConnectionTimeout( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("socketTimeout")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("socketTimeout")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("socketTimeout."));
            setSocketTimeout( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeCqDtmReactorImplServiceWebServiceImplProperties::getEndpointUri() const
{
    return m_EndpointUri;
}


void ComAdobeCqDtmReactorImplServiceWebServiceImplProperties::setEndpointUri(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_EndpointUri = value;
    m_EndpointUriIsSet = true;
}
bool ComAdobeCqDtmReactorImplServiceWebServiceImplProperties::endpointUriIsSet() const
{
    return m_EndpointUriIsSet;
}

void ComAdobeCqDtmReactorImplServiceWebServiceImplProperties::unsetEndpointUri()
{
    m_EndpointUriIsSet = false;
}

std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqDtmReactorImplServiceWebServiceImplProperties::getConnectionTimeout() const
{
    return m_ConnectionTimeout;
}


void ComAdobeCqDtmReactorImplServiceWebServiceImplProperties::setConnectionTimeout(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_ConnectionTimeout = value;
    m_ConnectionTimeoutIsSet = true;
}
bool ComAdobeCqDtmReactorImplServiceWebServiceImplProperties::connectionTimeoutIsSet() const
{
    return m_ConnectionTimeoutIsSet;
}

void ComAdobeCqDtmReactorImplServiceWebServiceImplProperties::unsetConnectionTimeout()
{
    m_ConnectionTimeoutIsSet = false;
}

std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqDtmReactorImplServiceWebServiceImplProperties::getSocketTimeout() const
{
    return m_SocketTimeout;
}


void ComAdobeCqDtmReactorImplServiceWebServiceImplProperties::setSocketTimeout(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_SocketTimeout = value;
    m_SocketTimeoutIsSet = true;
}
bool ComAdobeCqDtmReactorImplServiceWebServiceImplProperties::socketTimeoutIsSet() const
{
    return m_SocketTimeoutIsSet;
}

void ComAdobeCqDtmReactorImplServiceWebServiceImplProperties::unsetSocketTimeout()
{
    m_SocketTimeoutIsSet = false;
}

}
}
}
}

