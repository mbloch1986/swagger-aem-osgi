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



#include "OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties()
{
    m_Org_apache_sling_installer_configuration_persistIsSet = false;
    m_ModeIsSet = false;
    m_PortIsSet = false;
    m_Primary_hostIsSet = false;
    m_IntervalIsSet = false;
    m_Primary_allowed_client_ip_rangesIsSet = false;
    m_SecureIsSet = false;
    m_Standby_readtimeoutIsSet = false;
    m_Standby_autocleanIsSet = false;
}

OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::~OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties()
{
}

void OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::validate()
{
    // TODO: implement validation
}

web::json::value OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Org_apache_sling_installer_configuration_persistIsSet)
    {
        val[utility::conversions::to_string_t("org.apache.sling.installer.configuration.persist")] = ModelBase::toJson(m_Org_apache_sling_installer_configuration_persist);
    }
    if(m_ModeIsSet)
    {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(m_Mode);
    }
    if(m_PortIsSet)
    {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(m_Port);
    }
    if(m_Primary_hostIsSet)
    {
        val[utility::conversions::to_string_t("primary.host")] = ModelBase::toJson(m_Primary_host);
    }
    if(m_IntervalIsSet)
    {
        val[utility::conversions::to_string_t("interval")] = ModelBase::toJson(m_Interval);
    }
    if(m_Primary_allowed_client_ip_rangesIsSet)
    {
        val[utility::conversions::to_string_t("primary.allowed-client-ip-ranges")] = ModelBase::toJson(m_Primary_allowed_client_ip_ranges);
    }
    if(m_SecureIsSet)
    {
        val[utility::conversions::to_string_t("secure")] = ModelBase::toJson(m_Secure);
    }
    if(m_Standby_readtimeoutIsSet)
    {
        val[utility::conversions::to_string_t("standby.readtimeout")] = ModelBase::toJson(m_Standby_readtimeout);
    }
    if(m_Standby_autocleanIsSet)
    {
        val[utility::conversions::to_string_t("standby.autoclean")] = ModelBase::toJson(m_Standby_autoclean);
    }

    return val;
}

void OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("org.apache.sling.installer.configuration.persist")))
    {
        if(!val[utility::conversions::to_string_t("org.apache.sling.installer.configuration.persist")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("org.apache.sling.installer.configuration.persist")]);
            setOrgApacheSlingInstallerConfigurationPersist( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode")))
    {
        if(!val[utility::conversions::to_string_t("mode")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyDropDown> newItem(new ConfigNodePropertyDropDown());
            newItem->fromJson(val[utility::conversions::to_string_t("mode")]);
            setMode( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port")))
    {
        if(!val[utility::conversions::to_string_t("port")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("port")]);
            setPort( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("primary.host")))
    {
        if(!val[utility::conversions::to_string_t("primary.host")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("primary.host")]);
            setPrimaryHost( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("interval")))
    {
        if(!val[utility::conversions::to_string_t("interval")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("interval")]);
            setInterval( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("primary.allowed-client-ip-ranges")))
    {
        if(!val[utility::conversions::to_string_t("primary.allowed-client-ip-ranges")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("primary.allowed-client-ip-ranges")]);
            setPrimaryAllowedClientIpRanges( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("secure")))
    {
        if(!val[utility::conversions::to_string_t("secure")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("secure")]);
            setSecure( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("standby.readtimeout")))
    {
        if(!val[utility::conversions::to_string_t("standby.readtimeout")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("standby.readtimeout")]);
            setStandbyReadtimeout( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("standby.autoclean")))
    {
        if(!val[utility::conversions::to_string_t("standby.autoclean")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("standby.autoclean")]);
            setStandbyAutoclean( newItem );
        }
    }
}

void OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Org_apache_sling_installer_configuration_persistIsSet)
    {
        if (m_Org_apache_sling_installer_configuration_persist.get())
        {
            m_Org_apache_sling_installer_configuration_persist->toMultipart(multipart, utility::conversions::to_string_t("org.apache.sling.installer.configuration.persist."));
        }
    }
    if(m_ModeIsSet)
    {
        if (m_Mode.get())
        {
            m_Mode->toMultipart(multipart, utility::conversions::to_string_t("mode."));
        }
    }
    if(m_PortIsSet)
    {
        if (m_Port.get())
        {
            m_Port->toMultipart(multipart, utility::conversions::to_string_t("port."));
        }
    }
    if(m_Primary_hostIsSet)
    {
        if (m_Primary_host.get())
        {
            m_Primary_host->toMultipart(multipart, utility::conversions::to_string_t("primary.host."));
        }
    }
    if(m_IntervalIsSet)
    {
        if (m_Interval.get())
        {
            m_Interval->toMultipart(multipart, utility::conversions::to_string_t("interval."));
        }
    }
    if(m_Primary_allowed_client_ip_rangesIsSet)
    {
        if (m_Primary_allowed_client_ip_ranges.get())
        {
            m_Primary_allowed_client_ip_ranges->toMultipart(multipart, utility::conversions::to_string_t("primary.allowed-client-ip-ranges."));
        }
    }
    if(m_SecureIsSet)
    {
        if (m_Secure.get())
        {
            m_Secure->toMultipart(multipart, utility::conversions::to_string_t("secure."));
        }
    }
    if(m_Standby_readtimeoutIsSet)
    {
        if (m_Standby_readtimeout.get())
        {
            m_Standby_readtimeout->toMultipart(multipart, utility::conversions::to_string_t("standby.readtimeout."));
        }
    }
    if(m_Standby_autocleanIsSet)
    {
        if (m_Standby_autoclean.get())
        {
            m_Standby_autoclean->toMultipart(multipart, utility::conversions::to_string_t("standby.autoclean."));
        }
    }
}

void OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("org.apache.sling.installer.configuration.persist")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("org.apache.sling.installer.configuration.persist")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("org.apache.sling.installer.configuration.persist."));
            setOrgApacheSlingInstallerConfigurationPersist( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("mode")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("mode")))
        {
            std::shared_ptr<ConfigNodePropertyDropDown> newItem(new ConfigNodePropertyDropDown());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("mode."));
            setMode( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("port")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("port")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("port."));
            setPort( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("primary.host")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("primary.host")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("primary.host."));
            setPrimaryHost( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("interval")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("interval")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("interval."));
            setInterval( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("primary.allowed-client-ip-ranges")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("primary.allowed-client-ip-ranges")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("primary.allowed-client-ip-ranges."));
            setPrimaryAllowedClientIpRanges( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("secure")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("secure")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("secure."));
            setSecure( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("standby.readtimeout")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("standby.readtimeout")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("standby.readtimeout."));
            setStandbyReadtimeout( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("standby.autoclean")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("standby.autoclean")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("standby.autoclean."));
            setStandbyAutoclean( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyBoolean> OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::getOrgApacheSlingInstallerConfigurationPersist() const
{
    return m_Org_apache_sling_installer_configuration_persist;
}


void OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::setOrgApacheSlingInstallerConfigurationPersist(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Org_apache_sling_installer_configuration_persist = value;
    m_Org_apache_sling_installer_configuration_persistIsSet = true;
}
bool OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::orgApacheSlingInstallerConfigurationPersistIsSet() const
{
    return m_Org_apache_sling_installer_configuration_persistIsSet;
}

void OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::unsetOrg_apache_sling_installer_configuration_persist()
{
    m_Org_apache_sling_installer_configuration_persistIsSet = false;
}

std::shared_ptr<ConfigNodePropertyDropDown> OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::getMode() const
{
    return m_Mode;
}


void OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::setMode(std::shared_ptr<ConfigNodePropertyDropDown> value)
{
    m_Mode = value;
    m_ModeIsSet = true;
}
bool OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::modeIsSet() const
{
    return m_ModeIsSet;
}

void OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::unsetMode()
{
    m_ModeIsSet = false;
}

std::shared_ptr<ConfigNodePropertyInteger> OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::getPort() const
{
    return m_Port;
}


void OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::setPort(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Port = value;
    m_PortIsSet = true;
}
bool OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::portIsSet() const
{
    return m_PortIsSet;
}

void OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::unsetPort()
{
    m_PortIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::getPrimaryHost() const
{
    return m_Primary_host;
}


void OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::setPrimaryHost(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Primary_host = value;
    m_Primary_hostIsSet = true;
}
bool OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::primaryHostIsSet() const
{
    return m_Primary_hostIsSet;
}

void OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::unsetPrimary_host()
{
    m_Primary_hostIsSet = false;
}

std::shared_ptr<ConfigNodePropertyInteger> OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::getInterval() const
{
    return m_Interval;
}


void OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::setInterval(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Interval = value;
    m_IntervalIsSet = true;
}
bool OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::intervalIsSet() const
{
    return m_IntervalIsSet;
}

void OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::unsetInterval()
{
    m_IntervalIsSet = false;
}

std::shared_ptr<ConfigNodePropertyArray> OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::getPrimaryAllowedClientIpRanges() const
{
    return m_Primary_allowed_client_ip_ranges;
}


void OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::setPrimaryAllowedClientIpRanges(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Primary_allowed_client_ip_ranges = value;
    m_Primary_allowed_client_ip_rangesIsSet = true;
}
bool OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::primaryAllowedClientIpRangesIsSet() const
{
    return m_Primary_allowed_client_ip_rangesIsSet;
}

void OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::unsetPrimary_allowed_client_ip_ranges()
{
    m_Primary_allowed_client_ip_rangesIsSet = false;
}

std::shared_ptr<ConfigNodePropertyBoolean> OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::getSecure() const
{
    return m_Secure;
}


void OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::setSecure(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Secure = value;
    m_SecureIsSet = true;
}
bool OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::secureIsSet() const
{
    return m_SecureIsSet;
}

void OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::unsetSecure()
{
    m_SecureIsSet = false;
}

std::shared_ptr<ConfigNodePropertyInteger> OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::getStandbyReadtimeout() const
{
    return m_Standby_readtimeout;
}


void OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::setStandbyReadtimeout(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Standby_readtimeout = value;
    m_Standby_readtimeoutIsSet = true;
}
bool OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::standbyReadtimeoutIsSet() const
{
    return m_Standby_readtimeoutIsSet;
}

void OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::unsetStandby_readtimeout()
{
    m_Standby_readtimeoutIsSet = false;
}

std::shared_ptr<ConfigNodePropertyBoolean> OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::getStandbyAutoclean() const
{
    return m_Standby_autoclean;
}


void OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::setStandbyAutoclean(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Standby_autoclean = value;
    m_Standby_autocleanIsSet = true;
}
bool OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::standbyAutocleanIsSet() const
{
    return m_Standby_autocleanIsSet;
}

void OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties::unsetStandby_autoclean()
{
    m_Standby_autocleanIsSet = false;
}

}
}
}
}
