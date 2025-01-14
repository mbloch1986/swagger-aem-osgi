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


#include "ComDayCqReportingImplConfigServiceImplProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComDayCqReportingImplConfigServiceImplProperties::ComDayCqReportingImplConfigServiceImplProperties()
{
    m_Repconf_timezoneIsSet = false;
    m_Repconf_localeIsSet = false;
    m_Repconf_snapshotsIsSet = false;
    m_Repconf_repdirIsSet = false;
    m_Repconf_hourofdayIsSet = false;
    m_Repconf_minofhourIsSet = false;
    m_Repconf_maxrowsIsSet = false;
    m_Repconf_fakedataIsSet = false;
    m_Repconf_snapshotuserIsSet = false;
    m_Repconf_enforcesnapshotuserIsSet = false;
    
}

ComDayCqReportingImplConfigServiceImplProperties::~ComDayCqReportingImplConfigServiceImplProperties()
{
}

void ComDayCqReportingImplConfigServiceImplProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComDayCqReportingImplConfigServiceImplProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Repconf_timezoneIsSet)
    {
        val["repconf.timezone"] = ModelBase::toJson(m_Repconf_timezone);
    }
    if(m_Repconf_localeIsSet)
    {
        val["repconf.locale"] = ModelBase::toJson(m_Repconf_locale);
    }
    if(m_Repconf_snapshotsIsSet)
    {
        val["repconf.snapshots"] = ModelBase::toJson(m_Repconf_snapshots);
    }
    if(m_Repconf_repdirIsSet)
    {
        val["repconf.repdir"] = ModelBase::toJson(m_Repconf_repdir);
    }
    if(m_Repconf_hourofdayIsSet)
    {
        val["repconf.hourofday"] = ModelBase::toJson(m_Repconf_hourofday);
    }
    if(m_Repconf_minofhourIsSet)
    {
        val["repconf.minofhour"] = ModelBase::toJson(m_Repconf_minofhour);
    }
    if(m_Repconf_maxrowsIsSet)
    {
        val["repconf.maxrows"] = ModelBase::toJson(m_Repconf_maxrows);
    }
    if(m_Repconf_fakedataIsSet)
    {
        val["repconf.fakedata"] = ModelBase::toJson(m_Repconf_fakedata);
    }
    if(m_Repconf_snapshotuserIsSet)
    {
        val["repconf.snapshotuser"] = ModelBase::toJson(m_Repconf_snapshotuser);
    }
    if(m_Repconf_enforcesnapshotuserIsSet)
    {
        val["repconf.enforcesnapshotuser"] = ModelBase::toJson(m_Repconf_enforcesnapshotuser);
    }
    

    return val;
}

void ComDayCqReportingImplConfigServiceImplProperties::fromJson(nlohmann::json& val)
{
    if(val.find("repconf.timezone") != val.end())
    {
        if(!val["repconf.timezone"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["repconf.timezone"]);
            setRepconfTimezone( newItem );
        }
        
    }
    if(val.find("repconf.locale") != val.end())
    {
        if(!val["repconf.locale"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["repconf.locale"]);
            setRepconfLocale( newItem );
        }
        
    }
    if(val.find("repconf.snapshots") != val.end())
    {
        if(!val["repconf.snapshots"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["repconf.snapshots"]);
            setRepconfSnapshots( newItem );
        }
        
    }
    if(val.find("repconf.repdir") != val.end())
    {
        if(!val["repconf.repdir"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["repconf.repdir"]);
            setRepconfRepdir( newItem );
        }
        
    }
    if(val.find("repconf.hourofday") != val.end())
    {
        if(!val["repconf.hourofday"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["repconf.hourofday"]);
            setRepconfHourofday( newItem );
        }
        
    }
    if(val.find("repconf.minofhour") != val.end())
    {
        if(!val["repconf.minofhour"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["repconf.minofhour"]);
            setRepconfMinofhour( newItem );
        }
        
    }
    if(val.find("repconf.maxrows") != val.end())
    {
        if(!val["repconf.maxrows"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["repconf.maxrows"]);
            setRepconfMaxrows( newItem );
        }
        
    }
    if(val.find("repconf.fakedata") != val.end())
    {
        if(!val["repconf.fakedata"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["repconf.fakedata"]);
            setRepconfFakedata( newItem );
        }
        
    }
    if(val.find("repconf.snapshotuser") != val.end())
    {
        if(!val["repconf.snapshotuser"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["repconf.snapshotuser"]);
            setRepconfSnapshotuser( newItem );
        }
        
    }
    if(val.find("repconf.enforcesnapshotuser") != val.end())
    {
        if(!val["repconf.enforcesnapshotuser"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["repconf.enforcesnapshotuser"]);
            setRepconfEnforcesnapshotuser( newItem );
        }
        
    }
    
}


