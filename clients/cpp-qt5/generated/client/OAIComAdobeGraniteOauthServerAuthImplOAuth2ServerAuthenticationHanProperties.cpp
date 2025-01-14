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


#include "OAIComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties::OAIComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties::OAIComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties() {
    init();
}

OAIComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties::~OAIComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties() {
    this->cleanup();
}

void
OAIComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties::init() {
    path = new OAIConfigNodePropertyString();
    m_path_isSet = false;
    jaas_control_flag = new OAIConfigNodePropertyString();
    m_jaas_control_flag_isSet = false;
    jaas_realm_name = new OAIConfigNodePropertyString();
    m_jaas_realm_name_isSet = false;
    jaas_ranking = new OAIConfigNodePropertyInteger();
    m_jaas_ranking_isSet = false;
    oauth_offline_validation = new OAIConfigNodePropertyBoolean();
    m_oauth_offline_validation_isSet = false;
}

void
OAIComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties::cleanup() {
    if(path != nullptr) { 
        delete path;
    }
    if(jaas_control_flag != nullptr) { 
        delete jaas_control_flag;
    }
    if(jaas_realm_name != nullptr) { 
        delete jaas_realm_name;
    }
    if(jaas_ranking != nullptr) { 
        delete jaas_ranking;
    }
    if(oauth_offline_validation != nullptr) { 
        delete oauth_offline_validation;
    }
}

OAIComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties*
OAIComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&path, pJson["path"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&jaas_control_flag, pJson["jaas.controlFlag"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&jaas_realm_name, pJson["jaas.realmName"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&jaas_ranking, pJson["jaas.ranking"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&oauth_offline_validation, pJson["oauth.offline.validation"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
}

QString
OAIComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties::asJsonObject() {
    QJsonObject obj;
    if((path != nullptr) && (path->isSet())){
        toJsonValue(QString("path"), path, obj, QString("OAIConfigNodePropertyString"));
    }
    if((jaas_control_flag != nullptr) && (jaas_control_flag->isSet())){
        toJsonValue(QString("jaas.controlFlag"), jaas_control_flag, obj, QString("OAIConfigNodePropertyString"));
    }
    if((jaas_realm_name != nullptr) && (jaas_realm_name->isSet())){
        toJsonValue(QString("jaas.realmName"), jaas_realm_name, obj, QString("OAIConfigNodePropertyString"));
    }
    if((jaas_ranking != nullptr) && (jaas_ranking->isSet())){
        toJsonValue(QString("jaas.ranking"), jaas_ranking, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((oauth_offline_validation != nullptr) && (oauth_offline_validation->isSet())){
        toJsonValue(QString("oauth.offline.validation"), oauth_offline_validation, obj, QString("OAIConfigNodePropertyBoolean"));
    }

    return obj;
}

OAIConfigNodePropertyString*
OAIComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties::getPath() {
    return path;
}
void
OAIComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties::setPath(OAIConfigNodePropertyString* path) {
    this->path = path;
    this->m_path_isSet = true;
}

OAIConfigNodePropertyString*
OAIComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties::getJaasControlFlag() {
    return jaas_control_flag;
}
void
OAIComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties::setJaasControlFlag(OAIConfigNodePropertyString* jaas_control_flag) {
    this->jaas_control_flag = jaas_control_flag;
    this->m_jaas_control_flag_isSet = true;
}

OAIConfigNodePropertyString*
OAIComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties::getJaasRealmName() {
    return jaas_realm_name;
}
void
OAIComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties::setJaasRealmName(OAIConfigNodePropertyString* jaas_realm_name) {
    this->jaas_realm_name = jaas_realm_name;
    this->m_jaas_realm_name_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties::getJaasRanking() {
    return jaas_ranking;
}
void
OAIComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties::setJaasRanking(OAIConfigNodePropertyInteger* jaas_ranking) {
    this->jaas_ranking = jaas_ranking;
    this->m_jaas_ranking_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties::getOauthOfflineValidation() {
    return oauth_offline_validation;
}
void
OAIComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties::setOauthOfflineValidation(OAIConfigNodePropertyBoolean* oauth_offline_validation) {
    this->oauth_offline_validation = oauth_offline_validation;
    this->m_oauth_offline_validation_isSet = true;
}


bool
OAIComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(path != nullptr && path->isSet()){ isObjectUpdated = true; break;}
        if(jaas_control_flag != nullptr && jaas_control_flag->isSet()){ isObjectUpdated = true; break;}
        if(jaas_realm_name != nullptr && jaas_realm_name->isSet()){ isObjectUpdated = true; break;}
        if(jaas_ranking != nullptr && jaas_ranking->isSet()){ isObjectUpdated = true; break;}
        if(oauth_offline_validation != nullptr && oauth_offline_validation->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

