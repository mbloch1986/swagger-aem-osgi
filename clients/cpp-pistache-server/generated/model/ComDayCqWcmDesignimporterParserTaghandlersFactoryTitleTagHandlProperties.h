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
 * ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleTagHandlProperties.h
 *
 * 
 */

#ifndef ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleTagHandlProperties_H_
#define ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleTagHandlProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleTagHandlProperties
    : public ModelBase
{
public:
    ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleTagHandlProperties();
    virtual ~ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleTagHandlProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleTagHandlProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyInteger getServiceRanking() const;
    void setServiceRanking(ConfigNodePropertyInteger const& value);
    bool serviceRankingIsSet() const;
    void unsetService_ranking();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getTagpattern() const;
    void setTagpattern(ConfigNodePropertyString const& value);
    bool tagpatternIsSet() const;
    void unsetTagpattern();

protected:
    ConfigNodePropertyInteger m_Service_ranking;
    bool m_Service_rankingIsSet;
    ConfigNodePropertyString m_Tagpattern;
    bool m_TagpatternIsSet;
};

}
}
}
}

#endif /* ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleTagHandlProperties_H_ */
