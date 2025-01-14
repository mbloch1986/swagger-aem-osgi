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



#include "ComDayCqWcmDesignimporterImplCanvasBuilderImplProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComDayCqWcmDesignimporterImplCanvasBuilderImplProperties::ComDayCqWcmDesignimporterImplCanvasBuilderImplProperties()
{
    m_FilepatternIsSet = false;
    m_Build_page_nodesIsSet = false;
    m_Build_client_libsIsSet = false;
    m_Build_canvas_componentIsSet = false;
}

ComDayCqWcmDesignimporterImplCanvasBuilderImplProperties::~ComDayCqWcmDesignimporterImplCanvasBuilderImplProperties()
{
}

void ComDayCqWcmDesignimporterImplCanvasBuilderImplProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComDayCqWcmDesignimporterImplCanvasBuilderImplProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_FilepatternIsSet)
    {
        val[utility::conversions::to_string_t("filepattern")] = ModelBase::toJson(m_Filepattern);
    }
    if(m_Build_page_nodesIsSet)
    {
        val[utility::conversions::to_string_t("build.page.nodes")] = ModelBase::toJson(m_Build_page_nodes);
    }
    if(m_Build_client_libsIsSet)
    {
        val[utility::conversions::to_string_t("build.client.libs")] = ModelBase::toJson(m_Build_client_libs);
    }
    if(m_Build_canvas_componentIsSet)
    {
        val[utility::conversions::to_string_t("build.canvas.component")] = ModelBase::toJson(m_Build_canvas_component);
    }

    return val;
}

void ComDayCqWcmDesignimporterImplCanvasBuilderImplProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("filepattern")))
    {
        if(!val[utility::conversions::to_string_t("filepattern")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("filepattern")]);
            setFilepattern( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build.page.nodes")))
    {
        if(!val[utility::conversions::to_string_t("build.page.nodes")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("build.page.nodes")]);
            setBuildPageNodes( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build.client.libs")))
    {
        if(!val[utility::conversions::to_string_t("build.client.libs")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("build.client.libs")]);
            setBuildClientLibs( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build.canvas.component")))
    {
        if(!val[utility::conversions::to_string_t("build.canvas.component")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("build.canvas.component")]);
            setBuildCanvasComponent( newItem );
        }
    }
}

void ComDayCqWcmDesignimporterImplCanvasBuilderImplProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_FilepatternIsSet)
    {
        if (m_Filepattern.get())
        {
            m_Filepattern->toMultipart(multipart, utility::conversions::to_string_t("filepattern."));
        }
    }
    if(m_Build_page_nodesIsSet)
    {
        if (m_Build_page_nodes.get())
        {
            m_Build_page_nodes->toMultipart(multipart, utility::conversions::to_string_t("build.page.nodes."));
        }
    }
    if(m_Build_client_libsIsSet)
    {
        if (m_Build_client_libs.get())
        {
            m_Build_client_libs->toMultipart(multipart, utility::conversions::to_string_t("build.client.libs."));
        }
    }
    if(m_Build_canvas_componentIsSet)
    {
        if (m_Build_canvas_component.get())
        {
            m_Build_canvas_component->toMultipart(multipart, utility::conversions::to_string_t("build.canvas.component."));
        }
    }
}

void ComDayCqWcmDesignimporterImplCanvasBuilderImplProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("filepattern")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("filepattern")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("filepattern."));
            setFilepattern( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("build.page.nodes")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("build.page.nodes")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("build.page.nodes."));
            setBuildPageNodes( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("build.client.libs")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("build.client.libs")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("build.client.libs."));
            setBuildClientLibs( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("build.canvas.component")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("build.canvas.component")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("build.canvas.component."));
            setBuildCanvasComponent( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyString> ComDayCqWcmDesignimporterImplCanvasBuilderImplProperties::getFilepattern() const
{
    return m_Filepattern;
}


void ComDayCqWcmDesignimporterImplCanvasBuilderImplProperties::setFilepattern(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Filepattern = value;
    m_FilepatternIsSet = true;
}
bool ComDayCqWcmDesignimporterImplCanvasBuilderImplProperties::filepatternIsSet() const
{
    return m_FilepatternIsSet;
}

void ComDayCqWcmDesignimporterImplCanvasBuilderImplProperties::unsetFilepattern()
{
    m_FilepatternIsSet = false;
}

std::shared_ptr<ConfigNodePropertyBoolean> ComDayCqWcmDesignimporterImplCanvasBuilderImplProperties::getBuildPageNodes() const
{
    return m_Build_page_nodes;
}


void ComDayCqWcmDesignimporterImplCanvasBuilderImplProperties::setBuildPageNodes(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Build_page_nodes = value;
    m_Build_page_nodesIsSet = true;
}
bool ComDayCqWcmDesignimporterImplCanvasBuilderImplProperties::buildPageNodesIsSet() const
{
    return m_Build_page_nodesIsSet;
}

void ComDayCqWcmDesignimporterImplCanvasBuilderImplProperties::unsetBuild_page_nodes()
{
    m_Build_page_nodesIsSet = false;
}

std::shared_ptr<ConfigNodePropertyBoolean> ComDayCqWcmDesignimporterImplCanvasBuilderImplProperties::getBuildClientLibs() const
{
    return m_Build_client_libs;
}


void ComDayCqWcmDesignimporterImplCanvasBuilderImplProperties::setBuildClientLibs(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Build_client_libs = value;
    m_Build_client_libsIsSet = true;
}
bool ComDayCqWcmDesignimporterImplCanvasBuilderImplProperties::buildClientLibsIsSet() const
{
    return m_Build_client_libsIsSet;
}

void ComDayCqWcmDesignimporterImplCanvasBuilderImplProperties::unsetBuild_client_libs()
{
    m_Build_client_libsIsSet = false;
}

std::shared_ptr<ConfigNodePropertyBoolean> ComDayCqWcmDesignimporterImplCanvasBuilderImplProperties::getBuildCanvasComponent() const
{
    return m_Build_canvas_component;
}


void ComDayCqWcmDesignimporterImplCanvasBuilderImplProperties::setBuildCanvasComponent(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Build_canvas_component = value;
    m_Build_canvas_componentIsSet = true;
}
bool ComDayCqWcmDesignimporterImplCanvasBuilderImplProperties::buildCanvasComponentIsSet() const
{
    return m_Build_canvas_componentIsSet;
}

void ComDayCqWcmDesignimporterImplCanvasBuilderImplProperties::unsetBuild_canvas_component()
{
    m_Build_canvas_componentIsSet = false;
}

}
}
}
}

