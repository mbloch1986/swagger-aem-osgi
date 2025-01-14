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


#include "OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties() {
    init();
}

OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::~OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties() {
    this->cleanup();
}

void
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::init() {
    provider_name = new OAIConfigNodePropertyString();
    m_provider_name_isSet = false;
    host_name = new OAIConfigNodePropertyString();
    m_host_name_isSet = false;
    host_port = new OAIConfigNodePropertyInteger();
    m_host_port_isSet = false;
    host_ssl = new OAIConfigNodePropertyBoolean();
    m_host_ssl_isSet = false;
    host_tls = new OAIConfigNodePropertyBoolean();
    m_host_tls_isSet = false;
    host_no_cert_check = new OAIConfigNodePropertyBoolean();
    m_host_no_cert_check_isSet = false;
    bind_dn = new OAIConfigNodePropertyString();
    m_bind_dn_isSet = false;
    bind_password = new OAIConfigNodePropertyString();
    m_bind_password_isSet = false;
    search_timeout = new OAIConfigNodePropertyString();
    m_search_timeout_isSet = false;
    admin_pool_max_active = new OAIConfigNodePropertyInteger();
    m_admin_pool_max_active_isSet = false;
    admin_pool_lookup_on_validate = new OAIConfigNodePropertyBoolean();
    m_admin_pool_lookup_on_validate_isSet = false;
    user_pool_max_active = new OAIConfigNodePropertyInteger();
    m_user_pool_max_active_isSet = false;
    user_pool_lookup_on_validate = new OAIConfigNodePropertyBoolean();
    m_user_pool_lookup_on_validate_isSet = false;
    user_base_dn = new OAIConfigNodePropertyString();
    m_user_base_dn_isSet = false;
    user_objectclass = new OAIConfigNodePropertyArray();
    m_user_objectclass_isSet = false;
    user_id_attribute = new OAIConfigNodePropertyString();
    m_user_id_attribute_isSet = false;
    user_extra_filter = new OAIConfigNodePropertyString();
    m_user_extra_filter_isSet = false;
    user_make_dn_path = new OAIConfigNodePropertyBoolean();
    m_user_make_dn_path_isSet = false;
    group_base_dn = new OAIConfigNodePropertyString();
    m_group_base_dn_isSet = false;
    group_objectclass = new OAIConfigNodePropertyArray();
    m_group_objectclass_isSet = false;
    group_name_attribute = new OAIConfigNodePropertyString();
    m_group_name_attribute_isSet = false;
    group_extra_filter = new OAIConfigNodePropertyString();
    m_group_extra_filter_isSet = false;
    group_make_dn_path = new OAIConfigNodePropertyBoolean();
    m_group_make_dn_path_isSet = false;
    group_member_attribute = new OAIConfigNodePropertyString();
    m_group_member_attribute_isSet = false;
    use_uid_for_ext_id = new OAIConfigNodePropertyBoolean();
    m_use_uid_for_ext_id_isSet = false;
    customattributes = new OAIConfigNodePropertyArray();
    m_customattributes_isSet = false;
}

void
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::cleanup() {
    if(provider_name != nullptr) { 
        delete provider_name;
    }
    if(host_name != nullptr) { 
        delete host_name;
    }
    if(host_port != nullptr) { 
        delete host_port;
    }
    if(host_ssl != nullptr) { 
        delete host_ssl;
    }
    if(host_tls != nullptr) { 
        delete host_tls;
    }
    if(host_no_cert_check != nullptr) { 
        delete host_no_cert_check;
    }
    if(bind_dn != nullptr) { 
        delete bind_dn;
    }
    if(bind_password != nullptr) { 
        delete bind_password;
    }
    if(search_timeout != nullptr) { 
        delete search_timeout;
    }
    if(admin_pool_max_active != nullptr) { 
        delete admin_pool_max_active;
    }
    if(admin_pool_lookup_on_validate != nullptr) { 
        delete admin_pool_lookup_on_validate;
    }
    if(user_pool_max_active != nullptr) { 
        delete user_pool_max_active;
    }
    if(user_pool_lookup_on_validate != nullptr) { 
        delete user_pool_lookup_on_validate;
    }
    if(user_base_dn != nullptr) { 
        delete user_base_dn;
    }
    if(user_objectclass != nullptr) { 
        delete user_objectclass;
    }
    if(user_id_attribute != nullptr) { 
        delete user_id_attribute;
    }
    if(user_extra_filter != nullptr) { 
        delete user_extra_filter;
    }
    if(user_make_dn_path != nullptr) { 
        delete user_make_dn_path;
    }
    if(group_base_dn != nullptr) { 
        delete group_base_dn;
    }
    if(group_objectclass != nullptr) { 
        delete group_objectclass;
    }
    if(group_name_attribute != nullptr) { 
        delete group_name_attribute;
    }
    if(group_extra_filter != nullptr) { 
        delete group_extra_filter;
    }
    if(group_make_dn_path != nullptr) { 
        delete group_make_dn_path;
    }
    if(group_member_attribute != nullptr) { 
        delete group_member_attribute;
    }
    if(use_uid_for_ext_id != nullptr) { 
        delete use_uid_for_ext_id;
    }
    if(customattributes != nullptr) { 
        delete customattributes;
    }
}

OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties*
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&provider_name, pJson["provider.name"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&host_name, pJson["host.name"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&host_port, pJson["host.port"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&host_ssl, pJson["host.ssl"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
    ::OpenAPI::setValue(&host_tls, pJson["host.tls"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
    ::OpenAPI::setValue(&host_no_cert_check, pJson["host.noCertCheck"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
    ::OpenAPI::setValue(&bind_dn, pJson["bind.dn"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&bind_password, pJson["bind.password"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&search_timeout, pJson["searchTimeout"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&admin_pool_max_active, pJson["adminPool.maxActive"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&admin_pool_lookup_on_validate, pJson["adminPool.lookupOnValidate"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
    ::OpenAPI::setValue(&user_pool_max_active, pJson["userPool.maxActive"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&user_pool_lookup_on_validate, pJson["userPool.lookupOnValidate"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
    ::OpenAPI::setValue(&user_base_dn, pJson["user.baseDN"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&user_objectclass, pJson["user.objectclass"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
    ::OpenAPI::setValue(&user_id_attribute, pJson["user.idAttribute"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&user_extra_filter, pJson["user.extraFilter"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&user_make_dn_path, pJson["user.makeDnPath"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
    ::OpenAPI::setValue(&group_base_dn, pJson["group.baseDN"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&group_objectclass, pJson["group.objectclass"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
    ::OpenAPI::setValue(&group_name_attribute, pJson["group.nameAttribute"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&group_extra_filter, pJson["group.extraFilter"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&group_make_dn_path, pJson["group.makeDnPath"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
    ::OpenAPI::setValue(&group_member_attribute, pJson["group.memberAttribute"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&use_uid_for_ext_id, pJson["useUidForExtId"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
    ::OpenAPI::setValue(&customattributes, pJson["customattributes"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
}

QString
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::asJsonObject() {
    QJsonObject obj;
    if((provider_name != nullptr) && (provider_name->isSet())){
        toJsonValue(QString("provider.name"), provider_name, obj, QString("OAIConfigNodePropertyString"));
    }
    if((host_name != nullptr) && (host_name->isSet())){
        toJsonValue(QString("host.name"), host_name, obj, QString("OAIConfigNodePropertyString"));
    }
    if((host_port != nullptr) && (host_port->isSet())){
        toJsonValue(QString("host.port"), host_port, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((host_ssl != nullptr) && (host_ssl->isSet())){
        toJsonValue(QString("host.ssl"), host_ssl, obj, QString("OAIConfigNodePropertyBoolean"));
    }
    if((host_tls != nullptr) && (host_tls->isSet())){
        toJsonValue(QString("host.tls"), host_tls, obj, QString("OAIConfigNodePropertyBoolean"));
    }
    if((host_no_cert_check != nullptr) && (host_no_cert_check->isSet())){
        toJsonValue(QString("host.noCertCheck"), host_no_cert_check, obj, QString("OAIConfigNodePropertyBoolean"));
    }
    if((bind_dn != nullptr) && (bind_dn->isSet())){
        toJsonValue(QString("bind.dn"), bind_dn, obj, QString("OAIConfigNodePropertyString"));
    }
    if((bind_password != nullptr) && (bind_password->isSet())){
        toJsonValue(QString("bind.password"), bind_password, obj, QString("OAIConfigNodePropertyString"));
    }
    if((search_timeout != nullptr) && (search_timeout->isSet())){
        toJsonValue(QString("searchTimeout"), search_timeout, obj, QString("OAIConfigNodePropertyString"));
    }
    if((admin_pool_max_active != nullptr) && (admin_pool_max_active->isSet())){
        toJsonValue(QString("adminPool.maxActive"), admin_pool_max_active, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((admin_pool_lookup_on_validate != nullptr) && (admin_pool_lookup_on_validate->isSet())){
        toJsonValue(QString("adminPool.lookupOnValidate"), admin_pool_lookup_on_validate, obj, QString("OAIConfigNodePropertyBoolean"));
    }
    if((user_pool_max_active != nullptr) && (user_pool_max_active->isSet())){
        toJsonValue(QString("userPool.maxActive"), user_pool_max_active, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((user_pool_lookup_on_validate != nullptr) && (user_pool_lookup_on_validate->isSet())){
        toJsonValue(QString("userPool.lookupOnValidate"), user_pool_lookup_on_validate, obj, QString("OAIConfigNodePropertyBoolean"));
    }
    if((user_base_dn != nullptr) && (user_base_dn->isSet())){
        toJsonValue(QString("user.baseDN"), user_base_dn, obj, QString("OAIConfigNodePropertyString"));
    }
    if((user_objectclass != nullptr) && (user_objectclass->isSet())){
        toJsonValue(QString("user.objectclass"), user_objectclass, obj, QString("OAIConfigNodePropertyArray"));
    }
    if((user_id_attribute != nullptr) && (user_id_attribute->isSet())){
        toJsonValue(QString("user.idAttribute"), user_id_attribute, obj, QString("OAIConfigNodePropertyString"));
    }
    if((user_extra_filter != nullptr) && (user_extra_filter->isSet())){
        toJsonValue(QString("user.extraFilter"), user_extra_filter, obj, QString("OAIConfigNodePropertyString"));
    }
    if((user_make_dn_path != nullptr) && (user_make_dn_path->isSet())){
        toJsonValue(QString("user.makeDnPath"), user_make_dn_path, obj, QString("OAIConfigNodePropertyBoolean"));
    }
    if((group_base_dn != nullptr) && (group_base_dn->isSet())){
        toJsonValue(QString("group.baseDN"), group_base_dn, obj, QString("OAIConfigNodePropertyString"));
    }
    if((group_objectclass != nullptr) && (group_objectclass->isSet())){
        toJsonValue(QString("group.objectclass"), group_objectclass, obj, QString("OAIConfigNodePropertyArray"));
    }
    if((group_name_attribute != nullptr) && (group_name_attribute->isSet())){
        toJsonValue(QString("group.nameAttribute"), group_name_attribute, obj, QString("OAIConfigNodePropertyString"));
    }
    if((group_extra_filter != nullptr) && (group_extra_filter->isSet())){
        toJsonValue(QString("group.extraFilter"), group_extra_filter, obj, QString("OAIConfigNodePropertyString"));
    }
    if((group_make_dn_path != nullptr) && (group_make_dn_path->isSet())){
        toJsonValue(QString("group.makeDnPath"), group_make_dn_path, obj, QString("OAIConfigNodePropertyBoolean"));
    }
    if((group_member_attribute != nullptr) && (group_member_attribute->isSet())){
        toJsonValue(QString("group.memberAttribute"), group_member_attribute, obj, QString("OAIConfigNodePropertyString"));
    }
    if((use_uid_for_ext_id != nullptr) && (use_uid_for_ext_id->isSet())){
        toJsonValue(QString("useUidForExtId"), use_uid_for_ext_id, obj, QString("OAIConfigNodePropertyBoolean"));
    }
    if((customattributes != nullptr) && (customattributes->isSet())){
        toJsonValue(QString("customattributes"), customattributes, obj, QString("OAIConfigNodePropertyArray"));
    }

    return obj;
}

OAIConfigNodePropertyString*
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getProviderName() {
    return provider_name;
}
void
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setProviderName(OAIConfigNodePropertyString* provider_name) {
    this->provider_name = provider_name;
    this->m_provider_name_isSet = true;
}

OAIConfigNodePropertyString*
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getHostName() {
    return host_name;
}
void
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setHostName(OAIConfigNodePropertyString* host_name) {
    this->host_name = host_name;
    this->m_host_name_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getHostPort() {
    return host_port;
}
void
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setHostPort(OAIConfigNodePropertyInteger* host_port) {
    this->host_port = host_port;
    this->m_host_port_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getHostSsl() {
    return host_ssl;
}
void
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setHostSsl(OAIConfigNodePropertyBoolean* host_ssl) {
    this->host_ssl = host_ssl;
    this->m_host_ssl_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getHostTls() {
    return host_tls;
}
void
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setHostTls(OAIConfigNodePropertyBoolean* host_tls) {
    this->host_tls = host_tls;
    this->m_host_tls_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getHostNoCertCheck() {
    return host_no_cert_check;
}
void
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setHostNoCertCheck(OAIConfigNodePropertyBoolean* host_no_cert_check) {
    this->host_no_cert_check = host_no_cert_check;
    this->m_host_no_cert_check_isSet = true;
}

OAIConfigNodePropertyString*
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getBindDn() {
    return bind_dn;
}
void
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setBindDn(OAIConfigNodePropertyString* bind_dn) {
    this->bind_dn = bind_dn;
    this->m_bind_dn_isSet = true;
}

OAIConfigNodePropertyString*
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getBindPassword() {
    return bind_password;
}
void
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setBindPassword(OAIConfigNodePropertyString* bind_password) {
    this->bind_password = bind_password;
    this->m_bind_password_isSet = true;
}

OAIConfigNodePropertyString*
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getSearchTimeout() {
    return search_timeout;
}
void
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setSearchTimeout(OAIConfigNodePropertyString* search_timeout) {
    this->search_timeout = search_timeout;
    this->m_search_timeout_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getAdminPoolMaxActive() {
    return admin_pool_max_active;
}
void
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setAdminPoolMaxActive(OAIConfigNodePropertyInteger* admin_pool_max_active) {
    this->admin_pool_max_active = admin_pool_max_active;
    this->m_admin_pool_max_active_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getAdminPoolLookupOnValidate() {
    return admin_pool_lookup_on_validate;
}
void
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setAdminPoolLookupOnValidate(OAIConfigNodePropertyBoolean* admin_pool_lookup_on_validate) {
    this->admin_pool_lookup_on_validate = admin_pool_lookup_on_validate;
    this->m_admin_pool_lookup_on_validate_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getUserPoolMaxActive() {
    return user_pool_max_active;
}
void
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setUserPoolMaxActive(OAIConfigNodePropertyInteger* user_pool_max_active) {
    this->user_pool_max_active = user_pool_max_active;
    this->m_user_pool_max_active_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getUserPoolLookupOnValidate() {
    return user_pool_lookup_on_validate;
}
void
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setUserPoolLookupOnValidate(OAIConfigNodePropertyBoolean* user_pool_lookup_on_validate) {
    this->user_pool_lookup_on_validate = user_pool_lookup_on_validate;
    this->m_user_pool_lookup_on_validate_isSet = true;
}

OAIConfigNodePropertyString*
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getUserBaseDn() {
    return user_base_dn;
}
void
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setUserBaseDn(OAIConfigNodePropertyString* user_base_dn) {
    this->user_base_dn = user_base_dn;
    this->m_user_base_dn_isSet = true;
}

OAIConfigNodePropertyArray*
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getUserObjectclass() {
    return user_objectclass;
}
void
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setUserObjectclass(OAIConfigNodePropertyArray* user_objectclass) {
    this->user_objectclass = user_objectclass;
    this->m_user_objectclass_isSet = true;
}

OAIConfigNodePropertyString*
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getUserIdAttribute() {
    return user_id_attribute;
}
void
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setUserIdAttribute(OAIConfigNodePropertyString* user_id_attribute) {
    this->user_id_attribute = user_id_attribute;
    this->m_user_id_attribute_isSet = true;
}

OAIConfigNodePropertyString*
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getUserExtraFilter() {
    return user_extra_filter;
}
void
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setUserExtraFilter(OAIConfigNodePropertyString* user_extra_filter) {
    this->user_extra_filter = user_extra_filter;
    this->m_user_extra_filter_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getUserMakeDnPath() {
    return user_make_dn_path;
}
void
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setUserMakeDnPath(OAIConfigNodePropertyBoolean* user_make_dn_path) {
    this->user_make_dn_path = user_make_dn_path;
    this->m_user_make_dn_path_isSet = true;
}

OAIConfigNodePropertyString*
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getGroupBaseDn() {
    return group_base_dn;
}
void
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setGroupBaseDn(OAIConfigNodePropertyString* group_base_dn) {
    this->group_base_dn = group_base_dn;
    this->m_group_base_dn_isSet = true;
}

OAIConfigNodePropertyArray*
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getGroupObjectclass() {
    return group_objectclass;
}
void
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setGroupObjectclass(OAIConfigNodePropertyArray* group_objectclass) {
    this->group_objectclass = group_objectclass;
    this->m_group_objectclass_isSet = true;
}

OAIConfigNodePropertyString*
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getGroupNameAttribute() {
    return group_name_attribute;
}
void
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setGroupNameAttribute(OAIConfigNodePropertyString* group_name_attribute) {
    this->group_name_attribute = group_name_attribute;
    this->m_group_name_attribute_isSet = true;
}

OAIConfigNodePropertyString*
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getGroupExtraFilter() {
    return group_extra_filter;
}
void
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setGroupExtraFilter(OAIConfigNodePropertyString* group_extra_filter) {
    this->group_extra_filter = group_extra_filter;
    this->m_group_extra_filter_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getGroupMakeDnPath() {
    return group_make_dn_path;
}
void
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setGroupMakeDnPath(OAIConfigNodePropertyBoolean* group_make_dn_path) {
    this->group_make_dn_path = group_make_dn_path;
    this->m_group_make_dn_path_isSet = true;
}

OAIConfigNodePropertyString*
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getGroupMemberAttribute() {
    return group_member_attribute;
}
void
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setGroupMemberAttribute(OAIConfigNodePropertyString* group_member_attribute) {
    this->group_member_attribute = group_member_attribute;
    this->m_group_member_attribute_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getUseUidForExtId() {
    return use_uid_for_ext_id;
}
void
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setUseUidForExtId(OAIConfigNodePropertyBoolean* use_uid_for_ext_id) {
    this->use_uid_for_ext_id = use_uid_for_ext_id;
    this->m_use_uid_for_ext_id_isSet = true;
}

OAIConfigNodePropertyArray*
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::getCustomattributes() {
    return customattributes;
}
void
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::setCustomattributes(OAIConfigNodePropertyArray* customattributes) {
    this->customattributes = customattributes;
    this->m_customattributes_isSet = true;
}


bool
OAIOrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(provider_name != nullptr && provider_name->isSet()){ isObjectUpdated = true; break;}
        if(host_name != nullptr && host_name->isSet()){ isObjectUpdated = true; break;}
        if(host_port != nullptr && host_port->isSet()){ isObjectUpdated = true; break;}
        if(host_ssl != nullptr && host_ssl->isSet()){ isObjectUpdated = true; break;}
        if(host_tls != nullptr && host_tls->isSet()){ isObjectUpdated = true; break;}
        if(host_no_cert_check != nullptr && host_no_cert_check->isSet()){ isObjectUpdated = true; break;}
        if(bind_dn != nullptr && bind_dn->isSet()){ isObjectUpdated = true; break;}
        if(bind_password != nullptr && bind_password->isSet()){ isObjectUpdated = true; break;}
        if(search_timeout != nullptr && search_timeout->isSet()){ isObjectUpdated = true; break;}
        if(admin_pool_max_active != nullptr && admin_pool_max_active->isSet()){ isObjectUpdated = true; break;}
        if(admin_pool_lookup_on_validate != nullptr && admin_pool_lookup_on_validate->isSet()){ isObjectUpdated = true; break;}
        if(user_pool_max_active != nullptr && user_pool_max_active->isSet()){ isObjectUpdated = true; break;}
        if(user_pool_lookup_on_validate != nullptr && user_pool_lookup_on_validate->isSet()){ isObjectUpdated = true; break;}
        if(user_base_dn != nullptr && user_base_dn->isSet()){ isObjectUpdated = true; break;}
        if(user_objectclass != nullptr && user_objectclass->isSet()){ isObjectUpdated = true; break;}
        if(user_id_attribute != nullptr && user_id_attribute->isSet()){ isObjectUpdated = true; break;}
        if(user_extra_filter != nullptr && user_extra_filter->isSet()){ isObjectUpdated = true; break;}
        if(user_make_dn_path != nullptr && user_make_dn_path->isSet()){ isObjectUpdated = true; break;}
        if(group_base_dn != nullptr && group_base_dn->isSet()){ isObjectUpdated = true; break;}
        if(group_objectclass != nullptr && group_objectclass->isSet()){ isObjectUpdated = true; break;}
        if(group_name_attribute != nullptr && group_name_attribute->isSet()){ isObjectUpdated = true; break;}
        if(group_extra_filter != nullptr && group_extra_filter->isSet()){ isObjectUpdated = true; break;}
        if(group_make_dn_path != nullptr && group_make_dn_path->isSet()){ isObjectUpdated = true; break;}
        if(group_member_attribute != nullptr && group_member_attribute->isSet()){ isObjectUpdated = true; break;}
        if(use_uid_for_ext_id != nullptr && use_uid_for_ext_id->isSet()){ isObjectUpdated = true; break;}
        if(customattributes != nullptr && customattributes->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

