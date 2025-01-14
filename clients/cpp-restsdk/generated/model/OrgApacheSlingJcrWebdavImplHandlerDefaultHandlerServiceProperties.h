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
 * OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties
    : public ModelBase
{
public:
    OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties();
    virtual ~OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getServiceRanking() const;
    bool serviceRankingIsSet() const;
    void unsetService_ranking();
    void setServiceRanking(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getTypeCollections() const;
    bool typeCollectionsIsSet() const;
    void unsetType_collections();
    void setTypeCollections(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getTypeNoncollections() const;
    bool typeNoncollectionsIsSet() const;
    void unsetType_noncollections();
    void setTypeNoncollections(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getTypeContent() const;
    bool typeContentIsSet() const;
    void unsetType_content();
    void setTypeContent(std::shared_ptr<ConfigNodePropertyString> value);

protected:
    std::shared_ptr<ConfigNodePropertyInteger> m_Service_ranking;
    bool m_Service_rankingIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Type_collections;
    bool m_Type_collectionsIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Type_noncollections;
    bool m_Type_noncollectionsIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Type_content;
    bool m_Type_contentIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties_H_ */
