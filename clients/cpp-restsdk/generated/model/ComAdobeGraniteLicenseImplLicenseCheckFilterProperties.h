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
 * ComAdobeGraniteLicenseImplLicenseCheckFilterProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeGraniteLicenseImplLicenseCheckFilterProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeGraniteLicenseImplLicenseCheckFilterProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyArray.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeGraniteLicenseImplLicenseCheckFilterProperties
    : public ModelBase
{
public:
    ComAdobeGraniteLicenseImplLicenseCheckFilterProperties();
    virtual ~ComAdobeGraniteLicenseImplLicenseCheckFilterProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ComAdobeGraniteLicenseImplLicenseCheckFilterProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getCheckInternval() const;
    bool checkInternvalIsSet() const;
    void unsetCheckInternval();
    void setCheckInternval(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getExcludeIds() const;
    bool excludeIdsIsSet() const;
    void unsetExcludeIds();
    void setExcludeIds(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getEncryptPing() const;
    bool encryptPingIsSet() const;
    void unsetEncryptPing();
    void setEncryptPing(std::shared_ptr<ConfigNodePropertyBoolean> value);

protected:
    std::shared_ptr<ConfigNodePropertyInteger> m_CheckInternval;
    bool m_CheckInternvalIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_ExcludeIds;
    bool m_ExcludeIdsIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_EncryptPing;
    bool m_EncryptPingIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeGraniteLicenseImplLicenseCheckFilterProperties_H_ */