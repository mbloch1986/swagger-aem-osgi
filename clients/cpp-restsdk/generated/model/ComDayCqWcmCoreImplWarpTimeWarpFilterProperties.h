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
 * ComDayCqWcmCoreImplWarpTimeWarpFilterProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqWcmCoreImplWarpTimeWarpFilterProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqWcmCoreImplWarpTimeWarpFilterProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqWcmCoreImplWarpTimeWarpFilterProperties
    : public ModelBase
{
public:
    ComDayCqWcmCoreImplWarpTimeWarpFilterProperties();
    virtual ~ComDayCqWcmCoreImplWarpTimeWarpFilterProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ComDayCqWcmCoreImplWarpTimeWarpFilterProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getFilterOrder() const;
    bool filterOrderIsSet() const;
    void unsetFilter_order();
    void setFilterOrder(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getFilterScope() const;
    bool filterScopeIsSet() const;
    void unsetFilter_scope();
    void setFilterScope(std::shared_ptr<ConfigNodePropertyString> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_Filter_order;
    bool m_Filter_orderIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Filter_scope;
    bool m_Filter_scopeIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqWcmCoreImplWarpTimeWarpFilterProperties_H_ */
