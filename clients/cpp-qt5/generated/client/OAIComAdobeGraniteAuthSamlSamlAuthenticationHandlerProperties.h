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
 * OAIComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.h
 *
 * 
 */

#ifndef OAIComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties_H_
#define OAIComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyArray.h"
#include "OAIOAIConfigNodePropertyBoolean.h"
#include "OAIOAIConfigNodePropertyDropDown.h"
#include "OAIOAIConfigNodePropertyInteger.h"
#include "OAIOAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties: public OAIObject {
public:
    OAIComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties();
    OAIComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties(QString json);
    ~OAIComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray* getPath();
    void setPath(OAIConfigNodePropertyArray* path);

    OAIConfigNodePropertyInteger* getServiceRanking();
    void setServiceRanking(OAIConfigNodePropertyInteger* service_ranking);

    OAIConfigNodePropertyString* getIdpUrl();
    void setIdpUrl(OAIConfigNodePropertyString* idp_url);

    OAIConfigNodePropertyString* getIdpCertAlias();
    void setIdpCertAlias(OAIConfigNodePropertyString* idp_cert_alias);

    OAIConfigNodePropertyBoolean* getIdpHttpRedirect();
    void setIdpHttpRedirect(OAIConfigNodePropertyBoolean* idp_http_redirect);

    OAIConfigNodePropertyString* getServiceProviderEntityId();
    void setServiceProviderEntityId(OAIConfigNodePropertyString* service_provider_entity_id);

    OAIConfigNodePropertyString* getAssertionConsumerServiceUrl();
    void setAssertionConsumerServiceUrl(OAIConfigNodePropertyString* assertion_consumer_service_url);

    OAIConfigNodePropertyString* getSpPrivateKeyAlias();
    void setSpPrivateKeyAlias(OAIConfigNodePropertyString* sp_private_key_alias);

    OAIConfigNodePropertyString* getKeyStorePassword();
    void setKeyStorePassword(OAIConfigNodePropertyString* key_store_password);

    OAIConfigNodePropertyString* getDefaultRedirectUrl();
    void setDefaultRedirectUrl(OAIConfigNodePropertyString* default_redirect_url);

    OAIConfigNodePropertyString* getUserIdAttribute();
    void setUserIdAttribute(OAIConfigNodePropertyString* user_id_attribute);

    OAIConfigNodePropertyBoolean* getUseEncryption();
    void setUseEncryption(OAIConfigNodePropertyBoolean* use_encryption);

    OAIConfigNodePropertyBoolean* getCreateUser();
    void setCreateUser(OAIConfigNodePropertyBoolean* create_user);

    OAIConfigNodePropertyString* getUserIntermediatePath();
    void setUserIntermediatePath(OAIConfigNodePropertyString* user_intermediate_path);

    OAIConfigNodePropertyBoolean* getAddGroupMemberships();
    void setAddGroupMemberships(OAIConfigNodePropertyBoolean* add_group_memberships);

    OAIConfigNodePropertyString* getGroupMembershipAttribute();
    void setGroupMembershipAttribute(OAIConfigNodePropertyString* group_membership_attribute);

    OAIConfigNodePropertyArray* getDefaultGroups();
    void setDefaultGroups(OAIConfigNodePropertyArray* default_groups);

    OAIConfigNodePropertyString* getNameIdFormat();
    void setNameIdFormat(OAIConfigNodePropertyString* name_id_format);

    OAIConfigNodePropertyArray* getSynchronizeAttributes();
    void setSynchronizeAttributes(OAIConfigNodePropertyArray* synchronize_attributes);

    OAIConfigNodePropertyBoolean* getHandleLogout();
    void setHandleLogout(OAIConfigNodePropertyBoolean* handle_logout);

    OAIConfigNodePropertyString* getLogoutUrl();
    void setLogoutUrl(OAIConfigNodePropertyString* logout_url);

    OAIConfigNodePropertyInteger* getClockTolerance();
    void setClockTolerance(OAIConfigNodePropertyInteger* clock_tolerance);

    OAIConfigNodePropertyString* getDigestMethod();
    void setDigestMethod(OAIConfigNodePropertyString* digest_method);

    OAIConfigNodePropertyString* getSignatureMethod();
    void setSignatureMethod(OAIConfigNodePropertyString* signature_method);

    OAIConfigNodePropertyDropDown* getIdentitySyncType();
    void setIdentitySyncType(OAIConfigNodePropertyDropDown* identity_sync_type);

    OAIConfigNodePropertyString* getIdpIdentifier();
    void setIdpIdentifier(OAIConfigNodePropertyString* idp_identifier);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyArray* path;
    bool m_path_isSet;

    OAIConfigNodePropertyInteger* service_ranking;
    bool m_service_ranking_isSet;

    OAIConfigNodePropertyString* idp_url;
    bool m_idp_url_isSet;

    OAIConfigNodePropertyString* idp_cert_alias;
    bool m_idp_cert_alias_isSet;

    OAIConfigNodePropertyBoolean* idp_http_redirect;
    bool m_idp_http_redirect_isSet;

    OAIConfigNodePropertyString* service_provider_entity_id;
    bool m_service_provider_entity_id_isSet;

    OAIConfigNodePropertyString* assertion_consumer_service_url;
    bool m_assertion_consumer_service_url_isSet;

    OAIConfigNodePropertyString* sp_private_key_alias;
    bool m_sp_private_key_alias_isSet;

    OAIConfigNodePropertyString* key_store_password;
    bool m_key_store_password_isSet;

    OAIConfigNodePropertyString* default_redirect_url;
    bool m_default_redirect_url_isSet;

    OAIConfigNodePropertyString* user_id_attribute;
    bool m_user_id_attribute_isSet;

    OAIConfigNodePropertyBoolean* use_encryption;
    bool m_use_encryption_isSet;

    OAIConfigNodePropertyBoolean* create_user;
    bool m_create_user_isSet;

    OAIConfigNodePropertyString* user_intermediate_path;
    bool m_user_intermediate_path_isSet;

    OAIConfigNodePropertyBoolean* add_group_memberships;
    bool m_add_group_memberships_isSet;

    OAIConfigNodePropertyString* group_membership_attribute;
    bool m_group_membership_attribute_isSet;

    OAIConfigNodePropertyArray* default_groups;
    bool m_default_groups_isSet;

    OAIConfigNodePropertyString* name_id_format;
    bool m_name_id_format_isSet;

    OAIConfigNodePropertyArray* synchronize_attributes;
    bool m_synchronize_attributes_isSet;

    OAIConfigNodePropertyBoolean* handle_logout;
    bool m_handle_logout_isSet;

    OAIConfigNodePropertyString* logout_url;
    bool m_logout_url_isSet;

    OAIConfigNodePropertyInteger* clock_tolerance;
    bool m_clock_tolerance_isSet;

    OAIConfigNodePropertyString* digest_method;
    bool m_digest_method_isSet;

    OAIConfigNodePropertyString* signature_method;
    bool m_signature_method_isSet;

    OAIConfigNodePropertyDropDown* identity_sync_type;
    bool m_identity_sync_type_isSet;

    OAIConfigNodePropertyString* idp_identifier;
    bool m_idp_identifier_isSet;

};

}

#endif /* OAIComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties_H_ */