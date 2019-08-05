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


#include "OAIComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties::OAIComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties(QString json) {
    this->fromJson(json);
}

OAIComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties::OAIComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties() {
    this->init();
}

OAIComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties::~OAIComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties() {
    
}

void
OAIComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties::init() {
    m_enable_fallback_isSet = false;
}

void
OAIComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(enable_fallback, json[QString("enableFallback")]);
    
}

QString
OAIComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties::asJsonObject() const {
    QJsonObject obj;
	if(enable_fallback.isSet()){
        obj.insert(QString("enableFallback"), ::OpenAPI::toJsonValue(enable_fallback));
    }
    return obj;
}

OAIConfigNodePropertyBoolean
OAIComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties::getEnableFallback() const {
    return enable_fallback;
}
void
OAIComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties::setEnableFallback(const OAIConfigNodePropertyBoolean &enable_fallback) {
    this->enable_fallback = enable_fallback;
    this->m_enable_fallback_isSet = true;
}


bool
OAIComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(enable_fallback.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
