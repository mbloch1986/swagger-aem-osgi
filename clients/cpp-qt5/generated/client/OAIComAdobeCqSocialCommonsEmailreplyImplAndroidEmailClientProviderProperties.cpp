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


#include "OAIComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties::OAIComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties::OAIComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties() {
    init();
}

OAIComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties::~OAIComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties() {
    this->cleanup();
}

void
OAIComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties::init() {
    priority_order = new OAIConfigNodePropertyInteger();
    m_priority_order_isSet = false;
    reply_email_patterns = new OAIConfigNodePropertyArray();
    m_reply_email_patterns_isSet = false;
}

void
OAIComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties::cleanup() {
    if(priority_order != nullptr) { 
        delete priority_order;
    }
    if(reply_email_patterns != nullptr) { 
        delete reply_email_patterns;
    }
}

OAIComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties*
OAIComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&priority_order, pJson["priorityOrder"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&reply_email_patterns, pJson["replyEmailPatterns"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
}

QString
OAIComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties::asJsonObject() {
    QJsonObject obj;
    if((priority_order != nullptr) && (priority_order->isSet())){
        toJsonValue(QString("priorityOrder"), priority_order, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((reply_email_patterns != nullptr) && (reply_email_patterns->isSet())){
        toJsonValue(QString("replyEmailPatterns"), reply_email_patterns, obj, QString("OAIConfigNodePropertyArray"));
    }

    return obj;
}

OAIConfigNodePropertyInteger*
OAIComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties::getPriorityOrder() {
    return priority_order;
}
void
OAIComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties::setPriorityOrder(OAIConfigNodePropertyInteger* priority_order) {
    this->priority_order = priority_order;
    this->m_priority_order_isSet = true;
}

OAIConfigNodePropertyArray*
OAIComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties::getReplyEmailPatterns() {
    return reply_email_patterns;
}
void
OAIComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties::setReplyEmailPatterns(OAIConfigNodePropertyArray* reply_email_patterns) {
    this->reply_email_patterns = reply_email_patterns;
    this->m_reply_email_patterns_isSet = true;
}


bool
OAIComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(priority_order != nullptr && priority_order->isSet()){ isObjectUpdated = true; break;}
        if(reply_email_patterns != nullptr && reply_email_patterns->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

