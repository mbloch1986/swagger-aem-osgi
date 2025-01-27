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



#include "ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties::ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties()
{
    m_Scheduler_periodIsSet = false;
    m_Scheduler_concurrentIsSet = false;
    m_Good_link_test_intervalIsSet = false;
    m_Bad_link_test_intervalIsSet = false;
    m_Link_unused_intervalIsSet = false;
    m_Connection_timeoutIsSet = false;
}

ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties::~ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties()
{
}

void ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Scheduler_periodIsSet)
    {
        val[utility::conversions::to_string_t("scheduler.period")] = ModelBase::toJson(m_Scheduler_period);
    }
    if(m_Scheduler_concurrentIsSet)
    {
        val[utility::conversions::to_string_t("scheduler.concurrent")] = ModelBase::toJson(m_Scheduler_concurrent);
    }
    if(m_Good_link_test_intervalIsSet)
    {
        val[utility::conversions::to_string_t("good_link_test_interval")] = ModelBase::toJson(m_Good_link_test_interval);
    }
    if(m_Bad_link_test_intervalIsSet)
    {
        val[utility::conversions::to_string_t("bad_link_test_interval")] = ModelBase::toJson(m_Bad_link_test_interval);
    }
    if(m_Link_unused_intervalIsSet)
    {
        val[utility::conversions::to_string_t("link_unused_interval")] = ModelBase::toJson(m_Link_unused_interval);
    }
    if(m_Connection_timeoutIsSet)
    {
        val[utility::conversions::to_string_t("connection.timeout")] = ModelBase::toJson(m_Connection_timeout);
    }

    return val;
}

void ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("scheduler.period")))
    {
        if(!val[utility::conversions::to_string_t("scheduler.period")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("scheduler.period")]);
            setSchedulerPeriod( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scheduler.concurrent")))
    {
        if(!val[utility::conversions::to_string_t("scheduler.concurrent")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("scheduler.concurrent")]);
            setSchedulerConcurrent( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("good_link_test_interval")))
    {
        if(!val[utility::conversions::to_string_t("good_link_test_interval")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("good_link_test_interval")]);
            setGoodLinkTestInterval( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bad_link_test_interval")))
    {
        if(!val[utility::conversions::to_string_t("bad_link_test_interval")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("bad_link_test_interval")]);
            setBadLinkTestInterval( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("link_unused_interval")))
    {
        if(!val[utility::conversions::to_string_t("link_unused_interval")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("link_unused_interval")]);
            setLinkUnusedInterval( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("connection.timeout")))
    {
        if(!val[utility::conversions::to_string_t("connection.timeout")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("connection.timeout")]);
            setConnectionTimeout( newItem );
        }
    }
}

void ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Scheduler_periodIsSet)
    {
        if (m_Scheduler_period.get())
        {
            m_Scheduler_period->toMultipart(multipart, utility::conversions::to_string_t("scheduler.period."));
        }
    }
    if(m_Scheduler_concurrentIsSet)
    {
        if (m_Scheduler_concurrent.get())
        {
            m_Scheduler_concurrent->toMultipart(multipart, utility::conversions::to_string_t("scheduler.concurrent."));
        }
    }
    if(m_Good_link_test_intervalIsSet)
    {
        if (m_Good_link_test_interval.get())
        {
            m_Good_link_test_interval->toMultipart(multipart, utility::conversions::to_string_t("good_link_test_interval."));
        }
    }
    if(m_Bad_link_test_intervalIsSet)
    {
        if (m_Bad_link_test_interval.get())
        {
            m_Bad_link_test_interval->toMultipart(multipart, utility::conversions::to_string_t("bad_link_test_interval."));
        }
    }
    if(m_Link_unused_intervalIsSet)
    {
        if (m_Link_unused_interval.get())
        {
            m_Link_unused_interval->toMultipart(multipart, utility::conversions::to_string_t("link_unused_interval."));
        }
    }
    if(m_Connection_timeoutIsSet)
    {
        if (m_Connection_timeout.get())
        {
            m_Connection_timeout->toMultipart(multipart, utility::conversions::to_string_t("connection.timeout."));
        }
    }
}

void ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("scheduler.period")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("scheduler.period")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("scheduler.period."));
            setSchedulerPeriod( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("scheduler.concurrent")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("scheduler.concurrent")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("scheduler.concurrent."));
            setSchedulerConcurrent( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("good_link_test_interval")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("good_link_test_interval")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("good_link_test_interval."));
            setGoodLinkTestInterval( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("bad_link_test_interval")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("bad_link_test_interval")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("bad_link_test_interval."));
            setBadLinkTestInterval( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("link_unused_interval")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("link_unused_interval")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("link_unused_interval."));
            setLinkUnusedInterval( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("connection.timeout")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("connection.timeout")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("connection.timeout."));
            setConnectionTimeout( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyInteger> ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties::getSchedulerPeriod() const
{
    return m_Scheduler_period;
}


void ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties::setSchedulerPeriod(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Scheduler_period = value;
    m_Scheduler_periodIsSet = true;
}
bool ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties::schedulerPeriodIsSet() const
{
    return m_Scheduler_periodIsSet;
}

void ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties::unsetScheduler_period()
{
    m_Scheduler_periodIsSet = false;
}

std::shared_ptr<ConfigNodePropertyBoolean> ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties::getSchedulerConcurrent() const
{
    return m_Scheduler_concurrent;
}


void ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties::setSchedulerConcurrent(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Scheduler_concurrent = value;
    m_Scheduler_concurrentIsSet = true;
}
bool ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties::schedulerConcurrentIsSet() const
{
    return m_Scheduler_concurrentIsSet;
}

void ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties::unsetScheduler_concurrent()
{
    m_Scheduler_concurrentIsSet = false;
}

std::shared_ptr<ConfigNodePropertyInteger> ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties::getGoodLinkTestInterval() const
{
    return m_Good_link_test_interval;
}


void ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties::setGoodLinkTestInterval(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Good_link_test_interval = value;
    m_Good_link_test_intervalIsSet = true;
}
bool ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties::goodLinkTestIntervalIsSet() const
{
    return m_Good_link_test_intervalIsSet;
}

void ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties::unsetGood_link_test_interval()
{
    m_Good_link_test_intervalIsSet = false;
}

std::shared_ptr<ConfigNodePropertyInteger> ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties::getBadLinkTestInterval() const
{
    return m_Bad_link_test_interval;
}


void ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties::setBadLinkTestInterval(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Bad_link_test_interval = value;
    m_Bad_link_test_intervalIsSet = true;
}
bool ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties::badLinkTestIntervalIsSet() const
{
    return m_Bad_link_test_intervalIsSet;
}

void ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties::unsetBad_link_test_interval()
{
    m_Bad_link_test_intervalIsSet = false;
}

std::shared_ptr<ConfigNodePropertyInteger> ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties::getLinkUnusedInterval() const
{
    return m_Link_unused_interval;
}


void ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties::setLinkUnusedInterval(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Link_unused_interval = value;
    m_Link_unused_intervalIsSet = true;
}
bool ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties::linkUnusedIntervalIsSet() const
{
    return m_Link_unused_intervalIsSet;
}

void ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties::unsetLink_unused_interval()
{
    m_Link_unused_intervalIsSet = false;
}

std::shared_ptr<ConfigNodePropertyInteger> ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties::getConnectionTimeout() const
{
    return m_Connection_timeout;
}


void ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties::setConnectionTimeout(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Connection_timeout = value;
    m_Connection_timeoutIsSet = true;
}
bool ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties::connectionTimeoutIsSet() const
{
    return m_Connection_timeoutIsSet;
}

void ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties::unsetConnection_timeout()
{
    m_Connection_timeoutIsSet = false;
}

}
}
}
}

