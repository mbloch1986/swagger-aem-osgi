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


#include "OAIComAdobeCqHistoryImplHistoryRequestFilterProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeCqHistoryImplHistoryRequestFilterProperties::OAIComAdobeCqHistoryImplHistoryRequestFilterProperties(QString json) {
    this->fromJson(json);
}

OAIComAdobeCqHistoryImplHistoryRequestFilterProperties::OAIComAdobeCqHistoryImplHistoryRequestFilterProperties() {
    this->init();
}

OAIComAdobeCqHistoryImplHistoryRequestFilterProperties::~OAIComAdobeCqHistoryImplHistoryRequestFilterProperties() {
    
}

void
OAIComAdobeCqHistoryImplHistoryRequestFilterProperties::init() {
    m_history_request_filter_excluded_selectors_isSet = false;
    m_history_request_filter_excluded_extensions_isSet = false;
}

void
OAIComAdobeCqHistoryImplHistoryRequestFilterProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeCqHistoryImplHistoryRequestFilterProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(history_request_filter_excluded_selectors, json[QString("history.requestFilter.excludedSelectors")]);
    
    ::OpenAPI::fromJsonValue(history_request_filter_excluded_extensions, json[QString("history.requestFilter.excludedExtensions")]);
    
}

QString
OAIComAdobeCqHistoryImplHistoryRequestFilterProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeCqHistoryImplHistoryRequestFilterProperties::asJsonObject() const {
    QJsonObject obj;
	if(history_request_filter_excluded_selectors.isSet()){
        obj.insert(QString("history.requestFilter.excludedSelectors"), ::OpenAPI::toJsonValue(history_request_filter_excluded_selectors));
    }
	if(history_request_filter_excluded_extensions.isSet()){
        obj.insert(QString("history.requestFilter.excludedExtensions"), ::OpenAPI::toJsonValue(history_request_filter_excluded_extensions));
    }
    return obj;
}

OAIConfigNodePropertyArray
OAIComAdobeCqHistoryImplHistoryRequestFilterProperties::getHistoryRequestFilterExcludedSelectors() const {
    return history_request_filter_excluded_selectors;
}
void
OAIComAdobeCqHistoryImplHistoryRequestFilterProperties::setHistoryRequestFilterExcludedSelectors(const OAIConfigNodePropertyArray &history_request_filter_excluded_selectors) {
    this->history_request_filter_excluded_selectors = history_request_filter_excluded_selectors;
    this->m_history_request_filter_excluded_selectors_isSet = true;
}

OAIConfigNodePropertyArray
OAIComAdobeCqHistoryImplHistoryRequestFilterProperties::getHistoryRequestFilterExcludedExtensions() const {
    return history_request_filter_excluded_extensions;
}
void
OAIComAdobeCqHistoryImplHistoryRequestFilterProperties::setHistoryRequestFilterExcludedExtensions(const OAIConfigNodePropertyArray &history_request_filter_excluded_extensions) {
    this->history_request_filter_excluded_extensions = history_request_filter_excluded_extensions;
    this->m_history_request_filter_excluded_extensions_isSet = true;
}


bool
OAIComAdobeCqHistoryImplHistoryRequestFilterProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(history_request_filter_excluded_selectors.isSet()){ isObjectUpdated = true; break;}
    
        if(history_request_filter_excluded_extensions.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

