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
 * ComAdobeGraniteAcpPlatformPlatformServletProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeGraniteAcpPlatformPlatformServletProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeGraniteAcpPlatformPlatformServletProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyArray.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeGraniteAcpPlatformPlatformServletProperties
    : public ModelBase
{
public:
    ComAdobeGraniteAcpPlatformPlatformServletProperties();
    virtual ~ComAdobeGraniteAcpPlatformPlatformServletProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ComAdobeGraniteAcpPlatformPlatformServletProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getQueryLimit() const;
    bool queryLimitIsSet() const;
    void unsetQuery_limit();
    void setQueryLimit(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getFileTypeExtensionMap() const;
    bool fileTypeExtensionMapIsSet() const;
    void unsetFile_type_extension_map();
    void setFileTypeExtensionMap(std::shared_ptr<ConfigNodePropertyArray> value);

protected:
    std::shared_ptr<ConfigNodePropertyInteger> m_Query_limit;
    bool m_Query_limitIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_File_type_extension_map;
    bool m_File_type_extension_mapIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeGraniteAcpPlatformPlatformServletProperties_H_ */
