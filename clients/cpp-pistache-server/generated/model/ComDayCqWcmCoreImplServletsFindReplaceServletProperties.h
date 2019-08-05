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
 * ComDayCqWcmCoreImplServletsFindReplaceServletProperties.h
 *
 * 
 */

#ifndef ComDayCqWcmCoreImplServletsFindReplaceServletProperties_H_
#define ComDayCqWcmCoreImplServletsFindReplaceServletProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyArray.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqWcmCoreImplServletsFindReplaceServletProperties
    : public ModelBase
{
public:
    ComDayCqWcmCoreImplServletsFindReplaceServletProperties();
    virtual ~ComDayCqWcmCoreImplServletsFindReplaceServletProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComDayCqWcmCoreImplServletsFindReplaceServletProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyArray getScope() const;
    void setScope(ConfigNodePropertyArray const& value);
    bool scopeIsSet() const;
    void unsetScope();

protected:
    ConfigNodePropertyArray m_Scope;
    bool m_ScopeIsSet;
};

}
}
}
}

#endif /* ComDayCqWcmCoreImplServletsFindReplaceServletProperties_H_ */