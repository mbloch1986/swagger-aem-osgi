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


#include "OAIComDayCqPollingImporterImplPollingImporterImplProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqPollingImporterImplPollingImporterImplProperties::OAIComDayCqPollingImporterImplPollingImporterImplProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComDayCqPollingImporterImplPollingImporterImplProperties::OAIComDayCqPollingImporterImplPollingImporterImplProperties() {
    init();
}

OAIComDayCqPollingImporterImplPollingImporterImplProperties::~OAIComDayCqPollingImporterImplPollingImporterImplProperties() {
    this->cleanup();
}

void
OAIComDayCqPollingImporterImplPollingImporterImplProperties::init() {
    importer_min_interval = new OAIConfigNodePropertyInteger();
    m_importer_min_interval_isSet = false;
    importer_user = new OAIConfigNodePropertyString();
    m_importer_user_isSet = false;
    exclude_paths = new OAIConfigNodePropertyArray();
    m_exclude_paths_isSet = false;
    include_paths = new OAIConfigNodePropertyArray();
    m_include_paths_isSet = false;
}

void
OAIComDayCqPollingImporterImplPollingImporterImplProperties::cleanup() {
    if(importer_min_interval != nullptr) { 
        delete importer_min_interval;
    }
    if(importer_user != nullptr) { 
        delete importer_user;
    }
    if(exclude_paths != nullptr) { 
        delete exclude_paths;
    }
    if(include_paths != nullptr) { 
        delete include_paths;
    }
}

OAIComDayCqPollingImporterImplPollingImporterImplProperties*
OAIComDayCqPollingImporterImplPollingImporterImplProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComDayCqPollingImporterImplPollingImporterImplProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&importer_min_interval, pJson["importer.min.interval"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&importer_user, pJson["importer.user"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&exclude_paths, pJson["exclude.paths"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
    ::OpenAPI::setValue(&include_paths, pJson["include.paths"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
}

QString
OAIComDayCqPollingImporterImplPollingImporterImplProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqPollingImporterImplPollingImporterImplProperties::asJsonObject() {
    QJsonObject obj;
    if((importer_min_interval != nullptr) && (importer_min_interval->isSet())){
        toJsonValue(QString("importer.min.interval"), importer_min_interval, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((importer_user != nullptr) && (importer_user->isSet())){
        toJsonValue(QString("importer.user"), importer_user, obj, QString("OAIConfigNodePropertyString"));
    }
    if((exclude_paths != nullptr) && (exclude_paths->isSet())){
        toJsonValue(QString("exclude.paths"), exclude_paths, obj, QString("OAIConfigNodePropertyArray"));
    }
    if((include_paths != nullptr) && (include_paths->isSet())){
        toJsonValue(QString("include.paths"), include_paths, obj, QString("OAIConfigNodePropertyArray"));
    }

    return obj;
}

OAIConfigNodePropertyInteger*
OAIComDayCqPollingImporterImplPollingImporterImplProperties::getImporterMinInterval() {
    return importer_min_interval;
}
void
OAIComDayCqPollingImporterImplPollingImporterImplProperties::setImporterMinInterval(OAIConfigNodePropertyInteger* importer_min_interval) {
    this->importer_min_interval = importer_min_interval;
    this->m_importer_min_interval_isSet = true;
}

OAIConfigNodePropertyString*
OAIComDayCqPollingImporterImplPollingImporterImplProperties::getImporterUser() {
    return importer_user;
}
void
OAIComDayCqPollingImporterImplPollingImporterImplProperties::setImporterUser(OAIConfigNodePropertyString* importer_user) {
    this->importer_user = importer_user;
    this->m_importer_user_isSet = true;
}

OAIConfigNodePropertyArray*
OAIComDayCqPollingImporterImplPollingImporterImplProperties::getExcludePaths() {
    return exclude_paths;
}
void
OAIComDayCqPollingImporterImplPollingImporterImplProperties::setExcludePaths(OAIConfigNodePropertyArray* exclude_paths) {
    this->exclude_paths = exclude_paths;
    this->m_exclude_paths_isSet = true;
}

OAIConfigNodePropertyArray*
OAIComDayCqPollingImporterImplPollingImporterImplProperties::getIncludePaths() {
    return include_paths;
}
void
OAIComDayCqPollingImporterImplPollingImporterImplProperties::setIncludePaths(OAIConfigNodePropertyArray* include_paths) {
    this->include_paths = include_paths;
    this->m_include_paths_isSet = true;
}


bool
OAIComDayCqPollingImporterImplPollingImporterImplProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(importer_min_interval != nullptr && importer_min_interval->isSet()){ isObjectUpdated = true; break;}
        if(importer_user != nullptr && importer_user->isSet()){ isObjectUpdated = true; break;}
        if(exclude_paths != nullptr && exclude_paths->isSet()){ isObjectUpdated = true; break;}
        if(include_paths != nullptr && include_paths->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

