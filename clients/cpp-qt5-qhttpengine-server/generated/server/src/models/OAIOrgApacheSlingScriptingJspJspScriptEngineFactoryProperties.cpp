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


#include "OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties(QString json) {
    this->fromJson(json);
}

OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties() {
    this->init();
}

OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::~OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties() {
    
}

void
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::init() {
    m_jasper_compiler_target_vm_isSet = false;
    m_jasper_compiler_source_vm_isSet = false;
    m_jasper_classdebuginfo_isSet = false;
    m_jasper_enable_pooling_isSet = false;
    m_jasper_ie_class_id_isSet = false;
    m_jasper_gen_string_as_char_array_isSet = false;
    m_jasper_keepgenerated_isSet = false;
    m_jasper_mappedfile_isSet = false;
    m_jasper_trim_spaces_isSet = false;
    m_jasper_display_source_fragments_isSet = false;
    m_default_is_session_isSet = false;
}

void
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(jasper_compiler_target_vm, json[QString("jasper.compilerTargetVM")]);
    
    ::OpenAPI::fromJsonValue(jasper_compiler_source_vm, json[QString("jasper.compilerSourceVM")]);
    
    ::OpenAPI::fromJsonValue(jasper_classdebuginfo, json[QString("jasper.classdebuginfo")]);
    
    ::OpenAPI::fromJsonValue(jasper_enable_pooling, json[QString("jasper.enablePooling")]);
    
    ::OpenAPI::fromJsonValue(jasper_ie_class_id, json[QString("jasper.ieClassId")]);
    
    ::OpenAPI::fromJsonValue(jasper_gen_string_as_char_array, json[QString("jasper.genStringAsCharArray")]);
    
    ::OpenAPI::fromJsonValue(jasper_keepgenerated, json[QString("jasper.keepgenerated")]);
    
    ::OpenAPI::fromJsonValue(jasper_mappedfile, json[QString("jasper.mappedfile")]);
    
    ::OpenAPI::fromJsonValue(jasper_trim_spaces, json[QString("jasper.trimSpaces")]);
    
    ::OpenAPI::fromJsonValue(jasper_display_source_fragments, json[QString("jasper.displaySourceFragments")]);
    
    ::OpenAPI::fromJsonValue(default_is_session, json[QString("default.is.session")]);
    
}

