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


#include "OAIComAdobeCqSocialConnectOauthImplFacebookProviderImplProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeCqSocialConnectOauthImplFacebookProviderImplProperties::OAIComAdobeCqSocialConnectOauthImplFacebookProviderImplProperties(QString json) {
    this->fromJson(json);
}

OAIComAdobeCqSocialConnectOauthImplFacebookProviderImplProperties::OAIComAdobeCqSocialConnectOauthImplFacebookProviderImplProperties() {
    this->init();
}

OAIComAdobeCqSocialConnectOauthImplFacebookProviderImplProperties::~OAIComAdobeCqSocialConnectOauthImplFacebookProviderImplProperties() {
    
}

void
OAIComAdobeCqSocialConnectOauthImplFacebookProviderImplProperties::init() {
    m_oauth_provider_id_isSet = false;
    m_oauth_cloud_config_root_isSet = false;
    m_provider_config_root_isSet = false;
    m_provider_config_create_tags_enabled_isSet = false;
    m_provider_config_user_folder_isSet = false;
    m_provider_config_facebook_fetch_fields_isSet = false;
    m_provider_config_facebook_fields_isSet = false;
    m_provider_config_refresh_userdata_enabled_isSet = false;
}

void
OAIComAdobeCqSocialConnectOauthImplFacebookProviderImplProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeCqSocialConnectOauthImplFacebookProviderImplProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(oauth_provider_id, json[QString("oauth.provider.id")]);
    
    ::OpenAPI::fromJsonValue(oauth_cloud_config_root, json[QString("oauth.cloud.config.root")]);
    
    ::OpenAPI::fromJsonValue(provider_config_root, json[QString("provider.config.root")]);
    
    ::OpenAPI::fromJsonValue(provider_config_create_tags_enabled, json[QString("provider.config.create.tags.enabled")]);
    
    ::OpenAPI::fromJsonValue(provider_config_user_folder, json[QString("provider.config.user.folder")]);
    
    ::OpenAPI::fromJsonValue(provider_config_facebook_fetch_fields, json[QString("provider.config.facebook.fetch.fields")]);
    
    ::OpenAPI::fromJsonValue(provider_config_facebook_fields, json[QString("provider.config.facebook.fields")]);
    
    ::OpenAPI::fromJsonValue(provider_config_refresh_userdata_enabled, json[QString("provider.config.refresh.userdata.enabled")]);
    
}

QString
OAIComAdobeCqSocialConnectOauthImplFacebookProviderImplProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeCqSocialConnectOauthImplFacebookProviderImplProperties::asJsonObject() const {
    QJsonObject obj;
	if(oauth_provider_id.isSet()){
        obj.insert(QString("oauth.provider.id"), ::OpenAPI::toJsonValue(oauth_provider_id));
    }
	if(oauth_cloud_config_root.isSet()){
        obj.insert(QString("oauth.cloud.config.root"), ::OpenAPI::toJsonValue(oauth_cloud_config_root));
    }
	if(provider_config_root.isSet()){
        obj.insert(QString("provider.config.root"), ::OpenAPI::toJsonValue(provider_config_root));
    }
	if(provider_config_create_tags_enabled.isSet()){
        obj.insert(QString("provider.config.create.tags.enabled"), ::OpenAPI::toJsonValue(provider_config_create_tags_enabled));
    }
	if(provider_config_user_folder.isSet()){
        obj.insert(QString("provider.config.user.folder"), ::OpenAPI::toJsonValue(provider_config_user_folder));
    }
	if(provider_config_facebook_fetch_fields.isSet()){
        obj.insert(QString("provider.config.facebook.fetch.fields"), ::OpenAPI::toJsonValue(provider_config_facebook_fetch_fields));
    }
	if(provider_config_facebook_fields.isSet()){
        obj.insert(QString("provider.config.facebook.fields"), ::OpenAPI::toJsonValue(provider_config_facebook_fields));
    }
	if(provider_config_refresh_userdata_enabled.isSet()){
        obj.insert(QString("provider.config.refresh.userdata.enabled"), ::OpenAPI::toJsonValue(provider_config_refresh_userdata_enabled));
    }
    return obj;
}

OAIConfigNodePropertyString
OAIComAdobeCqSocialConnectOauthImplFacebookProviderImplProperties::getOauthProviderId() const {
    return oauth_provider_id;
}
void
OAIComAdobeCqSocialConnectOauthImplFacebookProviderImplProperties::setOauthProviderId(const OAIConfigNodePropertyString &oauth_provider_id) {
    this->oauth_provider_id = oauth_provider_id;
    this->m_oauth_provider_id_isSet = true;
}

