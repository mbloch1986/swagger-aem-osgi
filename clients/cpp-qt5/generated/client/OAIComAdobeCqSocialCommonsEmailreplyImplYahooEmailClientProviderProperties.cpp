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


#include "OAIComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderProperties::OAIComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderProperties::OAIComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderProperties() {
    init();
}

OAIComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderProperties::~OAIComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderProperties() {
    this->cleanup();
}

void
OAIComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderProperties::init() {
    priority_order = new OAIConfigNodePropertyInteger();
    m_priority_order_isSet = false;
    reply_email_patterns = new OAIConfigNodePropertyArray();
    m_reply_email_patterns_isSet = false;
}

void
OAIComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderProperties::cleanup() {
    if(priority_order != nullptr) { 
        delete priority_order;
    }
    if(reply_email_patterns != nullptr) { 
        delete reply_email_patterns;
    }
}

OAIComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderProperties*
OAIComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&priority_order, pJson["priorityOrder"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&reply_email_patterns, pJson["replyEmailPatterns"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
}

QString
OAIComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderProperties::asJsonObject() {
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
OAIComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderProperties::getPriorityOrder() {
    return priority_order;
}
void
OAIComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderProperties::setPriorityOrder(OAIConfigNodePropertyInteger* priority_order) {
    this->priority_order = priority_order;
    this->m_priority_order_isSet = true;
}

OAIConfigNodePropertyArray*
OAIComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderProperties::getReplyEmailPatterns() {
    return reply_email_patterns;
}
void
OAIComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderProperties::setReplyEmailPatterns(OAIConfigNodePropertyArray* reply_email_patterns) {
    this->reply_email_patterns = reply_email_patterns;
    this->m_reply_email_patterns_isSet = true;
}


bool
OAIComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(priority_order != nullptr && priority_order->isSet()){ isObjectUpdated = true; break;}
        if(reply_email_patterns != nullptr && reply_email_patterns->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}
