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
 * ComDayCqDamCoreImplRenditionMakerImplProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqDamCoreImplRenditionMakerImplProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqDamCoreImplRenditionMakerImplProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyArray.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqDamCoreImplRenditionMakerImplProperties
    : public ModelBase
{
public:
    ComDayCqDamCoreImplRenditionMakerImplProperties();
    virtual ~ComDayCqDamCoreImplRenditionMakerImplProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ComDayCqDamCoreImplRenditionMakerImplProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getXmpPropagate() const;
    bool xmpPropagateIsSet() const;
    void unsetXmp_propagate();
    void setXmpPropagate(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getXmpExcludes() const;
    bool xmpExcludesIsSet() const;
    void unsetXmp_excludes();
    void setXmpExcludes(std::shared_ptr<ConfigNodePropertyArray> value);

protected:
    std::shared_ptr<ConfigNodePropertyBoolean> m_Xmp_propagate;
    bool m_Xmp_propagateIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_Xmp_excludes;
    bool m_Xmp_excludesIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqDamCoreImplRenditionMakerImplProperties_H_ */