QString
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::asJsonObject() const {
    QJsonObject obj;
	if(jasper_compiler_target_vm.isSet()){
        obj.insert(QString("jasper.compilerTargetVM"), ::OpenAPI::toJsonValue(jasper_compiler_target_vm));
    }
	if(jasper_compiler_source_vm.isSet()){
        obj.insert(QString("jasper.compilerSourceVM"), ::OpenAPI::toJsonValue(jasper_compiler_source_vm));
    }
	if(jasper_classdebuginfo.isSet()){
        obj.insert(QString("jasper.classdebuginfo"), ::OpenAPI::toJsonValue(jasper_classdebuginfo));
    }
	if(jasper_enable_pooling.isSet()){
        obj.insert(QString("jasper.enablePooling"), ::OpenAPI::toJsonValue(jasper_enable_pooling));
    }
	if(jasper_ie_class_id.isSet()){
        obj.insert(QString("jasper.ieClassId"), ::OpenAPI::toJsonValue(jasper_ie_class_id));
    }
	if(jasper_gen_string_as_char_array.isSet()){
        obj.insert(QString("jasper.genStringAsCharArray"), ::OpenAPI::toJsonValue(jasper_gen_string_as_char_array));
    }
	if(jasper_keepgenerated.isSet()){
        obj.insert(QString("jasper.keepgenerated"), ::OpenAPI::toJsonValue(jasper_keepgenerated));
    }
	if(jasper_mappedfile.isSet()){
        obj.insert(QString("jasper.mappedfile"), ::OpenAPI::toJsonValue(jasper_mappedfile));
    }
	if(jasper_trim_spaces.isSet()){
        obj.insert(QString("jasper.trimSpaces"), ::OpenAPI::toJsonValue(jasper_trim_spaces));
    }
	if(jasper_display_source_fragments.isSet()){
        obj.insert(QString("jasper.displaySourceFragments"), ::OpenAPI::toJsonValue(jasper_display_source_fragments));
    }
	if(default_is_session.isSet()){
        obj.insert(QString("default.is.session"), ::OpenAPI::toJsonValue(default_is_session));
    }
    return obj;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::getJasperCompilerTargetVm() const {
    return jasper_compiler_target_vm;
}
void
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::setJasperCompilerTargetVm(const OAIConfigNodePropertyString &jasper_compiler_target_vm) {
    this->jasper_compiler_target_vm = jasper_compiler_target_vm;
    this->m_jasper_compiler_target_vm_isSet = true;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::getJasperCompilerSourceVm() const {
    return jasper_compiler_source_vm;
}
void
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::setJasperCompilerSourceVm(const OAIConfigNodePropertyString &jasper_compiler_source_vm) {
    this->jasper_compiler_source_vm = jasper_compiler_source_vm;
    this->m_jasper_compiler_source_vm_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::getJasperClassdebuginfo() const {
    return jasper_classdebuginfo;
}
void
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::setJasperClassdebuginfo(const OAIConfigNodePropertyBoolean &jasper_classdebuginfo) {
    this->jasper_classdebuginfo = jasper_classdebuginfo;
    this->m_jasper_classdebuginfo_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::getJasperEnablePooling() const {
    return jasper_enable_pooling;
}
void
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::setJasperEnablePooling(const OAIConfigNodePropertyBoolean &jasper_enable_pooling) {
    this->jasper_enable_pooling = jasper_enable_pooling;
    this->m_jasper_enable_pooling_isSet = true;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::getJasperIeClassId() const {
    return jasper_ie_class_id;
}
void
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::setJasperIeClassId(const OAIConfigNodePropertyString &jasper_ie_class_id) {
    this->jasper_ie_class_id = jasper_ie_class_id;
    this->m_jasper_ie_class_id_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::getJasperGenStringAsCharArray() const {
    return jasper_gen_string_as_char_array;
}
void
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::setJasperGenStringAsCharArray(const OAIConfigNodePropertyBoolean &jasper_gen_string_as_char_array) {
    this->jasper_gen_string_as_char_array = jasper_gen_string_as_char_array;
    this->m_jasper_gen_string_as_char_array_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::getJasperKeepgenerated() const {
    return jasper_keepgenerated;
}
void
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::setJasperKeepgenerated(const OAIConfigNodePropertyBoolean &jasper_keepgenerated) {
    this->jasper_keepgenerated = jasper_keepgenerated;
    this->m_jasper_keepgenerated_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::getJasperMappedfile() const {
    return jasper_mappedfile;
}
void
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::setJasperMappedfile(const OAIConfigNodePropertyBoolean &jasper_mappedfile) {
    this->jasper_mappedfile = jasper_mappedfile;
    this->m_jasper_mappedfile_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::getJasperTrimSpaces() const {
    return jasper_trim_spaces;
}
void
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::setJasperTrimSpaces(const OAIConfigNodePropertyBoolean &jasper_trim_spaces) {
    this->jasper_trim_spaces = jasper_trim_spaces;
    this->m_jasper_trim_spaces_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::getJasperDisplaySourceFragments() const {
    return jasper_display_source_fragments;
}
void
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::setJasperDisplaySourceFragments(const OAIConfigNodePropertyBoolean &jasper_display_source_fragments) {
    this->jasper_display_source_fragments = jasper_display_source_fragments;
    this->m_jasper_display_source_fragments_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::getDefaultIsSession() const {
    return default_is_session;
}
void
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::setDefaultIsSession(const OAIConfigNodePropertyBoolean &default_is_session) {
    this->default_is_session = default_is_session;
    this->m_default_is_session_isSet = true;
}


bool
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(jasper_compiler_target_vm.isSet()){ isObjectUpdated = true; break;}
    
        if(jasper_compiler_source_vm.isSet()){ isObjectUpdated = true; break;}
    
        if(jasper_classdebuginfo.isSet()){ isObjectUpdated = true; break;}
    
        if(jasper_enable_pooling.isSet()){ isObjectUpdated = true; break;}
    
        if(jasper_ie_class_id.isSet()){ isObjectUpdated = true; break;}
    
        if(jasper_gen_string_as_char_array.isSet()){ isObjectUpdated = true; break;}
    
        if(jasper_keepgenerated.isSet()){ isObjectUpdated = true; break;}
    
        if(jasper_mappedfile.isSet()){ isObjectUpdated = true; break;}
    
        if(jasper_trim_spaces.isSet()){ isObjectUpdated = true; break;}
    
        if(jasper_display_source_fragments.isSet()){ isObjectUpdated = true; break;}
    
        if(default_is_session.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
