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


#include "ComDayCqDamS7damCommonPostServletsSetCreateHandlerProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComDayCqDamS7damCommonPostServletsSetCreateHandlerProperties::ComDayCqDamS7damCommonPostServletsSetCreateHandlerProperties()
{
    m_Sling_post_operationIsSet = false;
    m_Sling_servlet_methodsIsSet = false;
    
}

ComDayCqDamS7damCommonPostServletsSetCreateHandlerProperties::~ComDayCqDamS7damCommonPostServletsSetCreateHandlerProperties()
{
}

void ComDayCqDamS7damCommonPostServletsSetCreateHandlerProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComDayCqDamS7damCommonPostServletsSetCreateHandlerProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Sling_post_operationIsSet)
    {
        val["sling.post.operation"] = ModelBase::toJson(m_Sling_post_operation);
    }
    if(m_Sling_servlet_methodsIsSet)
    {
        val["sling.servlet.methods"] = ModelBase::toJson(m_Sling_servlet_methods);
    }
    

    return val;
}

void ComDayCqDamS7damCommonPostServletsSetCreateHandlerProperties::fromJson(nlohmann::json& val)
{
    if(val.find("sling.post.operation") != val.end())
    {
        if(!val["sling.post.operation"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["sling.post.operation"]);
            setSlingPostOperation( newItem );
        }
        
    }
    if(val.find("sling.servlet.methods") != val.end())
    {
        if(!val["sling.servlet.methods"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["sling.servlet.methods"]);
            setSlingServletMethods( newItem );
        }
        
    }
    
}


ConfigNodePropertyString ComDayCqDamS7damCommonPostServletsSetCreateHandlerProperties::getSlingPostOperation() const
{
    return m_Sling_post_operation;
}
void ComDayCqDamS7damCommonPostServletsSetCreateHandlerProperties::setSlingPostOperation(ConfigNodePropertyString const& value)
{
    m_Sling_post_operation = value;
    m_Sling_post_operationIsSet = true;
}
bool ComDayCqDamS7damCommonPostServletsSetCreateHandlerProperties::slingPostOperationIsSet() const
{
    return m_Sling_post_operationIsSet;
}
void ComDayCqDamS7damCommonPostServletsSetCreateHandlerProperties::unsetSling_post_operation()
{
    m_Sling_post_operationIsSet = false;
}
ConfigNodePropertyString ComDayCqDamS7damCommonPostServletsSetCreateHandlerProperties::getSlingServletMethods() const
{
    return m_Sling_servlet_methods;
}
void ComDayCqDamS7damCommonPostServletsSetCreateHandlerProperties::setSlingServletMethods(ConfigNodePropertyString const& value)
{
    m_Sling_servlet_methods = value;
    m_Sling_servlet_methodsIsSet = true;
}
bool ComDayCqDamS7damCommonPostServletsSetCreateHandlerProperties::slingServletMethodsIsSet() const
{
    return m_Sling_servlet_methodsIsSet;
}
void ComDayCqDamS7damCommonPostServletsSetCreateHandlerProperties::unsetSling_servlet_methods()
{
    m_Sling_servlet_methodsIsSet = false;
}

}
}
}
}
