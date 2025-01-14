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
 * ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLProperties.h
 *
 * 
 */

#ifndef ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLProperties_H_
#define ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyArray.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLProperties
    : public ModelBase
{
public:
    ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLProperties();
    virtual ~ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyArray getFieldWhitelist() const;
    void setFieldWhitelist(ConfigNodePropertyArray const& value);
    bool fieldWhitelistIsSet() const;
    void unsetFieldWhitelist();

protected:
    ConfigNodePropertyArray m_FieldWhitelist;
    bool m_FieldWhitelistIsSet;
};

}
}
}
}

#endif /* ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLProperties_H_ */
