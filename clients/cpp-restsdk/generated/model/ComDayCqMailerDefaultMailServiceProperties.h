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
 * ComDayCqMailerDefaultMailServiceProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqMailerDefaultMailServiceProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqMailerDefaultMailServiceProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqMailerDefaultMailServiceProperties
    : public ModelBase
{
public:
    ComDayCqMailerDefaultMailServiceProperties();
    virtual ~ComDayCqMailerDefaultMailServiceProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ComDayCqMailerDefaultMailServiceProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getSmtpHost() const;
    bool smtpHostIsSet() const;
    void unsetSmtp_host();
    void setSmtpHost(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getSmtpPort() const;
    bool smtpPortIsSet() const;
    void unsetSmtp_port();
    void setSmtpPort(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getSmtpUser() const;
    bool smtpUserIsSet() const;
    void unsetSmtp_user();
    void setSmtpUser(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getSmtpPassword() const;
    bool smtpPasswordIsSet() const;
    void unsetSmtp_password();
    void setSmtpPassword(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getFromAddress() const;
    bool fromAddressIsSet() const;
    void unsetFrom_address();
    void setFromAddress(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getSmtpSsl() const;
    bool smtpSslIsSet() const;
    void unsetSmtp_ssl();
    void setSmtpSsl(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getSmtpStarttls() const;
    bool smtpStarttlsIsSet() const;
    void unsetSmtp_starttls();
    void setSmtpStarttls(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getDebugEmail() const;
    bool debugEmailIsSet() const;
    void unsetDebug_email();
    void setDebugEmail(std::shared_ptr<ConfigNodePropertyBoolean> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_Smtp_host;
    bool m_Smtp_hostIsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_Smtp_port;
    bool m_Smtp_portIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Smtp_user;
    bool m_Smtp_userIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Smtp_password;
    bool m_Smtp_passwordIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_From_address;
    bool m_From_addressIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Smtp_ssl;
    bool m_Smtp_sslIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Smtp_starttls;
    bool m_Smtp_starttlsIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Debug_email;
    bool m_Debug_emailIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqMailerDefaultMailServiceProperties_H_ */