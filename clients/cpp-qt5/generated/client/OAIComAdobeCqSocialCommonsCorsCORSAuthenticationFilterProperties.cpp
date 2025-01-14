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


#include "OAIComAdobeCqSocialCommonsCorsCORSAuthenticationFilterProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeCqSocialCommonsCorsCORSAuthenticationFilterProperties::OAIComAdobeCqSocialCommonsCorsCORSAuthenticationFilterProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComAdobeCqSocialCommonsCorsCORSAuthenticationFilterProperties::OAIComAdobeCqSocialCommonsCorsCORSAuthenticationFilterProperties() {
    init();
}

OAIComAdobeCqSocialCommonsCorsCORSAuthenticationFilterProperties::~OAIComAdobeCqSocialCommonsCorsCORSAuthenticationFilterProperties() {
    this->cleanup();
}

void
OAIComAdobeCqSocialCommonsCorsCORSAuthenticationFilterProperties::init() {
    cors_enabling = new OAIConfigNodePropertyBoolean();
    m_cors_enabling_isSet = false;
}

void
OAIComAdobeCqSocialCommonsCorsCORSAuthenticationFilterProperties::cleanup() {
    if(cors_enabling != nullptr) { 
        delete cors_enabling;
    }
}

OAIComAdobeCqSocialCommonsCorsCORSAuthenticationFilterProperties*
OAIComAdobeCqSocialCommonsCorsCORSAuthenticationFilterProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComAdobeCqSocialCommonsCorsCORSAuthenticationFilterProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&cors_enabling, pJson["cors.enabling"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
}

QString
OAIComAdobeCqSocialCommonsCorsCORSAuthenticationFilterProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeCqSocialCommonsCorsCORSAuthenticationFilterProperties::asJsonObject() {
    QJsonObject obj;
    if((cors_enabling != nullptr) && (cors_enabling->isSet())){
        toJsonValue(QString("cors.enabling"), cors_enabling, obj, QString("OAIConfigNodePropertyBoolean"));
    }

    return obj;
}

OAIConfigNodePropertyBoolean*
OAIComAdobeCqSocialCommonsCorsCORSAuthenticationFilterProperties::getCorsEnabling() {
    return cors_enabling;
}
void
OAIComAdobeCqSocialCommonsCorsCORSAuthenticationFilterProperties::setCorsEnabling(OAIConfigNodePropertyBoolean* cors_enabling) {
    this->cors_enabling = cors_enabling;
    this->m_cors_enabling_isSet = true;
}


bool
OAIComAdobeCqSocialCommonsCorsCORSAuthenticationFilterProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(cors_enabling != nullptr && cors_enabling->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

