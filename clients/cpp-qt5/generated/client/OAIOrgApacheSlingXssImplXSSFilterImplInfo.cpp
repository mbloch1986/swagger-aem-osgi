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


#include "OAIOrgApacheSlingXssImplXSSFilterImplInfo.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheSlingXssImplXSSFilterImplInfo::OAIOrgApacheSlingXssImplXSSFilterImplInfo(QString json) {
    init();
    this->fromJson(json);
}

OAIOrgApacheSlingXssImplXSSFilterImplInfo::OAIOrgApacheSlingXssImplXSSFilterImplInfo() {
    init();
}

OAIOrgApacheSlingXssImplXSSFilterImplInfo::~OAIOrgApacheSlingXssImplXSSFilterImplInfo() {
    this->cleanup();
}

void
OAIOrgApacheSlingXssImplXSSFilterImplInfo::init() {
    pid = new QString("");
    m_pid_isSet = false;
    title = new QString("");
    m_title_isSet = false;
    description = new QString("");
    m_description_isSet = false;
    properties = new OAIOrgApacheSlingXssImplXSSFilterImplProperties();
    m_properties_isSet = false;
    bundle_location = new QString("");
    m_bundle_location_isSet = false;
    service_location = new QString("");
    m_service_location_isSet = false;
}

void
OAIOrgApacheSlingXssImplXSSFilterImplInfo::cleanup() {
    if(pid != nullptr) { 
        delete pid;
    }
    if(title != nullptr) { 
        delete title;
    }
    if(description != nullptr) { 
        delete description;
    }
    if(properties != nullptr) { 
        delete properties;
    }
    if(bundle_location != nullptr) { 
        delete bundle_location;
    }
    if(service_location != nullptr) { 
        delete service_location;
    }
}

OAIOrgApacheSlingXssImplXSSFilterImplInfo*
OAIOrgApacheSlingXssImplXSSFilterImplInfo::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIOrgApacheSlingXssImplXSSFilterImplInfo::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&pid, pJson["pid"], "QString", "QString");
    
    ::OpenAPI::setValue(&title, pJson["title"], "QString", "QString");
    
    ::OpenAPI::setValue(&description, pJson["description"], "QString", "QString");
    
    ::OpenAPI::setValue(&properties, pJson["properties"], "OAIOrgApacheSlingXssImplXSSFilterImplProperties", "OAIOrgApacheSlingXssImplXSSFilterImplProperties");
    
    ::OpenAPI::setValue(&bundle_location, pJson["bundle_location"], "QString", "QString");
    
    ::OpenAPI::setValue(&service_location, pJson["service_location"], "QString", "QString");
    
}

QString
OAIOrgApacheSlingXssImplXSSFilterImplInfo::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheSlingXssImplXSSFilterImplInfo::asJsonObject() {
    QJsonObject obj;
    if(pid != nullptr && *pid != QString("")){
        toJsonValue(QString("pid"), pid, obj, QString("QString"));
    }
    if(title != nullptr && *title != QString("")){
        toJsonValue(QString("title"), title, obj, QString("QString"));
    }
    if(description != nullptr && *description != QString("")){
        toJsonValue(QString("description"), description, obj, QString("QString"));
    }
    if((properties != nullptr) && (properties->isSet())){
        toJsonValue(QString("properties"), properties, obj, QString("OAIOrgApacheSlingXssImplXSSFilterImplProperties"));
    }
    if(bundle_location != nullptr && *bundle_location != QString("")){
        toJsonValue(QString("bundle_location"), bundle_location, obj, QString("QString"));
    }
    if(service_location != nullptr && *service_location != QString("")){
        toJsonValue(QString("service_location"), service_location, obj, QString("QString"));
    }

    return obj;
}

QString*
OAIOrgApacheSlingXssImplXSSFilterImplInfo::getPid() {
    return pid;
}
void
OAIOrgApacheSlingXssImplXSSFilterImplInfo::setPid(QString* pid) {
    this->pid = pid;
    this->m_pid_isSet = true;
}

QString*
OAIOrgApacheSlingXssImplXSSFilterImplInfo::getTitle() {
    return title;
}
void
OAIOrgApacheSlingXssImplXSSFilterImplInfo::setTitle(QString* title) {
    this->title = title;
    this->m_title_isSet = true;
}

QString*
OAIOrgApacheSlingXssImplXSSFilterImplInfo::getDescription() {
    return description;
}
void
OAIOrgApacheSlingXssImplXSSFilterImplInfo::setDescription(QString* description) {
    this->description = description;
    this->m_description_isSet = true;
}

OAIOrgApacheSlingXssImplXSSFilterImplProperties*
OAIOrgApacheSlingXssImplXSSFilterImplInfo::getProperties() {
    return properties;
}
void
OAIOrgApacheSlingXssImplXSSFilterImplInfo::setProperties(OAIOrgApacheSlingXssImplXSSFilterImplProperties* properties) {
    this->properties = properties;
    this->m_properties_isSet = true;
}

QString*
OAIOrgApacheSlingXssImplXSSFilterImplInfo::getBundleLocation() {
    return bundle_location;
}
void
OAIOrgApacheSlingXssImplXSSFilterImplInfo::setBundleLocation(QString* bundle_location) {
    this->bundle_location = bundle_location;
    this->m_bundle_location_isSet = true;
}

QString*
OAIOrgApacheSlingXssImplXSSFilterImplInfo::getServiceLocation() {
    return service_location;
}
void
OAIOrgApacheSlingXssImplXSSFilterImplInfo::setServiceLocation(QString* service_location) {
    this->service_location = service_location;
    this->m_service_location_isSet = true;
}


bool
OAIOrgApacheSlingXssImplXSSFilterImplInfo::isSet(){
    bool isObjectUpdated = false;
    do{
        if(pid != nullptr && *pid != QString("")){ isObjectUpdated = true; break;}
        if(title != nullptr && *title != QString("")){ isObjectUpdated = true; break;}
        if(description != nullptr && *description != QString("")){ isObjectUpdated = true; break;}
        if(properties != nullptr && properties->isSet()){ isObjectUpdated = true; break;}
        if(bundle_location != nullptr && *bundle_location != QString("")){ isObjectUpdated = true; break;}
        if(service_location != nullptr && *service_location != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

