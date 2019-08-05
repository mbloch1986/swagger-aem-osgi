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
 * ComAdobeCqSocialCommonsEmailreplyImplCommentEmailBuilderImplProperties.h
 *
 * 
 */

#ifndef ComAdobeCqSocialCommonsEmailreplyImplCommentEmailBuilderImplProperties_H_
#define ComAdobeCqSocialCommonsEmailreplyImplCommentEmailBuilderImplProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqSocialCommonsEmailreplyImplCommentEmailBuilderImplProperties
    : public ModelBase
{
public:
    ComAdobeCqSocialCommonsEmailreplyImplCommentEmailBuilderImplProperties();
    virtual ~ComAdobeCqSocialCommonsEmailreplyImplCommentEmailBuilderImplProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComAdobeCqSocialCommonsEmailreplyImplCommentEmailBuilderImplProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getContextPath() const;
    void setContextPath(ConfigNodePropertyString const& value);
    bool contextPathIsSet() const;
    void unsetContext_path();

protected:
    ConfigNodePropertyString m_Context_path;
    bool m_Context_pathIsSet;
};

}
}
}
}

#endif /* ComAdobeCqSocialCommonsEmailreplyImplCommentEmailBuilderImplProperties_H_ */