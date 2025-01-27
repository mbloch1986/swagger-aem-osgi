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


#include "OAIComAdobeGraniteAuthOauthImplOAuthAuthenticationHandlerProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeGraniteAuthOauthImplOAuthAuthenticationHandlerProperties::OAIComAdobeGraniteAuthOauthImplOAuthAuthenticationHandlerProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComAdobeGraniteAuthOauthImplOAuthAuthenticationHandlerProperties::OAIComAdobeGraniteAuthOauthImplOAuthAuthenticationHandlerProperties() {
    init();
}

OAIComAdobeGraniteAuthOauthImplOAuthAuthenticationHandlerProperties::~OAIComAdobeGraniteAuthOauthImplOAuthAuthenticationHandlerProperties() {
    this->cleanup();
}

void
OAIComAdobeGraniteAuthOauthImplOAuthAuthenticationHandlerProperties::init() {
    path = new OAIConfigNodePropertyString();
    m_path_isSet = false;
}

void
OAIComAdobeGraniteAuthOauthImplOAuthAuthenticationHandlerProperties::cleanup() {
    if(path != nullptr) { 
        delete path;
    }
}

OAIComAdobeGraniteAuthOauthImplOAuthAuthenticationHandlerProperties*
OAIComAdobeGraniteAuthOauthImplOAuthAuthenticationHandlerProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComAdobeGraniteAuthOauthImplOAuthAuthenticationHandlerProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&path, pJson["path"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
}

QString
OAIComAdobeGraniteAuthOauthImplOAuthAuthenticationHandlerProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeGraniteAuthOauthImplOAuthAuthenticationHandlerProperties::asJsonObject() {
    QJsonObject obj;
    if((path != nullptr) && (path->isSet())){
        toJsonValue(QString("path"), path, obj, QString("OAIConfigNodePropertyString"));
    }

    return obj;
}

OAIConfigNodePropertyString*
OAIComAdobeGraniteAuthOauthImplOAuthAuthenticationHandlerProperties::getPath() {
    return path;
}
void
OAIComAdobeGraniteAuthOauthImplOAuthAuthenticationHandlerProperties::setPath(OAIConfigNodePropertyString* path) {
    this->path = path;
    this->m_path_isSet = true;
}


bool
OAIComAdobeGraniteAuthOauthImplOAuthAuthenticationHandlerProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(path != nullptr && path->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

