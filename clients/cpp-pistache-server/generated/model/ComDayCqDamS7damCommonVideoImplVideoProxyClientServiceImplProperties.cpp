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


#include "ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties::ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties()
{
    m_Cq_dam_s7dam_videoproxyclientservice_multipartupload_minsize_nameIsSet = false;
    m_Cq_dam_s7dam_videoproxyclientservice_multipartupload_partsize_nameIsSet = false;
    m_Cq_dam_s7dam_videoproxyclientservice_multipartupload_numthread_nameIsSet = false;
    m_Cq_dam_s7dam_videoproxyclientservice_http_readtimeout_nameIsSet = false;
    m_Cq_dam_s7dam_videoproxyclientservice_http_connectiontimeout_nameIsSet = false;
    m_Cq_dam_s7dam_videoproxyclientservice_http_maxretrycount_nameIsSet = false;
    m_Cq_dam_s7dam_videoproxyclientservice_uploadprogress_interval_nameIsSet = false;
    
}

ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties::~ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties()
{
}

void ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Cq_dam_s7dam_videoproxyclientservice_multipartupload_minsize_nameIsSet)
    {
        val["cq.dam.s7dam.videoproxyclientservice.multipartupload.minsize.name"] = ModelBase::toJson(m_Cq_dam_s7dam_videoproxyclientservice_multipartupload_minsize_name);
    }
    if(m_Cq_dam_s7dam_videoproxyclientservice_multipartupload_partsize_nameIsSet)
    {
        val["cq.dam.s7dam.videoproxyclientservice.multipartupload.partsize.name"] = ModelBase::toJson(m_Cq_dam_s7dam_videoproxyclientservice_multipartupload_partsize_name);
    }
    if(m_Cq_dam_s7dam_videoproxyclientservice_multipartupload_numthread_nameIsSet)
    {
        val["cq.dam.s7dam.videoproxyclientservice.multipartupload.numthread.name"] = ModelBase::toJson(m_Cq_dam_s7dam_videoproxyclientservice_multipartupload_numthread_name);
    }
    if(m_Cq_dam_s7dam_videoproxyclientservice_http_readtimeout_nameIsSet)
    {
        val["cq.dam.s7dam.videoproxyclientservice.http.readtimeout.name"] = ModelBase::toJson(m_Cq_dam_s7dam_videoproxyclientservice_http_readtimeout_name);
    }
    if(m_Cq_dam_s7dam_videoproxyclientservice_http_connectiontimeout_nameIsSet)
    {
        val["cq.dam.s7dam.videoproxyclientservice.http.connectiontimeout.name"] = ModelBase::toJson(m_Cq_dam_s7dam_videoproxyclientservice_http_connectiontimeout_name);
    }
    if(m_Cq_dam_s7dam_videoproxyclientservice_http_maxretrycount_nameIsSet)
    {
        val["cq.dam.s7dam.videoproxyclientservice.http.maxretrycount.name"] = ModelBase::toJson(m_Cq_dam_s7dam_videoproxyclientservice_http_maxretrycount_name);
    }
    if(m_Cq_dam_s7dam_videoproxyclientservice_uploadprogress_interval_nameIsSet)
    {
        val["cq.dam.s7dam.videoproxyclientservice.uploadprogress.interval.name"] = ModelBase::toJson(m_Cq_dam_s7dam_videoproxyclientservice_uploadprogress_interval_name);
    }
    

    return val;
}

void ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties::fromJson(nlohmann::json& val)
{
    if(val.find("cq.dam.s7dam.videoproxyclientservice.multipartupload.minsize.name") != val.end())
    {
        if(!val["cq.dam.s7dam.videoproxyclientservice.multipartupload.minsize.name"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["cq.dam.s7dam.videoproxyclientservice.multipartupload.minsize.name"]);
            setCqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName( newItem );
        }
        
    }
    if(val.find("cq.dam.s7dam.videoproxyclientservice.multipartupload.partsize.name") != val.end())
    {
        if(!val["cq.dam.s7dam.videoproxyclientservice.multipartupload.partsize.name"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["cq.dam.s7dam.videoproxyclientservice.multipartupload.partsize.name"]);
            setCqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName( newItem );
        }
        
    }
    if(val.find("cq.dam.s7dam.videoproxyclientservice.multipartupload.numthread.name") != val.end())
    {
        if(!val["cq.dam.s7dam.videoproxyclientservice.multipartupload.numthread.name"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["cq.dam.s7dam.videoproxyclientservice.multipartupload.numthread.name"]);
            setCqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName( newItem );
        }
        
    }
    if(val.find("cq.dam.s7dam.videoproxyclientservice.http.readtimeout.name") != val.end())
    {
        if(!val["cq.dam.s7dam.videoproxyclientservice.http.readtimeout.name"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["cq.dam.s7dam.videoproxyclientservice.http.readtimeout.name"]);
            setCqDamS7damVideoproxyclientserviceHttpReadtimeoutName( newItem );
        }
        
    }
    if(val.find("cq.dam.s7dam.videoproxyclientservice.http.connectiontimeout.name") != val.end())
    {
        if(!val["cq.dam.s7dam.videoproxyclientservice.http.connectiontimeout.name"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["cq.dam.s7dam.videoproxyclientservice.http.connectiontimeout.name"]);
            setCqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName( newItem );
        }
        
    }
    if(val.find("cq.dam.s7dam.videoproxyclientservice.http.maxretrycount.name") != val.end())
    {
        if(!val["cq.dam.s7dam.videoproxyclientservice.http.maxretrycount.name"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["cq.dam.s7dam.videoproxyclientservice.http.maxretrycount.name"]);
            setCqDamS7damVideoproxyclientserviceHttpMaxretrycountName( newItem );
        }
        
    }
    if(val.find("cq.dam.s7dam.videoproxyclientservice.uploadprogress.interval.name") != val.end())
    {
        if(!val["cq.dam.s7dam.videoproxyclientservice.uploadprogress.interval.name"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["cq.dam.s7dam.videoproxyclientservice.uploadprogress.interval.name"]);
            setCqDamS7damVideoproxyclientserviceUploadprogressIntervalName( newItem );
        }
        
    }
    
}