OAIConfigNodePropertyString
OAIComAdobeCqSocialConnectOauthImplFacebookProviderImplProperties::getOauthCloudConfigRoot() const {
    return oauth_cloud_config_root;
}
void
OAIComAdobeCqSocialConnectOauthImplFacebookProviderImplProperties::setOauthCloudConfigRoot(const OAIConfigNodePropertyString &oauth_cloud_config_root) {
    this->oauth_cloud_config_root = oauth_cloud_config_root;
    this->m_oauth_cloud_config_root_isSet = true;
}

OAIConfigNodePropertyString
OAIComAdobeCqSocialConnectOauthImplFacebookProviderImplProperties::getProviderConfigRoot() const {
    return provider_config_root;
}
void
OAIComAdobeCqSocialConnectOauthImplFacebookProviderImplProperties::setProviderConfigRoot(const OAIConfigNodePropertyString &provider_config_root) {
    this->provider_config_root = provider_config_root;
    this->m_provider_config_root_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIComAdobeCqSocialConnectOauthImplFacebookProviderImplProperties::getProviderConfigCreateTagsEnabled() const {
    return provider_config_create_tags_enabled;
}
void
OAIComAdobeCqSocialConnectOauthImplFacebookProviderImplProperties::setProviderConfigCreateTagsEnabled(const OAIConfigNodePropertyBoolean &provider_config_create_tags_enabled) {
    this->provider_config_create_tags_enabled = provider_config_create_tags_enabled;
    this->m_provider_config_create_tags_enabled_isSet = true;
}

OAIConfigNodePropertyDropDown
OAIComAdobeCqSocialConnectOauthImplFacebookProviderImplProperties::getProviderConfigUserFolder() const {
    return provider_config_user_folder;
}
void
OAIComAdobeCqSocialConnectOauthImplFacebookProviderImplProperties::setProviderConfigUserFolder(const OAIConfigNodePropertyDropDown &provider_config_user_folder) {
    this->provider_config_user_folder = provider_config_user_folder;
    this->m_provider_config_user_folder_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIComAdobeCqSocialConnectOauthImplFacebookProviderImplProperties::getProviderConfigFacebookFetchFields() const {
    return provider_config_facebook_fetch_fields;
}
void
OAIComAdobeCqSocialConnectOauthImplFacebookProviderImplProperties::setProviderConfigFacebookFetchFields(const OAIConfigNodePropertyBoolean &provider_config_facebook_fetch_fields) {
    this->provider_config_facebook_fetch_fields = provider_config_facebook_fetch_fields;
    this->m_provider_config_facebook_fetch_fields_isSet = true;
}

OAIConfigNodePropertyArray
OAIComAdobeCqSocialConnectOauthImplFacebookProviderImplProperties::getProviderConfigFacebookFields() const {
    return provider_config_facebook_fields;
}
void
OAIComAdobeCqSocialConnectOauthImplFacebookProviderImplProperties::setProviderConfigFacebookFields(const OAIConfigNodePropertyArray &provider_config_facebook_fields) {
    this->provider_config_facebook_fields = provider_config_facebook_fields;
    this->m_provider_config_facebook_fields_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIComAdobeCqSocialConnectOauthImplFacebookProviderImplProperties::getProviderConfigRefreshUserdataEnabled() const {
    return provider_config_refresh_userdata_enabled;
}
void
OAIComAdobeCqSocialConnectOauthImplFacebookProviderImplProperties::setProviderConfigRefreshUserdataEnabled(const OAIConfigNodePropertyBoolean &provider_config_refresh_userdata_enabled) {
    this->provider_config_refresh_userdata_enabled = provider_config_refresh_userdata_enabled;
    this->m_provider_config_refresh_userdata_enabled_isSet = true;
}


bool
OAIComAdobeCqSocialConnectOauthImplFacebookProviderImplProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(oauth_provider_id.isSet()){ isObjectUpdated = true; break;}
    
        if(oauth_cloud_config_root.isSet()){ isObjectUpdated = true; break;}
    
        if(provider_config_root.isSet()){ isObjectUpdated = true; break;}
    
        if(provider_config_create_tags_enabled.isSet()){ isObjectUpdated = true; break;}
    
        if(provider_config_user_folder.isSet()){ isObjectUpdated = true; break;}
    
        if(provider_config_facebook_fetch_fields.isSet()){ isObjectUpdated = true; break;}
    
        if(provider_config_facebook_fields.isSet()){ isObjectUpdated = true; break;}
    
        if(provider_config_refresh_userdata_enabled.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
