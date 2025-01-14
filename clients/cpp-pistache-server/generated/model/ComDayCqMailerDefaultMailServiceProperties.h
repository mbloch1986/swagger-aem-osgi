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
 * ComDayCqMailerDefaultMailServiceProperties.h
 *
 * 
 */

#ifndef ComDayCqMailerDefaultMailServiceProperties_H_
#define ComDayCqMailerDefaultMailServiceProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
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

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComDayCqMailerDefaultMailServiceProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getSmtpHost() const;
    void setSmtpHost(ConfigNodePropertyString const& value);
    bool smtpHostIsSet() const;
    void unsetSmtp_host();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyInteger getSmtpPort() const;
    void setSmtpPort(ConfigNodePropertyInteger const& value);
    bool smtpPortIsSet() const;
    void unsetSmtp_port();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getSmtpUser() const;
    void setSmtpUser(ConfigNodePropertyString const& value);
    bool smtpUserIsSet() const;
    void unsetSmtp_user();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getSmtpPassword() const;
    void setSmtpPassword(ConfigNodePropertyString const& value);
    bool smtpPasswordIsSet() const;
    void unsetSmtp_password();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getFromAddress() const;
    void setFromAddress(ConfigNodePropertyString const& value);
    bool fromAddressIsSet() const;
    void unsetFrom_address();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getSmtpSsl() const;
    void setSmtpSsl(ConfigNodePropertyBoolean const& value);
    bool smtpSslIsSet() const;
    void unsetSmtp_ssl();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getSmtpStarttls() const;
    void setSmtpStarttls(ConfigNodePropertyBoolean const& value);
    bool smtpStarttlsIsSet() const;
    void unsetSmtp_starttls();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getDebugEmail() const;
    void setDebugEmail(ConfigNodePropertyBoolean const& value);
    bool debugEmailIsSet() const;
    void unsetDebug_email();

protected:
    ConfigNodePropertyString m_Smtp_host;
    bool m_Smtp_hostIsSet;
    ConfigNodePropertyInteger m_Smtp_port;
    bool m_Smtp_portIsSet;
    ConfigNodePropertyString m_Smtp_user;
    bool m_Smtp_userIsSet;
    ConfigNodePropertyString m_Smtp_password;
    bool m_Smtp_passwordIsSet;
    ConfigNodePropertyString m_From_address;
    bool m_From_addressIsSet;
    ConfigNodePropertyBoolean m_Smtp_ssl;
    bool m_Smtp_sslIsSet;
    ConfigNodePropertyBoolean m_Smtp_starttls;
    bool m_Smtp_starttlsIsSet;
    ConfigNodePropertyBoolean m_Debug_email;
    bool m_Debug_emailIsSet;
};

}
}
}
}

#endif /* ComDayCqMailerDefaultMailServiceProperties_H_ */
