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

/*
 * ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties
    : public ModelBase
{
public:
    ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties();
    virtual ~ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getPatternTime() const;
    bool patternTimeIsSet() const;
    void unsetPattern_time();
    void setPatternTime(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getPatternNewline() const;
    bool patternNewlineIsSet() const;
    void unsetPattern_newline();
    void setPatternNewline(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getPatternDayOfMonth() const;
    bool patternDayOfMonthIsSet() const;
    void unsetPattern_dayOfMonth();
    void setPatternDayOfMonth(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getPatternMonth() const;
    bool patternMonthIsSet() const;
    void unsetPattern_month();
    void setPatternMonth(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getPatternYear() const;
    bool patternYearIsSet() const;
    void unsetPattern_year();
    void setPatternYear(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getPatternDate() const;
    bool patternDateIsSet() const;
    void unsetPattern_date();
    void setPatternDate(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getPatternDateTime() const;
    bool patternDateTimeIsSet() const;
    void unsetPattern_dateTime();
    void setPatternDateTime(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getPatternEmail() const;
    bool patternEmailIsSet() const;
    void unsetPattern_email();
    void setPatternEmail(std::shared_ptr<ConfigNodePropertyString> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_Pattern_time;
    bool m_Pattern_timeIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Pattern_newline;
    bool m_Pattern_newlineIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Pattern_dayOfMonth;
    bool m_Pattern_dayOfMonthIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Pattern_month;
    bool m_Pattern_monthIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Pattern_year;
    bool m_Pattern_yearIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Pattern_date;
    bool m_Pattern_dateIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Pattern_dateTime;
    bool m_Pattern_dateTimeIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Pattern_email;
    bool m_Pattern_emailIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties_H_ */
