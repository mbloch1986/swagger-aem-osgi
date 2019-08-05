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
 * ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyInteger.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerProperties
    : public ModelBase
{
public:
    ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerProperties();
    virtual ~ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getMinThreadPoolSize() const;
    bool minThreadPoolSizeIsSet() const;
    void unsetMinThreadPoolSize();
    void setMinThreadPoolSize(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getMaxThreadPoolSize() const;
    bool maxThreadPoolSizeIsSet() const;
    void unsetMaxThreadPoolSize();
    void setMaxThreadPoolSize(std::shared_ptr<ConfigNodePropertyInteger> value);

protected:
    std::shared_ptr<ConfigNodePropertyInteger> m_MinThreadPoolSize;
    bool m_MinThreadPoolSizeIsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_MaxThreadPoolSize;
    bool m_MaxThreadPoolSizeIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerProperties_H_ */