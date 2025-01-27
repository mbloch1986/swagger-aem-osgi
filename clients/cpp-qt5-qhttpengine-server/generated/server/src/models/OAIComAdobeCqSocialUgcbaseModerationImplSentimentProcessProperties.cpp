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


#include "OAIComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties::OAIComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties(QString json) {
    this->fromJson(json);
}

OAIComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties::OAIComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties() {
    this->init();
}

OAIComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties::~OAIComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties() {
    
}

void
OAIComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties::init() {
    m_watchwords_positive_isSet = false;
    m_watchwords_negative_isSet = false;
    m_watchwords_path_isSet = false;
    m_sentiment_path_isSet = false;
}

void
OAIComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(watchwords_positive, json[QString("watchwords.positive")]);
    
    ::OpenAPI::fromJsonValue(watchwords_negative, json[QString("watchwords.negative")]);
    
    ::OpenAPI::fromJsonValue(watchwords_path, json[QString("watchwords.path")]);
    
    ::OpenAPI::fromJsonValue(sentiment_path, json[QString("sentiment.path")]);
    
}

QString
OAIComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties::asJsonObject() const {
    QJsonObject obj;
	if(watchwords_positive.isSet()){
        obj.insert(QString("watchwords.positive"), ::OpenAPI::toJsonValue(watchwords_positive));
    }
	if(watchwords_negative.isSet()){
        obj.insert(QString("watchwords.negative"), ::OpenAPI::toJsonValue(watchwords_negative));
    }
	if(watchwords_path.isSet()){
        obj.insert(QString("watchwords.path"), ::OpenAPI::toJsonValue(watchwords_path));
    }
	if(sentiment_path.isSet()){
        obj.insert(QString("sentiment.path"), ::OpenAPI::toJsonValue(sentiment_path));
    }
    return obj;
}

OAIConfigNodePropertyArray
OAIComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties::getWatchwordsPositive() const {
    return watchwords_positive;
}
void
OAIComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties::setWatchwordsPositive(const OAIConfigNodePropertyArray &watchwords_positive) {
    this->watchwords_positive = watchwords_positive;
    this->m_watchwords_positive_isSet = true;
}

OAIConfigNodePropertyArray
OAIComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties::getWatchwordsNegative() const {
    return watchwords_negative;
}
void
OAIComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties::setWatchwordsNegative(const OAIConfigNodePropertyArray &watchwords_negative) {
    this->watchwords_negative = watchwords_negative;
    this->m_watchwords_negative_isSet = true;
}

OAIConfigNodePropertyString
OAIComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties::getWatchwordsPath() const {
    return watchwords_path;
}
void
OAIComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties::setWatchwordsPath(const OAIConfigNodePropertyString &watchwords_path) {
    this->watchwords_path = watchwords_path;
    this->m_watchwords_path_isSet = true;
}

OAIConfigNodePropertyString
OAIComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties::getSentimentPath() const {
    return sentiment_path;
}
void
OAIComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties::setSentimentPath(const OAIConfigNodePropertyString &sentiment_path) {
    this->sentiment_path = sentiment_path;
    this->m_sentiment_path_isSet = true;
}


bool
OAIComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(watchwords_positive.isSet()){ isObjectUpdated = true; break;}
    
        if(watchwords_negative.isSet()){ isObjectUpdated = true; break;}
    
        if(watchwords_path.isSet()){ isObjectUpdated = true; break;}
    
        if(sentiment_path.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

