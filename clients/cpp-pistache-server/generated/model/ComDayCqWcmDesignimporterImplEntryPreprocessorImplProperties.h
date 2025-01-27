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
/*
 * ComDayCqWcmDesignimporterImplEntryPreprocessorImplProperties.h
 *
 * 
 */

#ifndef ComDayCqWcmDesignimporterImplEntryPreprocessorImplProperties_H_
#define ComDayCqWcmDesignimporterImplEntryPreprocessorImplProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqWcmDesignimporterImplEntryPreprocessorImplProperties
    : public ModelBase
{
public:
    ComDayCqWcmDesignimporterImplEntryPreprocessorImplProperties();
    virtual ~ComDayCqWcmDesignimporterImplEntryPreprocessorImplProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComDayCqWcmDesignimporterImplEntryPreprocessorImplProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getSearchPattern() const;
    void setSearchPattern(ConfigNodePropertyString const& value);
    bool searchPatternIsSet() const;
    void unsetSearch_pattern();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getReplacePattern() const;
    void setReplacePattern(ConfigNodePropertyString const& value);
    bool replacePatternIsSet() const;
    void unsetReplace_pattern();

protected:
    ConfigNodePropertyString m_Search_pattern;
    bool m_Search_patternIsSet;
    ConfigNodePropertyString m_Replace_pattern;
    bool m_Replace_patternIsSet;
};

}
}
}
}

#endif /* ComDayCqWcmDesignimporterImplEntryPreprocessorImplProperties_H_ */
