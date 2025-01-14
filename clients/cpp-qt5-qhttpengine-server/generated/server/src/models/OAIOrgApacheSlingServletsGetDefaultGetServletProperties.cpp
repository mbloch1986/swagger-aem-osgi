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


#include "OAIOrgApacheSlingServletsGetDefaultGetServletProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheSlingServletsGetDefaultGetServletProperties::OAIOrgApacheSlingServletsGetDefaultGetServletProperties(QString json) {
    this->fromJson(json);
}

OAIOrgApacheSlingServletsGetDefaultGetServletProperties::OAIOrgApacheSlingServletsGetDefaultGetServletProperties() {
    this->init();
}

OAIOrgApacheSlingServletsGetDefaultGetServletProperties::~OAIOrgApacheSlingServletsGetDefaultGetServletProperties() {
    
}

void
OAIOrgApacheSlingServletsGetDefaultGetServletProperties::init() {
    m_aliases_isSet = false;
    m_index_isSet = false;
    m_index_files_isSet = false;
    m_enable_html_isSet = false;
    m_enable_json_isSet = false;
    m_enable_txt_isSet = false;
    m_enable_xml_isSet = false;
    m_json_maximumresults_isSet = false;
    m_ecma_suport_isSet = false;
}

void
OAIOrgApacheSlingServletsGetDefaultGetServletProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIOrgApacheSlingServletsGetDefaultGetServletProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(aliases, json[QString("aliases")]);
    
    ::OpenAPI::fromJsonValue(index, json[QString("index")]);
    
    ::OpenAPI::fromJsonValue(index_files, json[QString("index.files")]);
    
    ::OpenAPI::fromJsonValue(enable_html, json[QString("enable.html")]);
    
    ::OpenAPI::fromJsonValue(enable_json, json[QString("enable.json")]);
    
    ::OpenAPI::fromJsonValue(enable_txt, json[QString("enable.txt")]);
    
    ::OpenAPI::fromJsonValue(enable_xml, json[QString("enable.xml")]);
    
    ::OpenAPI::fromJsonValue(json_maximumresults, json[QString("json.maximumresults")]);
    
    ::OpenAPI::fromJsonValue(ecma_suport, json[QString("ecmaSuport")]);
    
}

QString
OAIOrgApacheSlingServletsGetDefaultGetServletProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheSlingServletsGetDefaultGetServletProperties::asJsonObject() const {
    QJsonObject obj;
	if(aliases.isSet()){
        obj.insert(QString("aliases"), ::OpenAPI::toJsonValue(aliases));
    }
	if(index.isSet()){
        obj.insert(QString("index"), ::OpenAPI::toJsonValue(index));
    }
	if(index_files.isSet()){
        obj.insert(QString("index.files"), ::OpenAPI::toJsonValue(index_files));
    }
	if(enable_html.isSet()){
        obj.insert(QString("enable.html"), ::OpenAPI::toJsonValue(enable_html));
    }
	if(enable_json.isSet()){
        obj.insert(QString("enable.json"), ::OpenAPI::toJsonValue(enable_json));
    }
	if(enable_txt.isSet()){
        obj.insert(QString("enable.txt"), ::OpenAPI::toJsonValue(enable_txt));
    }
	if(enable_xml.isSet()){
        obj.insert(QString("enable.xml"), ::OpenAPI::toJsonValue(enable_xml));
    }
	if(json_maximumresults.isSet()){
        obj.insert(QString("json.maximumresults"), ::OpenAPI::toJsonValue(json_maximumresults));
    }
	if(ecma_suport.isSet()){
        obj.insert(QString("ecmaSuport"), ::OpenAPI::toJsonValue(ecma_suport));
    }
    return obj;
}

OAIConfigNodePropertyArray
OAIOrgApacheSlingServletsGetDefaultGetServletProperties::getAliases() const {
    return aliases;
}
void
OAIOrgApacheSlingServletsGetDefaultGetServletProperties::setAliases(const OAIConfigNodePropertyArray &aliases) {
    this->aliases = aliases;
    this->m_aliases_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheSlingServletsGetDefaultGetServletProperties::getIndex() const {
    return index;
}
void
OAIOrgApacheSlingServletsGetDefaultGetServletProperties::setIndex(const OAIConfigNodePropertyBoolean &index) {
    this->index = index;
    this->m_index_isSet = true;
}

OAIConfigNodePropertyArray
OAIOrgApacheSlingServletsGetDefaultGetServletProperties::getIndexFiles() const {
    return index_files;
}
void
OAIOrgApacheSlingServletsGetDefaultGetServletProperties::setIndexFiles(const OAIConfigNodePropertyArray &index_files) {
    this->index_files = index_files;
    this->m_index_files_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheSlingServletsGetDefaultGetServletProperties::getEnableHtml() const {
    return enable_html;
}
void
OAIOrgApacheSlingServletsGetDefaultGetServletProperties::setEnableHtml(const OAIConfigNodePropertyBoolean &enable_html) {
    this->enable_html = enable_html;
    this->m_enable_html_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheSlingServletsGetDefaultGetServletProperties::getEnableJson() const {
    return enable_json;
}
void
OAIOrgApacheSlingServletsGetDefaultGetServletProperties::setEnableJson(const OAIConfigNodePropertyBoolean &enable_json) {
    this->enable_json = enable_json;
    this->m_enable_json_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheSlingServletsGetDefaultGetServletProperties::getEnableTxt() const {
    return enable_txt;
}
void
OAIOrgApacheSlingServletsGetDefaultGetServletProperties::setEnableTxt(const OAIConfigNodePropertyBoolean &enable_txt) {
    this->enable_txt = enable_txt;
    this->m_enable_txt_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheSlingServletsGetDefaultGetServletProperties::getEnableXml() const {
    return enable_xml;
}
void
OAIOrgApacheSlingServletsGetDefaultGetServletProperties::setEnableXml(const OAIConfigNodePropertyBoolean &enable_xml) {
    this->enable_xml = enable_xml;
    this->m_enable_xml_isSet = true;
}

OAIConfigNodePropertyInteger
OAIOrgApacheSlingServletsGetDefaultGetServletProperties::getJsonMaximumresults() const {
    return json_maximumresults;
}
void
OAIOrgApacheSlingServletsGetDefaultGetServletProperties::setJsonMaximumresults(const OAIConfigNodePropertyInteger &json_maximumresults) {
    this->json_maximumresults = json_maximumresults;
    this->m_json_maximumresults_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheSlingServletsGetDefaultGetServletProperties::getEcmaSuport() const {
    return ecma_suport;
}
void
OAIOrgApacheSlingServletsGetDefaultGetServletProperties::setEcmaSuport(const OAIConfigNodePropertyBoolean &ecma_suport) {
    this->ecma_suport = ecma_suport;
    this->m_ecma_suport_isSet = true;
}


bool
OAIOrgApacheSlingServletsGetDefaultGetServletProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(aliases.isSet()){ isObjectUpdated = true; break;}
    
        if(index.isSet()){ isObjectUpdated = true; break;}
    
        if(index_files.isSet()){ isObjectUpdated = true; break;}
    
        if(enable_html.isSet()){ isObjectUpdated = true; break;}
    
        if(enable_json.isSet()){ isObjectUpdated = true; break;}
    
        if(enable_txt.isSet()){ isObjectUpdated = true; break;}
    
        if(enable_xml.isSet()){ isObjectUpdated = true; break;}
    
        if(json_maximumresults.isSet()){ isObjectUpdated = true; break;}
    
        if(ecma_suport.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

