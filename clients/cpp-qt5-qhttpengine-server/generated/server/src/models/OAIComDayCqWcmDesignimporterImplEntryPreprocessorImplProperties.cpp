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


#include "OAIComDayCqWcmDesignimporterImplEntryPreprocessorImplProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqWcmDesignimporterImplEntryPreprocessorImplProperties::OAIComDayCqWcmDesignimporterImplEntryPreprocessorImplProperties(QString json) {
    this->fromJson(json);
}

OAIComDayCqWcmDesignimporterImplEntryPreprocessorImplProperties::OAIComDayCqWcmDesignimporterImplEntryPreprocessorImplProperties() {
    this->init();
}

OAIComDayCqWcmDesignimporterImplEntryPreprocessorImplProperties::~OAIComDayCqWcmDesignimporterImplEntryPreprocessorImplProperties() {
    
}

void
OAIComDayCqWcmDesignimporterImplEntryPreprocessorImplProperties::init() {
    m_search_pattern_isSet = false;
    m_replace_pattern_isSet = false;
}

void
OAIComDayCqWcmDesignimporterImplEntryPreprocessorImplProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComDayCqWcmDesignimporterImplEntryPreprocessorImplProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(search_pattern, json[QString("search.pattern")]);
    
    ::OpenAPI::fromJsonValue(replace_pattern, json[QString("replace.pattern")]);
    
}

QString
OAIComDayCqWcmDesignimporterImplEntryPreprocessorImplProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqWcmDesignimporterImplEntryPreprocessorImplProperties::asJsonObject() const {
    QJsonObject obj;
	if(search_pattern.isSet()){
        obj.insert(QString("search.pattern"), ::OpenAPI::toJsonValue(search_pattern));
    }
	if(replace_pattern.isSet()){
        obj.insert(QString("replace.pattern"), ::OpenAPI::toJsonValue(replace_pattern));
    }
    return obj;
}

OAIConfigNodePropertyString
OAIComDayCqWcmDesignimporterImplEntryPreprocessorImplProperties::getSearchPattern() const {
    return search_pattern;
}
void
OAIComDayCqWcmDesignimporterImplEntryPreprocessorImplProperties::setSearchPattern(const OAIConfigNodePropertyString &search_pattern) {
    this->search_pattern = search_pattern;
    this->m_search_pattern_isSet = true;
}

OAIConfigNodePropertyString
OAIComDayCqWcmDesignimporterImplEntryPreprocessorImplProperties::getReplacePattern() const {
    return replace_pattern;
}
void
OAIComDayCqWcmDesignimporterImplEntryPreprocessorImplProperties::setReplacePattern(const OAIConfigNodePropertyString &replace_pattern) {
    this->replace_pattern = replace_pattern;
    this->m_replace_pattern_isSet = true;
}


bool
OAIComDayCqWcmDesignimporterImplEntryPreprocessorImplProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(search_pattern.isSet()){ isObjectUpdated = true; break;}
    
        if(replace_pattern.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