ConfigNodePropertyInteger ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties::getCqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName() const
{
    return m_Cq_dam_s7dam_videoproxyclientservice_multipartupload_minsize_name;
}
void ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties::setCqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName(ConfigNodePropertyInteger const& value)
{
    m_Cq_dam_s7dam_videoproxyclientservice_multipartupload_minsize_name = value;
    m_Cq_dam_s7dam_videoproxyclientservice_multipartupload_minsize_nameIsSet = true;
}
bool ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties::cqDamS7damVideoproxyclientserviceMultipartuploadMinsizeNameIsSet() const
{
    return m_Cq_dam_s7dam_videoproxyclientservice_multipartupload_minsize_nameIsSet;
}
void ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties::unsetCq_dam_s7dam_videoproxyclientservice_multipartupload_minsize_name()
{
    m_Cq_dam_s7dam_videoproxyclientservice_multipartupload_minsize_nameIsSet = false;
}
ConfigNodePropertyInteger ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties::getCqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName() const
{
    return m_Cq_dam_s7dam_videoproxyclientservice_multipartupload_partsize_name;
}
void ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties::setCqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName(ConfigNodePropertyInteger const& value)
{
    m_Cq_dam_s7dam_videoproxyclientservice_multipartupload_partsize_name = value;
    m_Cq_dam_s7dam_videoproxyclientservice_multipartupload_partsize_nameIsSet = true;
}
bool ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties::cqDamS7damVideoproxyclientserviceMultipartuploadPartsizeNameIsSet() const
{
    return m_Cq_dam_s7dam_videoproxyclientservice_multipartupload_partsize_nameIsSet;
}
void ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties::unsetCq_dam_s7dam_videoproxyclientservice_multipartupload_partsize_name()
{
    m_Cq_dam_s7dam_videoproxyclientservice_multipartupload_partsize_nameIsSet = false;
}
ConfigNodePropertyInteger ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties::getCqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName() const
{
    return m_Cq_dam_s7dam_videoproxyclientservice_multipartupload_numthread_name;
}
void ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties::setCqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName(ConfigNodePropertyInteger const& value)
{
    m_Cq_dam_s7dam_videoproxyclientservice_multipartupload_numthread_name = value;
    m_Cq_dam_s7dam_videoproxyclientservice_multipartupload_numthread_nameIsSet = true;
}
bool ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties::cqDamS7damVideoproxyclientserviceMultipartuploadNumthreadNameIsSet() const
{
    return m_Cq_dam_s7dam_videoproxyclientservice_multipartupload_numthread_nameIsSet;
}
void ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties::unsetCq_dam_s7dam_videoproxyclientservice_multipartupload_numthread_name()
{
    m_Cq_dam_s7dam_videoproxyclientservice_multipartupload_numthread_nameIsSet = false;
}
ConfigNodePropertyInteger ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties::getCqDamS7damVideoproxyclientserviceHttpReadtimeoutName() const
{
    return m_Cq_dam_s7dam_videoproxyclientservice_http_readtimeout_name;
}
void ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties::setCqDamS7damVideoproxyclientserviceHttpReadtimeoutName(ConfigNodePropertyInteger const& value)
{
    m_Cq_dam_s7dam_videoproxyclientservice_http_readtimeout_name = value;
    m_Cq_dam_s7dam_videoproxyclientservice_http_readtimeout_nameIsSet = true;
}
bool ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties::cqDamS7damVideoproxyclientserviceHttpReadtimeoutNameIsSet() const
{
    return m_Cq_dam_s7dam_videoproxyclientservice_http_readtimeout_nameIsSet;
}
void ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties::unsetCq_dam_s7dam_videoproxyclientservice_http_readtimeout_name()
{
    m_Cq_dam_s7dam_videoproxyclientservice_http_readtimeout_nameIsSet = false;
}
ConfigNodePropertyInteger ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties::getCqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName() const
{
    return m_Cq_dam_s7dam_videoproxyclientservice_http_connectiontimeout_name;
}
void ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties::setCqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName(ConfigNodePropertyInteger const& value)
{
    m_Cq_dam_s7dam_videoproxyclientservice_http_connectiontimeout_name = value;
    m_Cq_dam_s7dam_videoproxyclientservice_http_connectiontimeout_nameIsSet = true;
}
bool ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties::cqDamS7damVideoproxyclientserviceHttpConnectiontimeoutNameIsSet() const
{
    return m_Cq_dam_s7dam_videoproxyclientservice_http_connectiontimeout_nameIsSet;
}
void ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties::unsetCq_dam_s7dam_videoproxyclientservice_http_connectiontimeout_name()
{
    m_Cq_dam_s7dam_videoproxyclientservice_http_connectiontimeout_nameIsSet = false;
}
ConfigNodePropertyInteger ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties::getCqDamS7damVideoproxyclientserviceHttpMaxretrycountName() const
{
    return m_Cq_dam_s7dam_videoproxyclientservice_http_maxretrycount_name;
}
void ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties::setCqDamS7damVideoproxyclientserviceHttpMaxretrycountName(ConfigNodePropertyInteger const& value)
{
    m_Cq_dam_s7dam_videoproxyclientservice_http_maxretrycount_name = value;
    m_Cq_dam_s7dam_videoproxyclientservice_http_maxretrycount_nameIsSet = true;
}
bool ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties::cqDamS7damVideoproxyclientserviceHttpMaxretrycountNameIsSet() const
{
    return m_Cq_dam_s7dam_videoproxyclientservice_http_maxretrycount_nameIsSet;
}
void ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties::unsetCq_dam_s7dam_videoproxyclientservice_http_maxretrycount_name()
{
    m_Cq_dam_s7dam_videoproxyclientservice_http_maxretrycount_nameIsSet = false;
}
ConfigNodePropertyInteger ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties::getCqDamS7damVideoproxyclientserviceUploadprogressIntervalName() const
{
    return m_Cq_dam_s7dam_videoproxyclientservice_uploadprogress_interval_name;
}
void ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties::setCqDamS7damVideoproxyclientserviceUploadprogressIntervalName(ConfigNodePropertyInteger const& value)
{
    m_Cq_dam_s7dam_videoproxyclientservice_uploadprogress_interval_name = value;
    m_Cq_dam_s7dam_videoproxyclientservice_uploadprogress_interval_nameIsSet = true;
}
bool ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties::cqDamS7damVideoproxyclientserviceUploadprogressIntervalNameIsSet() const
{
    return m_Cq_dam_s7dam_videoproxyclientservice_uploadprogress_interval_nameIsSet;
}
void ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties::unsetCq_dam_s7dam_videoproxyclientservice_uploadprogress_interval_name()
{
    m_Cq_dam_s7dam_videoproxyclientservice_uploadprogress_interval_nameIsSet = false;
}

}
}
}
}
