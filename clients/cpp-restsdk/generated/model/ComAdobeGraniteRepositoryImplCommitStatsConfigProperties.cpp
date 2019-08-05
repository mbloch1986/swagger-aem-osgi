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



#include "ComAdobeGraniteRepositoryImplCommitStatsConfigProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::ComAdobeGraniteRepositoryImplCommitStatsConfigProperties()
{
    m_EnabledIsSet = false;
    m_IntervalSecondsIsSet = false;
    m_CommitsPerIntervalThresholdIsSet = false;
    m_MaxLocationLengthIsSet = false;
    m_MaxDetailsShownIsSet = false;
    m_MinDetailsPercentageIsSet = false;
    m_ThreadMatchersIsSet = false;
    m_MaxGreedyDepthIsSet = false;
    m_GreedyStackMatchersIsSet = false;
    m_StackFiltersIsSet = false;
    m_StackMatchersIsSet = false;
    m_StackCategorizersIsSet = false;
    m_StackShortenersIsSet = false;
}

ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::~ComAdobeGraniteRepositoryImplCommitStatsConfigProperties()
{
}

void ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_EnabledIsSet)
    {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(m_Enabled);
    }
    if(m_IntervalSecondsIsSet)
    {
        val[utility::conversions::to_string_t("intervalSeconds")] = ModelBase::toJson(m_IntervalSeconds);
    }
    if(m_CommitsPerIntervalThresholdIsSet)
    {
        val[utility::conversions::to_string_t("commitsPerIntervalThreshold")] = ModelBase::toJson(m_CommitsPerIntervalThreshold);
    }
    if(m_MaxLocationLengthIsSet)
    {
        val[utility::conversions::to_string_t("maxLocationLength")] = ModelBase::toJson(m_MaxLocationLength);
    }
    if(m_MaxDetailsShownIsSet)
    {
        val[utility::conversions::to_string_t("maxDetailsShown")] = ModelBase::toJson(m_MaxDetailsShown);
    }
    if(m_MinDetailsPercentageIsSet)
    {
        val[utility::conversions::to_string_t("minDetailsPercentage")] = ModelBase::toJson(m_MinDetailsPercentage);
    }
    if(m_ThreadMatchersIsSet)
    {
        val[utility::conversions::to_string_t("threadMatchers")] = ModelBase::toJson(m_ThreadMatchers);
    }
    if(m_MaxGreedyDepthIsSet)
    {
        val[utility::conversions::to_string_t("maxGreedyDepth")] = ModelBase::toJson(m_MaxGreedyDepth);
    }
    if(m_GreedyStackMatchersIsSet)
    {
        val[utility::conversions::to_string_t("greedyStackMatchers")] = ModelBase::toJson(m_GreedyStackMatchers);
    }
    if(m_StackFiltersIsSet)
    {
        val[utility::conversions::to_string_t("stackFilters")] = ModelBase::toJson(m_StackFilters);
    }
    if(m_StackMatchersIsSet)
    {
        val[utility::conversions::to_string_t("stackMatchers")] = ModelBase::toJson(m_StackMatchers);
    }
    if(m_StackCategorizersIsSet)
    {
        val[utility::conversions::to_string_t("stackCategorizers")] = ModelBase::toJson(m_StackCategorizers);
    }
    if(m_StackShortenersIsSet)
    {
        val[utility::conversions::to_string_t("stackShorteners")] = ModelBase::toJson(m_StackShorteners);
    }

    return val;
}

void ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("enabled")))
    {
        if(!val[utility::conversions::to_string_t("enabled")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("enabled")]);
            setEnabled( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("intervalSeconds")))
    {
        if(!val[utility::conversions::to_string_t("intervalSeconds")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("intervalSeconds")]);
            setIntervalSeconds( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commitsPerIntervalThreshold")))
    {
        if(!val[utility::conversions::to_string_t("commitsPerIntervalThreshold")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("commitsPerIntervalThreshold")]);
            setCommitsPerIntervalThreshold( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxLocationLength")))
    {
        if(!val[utility::conversions::to_string_t("maxLocationLength")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("maxLocationLength")]);
            setMaxLocationLength( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxDetailsShown")))
    {
        if(!val[utility::conversions::to_string_t("maxDetailsShown")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("maxDetailsShown")]);
            setMaxDetailsShown( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("minDetailsPercentage")))
    {
        if(!val[utility::conversions::to_string_t("minDetailsPercentage")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("minDetailsPercentage")]);
            setMinDetailsPercentage( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("threadMatchers")))
    {
        if(!val[utility::conversions::to_string_t("threadMatchers")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("threadMatchers")]);
            setThreadMatchers( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxGreedyDepth")))
    {
        if(!val[utility::conversions::to_string_t("maxGreedyDepth")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("maxGreedyDepth")]);
            setMaxGreedyDepth( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("greedyStackMatchers")))
    {
        if(!val[utility::conversions::to_string_t("greedyStackMatchers")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("greedyStackMatchers")]);
            setGreedyStackMatchers( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stackFilters")))
    {
        if(!val[utility::conversions::to_string_t("stackFilters")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("stackFilters")]);
            setStackFilters( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stackMatchers")))
    {
        if(!val[utility::conversions::to_string_t("stackMatchers")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("stackMatchers")]);
            setStackMatchers( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stackCategorizers")))
    {
        if(!val[utility::conversions::to_string_t("stackCategorizers")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("stackCategorizers")]);
            setStackCategorizers( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stackShorteners")))
    {
        if(!val[utility::conversions::to_string_t("stackShorteners")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("stackShorteners")]);
            setStackShorteners( newItem );
        }
    }
}

void ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_EnabledIsSet)
    {
        if (m_Enabled.get())
        {
            m_Enabled->toMultipart(multipart, utility::conversions::to_string_t("enabled."));
        }
    }
    if(m_IntervalSecondsIsSet)
    {
        if (m_IntervalSeconds.get())
        {
            m_IntervalSeconds->toMultipart(multipart, utility::conversions::to_string_t("intervalSeconds."));
        }
    }
    if(m_CommitsPerIntervalThresholdIsSet)
    {
        if (m_CommitsPerIntervalThreshold.get())
        {
            m_CommitsPerIntervalThreshold->toMultipart(multipart, utility::conversions::to_string_t("commitsPerIntervalThreshold."));
        }
    }
    if(m_MaxLocationLengthIsSet)
    {
        if (m_MaxLocationLength.get())
        {
            m_MaxLocationLength->toMultipart(multipart, utility::conversions::to_string_t("maxLocationLength."));
        }
    }
    if(m_MaxDetailsShownIsSet)
    {
        if (m_MaxDetailsShown.get())
        {
            m_MaxDetailsShown->toMultipart(multipart, utility::conversions::to_string_t("maxDetailsShown."));
        }
    }
    if(m_MinDetailsPercentageIsSet)
    {
        if (m_MinDetailsPercentage.get())
        {
            m_MinDetailsPercentage->toMultipart(multipart, utility::conversions::to_string_t("minDetailsPercentage."));
        }
    }
    if(m_ThreadMatchersIsSet)
    {
        if (m_ThreadMatchers.get())
        {
            m_ThreadMatchers->toMultipart(multipart, utility::conversions::to_string_t("threadMatchers."));
        }
    }
    if(m_MaxGreedyDepthIsSet)
    {
        if (m_MaxGreedyDepth.get())
        {
            m_MaxGreedyDepth->toMultipart(multipart, utility::conversions::to_string_t("maxGreedyDepth."));
        }
    }
    if(m_GreedyStackMatchersIsSet)
    {
        if (m_GreedyStackMatchers.get())
        {
            m_GreedyStackMatchers->toMultipart(multipart, utility::conversions::to_string_t("greedyStackMatchers."));
        }
    }
    if(m_StackFiltersIsSet)
    {
        if (m_StackFilters.get())
        {
            m_StackFilters->toMultipart(multipart, utility::conversions::to_string_t("stackFilters."));
        }
    }
    if(m_StackMatchersIsSet)
    {
        if (m_StackMatchers.get())
        {
            m_StackMatchers->toMultipart(multipart, utility::conversions::to_string_t("stackMatchers."));
        }
    }
    if(m_StackCategorizersIsSet)
    {
        if (m_StackCategorizers.get())
        {
            m_StackCategorizers->toMultipart(multipart, utility::conversions::to_string_t("stackCategorizers."));
        }
    }
    if(m_StackShortenersIsSet)
    {
        if (m_StackShorteners.get())
        {
            m_StackShorteners->toMultipart(multipart, utility::conversions::to_string_t("stackShorteners."));
        }
    }
}

void ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("enabled")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("enabled")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("enabled."));
            setEnabled( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("intervalSeconds")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("intervalSeconds")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("intervalSeconds."));
            setIntervalSeconds( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("commitsPerIntervalThreshold")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("commitsPerIntervalThreshold")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("commitsPerIntervalThreshold."));
            setCommitsPerIntervalThreshold( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("maxLocationLength")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("maxLocationLength")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("maxLocationLength."));
            setMaxLocationLength( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("maxDetailsShown")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("maxDetailsShown")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("maxDetailsShown."));
            setMaxDetailsShown( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("minDetailsPercentage")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("minDetailsPercentage")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("minDetailsPercentage."));
            setMinDetailsPercentage( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("threadMatchers")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("threadMatchers")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("threadMatchers."));
            setThreadMatchers( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("maxGreedyDepth")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("maxGreedyDepth")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("maxGreedyDepth."));
            setMaxGreedyDepth( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("greedyStackMatchers")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("greedyStackMatchers")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("greedyStackMatchers."));
            setGreedyStackMatchers( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("stackFilters")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("stackFilters")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("stackFilters."));
            setStackFilters( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("stackMatchers")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("stackMatchers")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("stackMatchers."));
            setStackMatchers( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("stackCategorizers")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("stackCategorizers")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("stackCategorizers."));
            setStackCategorizers( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("stackShorteners")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("stackShorteners")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("stackShorteners."));
            setStackShorteners( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyBoolean> ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::getEnabled() const
{
    return m_Enabled;
}


void ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::setEnabled(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Enabled = value;
    m_EnabledIsSet = true;
}
bool ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::enabledIsSet() const
{
    return m_EnabledIsSet;
}

void ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::unsetEnabled()
{
    m_EnabledIsSet = false;
}

std::shared_ptr<ConfigNodePropertyInteger> ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::getIntervalSeconds() const
{
    return m_IntervalSeconds;
}


void ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::setIntervalSeconds(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_IntervalSeconds = value;
    m_IntervalSecondsIsSet = true;
}
bool ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::intervalSecondsIsSet() const
{
    return m_IntervalSecondsIsSet;
}

void ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::unsetIntervalSeconds()
{
    m_IntervalSecondsIsSet = false;
}

std::shared_ptr<ConfigNodePropertyInteger> ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::getCommitsPerIntervalThreshold() const
{
    return m_CommitsPerIntervalThreshold;
}


void ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::setCommitsPerIntervalThreshold(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_CommitsPerIntervalThreshold = value;
    m_CommitsPerIntervalThresholdIsSet = true;
}
bool ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::commitsPerIntervalThresholdIsSet() const
{
    return m_CommitsPerIntervalThresholdIsSet;
}

void ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::unsetCommitsPerIntervalThreshold()
{
    m_CommitsPerIntervalThresholdIsSet = false;
}

std::shared_ptr<ConfigNodePropertyInteger> ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::getMaxLocationLength() const
{
    return m_MaxLocationLength;
}


void ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::setMaxLocationLength(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_MaxLocationLength = value;
    m_MaxLocationLengthIsSet = true;
}
bool ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::maxLocationLengthIsSet() const
{
    return m_MaxLocationLengthIsSet;
}

void ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::unsetMaxLocationLength()
{
    m_MaxLocationLengthIsSet = false;
}

std::shared_ptr<ConfigNodePropertyInteger> ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::getMaxDetailsShown() const
{
    return m_MaxDetailsShown;
}


void ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::setMaxDetailsShown(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_MaxDetailsShown = value;
    m_MaxDetailsShownIsSet = true;
}
bool ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::maxDetailsShownIsSet() const
{
    return m_MaxDetailsShownIsSet;
}

void ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::unsetMaxDetailsShown()
{
    m_MaxDetailsShownIsSet = false;
}

std::shared_ptr<ConfigNodePropertyInteger> ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::getMinDetailsPercentage() const
{
    return m_MinDetailsPercentage;
}


void ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::setMinDetailsPercentage(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_MinDetailsPercentage = value;
    m_MinDetailsPercentageIsSet = true;
}
bool ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::minDetailsPercentageIsSet() const
{
    return m_MinDetailsPercentageIsSet;
}

void ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::unsetMinDetailsPercentage()
{
    m_MinDetailsPercentageIsSet = false;
}

std::shared_ptr<ConfigNodePropertyArray> ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::getThreadMatchers() const
{
    return m_ThreadMatchers;
}


void ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::setThreadMatchers(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_ThreadMatchers = value;
    m_ThreadMatchersIsSet = true;
}
bool ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::threadMatchersIsSet() const
{
    return m_ThreadMatchersIsSet;
}

void ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::unsetThreadMatchers()
{
    m_ThreadMatchersIsSet = false;
}

std::shared_ptr<ConfigNodePropertyInteger> ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::getMaxGreedyDepth() const
{
    return m_MaxGreedyDepth;
}


void ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::setMaxGreedyDepth(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_MaxGreedyDepth = value;
    m_MaxGreedyDepthIsSet = true;
}
bool ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::maxGreedyDepthIsSet() const
{
    return m_MaxGreedyDepthIsSet;
}

void ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::unsetMaxGreedyDepth()
{
    m_MaxGreedyDepthIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::getGreedyStackMatchers() const
{
    return m_GreedyStackMatchers;
}


void ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::setGreedyStackMatchers(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_GreedyStackMatchers = value;
    m_GreedyStackMatchersIsSet = true;
}
bool ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::greedyStackMatchersIsSet() const
{
    return m_GreedyStackMatchersIsSet;
}

void ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::unsetGreedyStackMatchers()
{
    m_GreedyStackMatchersIsSet = false;
}

std::shared_ptr<ConfigNodePropertyArray> ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::getStackFilters() const
{
    return m_StackFilters;
}


void ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::setStackFilters(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_StackFilters = value;
    m_StackFiltersIsSet = true;
}
bool ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::stackFiltersIsSet() const
{
    return m_StackFiltersIsSet;
}

void ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::unsetStackFilters()
{
    m_StackFiltersIsSet = false;
}

std::shared_ptr<ConfigNodePropertyArray> ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::getStackMatchers() const
{
    return m_StackMatchers;
}


void ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::setStackMatchers(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_StackMatchers = value;
    m_StackMatchersIsSet = true;
}
bool ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::stackMatchersIsSet() const
{
    return m_StackMatchersIsSet;
}

void ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::unsetStackMatchers()
{
    m_StackMatchersIsSet = false;
}

std::shared_ptr<ConfigNodePropertyArray> ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::getStackCategorizers() const
{
    return m_StackCategorizers;
}


void ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::setStackCategorizers(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_StackCategorizers = value;
    m_StackCategorizersIsSet = true;
}
bool ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::stackCategorizersIsSet() const
{
    return m_StackCategorizersIsSet;
}

void ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::unsetStackCategorizers()
{
    m_StackCategorizersIsSet = false;
}

std::shared_ptr<ConfigNodePropertyArray> ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::getStackShorteners() const
{
    return m_StackShorteners;
}


void ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::setStackShorteners(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_StackShorteners = value;
    m_StackShortenersIsSet = true;
}
bool ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::stackShortenersIsSet() const
{
    return m_StackShortenersIsSet;
}

void ComAdobeGraniteRepositoryImplCommitStatsConfigProperties::unsetStackShorteners()
{
    m_StackShortenersIsSet = false;
}

}
}
}
}
