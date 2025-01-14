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


#include "OAIComAdobeGraniteOauthServerImplAccessTokenCleanupTaskProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeGraniteOauthServerImplAccessTokenCleanupTaskProperties::OAIComAdobeGraniteOauthServerImplAccessTokenCleanupTaskProperties(QString json) {
    this->fromJson(json);
}

OAIComAdobeGraniteOauthServerImplAccessTokenCleanupTaskProperties::OAIComAdobeGraniteOauthServerImplAccessTokenCleanupTaskProperties() {
    this->init();
}

OAIComAdobeGraniteOauthServerImplAccessTokenCleanupTaskProperties::~OAIComAdobeGraniteOauthServerImplAccessTokenCleanupTaskProperties() {
    
}

void
OAIComAdobeGraniteOauthServerImplAccessTokenCleanupTaskProperties::init() {
    m_scheduler_expression_isSet = false;
}

void
OAIComAdobeGraniteOauthServerImplAccessTokenCleanupTaskProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeGraniteOauthServerImplAccessTokenCleanupTaskProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(scheduler_expression, json[QString("scheduler.expression")]);
    
}

QString
OAIComAdobeGraniteOauthServerImplAccessTokenCleanupTaskProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeGraniteOauthServerImplAccessTokenCleanupTaskProperties::asJsonObject() const {
    QJsonObject obj;
	if(scheduler_expression.isSet()){
        obj.insert(QString("scheduler.expression"), ::OpenAPI::toJsonValue(scheduler_expression));
    }
    return obj;
}

OAIConfigNodePropertyString
OAIComAdobeGraniteOauthServerImplAccessTokenCleanupTaskProperties::getSchedulerExpression() const {
    return scheduler_expression;
}
void
OAIComAdobeGraniteOauthServerImplAccessTokenCleanupTaskProperties::setSchedulerExpression(const OAIConfigNodePropertyString &scheduler_expression) {
    this->scheduler_expression = scheduler_expression;
    this->m_scheduler_expression_isSet = true;
}


bool
OAIComAdobeGraniteOauthServerImplAccessTokenCleanupTaskProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(scheduler_expression.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