ConfigNodePropertyString ComDayCqReportingImplConfigServiceImplProperties::getRepconfTimezone() const
{
    return m_Repconf_timezone;
}
void ComDayCqReportingImplConfigServiceImplProperties::setRepconfTimezone(ConfigNodePropertyString const& value)
{
    m_Repconf_timezone = value;
    m_Repconf_timezoneIsSet = true;
}
bool ComDayCqReportingImplConfigServiceImplProperties::repconfTimezoneIsSet() const
{
    return m_Repconf_timezoneIsSet;
}
void ComDayCqReportingImplConfigServiceImplProperties::unsetRepconf_timezone()
{
    m_Repconf_timezoneIsSet = false;
}
ConfigNodePropertyString ComDayCqReportingImplConfigServiceImplProperties::getRepconfLocale() const
{
    return m_Repconf_locale;
}
void ComDayCqReportingImplConfigServiceImplProperties::setRepconfLocale(ConfigNodePropertyString const& value)
{
    m_Repconf_locale = value;
    m_Repconf_localeIsSet = true;
}
bool ComDayCqReportingImplConfigServiceImplProperties::repconfLocaleIsSet() const
{
    return m_Repconf_localeIsSet;
}
void ComDayCqReportingImplConfigServiceImplProperties::unsetRepconf_locale()
{
    m_Repconf_localeIsSet = false;
}
ConfigNodePropertyString ComDayCqReportingImplConfigServiceImplProperties::getRepconfSnapshots() const
{
    return m_Repconf_snapshots;
}
void ComDayCqReportingImplConfigServiceImplProperties::setRepconfSnapshots(ConfigNodePropertyString const& value)
{
    m_Repconf_snapshots = value;
    m_Repconf_snapshotsIsSet = true;
}
bool ComDayCqReportingImplConfigServiceImplProperties::repconfSnapshotsIsSet() const
{
    return m_Repconf_snapshotsIsSet;
}
void ComDayCqReportingImplConfigServiceImplProperties::unsetRepconf_snapshots()
{
    m_Repconf_snapshotsIsSet = false;
}
ConfigNodePropertyString ComDayCqReportingImplConfigServiceImplProperties::getRepconfRepdir() const
{
    return m_Repconf_repdir;
}
void ComDayCqReportingImplConfigServiceImplProperties::setRepconfRepdir(ConfigNodePropertyString const& value)
{
    m_Repconf_repdir = value;
    m_Repconf_repdirIsSet = true;
}
bool ComDayCqReportingImplConfigServiceImplProperties::repconfRepdirIsSet() const
{
    return m_Repconf_repdirIsSet;
}
void ComDayCqReportingImplConfigServiceImplProperties::unsetRepconf_repdir()
{
    m_Repconf_repdirIsSet = false;
}
ConfigNodePropertyInteger ComDayCqReportingImplConfigServiceImplProperties::getRepconfHourofday() const
{
    return m_Repconf_hourofday;
}
void ComDayCqReportingImplConfigServiceImplProperties::setRepconfHourofday(ConfigNodePropertyInteger const& value)
{
    m_Repconf_hourofday = value;
    m_Repconf_hourofdayIsSet = true;
}
bool ComDayCqReportingImplConfigServiceImplProperties::repconfHourofdayIsSet() const
{
    return m_Repconf_hourofdayIsSet;
}
void ComDayCqReportingImplConfigServiceImplProperties::unsetRepconf_hourofday()
{
    m_Repconf_hourofdayIsSet = false;
}
ConfigNodePropertyInteger ComDayCqReportingImplConfigServiceImplProperties::getRepconfMinofhour() const
{
    return m_Repconf_minofhour;
}
void ComDayCqReportingImplConfigServiceImplProperties::setRepconfMinofhour(ConfigNodePropertyInteger const& value)
{
    m_Repconf_minofhour = value;
    m_Repconf_minofhourIsSet = true;
}
bool ComDayCqReportingImplConfigServiceImplProperties::repconfMinofhourIsSet() const
{
    return m_Repconf_minofhourIsSet;
}
void ComDayCqReportingImplConfigServiceImplProperties::unsetRepconf_minofhour()
{
    m_Repconf_minofhourIsSet = false;
}
ConfigNodePropertyInteger ComDayCqReportingImplConfigServiceImplProperties::getRepconfMaxrows() const
{
    return m_Repconf_maxrows;
}
void ComDayCqReportingImplConfigServiceImplProperties::setRepconfMaxrows(ConfigNodePropertyInteger const& value)
{
    m_Repconf_maxrows = value;
    m_Repconf_maxrowsIsSet = true;
}
bool ComDayCqReportingImplConfigServiceImplProperties::repconfMaxrowsIsSet() const
{
    return m_Repconf_maxrowsIsSet;
}
void ComDayCqReportingImplConfigServiceImplProperties::unsetRepconf_maxrows()
{
    m_Repconf_maxrowsIsSet = false;
}
ConfigNodePropertyBoolean ComDayCqReportingImplConfigServiceImplProperties::getRepconfFakedata() const
{
    return m_Repconf_fakedata;
}
void ComDayCqReportingImplConfigServiceImplProperties::setRepconfFakedata(ConfigNodePropertyBoolean const& value)
{
    m_Repconf_fakedata = value;
    m_Repconf_fakedataIsSet = true;
}
bool ComDayCqReportingImplConfigServiceImplProperties::repconfFakedataIsSet() const
{
    return m_Repconf_fakedataIsSet;
}
void ComDayCqReportingImplConfigServiceImplProperties::unsetRepconf_fakedata()
{
    m_Repconf_fakedataIsSet = false;
}
ConfigNodePropertyString ComDayCqReportingImplConfigServiceImplProperties::getRepconfSnapshotuser() const
{
    return m_Repconf_snapshotuser;
}
void ComDayCqReportingImplConfigServiceImplProperties::setRepconfSnapshotuser(ConfigNodePropertyString const& value)
{
    m_Repconf_snapshotuser = value;
    m_Repconf_snapshotuserIsSet = true;
}
bool ComDayCqReportingImplConfigServiceImplProperties::repconfSnapshotuserIsSet() const
{
    return m_Repconf_snapshotuserIsSet;
}
void ComDayCqReportingImplConfigServiceImplProperties::unsetRepconf_snapshotuser()
{
    m_Repconf_snapshotuserIsSet = false;
}
ConfigNodePropertyBoolean ComDayCqReportingImplConfigServiceImplProperties::getRepconfEnforcesnapshotuser() const
{
    return m_Repconf_enforcesnapshotuser;
}
void ComDayCqReportingImplConfigServiceImplProperties::setRepconfEnforcesnapshotuser(ConfigNodePropertyBoolean const& value)
{
    m_Repconf_enforcesnapshotuser = value;
    m_Repconf_enforcesnapshotuserIsSet = true;
}
bool ComDayCqReportingImplConfigServiceImplProperties::repconfEnforcesnapshotuserIsSet() const
{
    return m_Repconf_enforcesnapshotuserIsSet;
}
void ComDayCqReportingImplConfigServiceImplProperties::unsetRepconf_enforcesnapshotuser()
{
    m_Repconf_enforcesnapshotuserIsSet = false;
}

}
}
}
}

