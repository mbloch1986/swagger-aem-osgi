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

#ifndef OAIComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties_H
#define OAIComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyArray.h"
#include "OAIConfigNodePropertyBoolean.h"
#include "OAIConfigNodePropertyDropDown.h"
#include "OAIConfigNodePropertyInteger.h"
#include "OAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties: public OAIObject {
public:
    OAIComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties();
    OAIComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties(QString json);
    ~OAIComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray getPath() const;
    void setPath(const OAIConfigNodePropertyArray &path);

    OAIConfigNodePropertyInteger getServiceRanking() const;
    void setServiceRanking(const OAIConfigNodePropertyInteger &service_ranking);

    OAIConfigNodePropertyString getIdpUrl() const;
    void setIdpUrl(const OAIConfigNodePropertyString &idp_url);

    OAIConfigNodePropertyString getIdpCertAlias() const;
    void setIdpCertAlias(const OAIConfigNodePropertyString &idp_cert_alias);

    OAIConfigNodePropertyBoolean getIdpHttpRedirect() const;
    void setIdpHttpRedirect(const OAIConfigNodePropertyBoolean &idp_http_redirect);

    OAIConfigNodePropertyString getServiceProviderEntityId() const;
    void setServiceProviderEntityId(const OAIConfigNodePropertyString &service_provider_entity_id);

    OAIConfigNodePropertyString getAssertionConsumerServiceUrl() const;
    void setAssertionConsumerServiceUrl(const OAIConfigNodePropertyString &assertion_consumer_service_url);

    OAIConfigNodePropertyString getSpPrivateKeyAlias() const;
    void setSpPrivateKeyAlias(const OAIConfigNodePropertyString &sp_private_key_alias);

    OAIConfigNodePropertyString getKeyStorePassword() const;
    void setKeyStorePassword(const OAIConfigNodePropertyString &key_store_password);

    OAIConfigNodePropertyString getDefaultRedirectUrl() const;
    void setDefaultRedirectUrl(const OAIConfigNodePropertyString &default_redirect_url);

    OAIConfigNodePropertyString getUserIdAttribute() const;
    void setUserIdAttribute(const OAIConfigNodePropertyString &user_id_attribute);

    OAIConfigNodePropertyBoolean getUseEncryption() const;
    void setUseEncryption(const OAIConfigNodePropertyBoolean &use_encryption);

    OAIConfigNodePropertyBoolean getCreateUser() const;
    void setCreateUser(const OAIConfigNodePropertyBoolean &create_user);

    OAIConfigNodePropertyString getUserIntermediatePath() const;
    void setUserIntermediatePath(const OAIConfigNodePropertyString &user_intermediate_path);

    OAIConfigNodePropertyBoolean getAddGroupMemberships() const;
    void setAddGroupMemberships(const OAIConfigNodePropertyBoolean &add_group_memberships);

    OAIConfigNodePropertyString getGroupMembershipAttribute() const;
    void setGroupMembershipAttribute(const OAIConfigNodePropertyString &group_membership_attribute);

    OAIConfigNodePropertyArray getDefaultGroups() const;
    void setDefaultGroups(const OAIConfigNodePropertyArray &default_groups);

    OAIConfigNodePropertyString getNameIdFormat() const;
    void setNameIdFormat(const OAIConfigNodePropertyString &name_id_format);

    OAIConfigNodePropertyArray getSynchronizeAttributes() const;
    void setSynchronizeAttributes(const OAIConfigNodePropertyArray &synchronize_attributes);

    OAIConfigNodePropertyBoolean getHandleLogout() const;
    void setHandleLogout(const OAIConfigNodePropertyBoolean &handle_logout);

    OAIConfigNodePropertyString getLogoutUrl() const;
    void setLogoutUrl(const OAIConfigNodePropertyString &logout_url);

    OAIConfigNodePropertyInteger getClockTolerance() const;
    void setClockTolerance(const OAIConfigNodePropertyInteger &clock_tolerance);

    OAIConfigNodePropertyString getDigestMethod() const;
    void setDigestMethod(const OAIConfigNodePropertyString &digest_method);

    OAIConfigNodePropertyString getSignatureMethod() const;
    void setSignatureMethod(const OAIConfigNodePropertyString &signature_method);

    OAIConfigNodePropertyDropDown getIdentitySyncType() const;
    void setIdentitySyncType(const OAIConfigNodePropertyDropDown &identity_sync_type);

    OAIConfigNodePropertyString getIdpIdentifier() const;
    void setIdpIdentifier(const OAIConfigNodePropertyString &idp_identifier);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyArray path;
    bool m_path_isSet;

    OAIConfigNodePropertyInteger service_ranking;
    bool m_service_ranking_isSet;

    OAIConfigNodePropertyString idp_url;
    bool m_idp_url_isSet;

    OAIConfigNodePropertyString idp_cert_alias;
    bool m_idp_cert_alias_isSet;

    OAIConfigNodePropertyBoolean idp_http_redirect;
    bool m_idp_http_redirect_isSet;

    OAIConfigNodePropertyString service_provider_entity_id;
    bool m_service_provider_entity_id_isSet;

    OAIConfigNodePropertyString assertion_consumer_service_url;
    bool m_assertion_consumer_service_url_isSet;

    OAIConfigNodePropertyString sp_private_key_alias;
    bool m_sp_private_key_alias_isSet;

    OAIConfigNodePropertyString key_store_password;
    bool m_key_store_password_isSet;

    OAIConfigNodePropertyString default_redirect_url;
    bool m_default_redirect_url_isSet;

    OAIConfigNodePropertyString user_id_attribute;
    bool m_user_id_attribute_isSet;

    OAIConfigNodePropertyBoolean use_encryption;
    bool m_use_encryption_isSet;

    OAIConfigNodePropertyBoolean create_user;
    bool m_create_user_isSet;

    OAIConfigNodePropertyString user_intermediate_path;
    bool m_user_intermediate_path_isSet;

    OAIConfigNodePropertyBoolean add_group_memberships;
    bool m_add_group_memberships_isSet;

    OAIConfigNodePropertyString group_membership_attribute;
    bool m_group_membership_attribute_isSet;

    OAIConfigNodePropertyArray default_groups;
    bool m_default_groups_isSet;

    OAIConfigNodePropertyString name_id_format;
    bool m_name_id_format_isSet;

    OAIConfigNodePropertyArray synchronize_attributes;
    bool m_synchronize_attributes_isSet;

    OAIConfigNodePropertyBoolean handle_logout;
    bool m_handle_logout_isSet;

    OAIConfigNodePropertyString logout_url;
    bool m_logout_url_isSet;

    OAIConfigNodePropertyInteger clock_tolerance;
    bool m_clock_tolerance_isSet;

    OAIConfigNodePropertyString digest_method;
    bool m_digest_method_isSet;

    OAIConfigNodePropertyString signature_method;
    bool m_signature_method_isSet;

    OAIConfigNodePropertyDropDown identity_sync_type;
    bool m_identity_sync_type_isSet;

    OAIConfigNodePropertyString idp_identifier;
    bool m_idp_identifier_isSet;

};

}

#endif // OAIComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties_H
