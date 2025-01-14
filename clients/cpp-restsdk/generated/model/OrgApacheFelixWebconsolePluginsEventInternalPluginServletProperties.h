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
 * OrgApacheFelixWebconsolePluginsEventInternalPluginServletProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_OrgApacheFelixWebconsolePluginsEventInternalPluginServletProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_OrgApacheFelixWebconsolePluginsEventInternalPluginServletProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyInteger.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheFelixWebconsolePluginsEventInternalPluginServletProperties
    : public ModelBase
{
public:
    OrgApacheFelixWebconsolePluginsEventInternalPluginServletProperties();
    virtual ~OrgApacheFelixWebconsolePluginsEventInternalPluginServletProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// OrgApacheFelixWebconsolePluginsEventInternalPluginServletProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getMaxSize() const;
    bool maxSizeIsSet() const;
    void unsetMax_size();
    void setMaxSize(std::shared_ptr<ConfigNodePropertyInteger> value);

protected:
    std::shared_ptr<ConfigNodePropertyInteger> m_Max_size;
    bool m_Max_sizeIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_OrgApacheFelixWebconsolePluginsEventInternalPluginServletProperties_H_ */
