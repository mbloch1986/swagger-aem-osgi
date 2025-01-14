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
 * ComDayCqDamCommonsHandlerStandardImageHandlerProperties.h
 *
 * 
 */

#ifndef ComDayCqDamCommonsHandlerStandardImageHandlerProperties_H_
#define ComDayCqDamCommonsHandlerStandardImageHandlerProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyInteger.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqDamCommonsHandlerStandardImageHandlerProperties
    : public ModelBase
{
public:
    ComDayCqDamCommonsHandlerStandardImageHandlerProperties();
    virtual ~ComDayCqDamCommonsHandlerStandardImageHandlerProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComDayCqDamCommonsHandlerStandardImageHandlerProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyInteger getLargeFileThreshold() const;
    void setLargeFileThreshold(ConfigNodePropertyInteger const& value);
    bool largeFileThresholdIsSet() const;
    void unsetLarge_file_threshold();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyInteger getLargeCommentThreshold() const;
    void setLargeCommentThreshold(ConfigNodePropertyInteger const& value);
    bool largeCommentThresholdIsSet() const;
    void unsetLarge_comment_threshold();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getCqDamEnableExtMetaExtraction() const;
    void setCqDamEnableExtMetaExtraction(ConfigNodePropertyBoolean const& value);
    bool cqDamEnableExtMetaExtractionIsSet() const;
    void unsetCq_dam_enable_ext_meta_extraction();

protected:
    ConfigNodePropertyInteger m_Large_file_threshold;
    bool m_Large_file_thresholdIsSet;
    ConfigNodePropertyInteger m_Large_comment_threshold;
    bool m_Large_comment_thresholdIsSet;
    ConfigNodePropertyBoolean m_Cq_dam_enable_ext_meta_extraction;
    bool m_Cq_dam_enable_ext_meta_extractionIsSet;
};

}
}
}
}

#endif /* ComDayCqDamCommonsHandlerStandardImageHandlerProperties_H_ */
