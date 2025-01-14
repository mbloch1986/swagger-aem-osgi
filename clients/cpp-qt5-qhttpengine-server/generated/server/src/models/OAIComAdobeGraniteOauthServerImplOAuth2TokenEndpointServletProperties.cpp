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


#include "OAIComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties::OAIComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties(QString json) {
    this->fromJson(json);
}

OAIComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties::OAIComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties() {
    this->init();
}

OAIComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties::~OAIComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties() {
    
}

void
OAIComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties::init() {
    m_oauth_issuer_isSet = false;
    m_oauth_access_token_expires_in_isSet = false;
    m_osgi_http_whiteboard_servlet_pattern_isSet = false;
    m_osgi_http_whiteboard_context_select_isSet = false;
}

void
OAIComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(oauth_issuer, json[QString("oauth.issuer")]);
    
    ::OpenAPI::fromJsonValue(oauth_access_token_expires_in, json[QString("oauth.access.token.expires.in")]);
    
    ::OpenAPI::fromJsonValue(osgi_http_whiteboard_servlet_pattern, json[QString("osgi.http.whiteboard.servlet.pattern")]);
    
    ::OpenAPI::fromJsonValue(osgi_http_whiteboard_context_select, json[QString("osgi.http.whiteboard.context.select")]);
    
}

QString
OAIComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties::asJsonObject() const {
    QJsonObject obj;
	if(oauth_issuer.isSet()){
        obj.insert(QString("oauth.issuer"), ::OpenAPI::toJsonValue(oauth_issuer));
    }
	if(oauth_access_token_expires_in.isSet()){
        obj.insert(QString("oauth.access.token.expires.in"), ::OpenAPI::toJsonValue(oauth_access_token_expires_in));
    }
	if(osgi_http_whiteboard_servlet_pattern.isSet()){
        obj.insert(QString("osgi.http.whiteboard.servlet.pattern"), ::OpenAPI::toJsonValue(osgi_http_whiteboard_servlet_pattern));
    }
	if(osgi_http_whiteboard_context_select.isSet()){
        obj.insert(QString("osgi.http.whiteboard.context.select"), ::OpenAPI::toJsonValue(osgi_http_whiteboard_context_select));
    }
    return obj;
}

OAIConfigNodePropertyString
OAIComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties::getOauthIssuer() const {
    return oauth_issuer;
}
void
OAIComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties::setOauthIssuer(const OAIConfigNodePropertyString &oauth_issuer) {
    this->oauth_issuer = oauth_issuer;
    this->m_oauth_issuer_isSet = true;
}

OAIConfigNodePropertyString
OAIComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties::getOauthAccessTokenExpiresIn() const {
    return oauth_access_token_expires_in;
}
void
OAIComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties::setOauthAccessTokenExpiresIn(const OAIConfigNodePropertyString &oauth_access_token_expires_in) {
    this->oauth_access_token_expires_in = oauth_access_token_expires_in;
    this->m_oauth_access_token_expires_in_isSet = true;
}

OAIConfigNodePropertyString
OAIComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties::getOsgiHttpWhiteboardServletPattern() const {
    return osgi_http_whiteboard_servlet_pattern;
}
void
OAIComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties::setOsgiHttpWhiteboardServletPattern(const OAIConfigNodePropertyString &osgi_http_whiteboard_servlet_pattern) {
    this->osgi_http_whiteboard_servlet_pattern = osgi_http_whiteboard_servlet_pattern;
    this->m_osgi_http_whiteboard_servlet_pattern_isSet = true;
}

OAIConfigNodePropertyString
OAIComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties::getOsgiHttpWhiteboardContextSelect() const {
    return osgi_http_whiteboard_context_select;
}
void
OAIComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties::setOsgiHttpWhiteboardContextSelect(const OAIConfigNodePropertyString &osgi_http_whiteboard_context_select) {
    this->osgi_http_whiteboard_context_select = osgi_http_whiteboard_context_select;
    this->m_osgi_http_whiteboard_context_select_isSet = true;
}


bool
OAIComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(oauth_issuer.isSet()){ isObjectUpdated = true; break;}
    
        if(oauth_access_token_expires_in.isSet()){ isObjectUpdated = true; break;}
    
        if(osgi_http_whiteboard_servlet_pattern.isSet()){ isObjectUpdated = true; break;}
    
        if(osgi_http_whiteboard_context_select.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

