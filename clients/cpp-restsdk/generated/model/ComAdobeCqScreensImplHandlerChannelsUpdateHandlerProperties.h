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
 * ComAdobeCqScreensImplHandlerChannelsUpdateHandlerProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeCqScreensImplHandlerChannelsUpdateHandlerProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeCqScreensImplHandlerChannelsUpdateHandlerProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyArray.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqScreensImplHandlerChannelsUpdateHandlerProperties
    : public ModelBase
{
public:
    ComAdobeCqScreensImplHandlerChannelsUpdateHandlerProperties();
    virtual ~ComAdobeCqScreensImplHandlerChannelsUpdateHandlerProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ComAdobeCqScreensImplHandlerChannelsUpdateHandlerProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getCqPagesupdatehandlerImageresourcetypes() const;
    bool cqPagesupdatehandlerImageresourcetypesIsSet() const;
    void unsetCq_pagesupdatehandler_imageresourcetypes();
    void setCqPagesupdatehandlerImageresourcetypes(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getCqPagesupdatehandlerProductresourcetypes() const;
    bool cqPagesupdatehandlerProductresourcetypesIsSet() const;
    void unsetCq_pagesupdatehandler_productresourcetypes();
    void setCqPagesupdatehandlerProductresourcetypes(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getCqPagesupdatehandlerVideoresourcetypes() const;
    bool cqPagesupdatehandlerVideoresourcetypesIsSet() const;
    void unsetCq_pagesupdatehandler_videoresourcetypes();
    void setCqPagesupdatehandlerVideoresourcetypes(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getCqPagesupdatehandlerDynamicsequenceresourcetypes() const;
    bool cqPagesupdatehandlerDynamicsequenceresourcetypesIsSet() const;
    void unsetCq_pagesupdatehandler_dynamicsequenceresourcetypes();
    void setCqPagesupdatehandlerDynamicsequenceresourcetypes(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getCqPagesupdatehandlerPreviewmodepaths() const;
    bool cqPagesupdatehandlerPreviewmodepathsIsSet() const;
    void unsetCq_pagesupdatehandler_previewmodepaths();
    void setCqPagesupdatehandlerPreviewmodepaths(std::shared_ptr<ConfigNodePropertyArray> value);

protected:
    std::shared_ptr<ConfigNodePropertyArray> m_Cq_pagesupdatehandler_imageresourcetypes;
    bool m_Cq_pagesupdatehandler_imageresourcetypesIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_Cq_pagesupdatehandler_productresourcetypes;
    bool m_Cq_pagesupdatehandler_productresourcetypesIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_Cq_pagesupdatehandler_videoresourcetypes;
    bool m_Cq_pagesupdatehandler_videoresourcetypesIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_Cq_pagesupdatehandler_dynamicsequenceresourcetypes;
    bool m_Cq_pagesupdatehandler_dynamicsequenceresourcetypesIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_Cq_pagesupdatehandler_previewmodepaths;
    bool m_Cq_pagesupdatehandler_previewmodepathsIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeCqScreensImplHandlerChannelsUpdateHandlerProperties_H_ */